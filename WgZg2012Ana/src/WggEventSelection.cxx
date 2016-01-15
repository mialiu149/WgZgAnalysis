// Local include(s):
// $Id: WggEventSelection.h.cxx 141632 2013-03-22 16:14:14Z mliu $
#include "../include/WggEventSelection.h"
ClassImp( WggEventSelection );

WggEventSelection::WggEventSelection()
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
  //example job properties (sends data to your job via the xml file)
  DeclareProperty( "IgnoreGRL", m_prop_skipgrl );
  DeclareProperty( "TriggerName1", m_prop_triggername1 );
  DeclareProperty( "TriggerName2", m_prop_triggername2 );
  DeclareProperty( "FSRveto", m_FSRveto );
  DeclareProperty( "BkgStudy", m_prop_bkgstudy );
  DeclareProperty( "PhotonIsolation", m_prop_phisoname );
  DeclareProperty( "nPVCut", m_nPVCut);
  DeclareProperty( "Trigger",m_Trigger);
  DeclareProperty( "LeptonPt",m_LeptonPt);
  DeclareProperty( "LeptonCut",m_LeptonCut);
  DeclareProperty( "LeptonVeto",m_LeptonVeto);
  DeclareProperty( "MetCut",m_MetCut);
  DeclareProperty( "MtCut",m_MtCut);
  DeclareProperty( "PhotonPt",m_PhotonPt);
  DeclareProperty( "PhotonIDCut",m_PhotonIDCut);
  DeclareProperty( "dRLeptonGammaCut",m_dRLeptonGammaCut);
  DeclareProperty( "PhotonIsoValue",m_PhotonIsoValue);
  SetLogName( GetName() );
}
WggEventSelection::~WggEventSelection() {
}

void WggEventSelection::BeginCycle() throw( SError ) {
  //DukHepFilter::setupGRL();  
  return;
}

void WggEventSelection::BeginInputData( const SInputData& inputData ) throw( SError ) {
  //say something
  m_logger << DEBUG << "Hello from BeginInputData." << SLogger::endmsg;
  //macro of commands to set up the output tree (delete if you don't want an output tree)
  DECLARE_WG("dummy");
  DECLARETRUTH("dummy")
    ;
  //  er.DeclareVariables();
  //  mr.DeclareVariables();
  //  jr.DeclareVariables();
  //do any needed initialization here.
  m_cutflow->resize(20,0); 
  Ecounter->resize(10,0); 
  Phcounter->resize(7,0); 
  h_cutflow = Book(TH1F("cf","Cut flow",20,-0.5,19.5 ));  
  h_Ecutflow = Book(TH1F("cf_el","el Cut flow",11,-0.5,10.5 ));  
  h_Phcutflow = Book(TH1F("cf_ph","ph Cut flow",11,-0.5,10.5 ));  

  bool isdata = false;
  if( ( inputData.GetType() == "data" ) || ( inputData.GetType() == "Data" )) isdata=true; 

  DukHepFilter::setMC(!isdata);
  DukHepFilter::setupGRL();  
  DukHepFilter::setupPileupTool(m_RunNumber);
  DukHepFilter::setupEnergyRescaler();
  DukHepFilter::setupJetCalibTool(); 
  m_METutil= new METUtility();
  phr.SetMC(!isdata); 
  er.SetMC(!isdata); 
  mur.SetMC(!isdata); 
  er.InitEnergyRescaler(DukHepFilter::m_Rescaler);  
  phr.InitEnergyRescaler(DukHepFilter::m_Rescaler); 
  jr.SetMC(!isdata);
  jr.SetAugust(false); 
  jr.InitCalibTool(DukHepFilter::m_JES); 

  return;
}
void WggEventSelection::BeginInputFile( const SInputData& inputData ) throw( SError ) {
  int intype = STree::INPUT_TREE & STree::EVENT_TREE;
  bool isMC =false;
  if( ( inputData.GetType() == "MC" )) isMC=true; 
  if  (! inputData.GetTrees(intype) ) {
    m_logger << ERROR << "WggEventSelection.h needs an input tree!" << SLogger::endmsg; 
    throw SError( SError::SkipCycle );
  } else if  (inputData.GetTrees(intype)->size() != 1) {
    m_logger << ERROR << "WggEventSelection.h got too many (" << inputData.GetTrees(intype)->size() 
	     << ")input trees."  << SLogger::endmsg; 
    throw SError( SError::SkipCycle );    
  } else {
    TString treename(inputData.GetTrees(intype)->at(0).treeName);
    //macro of commands to read the input tree
    CONNECT( treename.Data() )   
      ;
    if(isMC) 
    CONNECTTRUTH( treename.Data() )   
      ;
    //You might want to read some special branches for this analysis.  You can add them via
    //ConnectVariable( treename.Data(), "branch_name", member_variable );
    //This example allows you to change the trigger via the xml file
    ConnectVariable( treename.Data(), m_prop_triggername1.c_str(), m_LeptonTrigger1  );
    ConnectVariable( treename.Data(), m_prop_triggername2.c_str(), m_LeptonTrigger2  );
    er.ConnectVariables(treename.Data());
    phr.ConnectVariables(treename.Data());
    mur.ConnectVariables(treename.Data());
    jr.ConnectVariables(treename.Data());
  }
  return;
}

///An example user function
void WggEventSelection::IncrementCutFlow() throw ( SError ) {
  if (icutflow < m_cutflow->size())
    ( *m_cutflow )[ icutflow ]++;
  else 
    m_logger << WARNING << "Resize your cut flow! " << SLogger::endmsg;
  h_cutflow->Fill(icutflow++);
}

int WggEventSelection::OverlapRemovalFSR(bool isMC)
{
int reject = 0;
for(int i =0;i<m_mc_pdgId->size();i++)
{
if(m_mc_pdgId->at(i)==22&&m_mc_status->at(i)==1&&m_mc_pt->at(i)>15000)
{
for(int j = 0; j< (*m_mc_parent_index)[i].size();j++){
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
 
float WggEventSelection::METcorrection(const std::vector<TLorentzVector> &els,const std::vector<TLorentzVector> &mus,const std::vector<TLorentzVector> &phs,const std::vector<TLorentzVector> &jets)
{  //MET calibration
  m_logger << VERBOSE << "/** start calculating met correction! **/" << SLogger::endmsg;
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

  for (int i=0;i< els.size();i++){TLorentzVector el = els.at(i) ;el_pt.push_back(el.Pt());el_eta.push_back(el.Eta()),el_phi.push_back(el.Phi());}
  for (int i=0;i< mus.size();i++){TLorentzVector mu = mus.at(i);mu_pt.push_back(mu.Pt());mu_eta.push_back(mu.Eta()),mu_phi.push_back(mu.Phi());}
  for (int i=0;i< phs.size();i++){TLorentzVector ph = phs.at(i);ph_pt.push_back(ph.Pt());ph_eta.push_back(ph.Eta()),ph_phi.push_back(ph.Phi());}
  for (int i=0;i< jets.size();i++){TLorentzVector jet = jets.at(i);jet_pt.push_back(jet.Pt());jet_E.push_back(jet.E());jet_eta.push_back(jet.Eta()),jet_phi.push_back(jet.Phi());}

  m_METutil->setElectronParameters(&el_pt, &el_eta, &el_phi,&(*m_el_MET_wet),&(*m_el_MET_wpx),&(*m_el_MET_wpy),&(*m_el_MET_statusWord)); 
  m_METutil->setPhotonParameters(&ph_pt, &ph_eta, &ph_phi,&(*m_ph_MET_wet), &(*m_ph_MET_wpx), &(*m_ph_MET_wpy),&(*m_ph_MET_statusWord));
//  m_METutil->setMuonParameters(&mu_pt, &mu_eta, &mu_phi,&(*m_mu_staco_MET_wet),&(*m_mu_staco_MET_wpx),&(*m_mu_staco_MET_wpy),&(*m_mu_staco_MET_statusWord));
  m_METutil->setJetParameters(&jet_pt,&jet_eta,&jet_phi,&jet_E,&(*jr.m_JetMET_wet),&(*jr.m_JetMET_wpx),&(*jr.m_JetMET_wpy),&(*jr.m_JetMET_statusWord));
//m_METutil->setJetParameters(&(*m_jet_AntiKt4LCTopo_pt), &(*m_jet_AntiKt4LCTopo_eta),&(*m_jet_AntiKt4LCTopo_phi),&(*m_jet_AntiKt4LCTopo_E),&(*m_jet_AntiKt4LCTopo_MET_wet),&(*m_jet_AntiKt4LCTopo_MET_wpx),&(*m_jet_AntiKt4LCTopo_MET_wpy),&(*m_jet_AntiKt4LCTopo_MET_statusWord));
  m_logger << VERBOSE << "/** initialized met tool! **/" << SLogger::endmsg;
  //=======variable with _et _phi are D3PD branches
  vector<float> xyTmp = XY(m_MET_RefEle_et,m_MET_RefEle_phi) ;
  //TLorentzVector xyTmp;
  //xyTmp.SetPtEtaPhiE(m_MET_RefEle_et,0,m_MET_RefEle_phi,0) ;
  float MET_RefEle_etx = xyTmp.at(0) ;
  float MET_RefEle_ety = xyTmp.at(1) ;
  m_METutil->setMETTerm(METUtil::RefEle, MET_RefEle_etx, MET_RefEle_ety, m_MET_RefEle_sumet);
  xyTmp = XY(m_MET_RefGamma_et,m_MET_RefGamma_phi) ;
//  xyTmp.SetPtEtaPhiE(m_MET_RefGamma_et,0,m_MET_RefGamma_phi,0);
  float MET_RefGamma_etx = xyTmp.at(0) ;
  float MET_RefGamma_ety = xyTmp.at(1) ;
  m_METutil->setMETTerm(METUtil::RefGamma, MET_RefGamma_etx, MET_RefGamma_ety, m_MET_RefGamma_sumet);
  xyTmp = XY(m_MET_RefTau_et,m_MET_RefTau_phi) ;
//  xyTmp.SetPtEtaPhiE(m_MET_RefTau_et,0,m_MET_RefTau_phi,0) ;
  float MET_RefTau_etx = xyTmp.at(0) ;
  float MET_RefTau_ety = xyTmp.at(1) ;
  m_METutil->setMETTerm(METUtil::RefTau, MET_RefTau_etx, MET_RefTau_ety, m_MET_RefTau_sumet);
  xyTmp = XY(m_MET_MuonBoy_et,m_MET_MuonBoy_phi) ;
 // xyTmp.SetPtEtaPhiE(m_MET_MuonBoy_et,0,m_MET_MuonBoy_phi,0) ;
  float MET_MuonBoy_etx = xyTmp.at(0) ;
  float MET_MuonBoy_ety = xyTmp.at(1) ;
  m_METutil->setMETTerm(METUtil::MuonTotal, MET_MuonBoy_etx, MET_MuonBoy_ety, m_MET_MuonBoy_sumet);
  xyTmp = XY(m_MET_CellOut_Eflow_et,m_MET_CellOut_Eflow_phi) ;
  //xyTmp.SetPtEtaPhiE(m_MET_CellOut_Eflow_et,0,m_MET_CellOut_Eflow_phi,0) ;
  float MET_CellOut_Eflow_etx = xyTmp.at(0) ;
  float MET_CellOut_Eflow_ety = xyTmp.at(1) ;
 //m_METutil->setMETTerm(METUtil::CellOutTerms, MET_CellOut_Eflow_etx, MET_CellOut_Eflow_ety, m_MET_CellOut_Eflow_sumet);
 // xyTmp.SetPtEtaPhiE(m_MET_SoftJets_et,0,m_MET_SoftJets_phi,0) ;
  xyTmp = XY(m_MET_SoftJets_et, m_MET_SoftJets_phi) ;
  float MET_SoftJets_etx = xyTmp.at(0) ;
  float MET_SoftJets_ety = xyTmp.at(1) ;
  //m_METutil->setMETTerm(METUtil::SoftTerms, MET_CellOut_Eflow_etx + MET_SoftJets_etx, MET_CellOut_Eflow_ety+MET_SoftJets_ety,m_MET_CellOut_Eflow_sumet + m_MET_SoftJets_sumet); 
  m_METutil->setMETTerm(METUtil::SoftTerms, MET_CellOut_Eflow_etx, MET_CellOut_Eflow_ety,m_MET_CellOut_Eflow_sumet); 
  METUtility::METObject refFinal = m_METutil->getMissingET(METUtil::RefFinal);
  float refFinal_et = refFinal.et();
  return refFinal_et;
}
vector<float> WggEventSelection::XY(float t, float phi) {
vector<float> xy ; 
float x = t*cos(phi) ;
float y = t*sin(phi) ;
xy.push_back(x) ;
xy.push_back(y) ;
return xy ; 
}
///Main analysis function: this is executed for every entry in the tree.
void WggEventSelection::ExecuteEvent( const SInputData &inputData, Double_t xsection_weight) throw( SError ) {
  icutflow=0;
 // flag for isData and study type (cutflow or bkg study)
  bool isdata = false;
  if(( inputData.GetType() == "data" ) || ( inputData.GetType() == "Data" )) isdata = true;
  bool isMC = !isdata; 
  int RunNumber = m_RunNumber; 
  float weight = 1;
  bool isgjet=(m_prop_bkgstudy=="gjet"||m_prop_bkgstudy=="alljet");
  bool isejet=(m_prop_bkgstudy=="ejet"||m_prop_bkgstudy=="alljet");
  //reset output variables
  RESETVAR; 
  RESETVAR_WG; 
  if(isMC) RESETVARTRUTH;
  //---------------------------------------------------------//
  //------------------total number of events-----------------//
  //--------------------add electron filter------------------//
  IncrementCutFlow();
  //---------------------------------------------------------//
  //------------------primary vertex cut---------------------//
  //---------------------------------------------------------//
  if(m_nPVCut)
  {
   if (m_vxp_n < 1 || m_vxp_nTracks->at(0)< 3) throw SError(SError::SkipEvent);
  m_logger << VERBOSE << " event passed npv cut  " << SLogger::endmsg;
  }
  IncrementCutFlow();
  //---------------------------------------------------------//
  ///------------------GRL cut-------------------------------//
  //---------------------------------------------------------//
  if(isdata)
  { 
  if ( ! testGRL(m_RunNumber,m_lbn) )  throw SError( SError::SkipEvent );
  }
  m_logger << VERBOSE << " event passed goodrun cut  " << SLogger::endmsg;
  IncrementCutFlow();

  //---------------------------------------------------------//
  ///------------------FSR veto-------------------------------//
  //---------------------------------------------------------//
  
  int overlap = 0; 
  if(m_FSRveto>0)
  {
  overlap = OverlapRemovalFSR(isMC) ;   
  if(overlap>=m_FSRveto) throw SError (SError::SkipEvent);
  }
  
  //---------------------------------------------------------//
  //--------------------trigger------------------------------//
  //---------------------------------------------------------//
  if( !(m_LeptonTrigger1||m_LeptonTrigger2) ) throw SError( SError::SkipEvent ); 
  m_logger << VERBOSE << "/** event passed trigger cut   **/" << SLogger::endmsg;
  IncrementCutFlow();
  //---------------------------------------------------------//
  //-------------------event cleaning -----------------------//
  //---------------------------------------------------------//
  if (isdata && m_larError==2 ) throw SError( SError::SkipEvent );
  if (isdata && m_tileError==2 ) throw SError( SError::SkipEvent );
  if (isdata && ((m_coreFlags & 0x40000) != 0)) throw SError( SError::SkipEvent );
  IncrementCutFlow();
  m_logger << VERBOSE << "/** event passed event cleaning   **/" << SLogger::endmsg;

  IncrementCutFlow();
  //---------------------------------------------------------//
  //------------loop over electrons electrons----------------//
  //---------------------------------------------------------//
  //count npv
  int npv = 0;
  for(int i = 0;i<m_vxp_n;i++)
  {
  if(m_vxp_nTracks->at(i) >=2 ) npv++; 
  }
  
  int TightElectronCount = 0;
  int MediumElectronCount = 0;
  float corrE;
  float WtMass;
  int LeadingElectron;
  int LeadingElectronIndex;
  int GoodPhotonCount = 0;
  TLorentzVector elv;
  TLorentzVector el_cl_v;
  TLorentzVector ph_lv;

  std::vector<int> TightElectronIndex;
  std::vector<int> MediumElectronIndex;
  std::vector<TLorentzVector> SelectedEls;
  std::vector<TLorentzVector> SelectedClusterEls;
  std::vector<TLorentzVector> SelectedMEls;
  std::vector<int> GoodPhotonIndex;
  std::vector<TLorentzVector> SelectedPhs;
  std::vector<TLorentzVector> SelectedJets;
  std::vector<int> SelectedJetIndex;


  mur.SetNPV(npv);
  mur.SetEventNumber(m_EventNumber);
  er.SetNPV(npv);
  phr.SetNPV(npv);
  er.SetEventNumber(m_EventNumber);
  phr.SetEventNumber(m_EventNumber);
  
  //------------Fill in objects for MET calculation---------//
  std::vector<TLorentzVector> allels;
  std::vector<TLorentzVector> allmus;
  std::vector<TLorentzVector> allphs;
  std::vector<TLorentzVector> alljets;
  m_logger << VERBOSE << "/** begin to loop over muon block   **/" << SLogger::endmsg;
  //for (int i = 0; i<mur.m_NumMuons;i++)
//{
//    TLorentzVector tmp;  
 //   mur.FillMuonFourMomentum(i,tmp);
  //  allmus.push_back(tmp);
//}
  //---------------------------------------------------------//
  // electron selection, at least one good electron with pt>25GeV//
  //---------------------------------------------------------//

  m_logger << VERBOSE << "/** begin to loop over electron block   **/" << SLogger::endmsg;

  for (int i = 0; i<er.m_NumElectrons;i++)
  {
 
  bool TightElectron = er.IsGoodElectronEWKW(i,m_LeptonPt,Ecounter,isejet); 
  bool MediumElectron = er.IsGoodElectronEWKZ(i,10000,false); 

  m_logger << VERBOSE << "/** finding tight++ electron! **/" << SLogger::endmsg;
  m_logger << VERBOSE << "/** finding medium++ electron! **/" << SLogger::endmsg;
  
  TLorentzVector tmp = er.FillElectronFourMomentum(i);
  float elpt_corr = tmp.Pt();
  TLorentzVector tmpd3pd;
  tmpd3pd.SetPtEtaPhiE(tmp.Pt(),er.m_ElectronEta->at(i),er.m_ElectronPhi->at(i),tmp.E()); 
  allels.push_back(tmpd3pd);
 
  if(TightElectron) {
     TightElectronCount++;
     TightElectronIndex.push_back(i);
     SelectedEls.push_back(tmp);
     }
  if(MediumElectron) {
   MediumElectronCount++;MediumElectronIndex.push_back(i);
   SelectedMEls.push_back(tmp);
  }  
  }

  if(m_LeptonCut&&TightElectronCount < 1) throw SError(SError::SkipEvent);
  IncrementCutFlow();
  m_logger << VERBOSE << "/** found tight++ electron! **/" << SLogger::endmsg;
  if(m_LeptonVeto&&MediumElectronCount>1) throw SError(SError::SkipEvent);
  IncrementCutFlow();
  LeadingElectron = AnalysisUtils::LeadingPtParticle(SelectedEls);
  LeadingElectronIndex = TightElectronIndex.at(LeadingElectron);

  //---------------------------------------------------------//
  //select/counting good photons//
  //---------------------------------------------------------//
  m_logger << VERBOSE << "/** finding good photons **/" << SLogger::endmsg;
  for(int i=0;i<SelectedEls.size();i++){TLorentzVector tmp; tmp.SetPtEtaPhiE(SelectedEls.at(i).Pt(),er.m_ElectronClusterEta->at(i),er.m_ElectronClusterPhi->at(i),SelectedEls.at(i).E());SelectedClusterEls.push_back(tmp);}
  el_cl_v.SetPtEtaPhiE(1,er.m_ElectronClusterEta->at(LeadingElectronIndex),er.m_ElectronClusterPhi->at(LeadingElectronIndex),1);

  for(int i = 0;i < phr.m_NumPhotons;i++)
  {
  TLorentzVector tmp = phr.PhotonFourVector(i);
  allphs.push_back(tmp); 
 if(phr.IsGoodPhoton(i,m_PhotonPt,isgjet,Phcounter))
 {
  TLorentzVector ph_cl_v;
  ph_cl_v.SetPtEtaPhiE(1,phr.m_PhotonClusterEta->at(i),phr.m_PhotonClusterPhi->at(i),1);  
  double dreg=el_cl_v.DeltaR(ph_cl_v);  
 //if(isejet||(!isejet&&(tmp.DeltaR(elv) >= m_dRLeptonGammaCut)))
  if(isejet||(!isejet&&(dreg>= m_dRLeptonGammaCut)))
  {
  GoodPhotonCount++;GoodPhotonIndex.push_back(i);
  SelectedPhs.push_back(tmp); 
  }
}  
}
///fill in jets for MET calculation
for(int i = 0;i<jr.m_JetPt->size();i++)
{
TLorentzVector tmp;
tmp = jr.CorrectedJet(i,!isdata,npv,m_averageIntPerXing);
float pt = tmp.Pt();
TLorentzVector calibratedjet;
calibratedjet.SetPtEtaPhiE(pt,jr.m_JetEta_d3pd->at(i),jr.m_JetPhi_d3pd->at(i),jr.m_JetE_d3pd->at(i));
alljets.push_back(tmp);
}
  //---------------------------------------------------------//
  //MET cut//
  //---------------------------------------------------------//

  float MET_x = m_MET_RefFinal_et*TMath::Cos(m_MET_RefFinal_phi);
  float MET_y = m_MET_RefFinal_et*TMath::Sin(m_MET_RefFinal_phi);
  float MET = sqrt(MET_x*MET_x+MET_y*MET_y);
  float METcorr = METcorrection(allels,allmus,allphs,alljets); 
/////////////------make object selection cuts------/////////////////////////
  if (!isejet&&MET< m_MetCut) throw SError(SError::SkipEvent); 
  IncrementCutFlow();
  //---------------------------------------------------------//
  //select leading pt electron. requiring transverse mass > 40GeV
  //---------------------------------------------------------//
  elv = SelectedEls.at(LeadingElectron);
  TLorentzVector METv;
  METv.SetPxPyPzE(MET_x,MET_y,0,MET); 
  if(m_MtCut){
  m_logger << VERBOSE << "/** found leading pt electron! **/" << SLogger::endmsg;
  float px = elv.Px();
  float py = elv.Py();
  float Et = sqrt(px*px+py*py);
  TLorentzVector elv_t;
  elv_t.SetPxPyPzE(px,py,0,Et);
  METv.SetPxPyPzE(MET_x,MET_y,0,MET); 
  if ((MET+Et)*(MET+Et)-(px+MET_x)*(px+MET_x)-(py+MET_y)*(py+MET_y)<0)  throw SError(SError::SkipEvent);
  WtMass = sqrt((MET+Et)*(MET+Et)-(px+MET_x)*(px+MET_x)-(py+MET_y)*(py+MET_y));
  if(!isejet&&WtMass<m_MtCut) throw SError(SError::SkipEvent);  
  }
  IncrementCutFlow();
  if((m_PhotonIDCut&&GoodPhotonCount < 1)) throw SError(SError::SkipEvent);
  IncrementCutFlow();
  if((m_PhotonIDCut&&GoodPhotonCount < 2)) throw SError(SError::SkipEvent);
  IncrementCutFlow();
  AnalysisUtils::SortParticlesPt(GoodPhotonIndex,SelectedPhs);
  int leadingPtPhoton = GoodPhotonIndex.at(0);
  TLorentzVector ph_tmp_v;
  ph_tmp_v.SetPtEtaPhiE(phr.m_PhotonClusterPt->at(leadingPtPhoton),phr.m_PhotonClusterEta->at(leadingPtPhoton),phr.m_PhotonClusterPhi->at(leadingPtPhoton),1);
  //if((el_cl_v.DeltaR(ph_tmp_v)<=0.7)) throw SError(SError::SkipEvent);
  int sleadingPtPhoton = GoodPhotonIndex.at(1);
  //check if leading pt photon is isolated
           
 double leadIso = phr.CorrectedIso(leadingPtPhoton,1,40); 
 double sleadIso = phr.CorrectedIso(sleadingPtPhoton,1,40); 

 if(!isgjet&&(leadIso >= m_PhotonIsoValue || sleadIso >= m_PhotonIsoValue)) throw SError(SError::SkipEvent);
                        m_logger<<INFO<< "Event number: " << m_EventNumber << " RunNumber: " << m_RunNumber << " Eta_pho1: " << setprecision(4) << SelectedPhs.at(0).Eta()
                             << " Phi_pho1: " << setprecision(4) << SelectedPhs.at(0).Phi()
                                    //<< " E_pho1 " << setprecision(2) << SelectedPhs.at(0).E() 
                                    << " E_pho1 " <<  SelectedPhs.at(0).E() 
                                          << " Pt_pho1 " << SelectedPhs.at(0).Pt() << SLogger::endmsg;
                                             m_logger<<INFO << "Event number: " << m_EventNumber << " RunNumber: " << m_RunNumber << " Eta_pho2: " << setprecision(4) << SelectedPhs.at(1).Eta()
                                                          << " Phi_pho2: " << setprecision(4) << SelectedPhs.at(1).Phi() 
                                                                  << " E_pho2 " << SelectedPhs.at(1).E() 
                                                                  //<< " E_pho2 " << setprecision(2) << SelectedPhs.at(1).E() 
                                                                        << " Pt_pho2 " << SelectedPhs.at(1).Pt() << SLogger::endmsg ;
                                                                        //<< " Pt_pho2 " << setprecision(2) << SelectedPhs.at(1).Pt() << SLogger::endmsg ;
 IncrementCutFlow();
//--bad jet veto --event cleaning---//
//---counting jets----///
int overlapwithbadjets = 0;
for(int i = 0;i<jr.m_JetPt->size();i++)
{
TLorentzVector tmp;
TLorentzVector tmp_em;
tmp = jr.CorrectedJet(i,!isdata,npv,m_averageIntPerXing);
tmp_em.SetPtEtaPhiE(jr.m_JetPt->at(i),jr.m_JetEta->at(i),jr.m_JetPhi->at(i),jr.m_JetE->at(i));
m_logger << VERBOSE << "/** calibrating jets   **/" << SLogger::endmsg;
if(tmp_em.DeltaR(el_cl_v)>0.3&&tmp_em.DeltaR(SelectedPhs.at(0))>0.3&&tmp_em.DeltaR(SelectedPhs.at(1))>0.3&&tmp.Pt()>20000&&(jr.IsLooserBadJet(tmp.Pt(),tmp.Eta(),i)||jr.isHotTile(RunNumber,i))) overlapwithbadjets++;
//if(jr.IsSelectedJet(i,!isdata,npv,m_averageIntPerXing)&&!(jr.IsLooserBadJet(tmp.Pt(),tmp.Eta(),i)||jr.isHotTile(RunNumber,i))&&AnalysisUtils::DrPassed(SelectedPhs,tmp,0.3)&&AnalysisUtils::DrPassed(SelectedEls,tmp,0.3))
if(jr.IsSelectedJet(i,!isdata,npv,m_averageIntPerXing,Jetcounter)&&!(jr.IsLooserBadJet(tmp.Pt(),tmp.Eta(),i))&&AnalysisUtils::DrPassed(SelectedPhs,tmp_em,0.3)&&AnalysisUtils::DrPassed(SelectedClusterEls,tmp_em,0.3))
//if(jr.IsSelectedJet(i,!isdata,npv,m_averageIntPerXing)&&!(jr.IsLooserBadJet(tmp.Pt(),tmp.Eta(),i))&&AnalysisUtils::DrPassed(SelectedClusterEls,tmp_em,0.3))
//if(jr.IsSelectedJet(i,!isdata,npv,m_averageIntPerXing)&&!(jr.IsLooserBadJet(tmp.Pt(),tmp.Eta(),i)))
//if(jr.IsSelectedJet(i,!isdata,npv,m_averageIntPerXing)&&AnalysisUtils::DrPassed(SelectedClusterEls,tmp_em,0.3))
{
SelectedJetIndex.push_back(i);
SelectedJets.push_back(tmp);
}
}

  if(overlapwithbadjets>0) throw SError(SError::SkipEvent);

  IncrementCutFlow();
  AnalysisUtils::SortParticlesPt(SelectedJetIndex,SelectedJets);
//--additional kinematic cuts--------------// 
  m_logger << VERBOSE << "/** saving jets   **/" << SLogger::endmsg;
//}
  m_logger << VERBOSE << "/** move to the second one   **/" << SLogger::endmsg;
//}
  m_logger << VERBOSE << "/** Everything done   **/" << SLogger::endmsg;
if(!(isejet||isgjet)){
if(SelectedPhs.at(0).DeltaR(SelectedEls.at(0))< 0.7||SelectedPhs.at(1).DeltaR(SelectedEls.at(0))< 0.7||SelectedPhs.at(0).DeltaR(SelectedPhs.at(1))< 0.4) throw SError(SError::SkipEvent); 
//if(SelectedPhs.at(0).DeltaR(SelectedPhs.at(1))<=0.4) throw SError(SError::SkipEvent); 
  IncrementCutFlow();
if((SelectedPhs.at(0)+SelectedPhs.at(1)+SelectedEls.at(0)).M()>81200&&(SelectedPhs.at(0)+SelectedPhs.at(1)+SelectedEls.at(0)).M()<96200) throw SError(SError::SkipEvent);  
  IncrementCutFlow();
if((SelectedPhs.at(0)+SelectedEls.at(0)).M()>81200&&(SelectedPhs.at(0)+SelectedEls.at(0)).M()<94200) throw SError(SError::SkipEvent); 
  IncrementCutFlow();
if((SelectedPhs.at(1)+SelectedEls.at(0)).M()>86200&&(SelectedPhs.at(1)+SelectedEls.at(0)).M()<94200) throw SError(SError::SkipEvent); 
  IncrementCutFlow();
if((SelectedPhs.at(0)+SelectedPhs.at(1)+SelectedEls.at(0)).Pt()<30000) throw SError(SError::SkipEvent);  
IncrementCutFlow();
}
  //----------------------------------------------------------//
  //------------------the END of selection--------------------//
  //---------------------save events--------------------------//
  //----------------------------------------------------------//
o_m_nJets = SelectedJets.size();
 for(int i =0; i< SelectedJets.size();i++){
o_m_JetE.push_back(SelectedJets.at(i).E());
o_m_JetPt.push_back(SelectedJets.at(i).Pt());
o_m_JetEta.push_back(SelectedJets.at(i).Eta());
o_m_JetPhi.push_back(SelectedJets.at(i).Phi());
int jetindex = SelectedJetIndex.at(i);
o_m_Jet_em_E.push_back(jr.m_JetE->at(i));
o_m_Jet_em_Pt.push_back(jr.m_JetPt->at(i));
o_m_Jet_em_Eta.push_back(jr.m_JetEta->at(i));
o_m_Jet_em_Phi.push_back(jr.m_JetPhi->at(i));
}
 for(int i=0;i<SelectedEls.size();i++)
{ 
  m_logger << VERBOSE << "/** save electrons   **/" << SLogger::endmsg;
 o_m_TightLeptons_E.push_back(SelectedEls.at(i).E());
 o_m_TightLeptons_Pt.push_back(SelectedEls.at(i).Pt());
 o_m_TightLeptons_Eta.push_back(SelectedEls.at(i).Eta());
 o_m_TightLeptons_Phi.push_back(SelectedEls.at(i).Phi());
 
 o_m_TightLeptons_cl_Pt.push_back(er.m_ElectronClusterPt->at(TightElectronIndex.at(i)));
 o_m_TightLeptons_cl_Eta.push_back(er.m_ElectronClusterEta->at(TightElectronIndex.at(i)));
 o_m_TightLeptons_cl_Phi.push_back(er.m_ElectronClusterPhi->at(TightElectronIndex.at(i)));
 o_m_TightLeptons_cl_E.push_back(er.m_ElectronClusterE->at(TightElectronIndex.at(i)));
 o_m_TightLeptons_Charge.push_back(er.m_ElectronCharge->at(TightElectronIndex.at(i)));

double corrected_isolation;
corrected_isolation=er.GetElectronIso(TightElectronIndex.at(i),0,20);
o_m_TightLeptonsEtConeIso20.push_back(corrected_isolation);
corrected_isolation=er.GetElectronIso(TightElectronIndex.at(i),0,30);
o_m_TightLeptonsEtConeIso30.push_back(corrected_isolation);
corrected_isolation=er.GetElectronIso(TightElectronIndex.at(i),0,40);
o_m_TightLeptonsEtConeIso40.push_back(corrected_isolation);
corrected_isolation=er.GetElectronIso(TightElectronIndex.at(i),1,20);
o_m_TightLeptonsTopoIso20.push_back(corrected_isolation);
corrected_isolation=er.GetElectronIso(TightElectronIndex.at(i),1,30);
o_m_TightLeptonsTopoIso30.push_back(corrected_isolation);
corrected_isolation=er.GetElectronIso(TightElectronIndex.at(i),1,40);
o_m_TightLeptonsTopoIso40.push_back(corrected_isolation);
o_m_TightLeptonsPtConeIso20.push_back(er.m_ElectronPtcone20->at(TightElectronIndex.at(i)));
o_m_TightLeptonsPtConeIso30.push_back(er.m_ElectronPtcone30->at(TightElectronIndex.at(i)));
o_m_TightLeptonsPtConeIso40.push_back(er.m_ElectronPtcone40->at(TightElectronIndex.at(i)));
float lepsf = 1;
int set=35;
if(isMC) set=36;
std::pair<float,float> sf_error;
//sf_error = er.GetScaleFactor(TightElectronIndex.at(i),set,m_RunNumber); 
lepsf = sf_error.first;
o_m_TightLeptonsScale.push_back(lepsf);
} 
 for(int i=0;i<SelectedMEls.size();i++)
{
 o_m_MediumLeptons_E.push_back(SelectedMEls.at(i).E());
 o_m_MediumLeptons_Pt.push_back(SelectedMEls.at(i).Pt());
 o_m_MediumLeptons_Eta.push_back(SelectedMEls.at(i).Eta());
 o_m_MediumLeptons_Phi.push_back(SelectedMEls.at(i).Phi());
 o_m_MediumLeptons_Charge.push_back(er.m_ElectronCharge->at(MediumElectronIndex.at(i)));

 o_m_MediumLeptons_cl_Pt.push_back(er.m_ElectronClusterPt->at(MediumElectronIndex.at(i)));
 o_m_MediumLeptons_cl_Eta.push_back(er.m_ElectronClusterEta->at(MediumElectronIndex.at(i)));
 o_m_MediumLeptons_cl_Phi.push_back(er.m_ElectronClusterPhi->at(MediumElectronIndex.at(i)));
 o_m_MediumLeptons_cl_E.push_back(er.m_ElectronClusterE->at(MediumElectronIndex.at(i)));
 double corrected_isolation;

corrected_isolation=er.GetElectronIso(MediumElectronIndex.at(i),0,20);
o_m_MediumLeptonsEtConeIso20.push_back(corrected_isolation);
corrected_isolation=er.GetElectronIso(MediumElectronIndex.at(i),0,30);
o_m_MediumLeptonsEtConeIso30.push_back(corrected_isolation);
corrected_isolation=er.GetElectronIso(MediumElectronIndex.at(i),0,40);
o_m_MediumLeptonsEtConeIso40.push_back(corrected_isolation);
corrected_isolation=er.GetElectronIso(MediumElectronIndex.at(i),1,20);
o_m_MediumLeptonsTopoIso20.push_back(corrected_isolation);
corrected_isolation=er.GetElectronIso(MediumElectronIndex.at(i),1,30);
o_m_MediumLeptonsTopoIso30.push_back(corrected_isolation);
corrected_isolation=er.GetElectronIso(MediumElectronIndex.at(i),1,40);
o_m_MediumLeptonsTopoIso40.push_back(corrected_isolation);

o_m_MediumLeptonsPtConeIso20.push_back(er.m_ElectronPtcone20->at(MediumElectronIndex.at(i)));
o_m_MediumLeptonsPtConeIso30.push_back(er.m_ElectronPtcone30->at(MediumElectronIndex.at(i)));
o_m_MediumLeptonsPtConeIso40.push_back(er.m_ElectronPtcone40->at(MediumElectronIndex.at(i)));
float lepsf = 1;
int set=35;
if(isMC) set=36;
std::pair<float,float> sf_error;
//sf_error = er.GetScaleFactor(MediumElectronIndex.at(i),set,m_RunNumber); 
lepsf = sf_error.first;
o_m_MediumLeptonsScale.push_back(lepsf);
} 
 for(int i=0;i<SelectedPhs.size();i++)
{
 m_logger << VERBOSE << "/** save photons   **/" << SLogger::endmsg;
 o_m_GoodPhotons_E.push_back(SelectedPhs.at(i).E());
 o_m_GoodPhotons_Pt.push_back(SelectedPhs.at(i).Pt());
 o_m_GoodPhotons_Eta.push_back(SelectedPhs.at(i).Eta());
 o_m_GoodPhotons_Phi.push_back(SelectedPhs.at(i).Phi());

 int phindex=GoodPhotonIndex.at(i);
 o_m_GoodPhotons_cl_Pt.push_back(phr.m_PhotonClusterPt->at(phindex));
 o_m_GoodPhotons_cl_Eta.push_back(phr.m_PhotonClusterEta->at(phindex));
 o_m_GoodPhotons_cl_Phi.push_back(phr.m_PhotonClusterPhi->at(phindex));
 o_m_GoodPhotons_cl_E.push_back(phr.m_PhotonClusterE->at(phindex));
 double correctedIso;

if(isMC) {
o_m_GoodPhotonsPDGID.push_back(m_ph_truth_type->at(phindex));
o_m_GoodPhotonsMother.push_back(m_ph_truth_mothertype->at(phindex));
}
 correctedIso=phr.CorrectedIso(phindex,0,20); 
 o_m_GoodPhotonEtConeIso20.push_back(correctedIso); 
 correctedIso=phr.CorrectedIso(phindex,0,30); 
 o_m_GoodPhotonEtConeIso30.push_back(correctedIso); 
 correctedIso=phr.CorrectedIso(phindex,0,40); 
 o_m_GoodPhotonEtConeIso40.push_back(correctedIso); 
 correctedIso=phr.CorrectedIso(phindex,1,20); 
 o_m_GoodPhotonTopoIso20.push_back(correctedIso); 
 correctedIso=phr.CorrectedIso(phindex,1,30); 
 o_m_GoodPhotonTopoIso30.push_back(correctedIso); 
 correctedIso=phr.CorrectedIso(phindex,1,40); 
 o_m_GoodPhotonTopoIso40.push_back(correctedIso); 
//save track isolation 
 o_m_GoodPhotonPtConeIso20.push_back(phr.m_PhotonPtCone20->at(GoodPhotonIndex.at(i)));
 o_m_GoodPhotonPtConeIso30.push_back(phr.m_PhotonPtCone30->at(GoodPhotonIndex.at(i)));
 o_m_GoodPhotonPtConeIso40.push_back(phr.m_PhotonPtCone40->at(GoodPhotonIndex.at(i)));
//save track isolation 
 o_m_GoodPhotonPtConeIso20.push_back(phr.m_PhotonPtCone20->at(GoodPhotonIndex.at(i)));
 o_m_GoodPhotonPtConeIso30.push_back(phr.m_PhotonPtCone30->at(GoodPhotonIndex.at(i)));
 o_m_GoodPhotonPtConeIso40.push_back(phr.m_PhotonPtCone40->at(GoodPhotonIndex.at(i)));
 m_logger << VERBOSE << "/** save photons track isolation  **/" << SLogger::endmsg;
 std::vector<double> showershapes=phr.PhotonShowerShapes(GoodPhotonIndex.at(i));
 std::vector<int> conversions;
 //conversions.push_back(m_ph_isConv->at(GoodPhotonIndex.at(i)));
 conversions.push_back(m_ph_nSingleTrackConv->at(GoodPhotonIndex.at(i)));
 conversions.push_back(m_ph_nDoubleTrackConv->at(GoodPhotonIndex.at(i)));
 o_m_GoodPhotons_conversion.push_back( conversions); 
 o_m_GoodPhotons_showershape.push_back(showershapes);
} 
  o_m_METx=MET_x;
  o_m_METy=MET_y;
  //o_m_MET=sqrt(MET_y*MET_y+MET_x*MET_x);
  o_m_MET=METcorr;
  o_m_Mt = WtMass;
  o_m_Mlg.push_back((SelectedEls.at(0)+SelectedPhs.at(0)).M());
  o_m_Mlg.push_back((SelectedEls.at(0)+SelectedPhs.at(1)).M());
  o_m_Mgg=(SelectedPhs.at(0)+SelectedPhs.at(1)).M();
  o_m_Mlgg=(SelectedPhs.at(0)+SelectedPhs.at(1)+SelectedEls.at(0)).M();
  o_m_dRgg=SelectedPhs.at(0).DeltaR(SelectedPhs.at(1));
  o_m_Ptgg=(SelectedPhs.at(0)+SelectedPhs.at(1)).Pt();
  o_m_Ptlgg=(SelectedPhs.at(0)+SelectedPhs.at(1)+SelectedEls.at(0)).Pt();
  o_m_PtlggMET=(SelectedPhs.at(0)+SelectedPhs.at(1)+SelectedEls.at(0)+METv).Pt();
  o_m_PtlggMETx=(SelectedPhs.at(0)+SelectedPhs.at(1)+SelectedEls.at(0)+METv).Px();
  o_m_PtlggMETy=(SelectedPhs.at(0)+SelectedPhs.at(1)+SelectedEls.at(0)+METv).Py();
  o_m_Ptlg.push_back((SelectedEls.at(0)+SelectedPhs.at(0)).Pt());
  o_m_Ptlg.push_back((SelectedEls.at(0)+SelectedPhs.at(1)).Pt());
  o_m_Phigg=(SelectedPhs.at(0)+SelectedPhs.at(1)).Phi();
  o_m_Philgg=(SelectedPhs.at(0)+SelectedPhs.at(1)+SelectedEls.at(0)).Phi();
  o_m_Philg.push_back((SelectedEls.at(0)+SelectedPhs.at(0)).Phi());
  o_m_Philg.push_back((SelectedEls.at(0)+SelectedPhs.at(1)).Phi());
  o_m_Etagg=(SelectedPhs.at(0)+SelectedPhs.at(1)).Eta();
  o_m_Etalgg=(SelectedPhs.at(0)+SelectedPhs.at(1)+SelectedEls.at(0)).Eta();
  o_m_Etalg.push_back((SelectedEls.at(0)+SelectedPhs.at(0)).Eta());
  o_m_Etalg.push_back((SelectedEls.at(0)+SelectedPhs.at(1)).Eta());
  o_m_dRlg.push_back(SelectedPhs.at(0).DeltaR(SelectedEls.at(0)));
  o_m_dRlg.push_back(SelectedPhs.at(1).DeltaR(SelectedEls.at(0)));
  m_logger << VERBOSE << "/** save MET   **/" << SLogger::endmsg;
  o_m_weights.push_back(xsection_weight);
 float combinedweight = 1;
//save pileup weight : weights[1]
if(isMC) 
{
  combinedweight = DukHepFilter::m_pileupTool->GetCombinedWeight(m_RunNumber,m_mc_channel_number,m_averageIntPerXing); 
  m_logger << VERBOSE << "/** get combined weight   **/" << SLogger::endmsg;
}
//float zvertexweight = ZVertexTool->GetWeight(m_vxp_z);
  o_m_weights.push_back(combinedweight);
  m_logger << VERBOSE << "/** save truth info   **/" << SLogger::endmsg;
//o_m_weights.push_back(zvertexweight);
 COPYVAR_WG
    ;  
 if(isMC) COPYVARTRUTH
    ;  
 return;
}

void WggEventSelection::EndMasterInputData( const SInputData& ) throw( SError ) {
 for(int i =0;i<10;i++){
//  h_Ecutflow->SetBinContent(i,(*Ecounter)[i]);
 }   
 for(int i = 0; i<7;i++)
 {
// h_Phcutflow->SetBinContent(i,(*Phcounter)[i]); 
 }

 m_logger << INFO << "End of input data." << SLogger::endmsg;
  if ( m_cutflow->size() !=0 ) 
 {
  /*  m_logger << INFO << "(C0)  Number of input events:                       " << ( *m_cutflow )[ 0 ] <<"  Cut Efficiency: "<<( *m_cutflow )[ 0 ]/( *m_cutflow )[ 0 ]<<SLogger::endmsg;
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
*/  
}     
    else {
    m_logger << WARNING << "It looks like your job didn't run." << SLogger::endmsg;
    }
/* 
    m_logger << INFO << "(C0)  Number of total electrons:                       " << ( *Ecounter )[ 0 ] <<"  Cut Efficiency: "<<( *Ecounter )[ 0 ]/( *Ecounter )[ 0 ]<<SLogger::endmsg;
    m_logger << INFO << "(C1)  Number of electrons with author==1or3:        " << ( *Ecounter )[ 1 ] <<"  Cut Efficiency: "<<( *Ecounter )[ 1 ]/( *Ecounter )[ 0 ]<<SLogger::endmsg;
    m_logger << INFO << "(C2)  Number of electrons passing pt cut:      " << ( *Ecounter )[ 2 ] <<"  Cut Efficiency: "<<( *Ecounter )[ 2 ]/( *Ecounter )[ 1 ]<< SLogger::endmsg;
    m_logger << INFO << "(C3)  Number of electrons passing eta cut            " << ( *Ecounter )[ 3 ] <<"  Cut Efficiency: "<<( *Ecounter )[ 3 ]/( *Ecounter )[ 2 ]<< SLogger::endmsg;
    m_logger << INFO << "(C4)  Number of electrons passing OQ cut         " << ( *Ecounter )[ 4 ] <<"  Cut Efficiency: "<<( *Ecounter )[ 4 ]/( *Ecounter )[ 3 ]<< SLogger::endmsg;
    m_logger << INFO << "(C5)  Number of electrons passing Tight++:        " << ( *Ecounter )[ 5 ] <<"  Cut Efficiency: "<<( *Ecounter )[ 5 ]/( *Ecounter )[ 4 ]<< SLogger::endmsg;
    m_logger << INFO << "(C6)  Number of electrons passing z0 cut:       " << ( *Ecounter )[ 6 ] <<"  Cut Efficiency: "<<( *Ecounter )[ 6 ]/( *Ecounter )[ 5 ]<< SLogger::endmsg;
    m_logger << INFO << "(C7)  Number of electrons passing D0 cut:" << ( *Ecounter )[ 7 ] <<"  Cut Efficiency: "<<( *Ecounter )[ 7 ]/( *Ecounter )[ 6 ]<< SLogger::endmsg;
    m_logger << INFO << "(C8)  Number of electrons passing etCone cut :             " << ( *Ecounter )[ 8 ] <<"  Cut Efficiency: "<<( *Ecounter )[ 8 ]/( *Ecounter )[ 7 ]<< SLogger::endmsg;
    m_logger << INFO << "(C9)  Number of electrons passing PtCone cut:             " << ( *Ecounter )[ 9 ] <<"  Cut Efficiency: "<<( *Ecounter )[ 9 ]/( *Ecounter )[ 8 ]<< SLogger::endmsg;
   
  */  return;
}
