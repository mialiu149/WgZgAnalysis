 // Local include(s):
// $Id: WgEventSelection.cxx 141632 2013-03-22 16:14:14Z mliu $
#include "../include/WgEventSelection.h"
ClassImp( WgEventSelection );

WgEventSelection::WgEventSelection()
  : DukHepFilter(), 
    m_cutflow( "cutflow", this ),
    Mcounter("muflow",this),
    Ecounter("elflow",this),
    Phcounter("Phflow",this),
    Jetcounter("Jetflow",this),
    icutflow(0), h_cutflow(0),
    h_Ecutflow(0),
    h_Phcutflow(0),
    h_Mcutflow(0),
    h_Jetcutflow(0),
    mur(this, "mu_staco"),
    er(this),
    phr(this),
    jr(this,"jet_AntiKt4LCTopo"),
    //Macro initializing the stl vectors that access the tree ntiKt4TopoEM
    INIT_NULLS_CTOR,INIT_NULLS_CTOR_TRUTH
{
  //job properties (sends data to your job via the xml file)
  DeclareProperty( "IgnoreGRL", m_prop_skipgrl );
  DeclareProperty( "TriggerName1", m_prop_triggername1 );
  DeclareProperty( "TriggerName2", m_prop_triggername2 );
  DeclareProperty( "FSRveto", m_FSRveto );
  DeclareProperty( "BkgStudy", m_prop_bkgstudy );
  DeclareProperty( "PhotonIsolation", m_prop_phisoname );
  DeclareProperty( "nPVCut", m_nPVCut);
  DeclareProperty( "Trigger",m_Trigger);
  DeclareProperty( "LeptonPt",m_LeptonPt);
  DeclareProperty( "LeptonVetoPt",m_LeptonVetoPt);
  DeclareProperty( "LeptonCut",m_LeptonCut);
  DeclareProperty( "LeptonVeto",m_LeptonVeto);
  DeclareProperty( "ElectronFilter",m_ElectronFilter);
  DeclareProperty( "MuonFilter",m_MuonFilter);
  DeclareProperty( "PhotonFilter",m_PhotonFilter);
  DeclareProperty( "MetCut",m_MetCut);
  DeclareProperty( "METcleaning",m_METcleaning);
  DeclareProperty( "MtCut",m_MtCut);
  DeclareProperty( "PhotonPt",m_PhotonPt);
  DeclareProperty( "PhotonCut",m_PhotonCut);
  DeclareProperty( "dRLeptonGammaCut",m_dRLeptonGammaCut);
  DeclareProperty( "dR_El_Gamma",m_dR_El_Gamma);
  DeclareProperty( "PhotonIsoValue",m_PhotonIsoValue);
  DeclareProperty( "JetCut",m_JetCut);
  DeclareProperty( "TwoJet",m_TwoJetCut);
  DeclareProperty( "VBS",m_vbsCut);
  SetLogName( GetName() );
}
  WgEventSelection::~WgEventSelection() {
}

void WgEventSelection::BeginCycle() throw( SError ) {
  return;
}

void WgEventSelection::BeginInputData( const SInputData& inputData ) throw( SError ) {
  m_logger << DEBUG << "Hello from BeginInputData." << SLogger::endmsg;
  //macro of commands to set up the output tree (delete if you don't want an output tree)
  DECLARE_WG("dummy");
  DECLARETRUTH("dummy")
    ;
  //do any needed initialization here.
  // book histograms to for cutflows 
  m_cutflow->resize(20,0);// event level cutflow 
  Ecounter->resize(10,0); // electron cutflow
  Phcounter->resize(7,0); // photon cutflow
  Jetcounter->resize(5,0); // muon cutflow
  h_cutflow = Book(TH1F("cf","Cut flow",20,-0.5,19.5 ));  
  h_Ecutflow = Book(TH1F("cf_el","el Cut flow",11,-0.5,10.5 ));  
  h_Phcutflow = Book(TH1F("cf_ph","ph Cut flow",11,-0.5,10.5 ));  
  h_Jetcutflow = Book(TH1F("cf_jet","jet Cut flow",11,-0.5,10.5 ));  
  h_Mcutflow = Book(TH1F("cf_mu","mu Cut flow",11,-0.5,10.5 ));  

  bool isdata = false;
  if( ( inputData.GetType() == "data" ) || ( inputData.GetType() == "Data" )) isdata=true; 
  //set up calibration and id tools in rootcore.
  DukHepFilter::setMC(!isdata);
  DukHepFilter::setupGRL();  
  DukHepFilter::setupPileupTool(181341);
  DukHepFilter::setupEnergyRescaler();
  DukHepFilter::setupJetCalibTool(); 
  DukHepFilter::setupElectronLHTool(); 
  m_METutil= new METUtility();
  // initialize the tools
  phr.SetMC(!isdata); 
  mur.SetMC(!isdata); 
  er.SetMC(!isdata); 
  er.InitEnergyRescaler(DukHepFilter::m_Rescaler);  
  er.InitElectronLHTool(DukHepFilter::tool);  
  phr.InitEnergyRescaler(DukHepFilter::m_Rescaler); 
  jr.SetMC(!isdata);
  jr.SetAugust(false); 
  jr.InitCalibTool(DukHepFilter::m_JES); 

  return;
}
void WgEventSelection::BeginInputFile( const SInputData& inputData ) throw( SError ) {
  int intype = STree::INPUT_TREE & STree::EVENT_TREE;
  bool isMC =false;
  if( ( inputData.GetType() == "MC" )) isMC=true; 

  if (!(m_prop_bkgstudy=="gjet"||m_prop_bkgstudy=="ejet"||m_prop_bkgstudy=="alljet"||m_prop_bkgstudy=="obj"||m_prop_bkgstudy=="cutflow")) {
    m_logger << ERROR << "job type does not match any given type!" << SLogger::endmsg; 
    throw SError( SError::SkipCycle );
  }

  if  (! inputData.GetTrees(intype) ) {
    m_logger << ERROR << "WgEventSelection needs an input tree!" << SLogger::endmsg; 
    throw SError( SError::SkipCycle );
  } 
  else if  (inputData.GetTrees(intype)->size() != 1) {
    m_logger << ERROR << "WgEventSelection got too many (" << inputData.GetTrees(intype)->size() 
	     << ")input trees."  << SLogger::endmsg; 
    throw SError( SError::SkipCycle );    
  } 
  else {
    TString treename(inputData.GetTrees(intype)->at(0).treeName);
    //macro of commands to read the input tree
    CONNECT( treename.Data() )   
      ;
    if(isMC) 
    CONNECTTRUTH( treename.Data() )   
      ;
    //ConnectVariable( treename.Data(), "branch_name", member_variable );
    //This also allows you to change the trigger via the xml file as follows
    ConnectVariable( treename.Data(), m_prop_triggername1.c_str(), m_LeptonTrigger1  );
    ConnectVariable( treename.Data(), m_prop_triggername2.c_str(), m_LeptonTrigger2  );
    er.ConnectVariables(treename.Data());
    phr.ConnectVariables(treename.Data());
    mur.ConnectVariables(treename.Data());
    jr.ConnectVariables(treename.Data());
  }
  return;
}
// this function increment the number in a cutflow histogram
void WgEventSelection::IncrementCutFlow(double weight) throw ( SError ) {
  if (icutflow < m_cutflow->size())
    ( *m_cutflow )[ icutflow ]+= weight;
  else 
    m_logger << WARNING << "Resize your cut flow! " << SLogger::endmsg;
  h_cutflow->Fill(icutflow++);
}
// this function defines a filter to remove the wgamma events in w+jets events.
int WgEventSelection::OverlapRemovalFSR(bool isMC) {
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
                //if((fabs(m_mc_pdgId->at(motherindex))==11||fabs(m_mc_pdgId->at(motherindex))==13||fabs(m_mc_pdgId->at(motherindex)) < 9)&&dr>0.1) reject++;
                if((fabs(m_mc_pdgId->at(motherindex))<=24)) reject++;
           }
        }
     }
   return reject;
}
// this function rebuilds MET_reffinal from d3pd 
METUtility::METObject WgEventSelection::METcorrection(bool isMC,bool goodPV,int nvtxsoftmet,const std::vector<TLorentzVector> &els,const std::vector<TLorentzVector> &mus,const std::vector<TLorentzVector> &phs,const std::vector<TLorentzVector> &jets) {  //MET calibration
  m_logger << VERBOSE << "/** start calculating met correction! **/" << SLogger::endmsg;
  m_METutil->setDoMuEloss(true);
  m_METutil->configEgammaJetFix(true,false,false,0.3);
  m_METutil->reset();

  std::vector<float> el_pt;
  std::vector<float> el_eta;
  std::vector<float> el_phi;
  std::vector<float> mu_pt;
  std::vector<float> mu_eta;
  std::vector<float> mu_phi;
  std::vector<float> ph_pt;
  std::vector<float> ph_eta;
  std::vector<float> ph_phi;
  std::vector<float> jet_pt;
  std::vector<float> jet_eta;
  std::vector<float> jet_phi;
  std::vector<float> jet_E;
  std::vector<float> m_mu_staco_msPt;

  for (unsigned int i=0;i< els.size();i++) {
      TLorentzVector el = els.at(i);
      el_pt.push_back(el.Pt());el_eta.push_back(el.Eta()),el_phi.push_back(el.Phi());
  }
  for (unsigned int i=0;i< mus.size();i++) {
      TLorentzVector mu = mus.at(i);
      mu_pt.push_back(mu.Pt());mu_eta.push_back(mu.Eta()),mu_phi.push_back(mu.Phi());
  }
  for (unsigned int i=0;i< phs.size();i++) {
      TLorentzVector ph = phs.at(i);
      ph_pt.push_back(ph.Pt());ph_eta.push_back(ph.Eta()),ph_phi.push_back(ph.Phi());
  }
  for (unsigned int i=0;i< jets.size();i++) {
      TLorentzVector jet = jets.at(i);
      jet_pt.push_back(jet.Pt());jet_E.push_back(jet.E());jet_eta.push_back(jet.Eta()),jet_phi.push_back(jet.Phi());
  }

  m_METutil->setElectronParameters(&el_pt, &el_eta, &el_phi,&(*m_el_MET_wet),&(*m_el_MET_wpx),&(*m_el_MET_wpy),&(*m_el_MET_statusWord)); 
  m_METutil->setPhotonParameters(&ph_pt, &ph_eta, &ph_phi,&(*m_ph_MET_wet), &(*m_ph_MET_wpx), &(*m_ph_MET_wpy),&(*m_ph_MET_statusWord));
  m_METutil->setMuonParameters(&mu_pt, &mu_eta, &mu_phi,&(*m_mu_staco_MET_wet),&(*m_mu_staco_MET_wpx),&(*m_mu_staco_MET_wpy),&(*m_mu_staco_MET_statusWord));
  m_METutil->setJetParameters(&jet_pt,&jet_eta,&jet_phi,&jet_E,&(*jr.m_JetMET_wet),&(*jr.m_JetMET_wpx),&(*jr.m_JetMET_wpy),&(*jr.m_JetMET_statusWord));
  m_METutil->setMuonEloss(&(*m_mu_staco_energyLossPar));

  for(unsigned int mui=0;mui<m_mu_staco_ms_qoverp->size();mui++) {
    m_mu_staco_msPt.push_back(1/fabs(m_mu_staco_ms_qoverp->at(mui))*sin(m_mu_staco_ms_theta->at(mui)));
  }
 // m_METutil->setExtraMuonParameters(&m_MuonMSPtContainer,m_mu_staco_ms_theta,m_mu_staco_ms_phi);
  m_METutil->setExtraMuonParameters(&m_mu_staco_msPt,m_mu_staco_ms_theta,m_mu_staco_ms_phi);
 //m_METutil->setJetParameters(&(*m_jet_AntiKt4LCTopo_pt), &(*m_jet_AntiKt4LCTopo_eta),&(*m_jet_AntiKt4LCTopo_phi),&(*m_jet_AntiKt4LCTopo_E),&(*m_jet_AntiKt4LCTopo_MET_wet),&(*m_jet_AntiKt4LCTopo_MET_wpx),&(*m_jet_AntiKt4LCTopo_MET_wpy),&(*m_jet_AntiKt4LCTopo_MET_statusWord));
  m_logger << VERBOSE << "/** initialized met tool! **/" << SLogger::endmsg;

  m_METutil->setNvtx(nvtxsoftmet);

  if(isMC) {
    m_METutil->setMETTerm(METUtil::Truth,m_MET_Truth_NonInt_etx,m_MET_Truth_NonInt_ety,0);
   }
  //=======variable with _et _phi are D3PD branches
  vector<float> xyTmp = XY(m_MET_RefEle_et,m_MET_RefEle_phi) ;
  float MET_RefEle_etx = xyTmp.at(0) ;
  float MET_RefEle_ety = xyTmp.at(1) ;
  m_METutil->setMETTerm(METUtil::RefEle, MET_RefEle_etx, MET_RefEle_ety, m_MET_RefEle_sumet);
  xyTmp = XY(m_MET_RefGamma_et,m_MET_RefGamma_phi) ;
  float MET_RefGamma_etx = xyTmp.at(0) ;
  float MET_RefGamma_ety = xyTmp.at(1) ;
  m_METutil->setMETTerm(METUtil::RefGamma, MET_RefGamma_etx, MET_RefGamma_ety, m_MET_RefGamma_sumet);
  xyTmp = XY(m_MET_RefTau_et,m_MET_RefTau_phi) ;
  float MET_RefTau_etx = xyTmp.at(0) ;
  float MET_RefTau_ety = xyTmp.at(1) ;
  m_METutil->setMETTerm(METUtil::RefTau, MET_RefTau_etx, MET_RefTau_ety, m_MET_RefTau_sumet);
  xyTmp = XY(m_MET_MuonBoy_et,m_MET_MuonBoy_phi) ;
  float MET_MuonBoy_etx = xyTmp.at(0) ;
  float MET_MuonBoy_ety = xyTmp.at(1) ;
  m_METutil->setMETTerm(METUtil::MuonTotal, MET_MuonBoy_etx, MET_MuonBoy_ety, m_MET_MuonBoy_sumet);
  xyTmp = XY(m_MET_CellOut_Eflow_et,m_MET_CellOut_Eflow_phi) ;
  float MET_CellOut_Eflow_etx = xyTmp.at(0) ;
  float MET_CellOut_Eflow_ety = xyTmp.at(1) ;
 //m_METutil->setMETTerm(METUtil::CellOutTerms, MET_CellOut_Eflow_etx, MET_CellOut_Eflow_ety, m_MET_CellOut_Eflow_sumet);
  xyTmp = XY(m_MET_SoftJets_et, m_MET_SoftJets_phi) ;
  float MET_SoftJets_etx = xyTmp.at(0) ;
  float MET_SoftJets_ety = xyTmp.at(1) ;
  //m_METutil->setMETTerm(METUtil::SoftTerms, MET_CellOut_Eflow_etx + MET_SoftJets_etx, MET_CellOut_Eflow_ety+MET_SoftJets_ety,m_MET_CellOut_Eflow_sumet + m_MET_SoftJets_sumet); 
  m_METutil->setMETTerm(METUtil::SoftTerms, MET_CellOut_Eflow_etx, MET_CellOut_Eflow_ety,m_MET_CellOut_Eflow_sumet); 
  METUtility::METObject refFinal = m_METutil->getMissingET(METUtil::RefFinal);
  float refFinal_et = refFinal.et();
  float refFinal_phi = refFinal.phi();
  m_logger << VERBOSE << "/** exiting met tool! **/" << SLogger::endmsg;
  return refFinal;
}
// function to convert rphi coordinates to xy coordinate.
vector<float> WgEventSelection::XY(float t, float phi) {
   vector<float> xy ; 
   float x = t*cos(phi) ;
   float y = t*sin(phi) ;
   xy.push_back(x) ;
   xy.push_back(y) ;
   return xy ; 
}
///Main analysis function: this is executed for every entry in the tree.

void WgEventSelection::ExecuteEvent( const SInputData &inputData, Double_t xsection_weight) throw( SError ) {
  icutflow=0;
  //set flags and initialize variables
  bool isdata = false; // data MC flag
  bool isMC = true; // data MC flag
  int RunNumber = m_RunNumber; // run number
  int npv = 0;// number of primary vertices.
  int TightElectronCount = 0; //number of tight electrons in the event.
  int MediumElectronCount = 0;// number of medium electrons in the event.
  int PhotonCount = 0;// number of photons in the event, the photon quality cuts can be found in the loop.
  int LeadingElectron=-1; // leading pt electron index in the saved vectors of electrons,it is returned by function: LeadingPtParticle.
  int LeadingElectronIndex=-1; // leading pt electron index in the d3pd
  int LeadingPtPhoton=-1; // leading pt photon index.
  double weight = 1; // product of all the weights of a event
  double corrE=-999;
  double WtMass=-999;// w transverse mass
  double MET_x=-999; // MET x
  double MET_y=-999; // MET y
  double MET=-999; //MET
  double METcorr=-999; //corrected MET
  double MET_phi=-999;// MET phi
  double LeadingPhIso=-999; //isolation of the leading pt photon.
  double cutflow_weight = 1;
  std::vector<double> dR_lep_ph; 
  std::vector<double> dR_lep_jet;
  std::vector<double> dR_ph_jet;

  TLorentzVector elv;// four vector of selected leading pt electron.
  TLorentzVector elClusterv; // four vector of selected leading pt electron, filled in by cluster variables.
  TLorentzVector ph_lv; // four vector of the selected leading pt photon.
  
  std::vector<TLorentzVector> GoodEls; // for object cutflow of electrons to find the leading pt electron, in case you want to test the overlap removal cut between electron and photon/jet 
  std::vector<TLorentzVector> GoodMus; // same as for electron
  std::vector<TLorentzVector> GoodPhs; // same as for electron
  std::vector<TLorentzVector> SelectedMus; // a vector of the four momentum vectors of the selected muons.
  std::vector<TLorentzVector> SelectedPhs; // a vector of the four momentum vectors of the selected photons.
  std::vector<TLorentzVector> SelectedJets; // a vector of the four momentum vectors of the selected jets.
  std::vector<TLorentzVector> SelectedEls; //a vector of the four momentum vectors of the selected electrons.
  std::vector<TLorentzVector> SelectedClusterEls;// a vector of the four momentum vectors filled with cluster variables of the selected electrons.
  std::vector<TLorentzVector> SelectedMEls; //a vector of the four momentum vectors of the selected medium electrons.

  std::vector<int> GoodPhotonIndex;//a vector of indices in the d3pd of the selected photons. 
  std::vector<int> GoodElectronIndex;
  std::vector<int> GoodMuIndex;
  std::vector<int> SelectedMuIndex; 
  std::vector<int> SelectedPhotonIndex;
  std::vector<int> SelectedJetIndex;
  std::vector<int> TightElectronIndex;
  std::vector<int> MediumElectronIndex;

  std::vector<std::vector<int> > ElObjIDs; // these are to save whether a object passed each cut defined in object definition functions.
  std::vector<std::vector<int> > PhObjIDs;
  std::vector<std::vector<int> > JetObjIDs;
  int isBveto_70=false;// bveto 70% point 
  int isBveto_80=false; 
  int isBveto_85=false; 
  int truth_Bs=0;
  //for MET correction
  std::vector<TLorentzVector> allels;
  std::vector<TLorentzVector> allmus;
  std::vector<TLorentzVector> allphs;
  std::vector<TLorentzVector> alljets;
  //specify tags
  if(( inputData.GetType() == "data" ) || ( inputData.GetType() == "Data" )) {
     isdata = true;
     isMC = false;
   }
  
  bool isgjet=(m_prop_bkgstudy=="gjet"||m_prop_bkgstudy=="alljet");
  bool isejet=(m_prop_bkgstudy=="ejet"||m_prop_bkgstudy=="alljet");
  bool isobj=(m_prop_bkgstudy=="objcutflow");

  //count npv
  for(unsigned int i = 0;i<m_vxp_n;i++){
  if(m_vxp_nTracks->at(i) >=2 ) npv++; 
  }
//  b veto for the wg vbs signal sample bug at truth level.
  if(isMC){ 
     for(unsigned int i =0;i<m_mc_pdgId->size();i++){
     if(m_mc_status->at(i)==3 && m_mc_pt->at(i) > 0 && abs(m_mc_pdgId->at(i))==5) truth_Bs++;
     }
  }
//  if(Bveto)  throw SError(SError::SkipEvent); 
  //Initialize object reader properties
  mur.SetNPV(npv);
  er.SetNPV(npv);
  phr.SetNPV(npv);
  mur.SetEventNumber(m_EventNumber);
  er.SetEventNumber(m_EventNumber);
  phr.SetEventNumber(m_EventNumber);
  jr.SetEventNumber(m_EventNumber);
  
  //reset output variables
  RESETVAR; 
  RESETVAR_WG; 

  if(isMC) {
    RESETVARTRUTH;
    DukHepFilter::m_pileupTool->SetRandomSeed(314159 + m_mc_channel_number*2718 + m_EventNumber);
    cutflow_weight = m_mc_event_weight;
  }

  //*******************************************************************************************//
  //**********************Object cutflow ****************************************************//
  //*************this part runs object cutflow without event level cutflow**********************//
  //*******************************************************************************************//
   if(isobj) {
     for (unsigned int i = 0; i<er.m_NumElectrons;i++) {
        TLorentzVector tmp = er.FillElectronFourMomentum(i);
        std::vector<int> ElObjID = er.ElectronObjID(i,m_LeptonPt,Ecounter);
        bool TightElectron = er.IsGoodElectronEWK(i,m_LeptonPt,0,isejet); 
        if(TightElectron) {
           GoodEls.push_back(tmp);GoodElectronIndex.push_back(i);
        }
        ElObjIDs.push_back(ElObjID);
        SelectedEls.push_back(tmp);   
        TightElectronIndex.push_back(i);
        m_logger << VERBOSE << "/** Corrected Electrons! **/" << SLogger::endmsg;
      }

      AnalysisUtils::SortParticlesPt(TightElectronIndex,SelectedEls); 

   if(GoodEls.size()) {
     LeadingElectron = AnalysisUtils::LeadingPtParticle(GoodEls);
     LeadingElectronIndex = GoodElectronIndex.at(LeadingElectron);
     elClusterv.SetPtEtaPhiE(1,er.m_ElectronClusterEta->at(LeadingElectronIndex),er.m_ElectronClusterPhi->at(LeadingElectronIndex),1);
   }

   for(unsigned int i = 0;i < phr.m_NumPhotons;i++) {
     TLorentzVector tmp = phr.PhotonFourVector(i);
     std::vector<int> PhObjID = phr.PhotonObjID(i,m_PhotonPt);

     if(GoodElectronIndex.size()) {
        if(tmp.DeltaR(elClusterv)<0.4) PhObjID.push_back(0);
    }

    SelectedPhs.push_back(tmp);
    SelectedPhotonIndex.push_back(i);
    PhObjID.push_back(1);
    PhObjIDs.push_back(PhObjID);

    if(phr.IsGoodPhoton(i,m_PhotonPt,isgjet,Phcounter)) {
      GoodPhs.push_back(tmp);GoodPhotonIndex.push_back(i);
    }
    m_logger << VERBOSE << "/** Corrected Photons! **/" << SLogger::endmsg;
  }  

   AnalysisUtils::SortParticlesPt(SelectedPhotonIndex,SelectedPhs); 
   AnalysisUtils::SortParticlesPt(GoodPhotonIndex,GoodPhs); 
  
  for(unsigned int i = 0;i<jr.m_JetPt->size();i++) {
    TLorentzVector tmp;
    tmp = jr.CorrectedJet(i,!isdata,npv,m_averageIntPerXing);
    SelectedJetIndex.push_back(i);
    SelectedJets.push_back(tmp);
    std::vector<int> JetObjID = jr.JetObjID(i,isMC,npv,m_averageIntPerXing);
    jr.IsSelectedJet(i,!isdata,npv,m_averageIntPerXing,Jetcounter);
    if(GoodElectronIndex.size()) {
      if(tmp.DeltaR(elClusterv) < 0.3) JetObjID.push_back(0);
    }
    JetObjID.push_back(1);
    if(GoodPhotonIndex.size()) {
      if(tmp.DeltaR(GoodPhs.at(0)) < 0.4) JetObjID.push_back(0);
    }
    JetObjID.push_back(1);
    JetObjIDs.push_back(JetObjID);
    m_logger << VERBOSE << "/** Corrected Jets! **/" << SLogger::endmsg;
  }
  AnalysisUtils::SortParticlesPt(SelectedJetIndex,SelectedJets); 
 }
  //*******************************************************************************************//
  //*****************event selection begin****************************************************//
  //*******************************************************************************************//
 else 
 {
  //---------------------------------------------------------//
  //------------------total number of events-----------------//
  IncrementCutFlow(cutflow_weight);
  //---------------------------------------------------------//
  //------------------primary vertex cut---------------------//
  //---------------------------------------------------------//
  if(m_nPVCut) {
   if (m_vxp_n < 1 || m_vxp_nTracks->at(0)< 3) throw SError(SError::SkipEvent);
   m_logger << VERBOSE << " event passed npv cut  " << SLogger::endmsg;
  }

  IncrementCutFlow(cutflow_weight);

  //---------------------------------------------------------//
  ///------------------GRL cut-------------------------------//
  //---------------------------------------------------------//

  if(isdata) { 
  if ( ! testGRL(m_RunNumber,m_lbn) )  throw SError( SError::SkipEvent );
  }
  m_logger << VERBOSE << " event passed goodrun cut  " << SLogger::endmsg;
  IncrementCutFlow(cutflow_weight);

  //---------------------------------------------------------//
  ///------------------FSR veto-------------------------------//
  //---------------------------------------------------------//
  
  int overlap = 0; 
  if(m_FSRveto>0) {
  overlap = OverlapRemovalFSR(isMC) ;   
  if(overlap>=m_FSRveto) throw SError (SError::SkipEvent);
  }
  
  IncrementCutFlow(cutflow_weight);
  //---------------------------------------------------------//
  //--------------------trigger------------------------------//
  //---------------------------------------------------------//
  if( m_Trigger&&!(m_LeptonTrigger1||m_LeptonTrigger2) ) throw SError( SError::SkipEvent ); 
  m_logger << VERBOSE << "/** event passed trigger cut   **/" << SLogger::endmsg;
  IncrementCutFlow(cutflow_weight);

  //---------------------------------------------------------//
  //-------------------event cleaning -----------------------//
  //---------------------------------------------------------//
  if (isdata && m_larError==2 ) throw SError( SError::SkipEvent );
  if (isdata && m_tileError==2 ) throw SError( SError::SkipEvent );
  if (isdata && ((m_coreFlags & 0x40000) != 0)) throw SError( SError::SkipEvent );
  IncrementCutFlow(cutflow_weight);
  m_logger << VERBOSE << "/** event passed event cleaning   **/" << SLogger::endmsg;

  //---------------------------------------------------------//
  //------------Fill in objects for MET calculation---------//
  //---------------------------------------------------------//
 
  m_logger << VERBOSE << "/** begin to loop over muon block   **/" << SLogger::endmsg;
  for (unsigned int i = 0; i<mur.m_NumMuons;i++) {
      TLorentzVector tmp; 
      tmp.SetPtEtaPhiE(mur.m_MuonPt->at(i),mur.m_MuonEta->at(i),mur.m_MuonPhi->at(i),mur.m_MuonE->at(i)); 
      allmus.push_back(tmp);

      if(mur.IsGoodMuon_EWK(npv,i,25000,Mcounter)) {
       SelectedMus.push_back(tmp);
       SelectedMuIndex.push_back(i);
      }
  }
  
  AnalysisUtils::SortParticlesPt(SelectedMuIndex,SelectedMus); 

  //---------------------------------------------------------//
  // electron selection, at least one good electron with pt>25GeV//
  //---------------------------------------------------------//

  m_logger << VERBOSE << "/** begin to loop over electron block   **/" << SLogger::endmsg;

  for (unsigned int i = 0; i<er.m_NumElectrons;i++) {
     bool TightElectron = false;
     bool MediumElectron = false;
     float elpt_corr = 0; 
     TLorentzVector tmp;
     TLorentzVector tmpd3pd;//METUtility tool asked for this four vector input...
     std::vector<int> ElObjID;
     TightElectron = er.IsGoodElectronEWK(i,m_LeptonPt,1,isejet);//no requirement on electron ID. 
     MediumElectron = er.IsGoodElectronEWK(i,m_LeptonVetoPt,4,false);  
     tmp = er.FillElectronFourMomentum(i);
     ElObjID = er.ElectronObjID(i,m_LeptonPt,Ecounter);
     tmpd3pd.SetPtEtaPhiE(er.m_ElectronPt->at(i)*tmp.E()/er.m_ElectronClusterE->at(i),er.m_ElectronEta->at(i),er.m_ElectronPhi->at(i),tmp.E()); 
     elpt_corr = tmp.Pt();

     allels.push_back(tmpd3pd);
     ElObjIDs.push_back(ElObjID);
 
    if(TightElectron) {
      m_logger << VERBOSE << "/** finding tight++ electron!||not applying lepton cuts, saving all corrected electrons **/" << SLogger::endmsg;
      TightElectronCount++;
      TightElectronIndex.push_back(i);
      SelectedEls.push_back(tmp);
     }

    if(MediumElectron) {
      m_logger << VERBOSE << "/** finding medium++ electron! **/" << SLogger::endmsg;
      MediumElectronCount++;
      MediumElectronIndex.push_back(i);
      SelectedMEls.push_back(tmp);
     }  
  }

  if(m_LeptonCut&&TightElectronCount < 1) throw SError(SError::SkipEvent);
  IncrementCutFlow(cutflow_weight);

  if(m_LeptonVeto&&MediumElectronCount > 1) throw SError(SError::SkipEvent);
  IncrementCutFlow(cutflow_weight);

  //---------------------------------------------------------//
  //found leading lepton, fill electron cluster 
  //---------------------------------------------------------//

  if(TightElectronCount >= 1) {
    LeadingElectron = AnalysisUtils::LeadingPtParticle(SelectedEls);
    LeadingElectronIndex = TightElectronIndex.at(LeadingElectron);//find the d3pd index for selected leading pt electron
    elClusterv = er.FillElectronCluster(LeadingElectronIndex);
    for(int i=0;i<SelectedEls.size();i++) { 
      TLorentzVector tmp = er.FillElectronCluster(i); 
      SelectedClusterEls.push_back(tmp);
    }
  }

  //---------------------------------------------------------//
  //select/counting good photons//
  //---------------------------------------------------------//
 
  m_logger << VERBOSE << "/** start photon selection**/" << SLogger::endmsg;

  for(unsigned int i = 0;i < phr.m_NumPhotons;i++) {
   TLorentzVector tmp = phr.PhotonFourVector(i);
   TLorentzVector tmpd3pd;
   std::vector<int> PhObjID;
   tmpd3pd.SetPtEtaPhiE(phr.m_PhotonPt->at(i)*tmp.E()/phr.m_PhotonClusterE->at(i),phr.m_PhotonEta->at(i),phr.m_PhotonPhi->at(i),phr.m_PhotonE->at(i));
   PhObjID = phr.PhotonObjID(i,m_PhotonPt);
   allphs.push_back(tmpd3pd); 

   if(phr.IsGoodPhoton(i,m_PhotonPt,isgjet,Phcounter)) {
     double drEg = 1;//if no tight electron, photons are always kept.
     TLorentzVector ph_cl_v;
     ph_cl_v.SetPtEtaPhiE(1,phr.m_PhotonClusterEta->at(i),phr.m_PhotonClusterPhi->at(i),1);  
     if(TightElectronCount&&m_PhotonCut) drEg = elClusterv.DeltaR(ph_cl_v); // if there is a tight electron, require the photon to be not overlapped with the electron
     if(drEg>= m_dRLeptonGammaCut)
     {
       PhotonCount++;
       SelectedPhotonIndex.push_back(i);
       SelectedPhs.push_back(tmp);
       PhObjIDs.push_back(PhObjID);        
     }
    }  
  }
  //sort Photon by Pt
  if(m_PhotonCut)  AnalysisUtils::SortParticlesPt(SelectedPhotonIndex,SelectedPhs);

  m_logger << VERBOSE << "/**finished photon selection**/" << SLogger::endmsg;

  ///fill in jets for MET calculation

  for(unsigned int i = 0;i<jr.m_JetPt->size();i++) {
   TLorentzVector tmp;
   TLorentzVector tmpd3pd;
   tmp = jr.CorrectedJet(i,!isdata,npv,m_averageIntPerXing);
   tmpd3pd.SetPtEtaPhiE(tmp.Pt(),jr.m_JetEta_d3pd->at(i),jr.m_JetPhi_d3pd->at(i),jr.m_JetE_d3pd->at(i));
   alljets.push_back(tmp);
  }
  m_logger << VERBOSE << "/**finished jet selection**/" << SLogger::endmsg;
  //---------------------------------------------------------//
  //MET cut//
  //---------------------------------------------------------//
  MET_x = m_MET_RefFinal_et*TMath::Cos(m_MET_RefFinal_phi);
  MET_y = m_MET_RefFinal_et*TMath::Sin(m_MET_RefFinal_phi);
  MET = sqrt(MET_x*MET_x+MET_y*MET_y);
  bool goodPV=false;
  int nvtxsoftmet=0;

  for(unsigned int ipv=0;ipv<m_vxp_n;ipv++) {
    m_logger << VERBOSE << "/**Select good pv**/" << SLogger::endmsg;
    //if(m_vxp_type->at(ipv)==1 && m_vxp_nTracks->at(ipv)>2 && fabs(m_vxp_x->at(ipv))<200.) goodPV=true;
    if(m_vxp_type->at(ipv)==1 && m_vxp_nTracks->at(ipv)>2) goodPV=true;
    m_logger << VERBOSE << "/**Finished select good pv**/" << SLogger::endmsg;
  }

  if(goodPV) {
    for (unsigned int ipv=0;ipv<m_vxp_n;ipv++) {
      m_logger << VERBOSE << "/**Count for sofmet with good PV**/" << SLogger::endmsg;
      if(m_vxp_nTracks->at(ipv)>2) nvtxsoftmet++;
    }
  }
  m_logger << VERBOSE << "/**start MET correction**/" << SLogger::endmsg; 
  METUtility::METObject RefFinal = METcorrection(isMC,goodPV,nvtxsoftmet,allels,allmus,allphs,alljets); 
  m_logger << VERBOSE << "/**finished MET correction**/" << SLogger::endmsg;

  METcorr = RefFinal.et();
  MET_phi = RefFinal.phi();
  MET_x = METcorr*TMath::Cos(MET_phi);
  MET_y = METcorr*TMath::Sin(MET_phi);
  MET = METcorr;

  if (!isejet&&METcorr<m_MetCut) throw SError(SError::SkipEvent); 
  IncrementCutFlow(cutflow_weight);

  //---------------------------------------------------------//
  //Mt(lnu) > 40GeV
  //---------------------------------------------------------//

  m_logger << VERBOSE << "/**calculate W transverse mass **/" << SLogger::endmsg;

  if(m_MtCut&&m_LeptonCut) {
    elv = SelectedEls.at(LeadingElectron);
    float px = elv.Px();
    float py = elv.Py();
    float el_phi = elv.Phi();
    float Et = sqrt(px*px+py*py);
    WtMass = sqrt(2*Et*MET*(1-cos(el_phi-MET_phi))); 
    if(!isejet&&WtMass<m_MtCut) throw SError(SError::SkipEvent);  
   }
  IncrementCutFlow(cutflow_weight);

  //---------------------------------------------------------//
  //*****MET cleaning*********///
  //---------------------------------------------------------//

  std::vector<TLorentzVector> ph_leading;
  std::vector<TLorentzVector> el_leading;

  if(SelectedPhs.size()&&m_METcleaning) ph_leading.push_back(SelectedPhs.at(0)); 
  if(SelectedEls.size()&&m_METcleaning) el_leading.push_back(SelectedClusterEls.at(0)); 
  int overlapwithbadjets = 0;

  if(m_METcleaning){
    m_logger << VERBOSE << "/**going to perform MET cleaning **/" << SLogger::endmsg;
    for(unsigned int i = 0;i<jr.m_JetPt->size();i++) {
     TLorentzVector tmp;
     TLorentzVector tmp_em;
     tmp = jr.CorrectedJet(i,!isdata,npv,m_averageIntPerXing);
     tmp_em.SetPtEtaPhiE(jr.m_JetPtEM->at(i),jr.m_JetEtaEM->at(i),jr.m_JetPhiEM->at(i),jr.m_JetEEM->at(i));
     if(tmp.DeltaR(elClusterv)>0.4&&tmp.Pt()>20000&&(jr.IsLooserBadJet(tmp.Pt(),tmp.Eta(),i)||jr.isHotTile(RunNumber,i))) overlapwithbadjets++;
    }
   }
  if(m_METcleaning&&overlapwithbadjets>0) throw SError(SError::SkipEvent);
  IncrementCutFlow(cutflow_weight);

  //---------------------------------------------------------//
  //one good photon
  //---------------------------------------------------------//
  m_logger << VERBOSE << "/** found one good photon   **/" << SLogger::endmsg;
  if((m_PhotonCut&&PhotonCount < 1)) throw SError(SError::SkipEvent);
  IncrementCutFlow(cutflow_weight);
  //---------------------------------------------------------//
  //photon is isolated
  //---------------------------------------------------------//
  if(m_PhotonCut) {
   LeadingPtPhoton = SelectedPhotonIndex.at(0);
   LeadingPhIso = phr.CorrectedIso(LeadingPtPhoton,1,40); 
   //if(!isgjet&&LeadingPhIso >= m_PhotonIsoValue) throw SError(SError::SkipEvent);
  }
  IncrementCutFlow(cutflow_weight);
  //---------------------------------------------------------//
  //--bad jet veto --event cleaning--------------------------//
  //---counting jets-----------------------------------------//
  //---------------------------------------------------------//
  for(unsigned int i = 0;i<jr.m_JetPt->size();i++) {
     m_logger << VERBOSE << "/** calibrating jets   **/" << SLogger::endmsg;
     TLorentzVector tmp;
     TLorentzVector tmp_em;
     tmp = jr.CorrectedJet(i,!isdata,npv,m_averageIntPerXing);
     tmp_em.SetPtEtaPhiE(jr.m_JetPtEM->at(i),jr.m_JetEtaEM->at(i),jr.m_JetPhiEM->at(i),jr.m_JetEEM->at(i));
     std::vector<int> JetObjID = jr.JetObjID(i,isMC,npv,m_averageIntPerXing);

     bool overlapwithmu = false;
     bool overlapwithel = false;
     bool overlapwithph = false;

     if(SelectedMus.size()) overlapwithmu = (tmp_em.DeltaR(SelectedMus.at(0))<0.3);
     if(SelectedEls.size()) overlapwithel = (tmp_em.DeltaR(elClusterv)<0.3);
     if(SelectedPhs.size()) overlapwithph = (tmp_em.DeltaR(SelectedPhs.at(0))<0.4);

     if(m_jet_AntiKt4LCTopo_flavor_weight_MV1->at(i)>0.7892&&tmp.Pt()>20000) isBveto_70 = 1;
     if(m_jet_AntiKt4LCTopo_flavor_weight_MV1->at(i)>0.3511) isBveto_80 = 1;
     if(m_jet_AntiKt4LCTopo_flavor_weight_MV1->at(i)>0.1340) isBveto_85 = 1;

     if(!m_JetCut){
       m_logger << VERBOSE << "/** not applying cuts on jets, going to save all corrected jets in D3PD **/" << SLogger::endmsg;
       JetObjIDs.push_back(JetObjID);
       SelectedJetIndex.push_back(i);
       SelectedJets.push_back(tmp);
      }
     if(m_JetCut&&(jr.IsSelectedJet(i,!isdata,npv,m_averageIntPerXing,Jetcounter)&&!(jr.IsLooserBadJet(jr.m_JetPt->at(i),jr.m_JetEta->at(i),i))&&!overlapwithel&&!overlapwithph&&!overlapwithmu)) {
        SelectedJetIndex.push_back(i);
        SelectedJets.push_back(tmp);
     }
   }
  //if(overlapwithbadjets>0) throw SError(SError::SkipEvent);
  //IncrementCutFlow(cutflow_weight);
  if(m_JetCut) AnalysisUtils::SortParticlesPt(SelectedJetIndex,SelectedJets);

  //----------------------------------------------------------//
  //-------------------additional kinematic cuts--------------// 
  //----------------------------------------------------------//

  m_logger << VERBOSE << "/** Done with object selection, now will apply additional kinematic cuts**/" << SLogger::endmsg;

  if(!(isejet||isgjet)&&m_LeptonCut&&m_PhotonCut) {
     if((fabs((SelectedPhs.at(0)+SelectedEls.at(0)).M()-91187.6)<15000)) throw SError(SError::SkipEvent);
     IncrementCutFlow(cutflow_weight);
     if(m_TwoJetCut) if(!(SelectedJets.size()>1)) throw SError(SError::SkipEvent);
     IncrementCutFlow(cutflow_weight);
     if(m_vbsCut&&m_TwoJetCut) {
       //if(!(SelectedJets.size()>1)) throw SError(SError::SkipEvent);
       //m_logger << INFO << "EventNumber|i_leading|i_subleading: " << m_EventNumber<<"|"<<SelectedJetIndex.at(0)<<"|"<<SelectedJetIndex.at(1)<<SLogger::endmsg;
       IncrementCutFlow(cutflow_weight);
       if((SelectedJets.at(0)+SelectedJets.at(1)).M()<150000) throw SError(SError::SkipEvent); 
       IncrementCutFlow(cutflow_weight);
       if((SelectedJets.at(0)+SelectedJets.at(1)).M()<500000) throw SError(SError::SkipEvent); 
       IncrementCutFlow(cutflow_weight);
     }
    }
   }//the end of applying cuts

  //----------------------------------------------------------//
  //------------------the END of selection--------------------//
  //---------------------save events--------------------------//
  //----------------------------------------------------------//

 if(m_vbsCut&&m_TwoJetCut) o_m_Mjj = (SelectedJets.at(0)+SelectedJets.at(1)).M();
  o_m_nJets = SelectedJets.size();
 for(unsigned int i =0; i< SelectedJets.size();i++) {
    m_logger << VERBOSE << "/** Save Jets! **/" << SLogger::endmsg;
    int jetindex = SelectedJetIndex.at(i);
    o_m_JetE.push_back(SelectedJets.at(i).E());
    o_m_JetPt.push_back(SelectedJets.at(i).Pt());
    o_m_JetEta.push_back(SelectedJets.at(i).Eta());
    o_m_JetPhi.push_back(SelectedJets.at(i).Phi());
    o_m_JetIsLooserBadJet.push_back(jr.IsLooserBadJet(SelectedJets.at(i).Pt(),SelectedJets.at(i).Eta(),jetindex));
    o_m_JetIsHotTile.push_back(jr.isHotTile(RunNumber,jetindex));
    o_m_Jet_em_E.push_back(jr.m_JetEEM->at(jetindex));
    o_m_Jet_em_Pt.push_back(jr.m_JetPtEM->at(jetindex));
    o_m_Jet_em_Eta.push_back(jr.m_JetEtaEM->at(jetindex));
    o_m_Jet_em_Phi.push_back(jr.m_JetPhiEM->at(jetindex));
    if(JetObjIDs.size()) o_m_JetObjID.push_back(JetObjIDs.at(jetindex));
 }

 for(int i=0;i<SelectedEls.size();i++) { 
     m_logger << VERBOSE << "/** save electrons   **/" << SLogger::endmsg;
     o_m_Lepton_E.push_back(SelectedEls.at(i).E());
     o_m_Lepton_Pt.push_back(SelectedEls.at(i).Pt());
     o_m_Lepton_Eta.push_back(SelectedEls.at(i).Eta());
     o_m_Lepton_Phi.push_back(SelectedEls.at(i).Phi());
 
     o_m_LeptonClusterPt.push_back(er.m_ElectronClusterPt->at(TightElectronIndex.at(i)));
     o_m_LeptonClusterEta.push_back(er.m_ElectronClusterEta->at(TightElectronIndex.at(i)));
     o_m_LeptonClusterPhi.push_back(er.m_ElectronClusterPhi->at(TightElectronIndex.at(i)));
     o_m_LeptonClusterE.push_back(er.m_ElectronClusterE->at(TightElectronIndex.at(i)));
     o_m_Lepton_Charge.push_back(er.m_ElectronCharge->at(TightElectronIndex.at(i)));

     double corrected_isolation;
     corrected_isolation=er.GetElectronIso(TightElectronIndex.at(i),0,20);
     o_m_LeptonEtConeIso20.push_back(corrected_isolation);
     corrected_isolation=er.GetElectronIso(TightElectronIndex.at(i),0,30);
     o_m_LeptonEtConeIso30.push_back(corrected_isolation);
     corrected_isolation=er.GetElectronIso(TightElectronIndex.at(i),0,40);
     o_m_LeptonEtConeIso40.push_back(corrected_isolation);
     corrected_isolation=er.GetElectronIso(TightElectronIndex.at(i),1,20);
     o_m_LeptonTopoIso20.push_back(corrected_isolation);
     corrected_isolation=er.GetElectronIso(TightElectronIndex.at(i),1,30);
     o_m_LeptonTopoIso30.push_back(corrected_isolation);
     corrected_isolation=er.GetElectronIso(TightElectronIndex.at(i),1,40);
     o_m_LeptonTopoIso40.push_back(corrected_isolation);
     o_m_LeptonPtConeIso20.push_back(er.m_ElectronPtcone20->at(TightElectronIndex.at(i)));
     o_m_LeptonPtConeIso30.push_back(er.m_ElectronPtcone30->at(TightElectronIndex.at(i)));
     o_m_LeptonPtConeIso40.push_back(er.m_ElectronPtcone40->at(TightElectronIndex.at(i)));

     if(ElObjIDs.size()) o_m_LeptonObjID.push_back(ElObjIDs.at(TightElectronIndex.at(i)));

     float lepsf = 1;
     int set=35;
     if(isMC) set=36;
     std::pair<float,float> sf_error;
     //sf_error = er.GetScaleFactor(TightElectronIndex.at(i),set,m_RunNumber); 
     lepsf = sf_error.first;
     o_m_LeptonScale.push_back(lepsf);
  } 

  float lepsf = 1;
  int set=35;
  if(isMC) set=36;
  std::pair<float,float> sf_error;
 //sf_error = er.GetScaleFactor(MediumElectronIndex.at(i),set,m_RunNumber); 
  lepsf = sf_error.first;
  for(int i=0;i<SelectedPhs.size();i++) {
     m_logger << VERBOSE << "/** save photons   **/" << SLogger::endmsg;
     int phindex=SelectedPhotonIndex.at(i);
     o_m_Photon_E.push_back(SelectedPhs.at(i).E());
     o_m_Photon_Pt.push_back(SelectedPhs.at(i).Pt());
     o_m_Photon_Eta.push_back(SelectedPhs.at(i).Eta());
     o_m_Photon_Phi.push_back(SelectedPhs.at(i).Phi());
     m_logger << VERBOSE << "/** save photon showershapes   **/" << SLogger::endmsg;
     o_m_PhotonClusterPt.push_back(phr.m_PhotonClusterPt->at(phindex));
     o_m_PhotonClusterEta.push_back(phr.m_PhotonClusterEta->at(phindex));
     o_m_PhotonClusterPhi.push_back(phr.m_PhotonClusterPhi->at(phindex));
     o_m_PhotonClusterE.push_back(phr.m_PhotonClusterE->at(phindex));
     m_logger << VERBOSE << "/** saved photon showershapes   **/" << SLogger::endmsg;
     double correctedIso=0;
     if(isMC) {
        m_logger << VERBOSE << "/** save photon truth information  **/" << SLogger::endmsg;
        o_m_PhotonPDGID.push_back(m_ph_truth_type->at(phindex));
        o_m_PhotonMother.push_back(m_ph_truth_mothertype->at(phindex));
     }
     m_logger << VERBOSE << "/** save photon etcone information**/" << SLogger::endmsg;
     correctedIso=phr.CorrectedIso(phindex,0,20); 
     o_m_PhotonEtConeIso20.push_back(correctedIso); 
     correctedIso=phr.CorrectedIso(phindex,0,30); 
     o_m_PhotonEtConeIso30.push_back(correctedIso); 
     correctedIso=phr.CorrectedIso(phindex,0,40); 
     m_logger << VERBOSE << "/** save photon topo etcone information**/" << SLogger::endmsg;
     o_m_PhotonEtConeIso40.push_back(correctedIso); 
     correctedIso=phr.CorrectedIso(phindex,1,20); 
     o_m_PhotonTopoIso20.push_back(correctedIso); 
     correctedIso=phr.CorrectedIso(phindex,1,30); 
     o_m_PhotonTopoIso30.push_back(correctedIso); 
     correctedIso=phr.CorrectedIso(phindex,1,40); 
     o_m_PhotonTopoIso40.push_back(correctedIso); 
    //save track isolation
     m_logger << VERBOSE << "/** save photons track isolation  **/" << SLogger::endmsg;
     o_m_PhotonPtConeIso20.push_back(phr.m_PhotonPtCone20->at(phindex));
     o_m_PhotonPtConeIso30.push_back(phr.m_PhotonPtCone30->at(phindex));
     o_m_PhotonPtConeIso40.push_back(phr.m_PhotonPtCone40->at(phindex));
     std::vector<double> showershapes=phr.PhotonShowerShapes(phindex);
     std::vector<int> conversions;
     //conversions.push_back(m_ph_isConv->at(PhotonIndex.at(i)));
     conversions.push_back(m_ph_nSingleTrackConv->at(phindex));
     conversions.push_back(m_ph_nDoubleTrackConv->at(phindex));
     o_m_Photon_conversion.push_back(conversions); 
     o_m_Photon_showershape.push_back(showershapes);
     if(PhObjIDs.size()) o_m_PhotonObjID.push_back(PhObjIDs.at(i));
  } 
  o_m_METx=MET_x;
  o_m_METy=MET_y;
  o_m_MET=METcorr;
  o_m_Mt = WtMass;
  o_m_weights.push_back(xsection_weight);
  float combinedweight = 1;
  //save pileup weight : weights[1]
  if(isMC) {
   float mu=(m_lbn==1&&int(m_averageIntPerXing+0.5)==1)?0.:m_averageIntPerXing;
   combinedweight = DukHepFilter::m_pileupTool->GetCombinedWeight(m_RunNumber,m_mc_channel_number,mu); 
   m_logger << INFO << "/** get combined weight   **/" <<combinedweight <<SLogger::endmsg;
  }
  //float zvertexweight = ZVertexTool->GetWeight(m_vxp_z);
  o_m_BjetVeto.push_back(isBveto_70);
  o_m_BjetVeto.push_back(isBveto_80);
  o_m_BjetVeto.push_back(isBveto_85);
  o_m_BjetVeto.push_back(truth_Bs);
  o_m_weights.push_back(combinedweight);
  m_logger << VERBOSE << "/** save truth info   **/" << SLogger::endmsg;
  //o_m_weights.push_back(zvertexweight);
  COPYVAR_WG
    ;  
  if(isMC) COPYVARTRUTH
    ;  
  return;
}

void WgEventSelection::EndMasterInputData( const SInputData& ) throw( SError ) {
 for(int i =0;i<10;i++){
//  h_Ecutflow->SetBinContent(i,(*Ecounter)[i]);
 }   
 for(int i = 0; i<7;i++)
 {
// h_Phcutflow->SetBinContent(i,(*Phcounter)[i]); 
 }
 for(int i = 0; i<5;i++)
 {
//  h_Jetcutflow->SetBinContent(i,(*Jetcounter)[i]); 
 }


 m_logger << INFO << "End of input data." << SLogger::endmsg;
  if ( m_cutflow->size() == 12 ) {
    m_logger << INFO << "(C0)  Number of input events:                       " << ( *m_cutflow )[ 0 ] <<"  Cut Efficiency: "<<( *m_cutflow )[ 0 ]/( *m_cutflow )[ 0 ]<<SLogger::endmsg;
    m_logger << INFO << "(C1)  Number of events passing goodrun flag:        " << ( *m_cutflow )[ 1 ] <<"  Cut Efficiency: "<<( *m_cutflow )[ 1 ]/( *m_cutflow )[ 0 ]<<SLogger::endmsg;
    m_logger << INFO << "(C2)  Number of events passing primary vertex:      " << ( *m_cutflow )[ 2 ] <<"  Cut Efficiency: "<<( *m_cutflow )[ 2 ]/( *m_cutflow )[ 1 ]<< SLogger::endmsg;
    m_logger << INFO << "(C3)  Number of events passing trigger              " << ( *m_cutflow )[ 3 ] <<"  Cut Efficiency: "<<( *m_cutflow )[ 3 ]/( *m_cutflow )[ 2 ]<< SLogger::endmsg;
    m_logger << INFO << "(C4)  Number of events passing LArHole veto         " << ( *m_cutflow )[ 4 ] <<"  Cut Efficiency: "<<( *m_cutflow )[ 4 ]/( *m_cutflow )[ 3 ]<< SLogger::endmsg;
    m_logger << INFO << "(C5)  Number of events passing MET cleaning:        " << ( *m_cutflow )[ 5 ] <<"  Cut Efficiency: "<<( *m_cutflow )[ 5 ]/( *m_cutflow )[ 4 ]<< SLogger::endmsg;
    m_logger << INFO << "(C6)  Number of events passing good electron:       " << ( *m_cutflow )[ 6 ] <<"  Cut Efficiency: "<<( *m_cutflow )[ 6 ]/( *m_cutflow )[ 5 ]<< SLogger::endmsg;
    m_logger << INFO << "(C7)  Number of events passing second electron veto:" << ( *m_cutflow )[ 7 ] <<"  Cut Efficiency: "<<( *m_cutflow )[ 7 ]/( *m_cutflow )[ 6 ]<< SLogger::endmsg;
    m_logger << INFO << "(C8)  Number of events passing MET cut:             " << ( *m_cutflow )[ 8 ] <<"  Cut Efficiency: "<<( *m_cutflow )[ 8 ]/( *m_cutflow )[ 7 ]<< SLogger::endmsg;
    m_logger << INFO << "(C9)  Number of events passing Mt cut:              " << ( *m_cutflow )[ 9 ] <<"  Cut Efficiency: "<<( *m_cutflow )[ 9 ]/( *m_cutflow )[ 8 ]<< SLogger::endmsg;
    m_logger << INFO << "(C10)  Number of events passing good photon:        " << ( *m_cutflow )[ 10] <<"  Cut Efficiency: "<<( *m_cutflow )[ 10 ]/( *m_cutflow )[ 9 ]<< SLogger::endmsg;
    m_logger << INFO << "(C11)  Number of events passing dr(l;gamma)>0.6:    " << ( *m_cutflow )[ 11] <<"  Cut Efficiency: "<<( *m_cutflow )[ 11 ]/( *m_cutflow )[ 10 ]<< SLogger::endmsg;
  }     
    else {
    m_logger << WARNING << "It looks like your job didn't run." << SLogger::endmsg;
    }
/* 
    m_logger << INFO << "(C0)  Number of total electrons:                       " << ( *Jetcounter )[ 0 ] <<"  Cut Efficiency: "<<( *Ecounter )[ 0 ]/( *Ecounter )[ 0 ]<<SLogger::endmsg;
    m_logger << INFO << "(C1)  Number of electrons with author==1or3:        " << ( *Jetcounter )[ 1 ] <<"  Cut Efficiency: "<<( *Ecounter )[ 1 ]/( *Ecounter )[ 0 ]<<SLogger::endmsg;
    m_logger << INFO << "(C2)  Number of electrons passing pt cut:      " << ( *Jetcounter )[ 2 ] <<"  Cut Efficiency: "<<( *Ecounter )[ 2 ]/( *Ecounter )[ 1 ]<< SLogger::endmsg;
    m_logger << INFO << "(C3)  Number of electrons passing eta cut            " << ( *Jetcounter )[ 3 ] <<"  Cut Efficiency: "<<( *Ecounter )[ 3 ]/( *Ecounter )[ 2 ]<< SLogger::endmsg;
    m_logger << INFO << "(C4)  Number of electrons passing OQ cut         " << ( *Jetcounter )[ 4 ] <<"  Cut Efficiency: "<<( *Ecounter )[ 4 ]/( *Ecounter )[ 3 ]<< SLogger::endmsg;
    m_logger << INFO << "(C5)  Number of electrons passing Tight++:        " << ( *Ecounter )[ 5 ] <<"  Cut Efficiency: "<<( *Ecounter )[ 5 ]/( *Ecounter )[ 4 ]<< SLogger::endmsg;
    m_logger << INFO << "(C6)  Number of electrons passing z0 cut:       " << ( *Ecounter )[ 6 ] <<"  Cut Efficiency: "<<( *Ecounter )[ 6 ]/( *Ecounter )[ 5 ]<< SLogger::endmsg;
    m_logger << INFO << "(C7)  Number of electrons passing D0 cut:" << ( *Ecounter )[ 7 ] <<"  Cut Efficiency: "<<( *Ecounter )[ 7 ]/( *Ecounter )[ 6 ]<< SLogger::endmsg;
    m_logger << INFO << "(C8)  Number of electrons passing etCone cut :             " << ( *Ecounter )[ 8 ] <<"  Cut Efficiency: "<<( *Ecounter )[ 8 ]/( *Ecounter )[ 7 ]<< SLogger::endmsg;
    m_logger << INFO << "(C9)  Number of electrons passing PtCone cut:             " << ( *Ecounter )[ 9 ] <<"  Cut Efficiency: "<<( *Ecounter )[ 9 ]/( *Ecounter )[ 8 ]<< SLogger::endmsg;
   
   return;
*/
}
