// Local include(s):
// $Id: WenugammaAnalysis.cxx 141731 2013-03-25 09:47:24Z mliu $
#include "../include/WenugammaAnalysis.h"

ClassImp( WenugammaAnalysis );

WenugammaAnalysis::WenugammaAnalysis()
  : DukHepFilter(), 
    m_cutflow( "cutflow", this ),
    icutflow(0), h_cutflow(0),
    INIT_NULLS_CTOR
{
  DeclareProperty( "IgnoreGRL", m_prop_skipgrl );
  DeclareProperty( "FilterType", m_prop_filter );
  DeclareProperty( "Stream", m_prop_stream );
  DeclareProperty( "TriggerName", m_prop_triggername );
  DeclareProperty( "Luminosity", m_LumiNom );
  SetLogName( GetName() );
}

WenugammaAnalysis::~WenugammaAnalysis() {
}

void WenugammaAnalysis::BeginCycle() throw( SError ) {
  DukHepFilter::setupGRL();  
  return;
}

void WenugammaAnalysis::BeginInputData( const SInputData& ) throw( SError ) {
  m_logger << DEBUG << "Hello from BeginInputData." << SLogger::endmsg;
  //macro of commands to set up the output tree (delete if you don't want an output tree)
  DECLARE("dummy")
    ;
  DECLARE_WGOUTPUT("dummy")
    ;
  //do any needed initialization here.
  m_cutflow->resize(12,0); 
  h_cutflow = Book(TH1F("cf","Cut flow",12,-0.5,12.5 ));  
  return;
}

void WenugammaAnalysis::BeginInputFile( const SInputData& inputData ) throw( SError ) {
  int intype = STree::INPUT_TREE & STree::EVENT_TREE;
  bool isMC =false;
  if( ( inputData.GetType() == "MC" )) isMC=true; 
  if  (! inputData.GetTrees(intype) ) {
    m_logger << ERROR << "WenugammaAnalysis needs an input tree!" << SLogger::endmsg; 
    throw SError( SError::SkipCycle );
  } else if  (inputData.GetTrees(intype)->size() != 1) {
    m_logger << ERROR << "WenugammaAnalysis got too many (" << inputData.GetTrees(intype)->size() 
	     << ")input trees."  << SLogger::endmsg; 
    throw SError( SError::SkipCycle );    
  } else {
    TString treename(inputData.GetTrees(intype)->at(0).treeName);
    //macro of commands to read the input tree
    CONNECT( treename.Data() )   
      ;
   //You might want to read some special branches for this analysis.  You can add them via
   //ConnectVariable( treename.Data(), "branch_name", member_variable );
   ConnectVariable( treename.Data(), m_prop_triggername.c_str(), m_LeptonTrigger  );
  }
  return;
}

///An example user function
void WenugammaAnalysis::IncrementCutFlow() throw ( SError ) {
  if (icutflow < m_cutflow->size())
    ( *m_cutflow )[ icutflow ]++;
  else 
    m_logger << WARNING << "Resize your cut flow! " << SLogger::endmsg;
  h_cutflow->Fill(icutflow++);
}

int WenugammaAnalysis::OverlapRemovalFSR(bool isMC) {
    int reject = 0;
    for(unsigned int i =0;i<m_mc_pdgId->size();i++) {
       if(m_mc_pdgId->at(i)==22&&m_mc_status->at(i)==1&&m_mc_pt->at(i)>15000) {
           for (unsigned int j = 0; j< (*m_mc_parent_index)[i].size();j++) {
                int motherindex=(*m_mc_parent_index)[i][j];
                float ph_eta=m_mc_eta->at(i);
                float ph_phi=m_mc_phi->at(i);
                float el_eta=m_mc_eta->at(motherindex);
                float el_phi=m_mc_phi->at(motherindex);
                float dr = sqrt((el_eta-ph_eta)*(el_eta-ph_eta)+(el_phi-ph_phi)*(el_phi-ph_phi));
                //if((fabs(m_mc_pdgId->at(motherindex))==11||fabs(m_mc_pdgId->at(motherindex))==13||fabs(m_mc_pdgId->at(motherindex)) < 9)&&dr>0.1) reject++;// alternative def of whether to reject.
                if((fabs(m_mc_pdgId->at(motherindex))<=100)) reject++;
           }//loop over particles associated with the photon
        }//if find photon
    }//loop over mc block to find photon
 return reject;//if there is a real photon, reject the event
}// end of fundction def

///Main analysis function: this is executed for every entry in the tree.
void WenugammaAnalysis::ExecuteEvent( const SInputData &inputData, Double_t ) throw( SError ) {
  icutflow=0;
  RESETVAR_WGOUTPUT; //macro of commands to clear the output tree vectors. (delete if you don't want an output tree)
  std::vector<TLorentzVector> SelectedEls; // vectors of selected electron(pass certain quality cut) 
  std::vector<TLorentzVector> SelectedTightPhs; // vectors of selected photons
  std::vector<TLorentzVector> SelectedLoosePhs; // vectors of selected photons
  std::vector<TLorentzVector> SelectedJets;// vectors of selected jets
  std::vector<int> SelectedElsIndex;// vectors of the original indices of selected eletrons in the ntuple. 
  std::vector<int> SelectedTightPhsIndex; // vectors of the original indices of selected photons in the ntuple
  std::vector<int> SelectedLoosePhsIndex; // vectors of the original indices of selected loose photons in the ntuple
  std::vector<int> SelectedJetsIndex;//// vectors of the original indices of selected jets in the ntuple
  TLorentzVector METv;     // missing ET vector, used for Mt calculation
  TLorentzVector LeadingEl;// leading lepton four vector
  TLorentzVector LeadingEl_clv;//leading lepton cluster four vector, used for overlap removal
  TLorentzVector LeadingPh;//leading lepton cluster four vector, used for overlap removal
  TLorentzVector LeadingPh_clv;//leading lepton cluster four vector, used for overlap removal
  int el_cr_region = -999; // electron fake control region
  int ph_cr_region = -999; // photon fake control region
  int LeadingElIndex = -999;
  int LeadingPhIndex = -999;
  int VetoEls = 0; 
  int njets = 0;
  int overlapwithbadjet = 0;//for MET cleaning
  double Mt = -999;
  bool isMC =false;
  if( ( inputData.GetType() == "MC" )) isMC=true;
  if(isMC) {
    //o_m_mc_event_weight = m_mc_event_weight;
    o_m_mc_event_weight = m_mcevt_weight->at(0)[0];
    o_m_lumi_weight = m_LumiNom/inputData.GetTotalLumi();
//    o_m_pileup_weight = m_weights->at(1);//pileup weight
     o_m_pileup_weight = 1;
    o_m_weight = m_LumiNom/inputData.GetTotalLumi()*m_weights->at(1);//total weight
  }
  else {
    o_m_mc_event_weight = 1;
    o_m_lumi_weight = 1; 
    o_m_pileup_weight = 1; 
    o_m_weight = 1;
  }
  m_logger << VERBOSE << "/** Luminosity of the data to process **/" <<inputData.GetTotalLumi() <<SLogger::endmsg;
  m_logger << VERBOSE << "/** Begin event processing    **/" << SLogger::endmsg;
  IncrementCutFlow();
  //---------------------------------------------------------//
  ///------------------FSR veto-------------------------------//
  //---------------------------------------------------------//
  
  int overlap = 0; 
  if(isMC) {
  overlap = OverlapRemovalFSR(isMC) ;   
  //if(overlap>=m_FSRveto) throw SError (SError::SkipEvent);
  }
  o_m_fsrvetotruth = overlap;
  //--------------------------------:)-----------:)----------------------------------------------//
  //--------------------------------:)-----------:)----------------------------------------------//
  //loop over electron bank, vary electron ID, check isolation to define electron control regions.//
  //--------------------------------:)-----------:)----------------------------------------------//
  //--------------------------------:)-----------:)----------------------------------------------//
  m_logger << VERBOSE << "/** Begin electron region processing  **/" << SLogger::endmsg;
  for(int eli=0;eli<m_lep_E->size();eli++) {
     TLorentzVector tmp;
     tmp.SetPtEtaPhiE(m_lep_Pt->at(eli),m_lep_Eta->at(eli),m_lep_Phi->at(eli),m_lep_E->at(eli));
     if(m_lep_ObjID->at(eli)[10]&&m_lep_Pt->at(eli)>25000) {
     SelectedEls.push_back(tmp);
     SelectedElsIndex.push_back(eli);
    } 
     if(m_lep_ObjID->at(eli)[6]&&m_lep_Pt->at(eli)>10000) VetoEls++;//count veto leptons
   }
  //at least one lepton pass quality cuts
  if(SelectedEls.size() < 1) throw SError(SError::SkipEvent);
  IncrementCutFlow();
  //sort by pt
  AnalysisUtils::SortParticlesPt(SelectedElsIndex,SelectedEls);
  LeadingElIndex = SelectedElsIndex.at(0);
  LeadingEl = SelectedEls.at(0);
  LeadingEl_clv.SetPtEtaPhiE(m_lep_cl_Pt->at(LeadingElIndex),m_lep_cl_Eta->at(LeadingElIndex),m_lep_cl_Phi->at(LeadingElIndex),m_lep_cl_E->at(LeadingElIndex));
  //make sure filling in the index for electron correctly
  if(LeadingElIndex==-999) {m_logger << INFO << "/** no leading electron! vector error will occur   **/"<< SLogger::endmsg;throw SError(SError::SkipEvent);}
  IncrementCutFlow();
  //second lepton veto
  if(VetoEls > 1) throw SError(SError::SkipEvent); 
  IncrementCutFlow();
  //calculate transverse mass for W boson
  METv.SetPxPyPzE(m_METx,m_METy,0,m_MET);
  Mt= sqrt(2*LeadingEl.Et()*m_MET*(1-cos(LeadingEl.Phi()-METv.Phi()))); 
  //check regions for electrons
  if(fabs(m_lep_PtConeIso30->at(LeadingElIndex)/m_lep_Pt->at(LeadingElIndex))<0.1&&m_MET>35000&&m_Mt>40000) el_cr_region = 0;
  if(fabs(m_lep_PtConeIso30->at(LeadingElIndex)/m_lep_Pt->at(LeadingElIndex))>0.1&&m_MET>35000&&m_Mt>40000) el_cr_region = 1;
  if(fabs(m_lep_PtConeIso30->at(LeadingElIndex)/m_lep_Pt->at(LeadingElIndex))<0.1&&m_MET<20000&&m_Mt<20000) el_cr_region = 2;
  if(fabs(m_lep_PtConeIso30->at(LeadingElIndex)/m_lep_Pt->at(LeadingElIndex))>0.1&&m_MET<20000&&m_Mt<20000) el_cr_region = 3;
  //if(el_cr_region==-999) throw SError(SError::SkipEvent);//throw away events that do not fit into any electron signal region or control regions. 
  IncrementCutFlow();

  //--------------------------------:)-----------:)----------------------------------------------//
  //--------------------------------:)-----------:)----------------------------------------------//
  //loop over photon bank, vary photon ID, check isolation to define photon control regions.
  //--------------------------------:)-----------:)----------------------------------------------//
  //--------------------------------:)-----------:)----------------------------------------------//

  m_logger << VERBOSE << "/** Begin photon processing   **/" << SLogger::endmsg;
  for(int iph = 0; iph < m_ph_E->size();iph++) {
   TLorentzVector tmp;
   TLorentzVector tmp_clv;
   m_logger << VERBOSE << "/** Check photon quality   **/" << SLogger::endmsg;
   std::vector<int> ph_bits = m_ph_ObjID->at(iph);
   bool isTight = ph_bits.at(11);//tight id for photon
   //bool isLoose = (ph_bits.at(5)&&(ph_bits.at(9)+ph_bits.at(8)+ph_bits.at(10)+ph_bits.at(6))>=1&&!ph_bits.at(11));//loose id for photon
   bool isLoose = (ph_bits.at(5)&&!ph_bits.at(11));//loose id for photon
   tmp.SetPtEtaPhiE(m_ph_Pt->at(iph),m_ph_Eta->at(iph),m_ph_Phi->at(iph),m_ph_E->at(iph));
   tmp_clv.SetPtEtaPhiE(m_ph_cl_Pt->at(iph),m_ph_cl_Eta->at(iph),m_ph_cl_Phi->at(iph),m_ph_cl_E->at(iph));
   m_logger << VERBOSE << "/** Found if photon overlap   **/" << SLogger::endmsg;
   bool el_g_overlap = (tmp_clv.DeltaR(LeadingEl_clv)<0.4);//check if photon overlaps with the selected electron if it's in the signal region

   if(isTight&&!el_g_overlap) {
     SelectedTightPhs.push_back(tmp);
     SelectedTightPhsIndex.push_back(iph);
   }

   if(isLoose&&!el_g_overlap) {
     SelectedLoosePhs.push_back(tmp);
     SelectedLoosePhsIndex.push_back(iph);
   }
  } 

  if(!SelectedTightPhs.size()&&!SelectedLoosePhs.size()) throw SError(SError::SkipEvent);//throw away events without any loose or tight photons.
  IncrementCutFlow();
   //ph_cr_region = 5;// at least one loose or tight photon, useful for checking isolation templates for tight and non tight regions.
 //case that there is a tight photon in the event, select the leading pt tight photon,check if it's isolated
  if(SelectedTightPhs.size()) {
     m_logger << VERBOSE << "/** Found tight photon   **/" << SLogger::endmsg;
     AnalysisUtils::SortParticlesPt(SelectedTightPhsIndex,SelectedTightPhs);
     LeadingPh = SelectedTightPhs.at(0);
     LeadingPhIndex = SelectedTightPhsIndex.at(0);
     o_m_ph_istight = 1;
     if(m_ph_TopoIso40->at(LeadingPhIndex) < 4000) ph_cr_region = 0; 
     if(m_ph_TopoIso40->at(LeadingPhIndex) > 6000) ph_cr_region = 1; 
  }
 //case that there are no tight but only loose photon in the event, select the leading pt loose photon and check if it's isolated
  if(!SelectedTightPhs.size()&&SelectedLoosePhs.size()) {
     m_logger << VERBOSE << "/** Found loose photon   **/" << SLogger::endmsg;
     AnalysisUtils::SortParticlesPt(SelectedLoosePhsIndex,SelectedLoosePhs);
     LeadingPh = SelectedLoosePhs.at(0);
     LeadingPhIndex = SelectedLoosePhsIndex.at(0);
     std::vector<int> ph_bits = m_ph_ObjID->at(LeadingPhIndex); 
     o_m_ph_istight = 0;
     o_m_ph_nontight_def1 = (ph_bits.at(6)+ph_bits.at(8)+ph_bits.at(9)+ph_bits.at(10))>=1;
     o_m_ph_nontight_def2 = (ph_bits.at(6)+ph_bits.at(8)+ph_bits.at(9)+ph_bits.at(10))>=2;
     o_m_ph_nontight_def3 = (ph_bits.at(6)+ph_bits.at(8)+ph_bits.at(9)+ph_bits.at(10))>=3;
     o_m_ph_nontight_def4 = (ph_bits.at(6)+ph_bits.at(8)+ph_bits.at(9))>=1;
     o_m_ph_nontight_def5 = (ph_bits.at(6)+ph_bits.at(8)+ph_bits.at(10))>=1;
     o_m_ph_nontight_def6 = (ph_bits.at(6)+ph_bits.at(9)+ph_bits.at(10))>=1;
     o_m_ph_nontight_def7 = (ph_bits.at(8)+ph_bits.at(9)+ph_bits.at(10))>=1;

     if(m_ph_TopoIso40->at(LeadingPhIndex) < 4000) ph_cr_region = 2; 
     if(m_ph_TopoIso40->at(LeadingPhIndex) > 6000) ph_cr_region = 3;   
}
//  if(ph_cr_region==-999) throw SError(SError::SkipEvent);//throw events away if they do not fall into any of the photon regions
  IncrementCutFlow(); 
  if(fabs((LeadingEl+LeadingPh).M()-91187.6) < 15000) throw SError(SError::SkipEvent);//z mass veto 
  IncrementCutFlow(); 
  //--------------------------------:)-----------:)----------------------------------------------//
  //--------------------------------:)-----------:)----------------------------------------------//
  //jet related cuts here. need to check if jets overlap with photons and electrons in sig region //
  //--------------------------------:)-----------:)----------------------------------------------//
  //--------------------------------:)-----------:)----------------------------------------------//

  m_logger << VERBOSE << "/** Begin jet processing   **/" << SLogger::endmsg;
  for(int jeti=0;jeti<m_jet_E->size();jeti++) {
   TLorentzVector tmp;
   tmp.SetPtEtaPhiE(m_jet_Pt->at(jeti),m_jet_Eta->at(jeti),m_jet_Phi->at(jeti),m_jet_E->at(jeti));

   bool el_jet_overlap = (tmp.DeltaR(LeadingEl_clv)<0.4);
   bool ph_jet_overlap = (tmp.DeltaR(LeadingPh)<0.4);
   if(m_jet_Pt->at(jeti)>20000&&(m_jet_IsLooseBadJet->at(jeti)||m_jet_IsHotTile->at(jeti))) overlapwithbadjet++;//for MET cleaning
   if(m_jet_Pt->at(jeti)>30000&&!el_jet_overlap&&!ph_jet_overlap) {
     SelectedJets.push_back(tmp);
     SelectedJetsIndex.push_back(jeti);
     njets++;
   }
  }
  if(overlapwithbadjet) throw SError(SError::SkipEvent);//MET cleaning
  IncrementCutFlow();
  AnalysisUtils::SortParticlesPt(SelectedJetsIndex,SelectedJets);
  //apply additional kinematic cuts here.//
  m_logger << VERBOSE << "/** Apply final selection  **/" << SLogger::endmsg;
  IncrementCutFlow();
  COPYVAR_WGOUTPUT
    ;  
  //--------------------------------:)-----------:)----------------------------------------------//
  //--------------------------------:)-----------:)----------------------------------------------//
  //-----------------------------save the selected objects and kinematics------------------------//
  //--------------------------------:)-----------:)----------------------------------------------//
  //--------------------------------:)-----------:)----------------------------------------------//
  m_logger << VERBOSE << "/** Save information  **/" << SLogger::endmsg;
  o_m_njets = njets;
  o_m_el_region = el_cr_region;
  o_m_ph_region = ph_cr_region;
  m_logger << VERBOSE << "/** Save bveto information  **/" << SLogger::endmsg;
  o_m_bveto70 = m_bvetos->at(0);
  o_m_bveto80 = m_bvetos->at(1);
  o_m_bveto85 = m_bvetos->at(2);
  if(isMC) o_m_bvetotruth = m_bvetos->at(3);
  m_logger << VERBOSE << "/** Save selected lepton information  **/" << SLogger::endmsg;
  o_m_lep_E = LeadingEl.E()/1000; 
  o_m_lep_Pt = LeadingEl.Pt()/1000; 
  o_m_lep_Eta = LeadingEl.Eta(); 
  o_m_lep_Phi = LeadingEl.Phi();
  o_m_lep_iso = m_lep_PtConeIso30->at(LeadingElIndex)/1000; 
  o_m_lep_Charge = m_lep_Charge->at(LeadingElIndex); 
  m_logger << VERBOSE << "/** Save selected photon information  **/" << SLogger::endmsg;
  o_m_ph_E = LeadingPh.E()/1000; 
  o_m_ph_Pt = LeadingPh.Pt()/1000; 
  o_m_ph_Eta = LeadingPh.Eta(); 
  o_m_ph_Phi = LeadingPh.Phi();
  o_m_ph_iso_cone20 = m_ph_TopoIso20->at(LeadingPhIndex)/1000; 
  o_m_ph_iso_cone30 = m_ph_TopoIso30->at(LeadingPhIndex)/1000; 
  o_m_ph_iso_cone40 = m_ph_TopoIso40->at(LeadingPhIndex)/1000; 
  m_logger << VERBOSE << "/** Save selected kinetic information  **/" << SLogger::endmsg;
  o_m_Mlg = (LeadingEl+LeadingPh).M()/1000;
  o_m_Ptlg = (LeadingEl+LeadingPh).Pt()/1000;
  if(isMC) o_m_ph_pdgId = m_ph_pdgId->at(LeadingPhIndex); 
  o_m_Mt = Mt/1000;
  o_m_Mt_Wg = sqrt((sqrt(o_m_Mlg*o_m_Mlg+o_m_Ptlg*o_m_Ptlg)+(m_MET/1000))*(sqrt(o_m_Mlg*o_m_Mlg+o_m_Ptlg*o_m_Ptlg)+(m_MET/1000))-(o_m_Ptlg+m_MET/1000)*(o_m_Ptlg+m_MET/1000));
  o_m_MET = m_MET/1000;
  o_m_METx = m_METx/1000;
  o_m_METy = m_METy/1000;
  o_m_dRlg = LeadingEl_clv.DeltaR(LeadingPh);

  if (SelectedJets.size()>=2) {
    o_m_jet0_E = SelectedJets.at(0).E()/1000;
    o_m_jet0_Pt = SelectedJets.at(0).Pt()/1000;
    o_m_jet0_Eta = SelectedJets.at(0).Rapidity();
    o_m_jet0_Phi = SelectedJets.at(0).Phi();
    o_m_jet1_E = SelectedJets.at(1).E()/1000;
    o_m_jet1_Pt = SelectedJets.at(1).Pt()/1000;
    o_m_jet1_Eta = SelectedJets.at(1).Rapidity();
    o_m_jet1_Phi = SelectedJets.at(1).Phi();
    o_m_dRlj0 = LeadingEl_clv.DeltaR(SelectedJets.at(0));
    o_m_dRlj1 = LeadingEl_clv.DeltaR(SelectedJets.at(1));
    o_m_dRgj0 = LeadingPh.DeltaR(SelectedJets.at(0));
    o_m_dRgj1 = LeadingPh.DeltaR(SelectedJets.at(1));
    o_m_dYgj0 = LeadingPh.Rapidity()-SelectedJets.at(0).Rapidity(); 
    o_m_dYgj1 = LeadingPh.Rapidity()-SelectedJets.at(1).Rapidity();
    o_m_Mjj = (SelectedJets.at(0)+SelectedJets.at(1)).M()/1000; 
    o_m_Ptjj = (SelectedJets.at(0)+SelectedJets.at(1)).Pt()/1000; 
    o_m_dRjj = SelectedJets.at(0).DeltaR(SelectedJets.at(1));
    o_m_dYjj = SelectedJets.at(0).Rapidity()-SelectedJets.at(1).Rapidity();
    o_m_Mlgj0 = (LeadingEl+LeadingPh+ SelectedJets.at(0)).M()/1000;
    o_m_Mlgj1 = (LeadingEl+LeadingPh+ SelectedJets.at(1)).M()/1000;
    o_m_Ptlgj0 = (LeadingEl+LeadingPh+ SelectedJets.at(0)).Pt()/1000;
    o_m_Ptlgj1 = (LeadingEl+LeadingPh+ SelectedJets.at(1)).Pt()/1000;
    o_m_Mlgjj = (LeadingEl+LeadingPh+SelectedJets.at(0)+SelectedJets.at(1)).M()/1000;
    o_m_Ptlgjj = (LeadingEl+LeadingPh+SelectedJets.at(0)+SelectedJets.at(1)).Pt()/1000;
    o_m_dYj0_lg = SelectedJets.at(0).Rapidity()-(LeadingEl+LeadingPh).Rapidity();
    o_m_dYj1_lg = SelectedJets.at(1).Rapidity()-(LeadingEl+LeadingPh).Rapidity();
    o_m_pt_balance = (LeadingEl+LeadingPh+SelectedJets.at(0)+SelectedJets.at(1)+METv).Pt()/(LeadingEl.Pt()+LeadingPh.Pt()+SelectedJets.at(0).Pt()+SelectedJets.at(1).Pt()+METv.Pt());
    o_m_pt_balance_noMET = (LeadingEl+LeadingPh+SelectedJets.at(0)+SelectedJets.at(1)).Pt()/(LeadingEl.Pt()+LeadingPh.Pt()+SelectedJets.at(0).Pt()+SelectedJets.at(1).Pt());
    o_m_lg_Centrality = ((LeadingEl+LeadingPh).Rapidity()-(SelectedJets.at(0).Rapidity()+SelectedJets.at(1).Rapidity())/2)/fabs(SelectedJets.at(0).Rapidity()-SelectedJets.at(1).Rapidity());
    o_m_l_Centrality = (LeadingEl.Rapidity()-(SelectedJets.at(1).Rapidity()+SelectedJets.at(1).Rapidity())/2)/fabs(SelectedJets.at(0).Rapidity()-SelectedJets.at(1).Rapidity());
  } 
  return;
}

void WenugammaAnalysis::EndMasterInputData( const SInputData& ) throw( SError ) {
  m_logger << INFO << "End of input data." << SLogger::endmsg;
  if ( m_cutflow->size() == 3 ) {
    m_logger << INFO << "(C0)  Number of input events:                " << ( *m_cutflow )[ 0 ] << SLogger::endmsg;
    m_logger << INFO << "(C1)  Number of events passing goodrun flag: " << ( *m_cutflow )[ 1 ] << SLogger::endmsg;
    m_logger << INFO << "(C2)  Number of events passing trigger:      " << ( *m_cutflow )[ 2 ] << SLogger::endmsg;
  } else {
    m_logger << WARNING << "It looks like your job didn't run." << SLogger::endmsg;
  }
   return;
}
