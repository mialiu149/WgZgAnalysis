// Localinclude(s):
// $Id: ZmmgammaEventSelection.cxx 126811 2013-01-15 20:25:36Z mliu $
#include "../include/ZmmgammaEventSelection.h"
#include <utility>


ClassImp( ZmmgammaEventSelection );

ZmmgammaEventSelection::ZmmgammaEventSelection()
  : DukHepFilter(), 
    m_cutflow( "cutflow", this ),
    m_cutflow1( "cutflow1", this ),
    Mcounter("muflow",this),
    Phcounter("Phflow",this),
    Ecounter("eflow",this),
    icutflow(0), 
    icutflow1(0), 
    h_cutflow(0),
    h_cutflow1(0),
    h_Mcutflow(0),
    h_Phcutflow(0),
    h_Ecutflow(0),
    mur(this, "mu_staco"),
    phr(this),
    er(this),
    jr(this,"jet_AntiKt4LCTopo"),
    m_JetNum(0),
	m_JetE(0),
	m_JetPt(0),
	m_JetM(0),
	m_JetPhi(0),
	m_JetEta(0),
    //Macro initializing the stl vectors that access the tree 
    INIT_NULLS_CTOR
{
  //example job properties (sends data to your job via the xml file)
  DeclareProperty( "IgnoreGRL", m_prop_skipgrl );
  DeclareProperty( "TriggerName1", m_prop_triggername1 );
  DeclareProperty( "TriggerName2", m_prop_triggername2 );
  DeclareProperty( "TriggerName3", m_prop_triggername3 );
  DeclareProperty( "TriggerName4", m_prop_triggername4 );
  DeclareProperty( "PhotonIsolation", m_prop_phisoname );
  DeclareProperty( "nPVCut", m_nPVCut);
  DeclareProperty( "Trigger",m_Trigger);
  DeclareProperty( "LeptonPt",m_LeptonPt);
  DeclareProperty( "LeptonCut",m_LeptonCut);
  DeclareProperty( "LeptonOSCut",m_LeptonOSCut);
  DeclareProperty( "ZmassCut1",m_ZmassCut1);
  DeclareProperty( "ZmassCut2",m_ZmassCut2);
  DeclareProperty( "PhotonPt",m_PhotonPt);
  DeclareProperty( "PhotonIDCut",m_PhotonIDCut);
  DeclareProperty( "dRLeptonGammaCut",m_dRLeptonGammaCut);
  DeclareProperty( "dRGammaGammaCut",m_dRGammaGammaCut); 
  DeclareProperty( "PhotonIsoValue",m_PhotonIsoValue);
  SetLogName( GetName() );
}

ZmmgammaEventSelection::~ZmmgammaEventSelection() {
}

void ZmmgammaEventSelection::BeginCycle() throw( SError ) {
  return;
}

void ZmmgammaEventSelection::BeginInputData( const SInputData& inputData ) throw( SError ) {
	
  //say something
  m_logger << DEBUG << "Hello from BeginInputData." << SLogger::endmsg;
  //macro of commands to set up the output tree (delete if you don't want an output tree)
  //DIFFERENCE
  DECLARE_WG("dummy")
    ;
  //do any needed initialization here.
  m_cutflow->resize(15,0); 
  m_cutflow1->resize(15,0); 
  Ecounter->resize(20,0);
  Mcounter->resize(15,0); 
  Phcounter->resize(8,0); 
  h_cutflow = Book(TH1F("cf","Cut flow",15,-0.5,14.5 ));  
  h_cutflow1 = Book(TH1F("cf1","Cut flow Loose",17,-0.5,16.5 )); 
  h_Mcutflow = Book(TH1F("cf_mu","mu Cut flow",14,-0.5,14.5 ));  
  h_Phcutflow = Book(TH1F("cf_ph","ph Cut flow",8,-0.5,7.5 ));  
  h_Ecutflow = Book(TH1F("cf_true","true Cut flow",10,-0.5,9.5 ));

  if( ( inputData.GetType() == "data" ) || ( inputData.GetType()== "Data" )) isdata=true; 
else{
isdata= false;
}
  
  // I don't really trust the xml file to correctly tell my code if its data or not, so I do it here:
isMC = !isdata; 
// isTruth is a boolean which switches on the Truth branches (as well as MC jet analyses)
isTruth = true;
 m_logger << DEBUG << "Hello from Begininit energyrescaler." << SLogger::endmsg;
  ///////pileup reweighting/////////////////
  ////
  DukHepFilter::setMC(!isdata);
  DukHepFilter::setupGRL();  
  DukHepFilter::setupPileupTool(m_RunNumber);
  DukHepFilter::setupEnergyRescaler();
  DukHepFilter::setupJetCalibTool(); 
  DukHepFilter::setupMuonSF();
  DukHepFilter::setupMuonSmearing();

  mur.SetMC(isMC);
  phr.SetMC(isMC);
  er.SetMC(isMC);
  er.InitEnergyRescaler(DukHepFilter::m_Rescaler);  
  phr.InitEnergyRescaler(DukHepFilter::m_Rescaler);  
  jr.SetMC(isMC);
  jr.SetAugust(true);
  jr.InitCalibTool(DukHepFilter::m_JES); 
  
  DRcut = 0;
   
 //phr.m_Rescaler = new egRescaler::EnergyRescalerUpgrade();
 //phr.m_Rescaler->Init("/home/jvm8/packages/egammaAnalysisUtils/share/EnergyRescalerData.root","2012","es2012");
//note for jack: moved the initialization of energy rescaler into the analysis cycle

  return;
}

void ZmmgammaEventSelection::BeginInputFile( const SInputData& inputData ) throw( SError ) {
int intype = STree::INPUT_TREE & STree::EVENT_TREE;
  if  (! inputData.GetTrees(intype) ) {
    m_logger << ERROR << "ZmmgammaEventSelection needs an input tree!" << SLogger::endmsg; 
    throw SError( SError::SkipCycle );
  } else if  (inputData.GetTrees(intype)->size() != 1) {
    m_logger << ERROR << "ZmmgammaEventSelection got too many (" << inputData.GetTrees(intype)->size() 
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
    ConnectVariable( treename.Data(), m_prop_triggername3.c_str(), m_LeptonTrigger3  );
    ConnectVariable( treename.Data(), m_prop_triggername4.c_str(), m_LeptonTrigger4  );
    ConnectVariable( treename.Data(), m_prop_phisoname.c_str(), m_PhotonIsolation  );
    
    mur.ConnectVariables(treename.Data());
    phr.ConnectVariables(treename.Data());
    er.ConnectVariables(treename.Data());
    jr.ConnectVariables(treename.Data());
  }
  return;
}

///An example user function
void ZmmgammaEventSelection::IncrementCutFlow() throw ( SError ) {
 if (icutflow < m_cutflow->size())
    ( *m_cutflow )[ icutflow ]++;
  else 
    m_logger << WARNING << "Resize your cut flow! " << SLogger::endmsg;
  h_cutflow->Fill(icutflow++);
}
void ZmmgammaEventSelection::IncrementLooseCutFlow() throw ( SError ) {
 if (icutflow1 < m_cutflow1->size())
    ( *m_cutflow1 )[ icutflow1 ]++;
  else 
    m_logger << WARNING << "Resize your cut flow!!! " << SLogger::endmsg;
  h_cutflow1->Fill(icutflow1++);
}

bool ZmmgammaEventSelection::OverlapRemovalFSR(bool isMC)
{
bool reject = false;
for(int i =0;i<m_mc_n;i++)
{
//DIFFERENCE
if(m_mc_pdgId->at(i)==22)
{
for(unsigned int j = 0; j< (*m_mc_parent_index)[i].size();j++){
//std::cout<<"checking parent type"<<std::endl;
int motherindex=(*m_mc_parent_index)[i][j];
float ph_eta=m_mc_eta->at(i);
float ph_phi=m_mc_phi->at(i);
float mu_eta=m_mc_eta->at(motherindex);
float mu_phi=m_mc_phi->at(motherindex);
float dr = sqrt((mu_eta-ph_eta)*(mu_eta-ph_eta)+(mu_phi-ph_phi)*(mu_phi-ph_phi));
//std::cout<<dr<<" mother type "<<m_mc_pdgId->at(motherindex)<<std::endl;
if(fabs(m_mc_pdgId->at(motherindex))==11) {reject=true;break;
//std::cout<<reject<<std::endl;
}
}
}
}
return reject;
}



//---------------------------------------------------------//
// The Start of the Event Loop
//---------------------------------------------------------//
void ZmmgammaEventSelection::ExecuteEvent( const SInputData &inputData, Double_t xsection_weight ) throw( SError ) {
  icutflow=0;
  icutflow1=0;
  //macro of commands to clear the output tree vectors. (delete if you don't want an output tree)
  //RESETVAR
 //   ;  
  RESETVAR; 
  RESETVAR_WG
      ; 
  //---------------------------------------------------------//
  // First, I am checking if I want to do a quick selection/ truth selection.  Probably don't want to.
  //---------------------------------------------------------//
  
//m_logger << VERBOSE << "/** event passed all-events cut    **/" << SLogger::endmsg;
//  bool fid = false;
//  bool Truth = false;
//  bool jet = false;
//  if(Truth){
//	  TruthEvent(fid, Ecounter);
	  //throw SError(SError::SkipEvent);
//  }
//  bool quick = false;
//  if(quick){
//  int goodph = 0;
//  for(int i =0;i<phr.m_NumPhotons;i++)
//     {
 //   if(phr.m_PhotonClusterPt->at(i)>10000&&fabs(phr.m_PhotonEtaS2->at(i))<2.5) goodph++;
 //    }
//  if(goodph<1) throw SError(SError::SkipEvent);
//  if(mur.m_NumMuons < 2) throw SError(SError::SkipEvent);
//  }
  //---------------------------------------------------------//
  // Hi Mia, so I think the isdata setter is broken, so I do it manually...
  //---------------------------------------------------------//
  if(isdata) {
      if ( ! testGRL(m_RunNumber,m_lbn) )  throw SError( SError::SkipEvent );
  }
  m_logger << VERBOSE << "/** event passed goodrun cut   **/" << SLogger::endmsg;
  //---------------------------------------------------------//
  //------------------primary vertex cut---------------------//
  //---------------------------------------------------------//
   if (m_vxp_n<1 || m_vxp_nTracks->at(0)< 4) throw SError(SError::SkipEvent); 
  IncrementCutFlow();
  IncrementLooseCutFlow();
  m_logger << VERBOSE << "/** event passed npv cut   **/" << SLogger::endmsg;
  //---------------------------------------------------------//
  //------------------------trigger--------------------------//
  //---------------------------------------------------------//
//int randomRunNumber = m_pileupTool->GetRandomRunNumber(m_RunNumber);
  if(!m_LeptonTrigger1 && !m_LeptonTrigger2 && !m_LeptonTrigger3 && !m_LeptonTrigger4)throw SError( SError::SkipEvent );
  m_logger << VERBOSE << "/** event passed trigger cut   **/" << SLogger::endmsg;
  IncrementCutFlow();
  IncrementLooseCutFlow();
  //---------------------------------------------------------//
  //---------------------LArerror veto------------------------//
  //---------------------------------------------------------//

if(isdata){
if(m_larError==2) throw SError(SError::SkipEvent);
if(m_tileError==2)throw SError(SError::SkipEvent);
if(m_coreFlags&0x40000!=0)throw SError(SError::SkipEvent);
}
  IncrementCutFlow();
  IncrementLooseCutFlow();
  m_logger << VERBOSE << "/** event passed LAr cleaning   **/" << SLogger::endmsg;
  
  int TightMuonCount = 0;
  std::vector<int> TightMuonIndex;
  std::vector<TLorentzVector> SelectedMus;

  int npv = 0;
  for(unsigned int i = 0;i<m_vxp_n;i++)
  {
  if(m_vxp_nTracks->at(i) >=2 ) npv++;
  }

  m_logger << VERBOSE << "/** Start looping **/" << SLogger::endmsg;
  mur.SetNPV(npv);
  mur.SetEventNumber(m_EventNumber);
  phr.SetNPV(npv);
  phr.SetEventNumber(m_EventNumber);
  er.SetNPV(npv);
  er.SetEventNumber(m_EventNumber);
  
  Book(TH1F("JetMult","Jet Multiplicity No Cut",7,0,6))->Fill(jr.m_JetPt->size());
  
  //---------------------------------------------------------//
  // Counting up all the tight Muons
  //---------------------------------------------------------//

  for (int i = 0; i<mur.m_NumMuons;i++)
  {
  m_logger << VERBOSE << "/** Start selection **/" << SLogger::endmsg;
  bool TightMuon = mur.IsGoodMuon_2012(i,m_LeptonPt,Mcounter);
  m_logger << VERBOSE << "/** Tight Muon selected **/" << SLogger::endmsg;
   if(TightMuon) {
    TLorentzVector tmp;  
    mur.FillMuonFourMomentum(i,tmp);
    SelectedMus.push_back(tmp);
    TightMuonCount++;
    TightMuonIndex.push_back(i);
   }
  }
  
  if(TightMuonCount < 2) throw SError(SError::SkipEvent);
  // sort muon by pt
  AnalysisUtils::SortParticlesPt(TightMuonIndex,SelectedMus);

  int LeadingMuonIndex;
  int SLeadingMuonIndex;
  if(TightMuonCount > 1){
  muv1 = SelectedMus.at(0);
  muv2 = SelectedMus.at(1);
  m_logger << VERBOSE << "/** Got muon 4 vectors   **/" << SLogger::endmsg;
  LeadingMuonIndex = TightMuonIndex.at(0);
  SLeadingMuonIndex= TightMuonIndex.at(1);
  }
/*
  else if(TightMuonCount > 0){
  LeadingMuonIndex = TightMuonIndex.at(0);
  muv1 = SelectedMus.at(0);
  }
  */
  CountParticles(Mcounter,"Muon");
  m_logger << VERBOSE << "/** event passed two opposite signed electrons cut   **/" << SLogger::endmsg;

  TLorentzVector Zboson = muv1+muv2;
  float Zmass = Zboson.M(); 
  float mu1pt = muv1.Pt();
  float mu2pt = muv2.Pt();
  
if(Zmass<m_ZmassCut1) throw SError(SError::SkipEvent);

//---------------------------------------------------------//
// Cut on Z mass
//---------------------------------------------------------//
   m_logger << VERBOSE << "/** event passed Z mass cut   **/" << SLogger::endmsg;
   IncrementCutFlow(); 
  //---------------------------------------------------------//
  // Counting up all the passing Electrons, for some reason its in the twiki...
  // Oh and I changed the Electron reader to match the twiki, just like the phr
  //---------------------------------------------------------//
  bool els = true;

  int TightElectronCount = 0;
  std::vector<int> TightElectronIndex;
  std::vector<TLorentzVector> SelectedEls;
  std::vector<TLorentzVector> SelectedMusforE;
/*  
  if(els){
	  for(int i = 0; i < SelectedMus.size(); i++){
		  TLorentzVector tmp;
		  double eta = -1*log( tan( mur.m_MuonIdTheta->at(TightMuonIndex.at(i))	 / 2.0));
		  tmp.SetPtEtaPhiE(SelectedMus.at(i).Pt(),eta,mur.m_MuonIdPhi->at(TightMuonIndex.at(i)),SelectedMus.at(i).E());
		  SelectedMusforE.push_back(tmp);
	  }
	  for(int i = 0;i < er.m_NumElectrons;i++){
	  if(er.IsGoodElectronEWKZ(i, m_LeptonPt,false)){  
		  TLorentzVector tmp;
		  er.FillElectronFourMomentum(i,tmp);
		  if(DrPassed(SelectedMusforE, tmp, .1)){
		 //er.FillElectronFourMomentumCluster(i,tmp);
      		 er.FillElectronFourMomentum(i,tmp);
		  SelectedEls.push_back(tmp);
		  TightElectronIndex.push_back(i);
		  }
	  }
  }
  }
*/
  //---------------------------------------------------------//
  // LOOSE Photon Object selection
  //---------------------------------------------------------//
  int GoodPhotonCount = 0;
  std::vector<int> GoodPhotonIndex;
  std::vector<TLorentzVector> SelectedPhs;
  vector<pair<TLorentzVector,int> > vecphotons;  

  std::vector<int> GoodPhotonIndex1;
  std::vector<TLorentzVector> SelectedPhs1;

  bool isbkg = true;

for(unsigned int i = 0;i < phr.m_NumPhotons;i++)
  {
if(phr.IsGoodPhoton(i,m_PhotonPt,isbkg,Phcounter)){
TLorentzVector tmp = phr.PhotonFourVector(i);
if(phr.IsLoosePhoton(i)){
	phr.Loose(Phcounter);
}

if(DrPassed(SelectedMus, tmp, m_dRLeptonGammaCut) && DrPassed(SelectedEls, tmp, m_dRLeptonGammaCut)){
	GoodPhotonCount ++;
	phr.DR(Phcounter);
	  GoodPhotonIndex.push_back(i);
	  SelectedPhs.push_back(tmp);
	vecphotons.push_back( make_pair(tmp,i) );
	if(phr.IsLoosePhoton(i)){
		SelectedPhs1.push_back(tmp);
		  GoodPhotonIndex1.push_back(i);
	}
}
}
  }
CountParticles(Phcounter,"Photon");

//---------------------------------------------------------//
// Zmass plots
//---------------------------------------------------------//
/*if(TightMuonCount>1){
TLorentzVector mumu = SelectedMus[0] + SelectedMus[1];
 Book(TH1F("Zmass","Z mass in events",150,-5000,200000))->Fill(mumu.M());
}
if(quick && GoodPhotonCount < 1) throw SError(SError::SkipEvent);
*/

  //---------------------------------------------------------//
  // Finding at least a  photon
  //---------------------------------------------------------//
if(SelectedPhs.size() < 1) throw SError(SError::SkipEvent);
  m_logger << VERBOSE << "/** found at least one good photon**/" << SLogger::endmsg;
  IncrementCutFlow();

 AnalysisUtils::SortParticlesPt(GoodPhotonIndex,SelectedPhs);
 Book(TH1F("LeadPassingPhoton_Pt","Pt of Photons",21,-5000,100000))->Fill(SelectedPhs[0].Pt());

//---------------------------------------------------------//
// This is just for the cutflow of a loose photon
//---------------------------------------------------------//
  //---------------------------------------------------------//
  m_logger << VERBOSE << "/** event passed 2 Good Muon cut   **/" << SLogger::endmsg;

  //---------------------------------------------------------//
  // Cut both tight muons and charge
  //---------------------------------------------------------//
   //---------------------------------------------------------//
   // Plot bad Zgmass, and IsoTight Zgmass
   //---------------------------------------------------------//
   TLorentzVector Zg = muv1+muv2 + SelectedPhs[0];
 float Zgamma_mass = Zg.M() ;
 Book(TH1F("Zgamma_mass","Zgamma mass in events",32,40000,200000))->Fill(Zgamma_mass);
 Book(TH1F("LeadPhotonPt_Z4","Pt of Lead Photons.4 when Z selected",21,-5000,100000))->Fill(SelectedPhs[0].Pt());

// HERE I Save all ZGG data, for analysis!

 if(phr.IsTightPhoton(GoodPhotonIndex[0])){
 	 float correctedIso = phr.CorrectedIso(GoodPhotonIndex[0],1,40);
 	 Book(TH1F("Zgamma_massTight","Zgamma mass w/ Tight Photon",32,40000,200000))->Fill(Zgamma_mass);
 	Book(TH1F("LeadPhotonPt_Tight","Pt of Lead Photons.4 when Z selected",21,-5000,100000))->Fill(SelectedPhs[0].Pt());
 	 
 	if(correctedIso < m_PhotonIsoValue){
 		 Book(TH1F("Zgamma_massIso","Zgamma massw/ Isolated Photon",32,40000,200000))->Fill(Zgamma_mass);
 		Book(TH1F("LeadPhotonPt_TightIso","Pt of Lead Photons when Z selected",21,-5000,100000))->Fill(SelectedPhs[0].Pt());
 		
 		incrementPlotZ(SelectedPhs[0].Pt(), Zmass);
 	}
 }
 // Save All relevant Zg data
//
// 		//incrementPlotZ(SelectedPhs[0].Pt(),Zmass);
// 		  std::vector<int> JetIndex;
// 		  std::vector<TLorentzVector> SelectedJets;
// 		 	int jetcount = 0;
// 		 	for(int i = 0;i<jr.m_JetPt->size();i++)
// 		 	{	
// 		 	if(jr.IsSelectedJet(i,isdata,npv,m_averageIntPerXing))  
// 		 	{
// 		 	TLorentzVector tmp;
// 		 	tmp = jr.CorrectedJet(i,isdata,npv,m_averageIntPerXing);
// 		 	if(DrPassed(SelectedMus,tmp,.3)&&DrPassed(SelectedPhs,tmp,.3)){
// 		 		if(!jr.IsLooserBadJet(tmp.Pt(),tmp.Eta(),i)){
// 		 		JetIndex.push_back(i);
// 		 		SelectedJets.push_back(tmp);
// 		 		}
// 		 	}
// 		 	}
// 		 	}
// 		 	
// 		 	  Book(TH1F("JetMultIso","Jet Multiplicity",6,0,6))->Fill(SelectedJets.size());
// 		 	ptPlot("JetPtPlot", "Jet Pt", SelectedJets);
// 		 	  
// 		 	 	if(SelectedPhs[0].Pt()> 30000){
// 		 	  Book(TH1F("JetMultIso30","Jet Multiplicity2",6,0,6))->Fill(SelectedJets.size());
// 		 	ptPlot("JetPt30", "Jet Pt", SelectedJets);
// 		 	 	}
// 		 	if(jet){ 		
// 		 	TruthJetSelection(SelectedMus,SelectedEls,SelectedPhs,GoodPhotonIndex);	
// 		 	TruthJetPlotting(SelectedMus,SelectedEls,SelectedPhs,GoodPhotonIndex, FakedPhotons, FakedPhotonsIndex);
// 		 	if(FakedPhotons.size()> 0){
// 	 		 	 Book(TH1F("JetMultIsoBgd","Jet Multiplicity",6,0,6))->Fill(SelectedJets.size());
// 		 	ptPlot("JetPtBgd", "Jet Pt", FakedPhotons);
//		 	 	if(SelectedPhs[0].Pt()> 30000){
//		 	  Book(TH1F("JetMultIsoBgd30","Jet Multiplicity2",6,0,6))->Fill(SelectedJets.size());
//		 	 	 ptPlot("JetPtBgd30", "Jet Pt", FakedPhotons);
//		 	 	}
// 		 	}
// 		 	}
// 	 	
// 	}
// }
if(isTruth) TruthJetSelection(SelectedMus,SelectedEls,SelectedPhs,GoodPhotonIndex);	
 DataAnalysis( SelectedPhs, GoodPhotonIndex, SelectedMus);
//---------------------------------------------------------//
// Require two LOOSE Photons
//---------------------------------------------------------//
//if(SelectedPhs.size() <2)throw SError(SError::SkipEvent);

//---------------------------------------------------------//
// Cut on dr of Photons
//---------------------------------------------------------//
/*
  float dr1 = SelectedPhs[0].DeltaR(SelectedPhs[1]);
  if(dr1 <= m_dRGammaGammaCut) throw SError(SError::SkipEvent);

  IncrementCutFlow();
  if(SelectedPhs1.size() > 1)IncrementLooseCutFlow();
  if(SelectedPhs1.size() > 1)IncrementLooseCutFlow();
  */
  //---------------------------------------------------------//
  // Is first photon tight?
  //---------------------------------------------------------//

  //if(!phr.IsTightPhoton(GoodPhotonIndex[0])) throw SError(SError::SkipEvent);
  //IncrementCutFlow();
  //if(SelectedPhs1.size() > 1)IncrementLooseCutFlow();
  
  //---------------------------------------------------------//
  // Is second photon tight?
  //---------------------------------------------------------//

  m_logger << VERBOSE << "/** photon is tight   **/" << SLogger::endmsg;
 // if(!phr.IsTightPhoton(GoodPhotonIndex[1])) throw SError(SError::SkipEvent);
 // IncrementCutFlow();
 // if(SelectedPhs1.size() > 1)IncrementLooseCutFlow();
  m_logger << VERBOSE << "/** photon is tight   **/" << SLogger::endmsg;

 float correctedIso = phr.CorrectedIso(GoodPhotonIndex[0],1,40);
 
 //---------------------------------------------------------//
 // Is first photon isolated?
 //---------------------------------------------------------//

//  if(correctedIso > m_PhotonIsoValue) throw SError(SError::SkipEvent);

 m_logger << VERBOSE << "/** photon is isolated   **/" << SLogger::endmsg;
 Book(TH1F("LeadPhoton_Pt_Zgg","Pt of Lead Photons passing",21,-5000,100000))->Fill(SelectedPhs[0].Pt());
 Book(TH1F("SecondPhoton_Pt_Zgg","Pt of Second Photons passing",21,-5000,100000))->Fill(SelectedPhs[1].Pt());
 Book(TH1F("All_Photon_Pt_Zgg","Pt of Lead Photons passing",21,-5000,100000))->Fill(SelectedPhs[0].Pt());
 Book(TH1F("All_Photon_Pt_Zgg","Pt of Lead Photons passing",21,-5000,100000))->Fill(SelectedPhs[1].Pt());
 TLorentzVector Zgg = SelectedMus[0] + SelectedMus[1] + SelectedPhs[0] + SelectedPhs[1];
 Book(TH1F("Zggmass","Zgg mass in events",26,40000,300000))->Fill(Zgg.M());

 SaveData(SelectedPhs, GoodPhotonIndex, SelectedMus,TightMuonIndex, Zgamma_mass,Zmass,xsection_weight);

//ALL muon data saving happens in savedata fuction

 //VERY IMPORTANT, I define o_m_GGevent = true if its a gg event, so that I can also save Zg events!
// o_m_GGevent = true;
 return;
}

void ZmmgammaEventSelection::EndMasterInputData( const SInputData& ) throw( SError ) {
  m_logger << INFO << "End of input data." << SLogger::endmsg;
// for(int i =0;i<14;i++){
//  h_Mcutflow->SetBinContent(i,(*Mcounter)[i]);
// }   
// for(int i = 0; i<9;i++)
// {
//  h_Phcutflow->SetBinContent(i,(*Phcounter)[i]); 
// }
// for(int i = 0; i<10;i++)
// {
//  h_Ecutflow->SetBinContent(i,(*Ecounter)[i]); 
// }
// for(int i = 0; i<15; i ++){
// cout << "" << h_cutflow->GetBinContent(i) << endl;
// }
//
//cout << "" << endl;
//for(int i = 0; i<14; i ++){
//cout << "" << h_Mcutflow->GetBinContent(i) << endl;
//}
//cout << "" << endl;
//for(int i = 0; i<9; i ++){
//cout << "" << h_Phcutflow->GetBinContent(i) << endl;
//}
//
//for(int i = 0; i<15; i ++){
//cout << "" << h_Ecutflow->GetBinContent(i) << endl;
//}

cout << "" << DRcut <<endl;

/*  if ( m_cutflow->size() ==11 ) {
   m_logger << INFO << "(C0)  Number of input events:                       " << ( *m_cutflow )[ 0 ] <<"  Cut Efficiency: "<<( *m_cutflow )[ 0 ]/( *m_cutflow )[ 0 ]<<SLogger::endmsg;
    m_logger << INFO << "(C1)  Number of events passing goodrun flag:        " << ( *m_cutflow )[ 1 ] <<"  Cut Efficiency: "<<( *m_cutflow )[ 1 ]/( *m_cutflow )[ 0 ]<<SLogger::endmsg;
    m_logger << INFO << "(C2)  Number of events passing primary vertex:      " << ( *m_cutflow )[ 2 ] <<"  Cut Efficiency: "<<( *m_cutflow )[ 2 ]/( *m_cutflow )[ 1 ]<< SLogger::endmsg;
    m_logger << INFO << "(C3)  Number of events passing trigger              " << ( *m_cutflow )[ 3 ] <<"  Cut Efficiency: "<<( *m_cutflow )[ 3 ]/( *m_cutflow )[ 2 ]<< SLogger::endmsg;
    m_logger << INFO << "(C4)  Number of events passing LArHole veto         " << ( *m_cutflow )[ 4 ] <<"  Cut Efficiency: "<<( *m_cutflow )[ 4 ]/( *m_cutflow )[ 3 ]<< SLogger::endmsg;
    m_logger << INFO << "(C5)  Number of events passing lepton selection:    " << ( *m_cutflow )[ 5 ] <<"  Cut Efficiency: "<<( *m_cutflow )[ 5 ]/( *m_cutflow )[ 4 ]<< SLogger::endmsg;
    m_logger << INFO << "(C6)  Number of events passing opposite sign el:    " << ( *m_cutflow )[ 6 ] <<"  Cut Efficiency: "<<( *m_cutflow )[ 6 ]/( *m_cutflow )[ 5 ]<< SLogger::endmsg;
    m_logger << INFO << "(C7)  Number of events passing Z mass cut:          " << ( *m_cutflow )[ 7 ] <<"  Cut Efficiency: "<<( *m_cutflow )[ 7 ]/( *m_cutflow )[ 6 ]<< SLogger::endmsg;
    m_logger << INFO << "(C8)  Number of events passing photon ID cut:       " << ( *m_cutflow )[ 8 ] <<"  Cut Efficiency: "<<( *m_cutflow )[ 8 ]/( *m_cutflow )[ 7 ]<< SLogger::endmsg;
    m_logger << INFO << "(C9)  Number of events passing photon isolation cut:" << ( *m_cutflow )[ 9 ] <<"  Cut Efficiency: "<<( *m_cutflow )[ 9 ]/( *m_cutflow )[ 8 ]<< SLogger::endmsg;
  } else {
    m_logger << WARNING << "It looks like your job didn't run." << SLogger::endmsg;
  }
*/  
 return;
}


//
// Hi Mia, my custom methods start here.  Some are just for convenience for me, but I do believe some can make 
//your life easier as well/ to compare to, so please do borrow anything you find!
//
//


//This is a method which compares the DR of a TLV with a vector of TLVs of unknown length, and returns it
//passes the specified dr cut.  Needed for our object selection and generally useful when selecting truth jets 
//as a fail means that there is NO DR overlap
bool ZmmgammaEventSelection::DrPassed(std::vector<TLorentzVector> SelectedLep, TLorentzVector tmp, float dRcut) throw ( SError ){
	for(unsigned int i = 0; i <SelectedLep.size(); i++){
		float dr1 = SelectedLep[i].DeltaR(tmp);
		if(dr1 <= dRcut) return false;
	}
return true;
}

//int ZmmgammaEventSelection::TruthJet(int j,  int Status){
//    // photon
//	bool jet = false;
//	
//	bool fid = false;
//    if ((abs(m_mc_pdgId->at(j)) == 22)) {
//   if (m_mc_status->at(j) == Status && m_mc_pt->at(j)> 15000) {   // for Sherpa
//	   for(int k = 0; k< m_mc_parent_index->at(j).size(); k++){
//		   int parentindex = abs(m_mc_parent_index->at(j).at(k));
//		   int parent = (abs(m_mc_pdgId->at(parentindex)));
//		   if(parent!=13){
//		   cout<<"The parent is: "<< parent << endl;
//		   }
//		   if ((parent) == 3100221) jet = true;
//		   if ((parent) == 3000221) jet = true;
//		   if ((parent) == 3000111) jet = true;
//	   }
//	  if(!jet) return 0;
//      double eta = fabs(m_mc_eta->at(j));
//	    if(eta >= 2.37) return false;
//	    if(eta < 1.52 && eta >1.37) return false;
//	    TLorentzVector tmp;
//	    tmp.SetPtEtaPhiM(m_mc_pt->at(j),m_mc_eta->at(j),m_mc_phi->at(j),m_mc_m->at(j));
//	    Book(TH1F("JetPt","Jet Pt",150,-5000,80000))->Fill(tmp.Pt());
//	    float m_True_pho_SumPt04 = 0;
//	        for(int i = 0; i< m_mc_n; i++)
//	    {
//	    	  int stat = m_mc_status->at(i);
//	    	  float cPt = m_mc_pt->at(i); // convert to
//	  	 	if(cPt <= 0.0) continue;
//	    	TLorentzVector tmp1;
//	              tmp1.SetPtEtaPhiM(cPt,m_mc_eta->at(i),m_mc_phi->at(i),m_mc_m->at(i));
//	    	float dR = tmp.DeltaR(tmp1);
//
//
//	    	if (dR >= 0.4) continue;
//	             if(( (abs(m_mc_pdgId->at(i)) == 21) && (stat == 3)) ||((abs(m_mc_pdgId->at(i)) < 7) && (stat == 3))) {
//	    	if ((abs(m_mc_pdgId->at(i)) != 12) && (abs(m_mc_pdgId->at(i)) != 14) && (abs(m_mc_pdgId->at(i)) != 16)) {
//	          m_True_pho_SumPt04 += cPt;
//	        }
//	    }
//	    
//	    }
//	        if(m_True_pho_SumPt04/tmp.Pt()< .5) return 1;
//	    		}
//	  }
//    return 0;
//}

// This is the truth selection that selects Photons at the particle level, fid, is a boolean for 
//whether you want the fiducial region (or not means extended fiducial)

/*int ZmmgammaEventSelection::TruthPhotonParticles(int i, bool fid){
	if(TruthPhotons(i,1,fid)==0) return 0;
    TLorentzVector tmp;
    tmp.SetPtEtaPhiM(m_mc_pt->at(i),m_mc_eta->at(i),m_mc_phi->at(i),m_mc_m->at(i));
    double dr = 10000;
    int jetindex = -1;
	for(int j = 0; j< m_jet_truth_pt->size(); j++){
		TLorentzVector jet;
		jet.SetPtEtaPhiM(m_jet_truth_pt->at(j),m_jet_truth_eta->at(j),m_jet_truth_phi->at(j),m_jet_truth_m->at(j));
		if(jet.DeltaR(tmp)<= dr) jetindex = j;
	}
	if(jetindex==-1) return 1;
	double photoniso = m_jet_truth_pt->at(jetindex) - tmp.Pt();
	if(photoniso/tmp.Pt()> .5) return 0;
	return 1;
}
*/
// This is the truth selection that selects Photons, given the entered status, works for Partons if Status = 3
int ZmmgammaEventSelection::TruthPhotons(int j,  int Status, bool fid){
	if(abs(m_mc_pdgId->at(j)) != 22 || m_mc_status->at(j) != Status) return 0;
	if (m_mc_pt->at(j)<15000) return 0;
	double eta = fabs(m_mc_eta->at(j));
	if(eta> 2.37) return 0;
	if(fid&&(eta< 1.52 && eta>1.37)) return 0;
	 TLorentzVector tmp;
	 tmp.SetPtEtaPhiM(m_mc_pt->at(j),m_mc_eta->at(j),m_mc_phi->at(j),m_mc_m->at(j));
	if(PartonIsolation(tmp) == 0) return 0;
	return 1;
}
//This is a convenient method to determine if a parton is isolated (return 1 if so)
// I actually see now it needs to be fixed, to make sure you don't double count the particle at hand!
int ZmmgammaEventSelection::PartonIsolation(TLorentzVector tmp){
	float m_True_pho_SumPt04 = 0;
		for(unsigned int i = 0; i< m_mc_n; i++)
		    {
		    int stat = m_mc_status->at(i);
		    float cPt = m_mc_pt->at(i); // convert to
		  	if(cPt <= 0.0) continue;
		    TLorentzVector tmp1;
		    tmp1.SetPtEtaPhiM(cPt,m_mc_eta->at(i),m_mc_phi->at(i),m_mc_m->at(i));
		    	float dR = tmp.DeltaR(tmp1);
		    	if (dR > 0.4) continue;
		        if(( (abs(m_mc_pdgId->at(i)) == 21) && (stat == 3)) ||((abs(m_mc_pdgId->at(i)) < 7) && (stat == 3))) {
		    	if ((abs(m_mc_pdgId->at(i)) != 12) && (abs(m_mc_pdgId->at(i)) != 14) && (abs(m_mc_pdgId->at(i)) != 16)) {
		          m_True_pho_SumPt04 += cPt;
		        }
		    }
		        }
		   if(m_True_pho_SumPt04/tmp.Pt()> .5) return 0;
		   return 1;
}
// This was just a convenience plotting method for me to see which truth jet system was working well.  Please look at the 
//next two methods as those are truly useful
void ZmmgammaEventSelection::TruthJetPlotting(std::vector<TLorentzVector> SelectedMus, std::vector<TLorentzVector> SelectedEls,
		std::vector<TLorentzVector> SelectedPhs, std::vector<int> GoodPhotonIndex, std::vector<TLorentzVector> SelectedJets2, 
		std::vector<int> JetIndex2){
	    muv1 = SelectedMus[0];
	    muv2 = SelectedMus[1];
	    TLorentzVector Zboson = muv1+muv2;
	    float Zmass = Zboson.M(); 
	  	if(SelectedJets2.size()>0){
	  		AnalysisUtils::SortParticlesPt(JetIndex2,SelectedJets2);
	    TLorentzVector Zg = muv1+muv2 + SelectedJets2[0];
	  float Zgamma_mass = Zg.M();
	  Book(TH1F("Zgamma_massPh2","Zgamma mass in events",32,40000,200000))->Fill(Zgamma_mass);
	  Book(TH1F("Jet_Ptj","Pt of Lead Jet ",21,-5000,100000))->Fill(SelectedJets2[0].Pt());
	  if(SelectedPhs.size()>1){
	  Book(TH1F("Jet_PtPhgg","Pt of Lead Jet ",21,-5000,100000))->Fill(SelectedJets2[0].Pt());
	  Book(TH1F("Zgamma_massPhgg","Zgamma mass in events",80,40000,200000))->Fill(Zgamma_mass);
	  if(SelectedJets2.size()>1){
		  TLorentzVector Zgg = muv1+muv2 + SelectedJets2[0] + SelectedJets2[1];
		  Book(TH1F("Jet_PtPhjj","Pt of Lead Jet ",21,-5000,100000))->Fill(SelectedJets2[0].Pt());
		  Book(TH1F("Jet_PtPhjj","Pt of Lead Jet ",21,-5000,100000))->Fill(SelectedJets2[1].Pt());
		  Book(TH1F("Zgamma_massPhjj","Zgamma mass in events",32,40000,200000))->Fill(Zgg.M());
	  }
	  else{
	  if(fabs(SelectedPhs[0].Pt()-SelectedJets2[0].Pt()) <fabs(SelectedPhs[1].Pt()-SelectedJets2[0].Pt())){
		  TLorentzVector Zgg = muv1+muv2 + SelectedJets2[0] + SelectedPhs[0];
	  Book(TH1F("Jet_PtPhjg","Pt of Lead Jet ",21,-5000,100000))->Fill(SelectedJets2[0].Pt());
	  Book(TH1F("Jet_PtPhjg","Pt of Lead Jet ",21,-5000,100000))->Fill(SelectedPhs[1].Pt());
	  Book(TH1F("Zgamma_massPhjg","Zgamma mass in events",32,40000,200000))->Fill(Zgg.M());
	  }
	  else{
		  TLorentzVector Zgg = muv1+muv2 + SelectedJets2[0] + SelectedPhs[1];
		  Book(TH1F("Jet_PtPhgj","Pt of Lead Jet ",21,-5000,100000))->Fill(SelectedJets2[0].Pt());
		  Book(TH1F("Jet_PtPhgj","Pt of Lead Jet ",21,-5000,100000))->Fill(SelectedPhs[0].Pt());
		  Book(TH1F("Zgamma_massPhgj","Zgamma mass in events",32,40000,200000))->Fill(Zgg.M());
	  }
	  }
	  	}
	  	}
	  	
}

// This is my newer, shorter TruthJet initial cut.  You must put in the status of the truth particle (1 or 3)
// as well as its mc index, and it returns 1 if it passes the intial kinematics.  See TruthJetSelection for where
//this method is used
int ZmmgammaEventSelection::TruthJet(int j,  int Status){
	if ((abs(m_mc_pdgId->at(j)) <7 || (abs(m_mc_pdgId->at(j)) ==21))) {
		double eta = fabs(m_mc_eta->at(j));
		if(m_mc_pt->at(j)> 15000 &&(eta< 2.37)) return 1;
		return 0;
	}
	return 0;
}
// This is my Truth, Jet faking photon selection.  While it is a little long, if you follow along, 
//The FakedPhotons, which is a vector, is what ends up with the reconstructed Photons that are 
//actually jets faking photons!
void ZmmgammaEventSelection::TruthJetSelection(std::vector<TLorentzVector> SelectedMus, std::vector<TLorentzVector> SelectedEls,
		std::vector<TLorentzVector> SelectedPhs, std::vector<int> GoodPhotonIndex){
	 	FakedPhotons.clear();
	 	FakedPhotonsIndex.clear();
	  std::vector<TLorentzVector> SelectedJets;
	  std::vector<TLorentzVector> SelectedQs;
	  std::vector<TLorentzVector> SelectedJets1;
	  std::vector<int> QIndex;
	  std::vector<int> JetIndex;
	  std::vector<int> JetIndex1;
	  std::vector<TLorentzVector> SelectedTPhs;
	  std::vector<int> TPhotonIndex;
	  int count = 0;
	  for(unsigned int i = 0; i< m_mc_n; i++){
	  	if(TruthJet(i, 1)==1){
	  		TLorentzVector tmp;
	  	    tmp.SetPtEtaPhiM(m_mc_pt->at(i),m_mc_eta->at(i),m_mc_phi->at(i),m_mc_m->at(i));
	  	  if(DrPassed(SelectedMus, tmp, m_dRLeptonGammaCut) && DrPassed(SelectedEls, tmp, m_dRLeptonGammaCut)){
	  		  if(!DrPassed(SelectedPhs, tmp, .2)){
	  	  SelectedQs.push_back(tmp); 
	  	  QIndex.push_back(i);
	  		  }
	  	  }
	  	}
	  	if(TruthPhotons(i,1,true)==1){
	  		TLorentzVector tmp;
	  	    tmp.SetPtEtaPhiM(m_mc_pt->at(i),m_mc_eta->at(i),m_mc_phi->at(i),m_mc_m->at(i));
		  	 // if(DrPassed(SelectedMus, tmp, m_dRLeptonGammaCut) && DrPassed(SelectedEls, tmp, m_dRLeptonGammaCut)){
		  	  SelectedTPhs.push_back(tmp); 
		  	TPhotonIndex.push_back(i);
		  	 // } 		
	  	}
	  }
	  for(unsigned int i = 0; i<SelectedQs.size(); i++){	  
	  if(DrPassed(SelectedTPhs, SelectedQs[i],.2)){
		  SelectedJets.push_back(SelectedQs[i]); 
		  JetIndex.push_back(QIndex[i]);
	  }
	  }
	  for(unsigned int i = 0; i<SelectedPhs.size(); i++){	  
	  if(!DrPassed(SelectedJets, SelectedPhs[i], .2)){
		  FakedPhotons.push_back(SelectedPhs[i]); 
		  FakedPhotonsIndex.push_back(GoodPhotonIndex[i]);
	  }
	  }
	  	
}
// THis is a convenience method for me.  Only works if you've run the method above.
bool ZmmgammaEventSelection::IsFakePhoton(int index){
	if(isdata) return false;
	for(unsigned int i = 0; i < FakedPhotonsIndex.size(); i++){
		if(i== index) return true;
	}
	return false;
}
//Selects truth muons
int ZmmgammaEventSelection::TruthMuons(int j, int Status, bool fid){
    if (abs(m_mc_pdgId->at(j)) == 13) {
   if (m_mc_status->at(j) == Status && m_mc_pt->at(j)> 25000) {   // for Sherpa
   double eta = fabs(m_mc_eta->at(j));
	    if(eta< 2.5) return 1;
   }
    }
    return 0;
}
// Dresses muons at the parton level to make a TLV
TLorentzVector ZmmgammaEventSelection::MuonDressing(std::vector<TLorentzVector> SelectedPhs, int i){
	TLorentzVector tmp;
	tmp.SetPtEtaPhiM(m_mc_pt->at(i),m_mc_eta->at(i),m_mc_phi->at(i),m_mc_m->at(i));
	for(unsigned int j = 0; j<SelectedPhs.size(); j++){
		if(tmp.DeltaR(SelectedPhs.at(j))< .1) tmp = tmp + SelectedPhs.at(j);
	}
	return tmp;
}


//This is my one big method to Calculate the A and C factors.  It is long, and uses those methods from above
//but is quite useful as it gives the ability to look at both parton and particle level, given what
//you decide to comment out
void ZmmgammaEventSelection::TruthEvent(bool fid, std::vector<int> &Ecounter) throw ( SError ){
int counter = 0;

	Ecounter.at(counter) ++;
	counter++;
std::vector<TLorentzVector> PartonMus;
std::vector<TLorentzVector> ParticleMus;
std::vector<TLorentzVector> PartonPhs;
std::vector<TLorentzVector> ParticlePhs;
std::vector<TLorentzVector> SelectedMus;
std::vector<TLorentzVector> SelectedPhs;
std::vector<int> ParticleMusIndex;
std::vector<int> PartonMusIndex;
std::vector<int> ParticlePhsIndex;
std::vector<int> PartonPhsIndex;
std::vector<int> SelectedPhsIndex;
std::vector<int> SelectedMusIndex;


for(unsigned int i = 0; i< m_mc_n; i++){
	//Selecting Photon Particles
	if(TruthPhotonParticles(i, fid) ==1){
		TLorentzVector tmp;
	    tmp.SetPtEtaPhiM(m_mc_pt->at(i),m_mc_eta->at(i),m_mc_phi->at(i),m_mc_m->at(i));
	    ParticlePhs.push_back(tmp); 
	    ParticlePhsIndex.push_back(i);
	}
	//Selecting Photon Partons
	else if(TruthPhotons(i, 3,  fid) ==1){
		TLorentzVector tmp;
	    tmp.SetPtEtaPhiM(m_mc_pt->at(i),m_mc_eta->at(i),m_mc_phi->at(i),m_mc_m->at(i));
	    if(PartonIsolation(tmp)){
		    PartonPhs.push_back(tmp); 
		    PartonPhsIndex.push_back(i);
	    }
	}
	//Selecting Muon Particles
	else if(TruthMuons(i, 1, fid) ==1){
		TLorentzVector tmp;
	    tmp.SetPtEtaPhiM(m_mc_pt->at(i),m_mc_eta->at(i),m_mc_phi->at(i),m_mc_m->at(i));
	    ParticleMus.push_back(tmp); 
	    ParticleMusIndex.push_back(i);
	}
	//Selecting Muon Partons
	else if(TruthMuons(i, 3, fid) ==1){
		TLorentzVector tmp;
	    tmp.SetPtEtaPhiM(m_mc_pt->at(i),m_mc_eta->at(i),m_mc_phi->at(i),m_mc_m->at(i));
	    PartonMus.push_back(tmp); 
	    PartonMusIndex.push_back(i);
	}
}
// dress the muons to make them pretty :)
for(unsigned int k = 0; k< PartonMus.size(); k++){
	TLorentzVector tmp = PartonMus.at(k);//MuonDressing(ParticlePhs,ParticleMusIndex.at(k));
	SelectedMus.push_back(tmp);
	SelectedMusIndex.push_back(PartonMusIndex.at(k));
	//I also do the check I do below, but for the muons
//	for(int j = 0; j< PartonMus.size(); j++){
//		if(tmp.DeltaR(PartonMus.at(j))< .4){
//			SelectedMus.push_back(tmp);
//			SelectedMusIndex.push_back(ParticleMusIndex.at(k));
//			break;
//		}
//	}
}
 //Here I check to make sure for every particle I've selected, there is a matching parton
for(unsigned int k = 0; k< PartonPhs.size(); k++){
	TLorentzVector tmp = PartonPhs.at(k);
//	for(int j = 0; j< PartonPhs.size(); j++){
//		if(tmp.DeltaR(PartonPhs.at(j))< .4){
			if(DrPassed(SelectedMus,tmp,.7)){
			SelectedPhs.push_back(tmp);
			SelectedPhsIndex.push_back(PartonPhsIndex.at(k));
			}
//			break;
//		}
//	}
}

// cut if there are not two muons/ not one photon
if(SelectedPhs.size()<1) return;
if(SelectedMus.size()<2) return;
if(SelectedMus.size()>2) return;
if(m_mc_charge->at(SelectedMusIndex.at(0))==m_mc_charge->at(SelectedMusIndex.at(1))) return;

AnalysisUtils::SortParticlesPt(SelectedMusIndex, SelectedMus);
AnalysisUtils::SortParticlesPt(SelectedPhsIndex, SelectedPhs);

TLorentzVector mumu;
mumu = SelectedMus[0] + SelectedMus[1];
if(mumu.M() < 65000 ) return;

Book(TH1F("Zmasstrue","Z mass in events",32,40000,200000))->Fill(mumu.M());
Book(TH1F("muonstrue","muon pt",21,-5000,100000))->Fill(SelectedMus[0].Pt());
Book(TH1F("muonstrue","muon pt",21,-5000,100000))->Fill(SelectedMus[1].Pt());

TLorentzVector Zg;
Zg = SelectedPhs[0] + mumu;
Book(TH1F("Zgtrue","Zg mass in events",32,40000,200000))->Fill(Zg.M());
Book(TH1F("LeadPhotontrue","Photon Pt",21,-5000,100000))->Fill(SelectedPhs[0].Pt());

if(SelectedPhs.size() < 2) return;
float dr = SelectedPhs[0].DeltaR(SelectedPhs[1]);
if(dr < .4) return;
Book(TH1F("Photontrue","Photon Pt",21,-5000,100000))->Fill(SelectedPhs[0].Pt());
Book(TH1F("Photontrue","Photon Pt",21,-5000,100000))->Fill(SelectedPhs[1].Pt());
TLorentzVector Zgg;
Zgg = SelectedPhs[0] + SelectedPhs[1] + mumu;
Book(TH1F("Zggtrue","Zgg mass in events",26,40000,300000))->Fill(Zgg.M());
}
//Just a convenience method
void ZmmgammaEventSelection::ptPlot(const char * name, const char * title, std::vector<TLorentzVector> Objs){
	for(unsigned int i = 0 ; i <Objs.size(); i++){
		Book(TH1F(name,title,25,-5000,100000))->Fill(Objs.at(i).Pt());
	}
}
//Convenience
void ZmmgammaEventSelection::incrementPlotZ(double pt, double Zmass){
	if(pt> 15000){
		Book(TH1F("LeadPhotonPt_TightIso15","Pt of Lead Photons when Z selected Pt>15Gev",25,-5000,100000))->Fill(pt);
	 	 Book(TH1F("Zm15","Zmass (mumu) Photon Pt>15",32,40000,200000))->Fill(Zmass);
	}
	if(pt> 20000){
		Book(TH1F("LeadPhotonPt_TightIso20","Pt of Lead Photons when Z selected Pt>20Gev",25,-5000,100000))->Fill(pt);
	 	 Book(TH1F("Zm20","Zmass (mumu) Photon Pt>20",32,40000,200000))->Fill(Zmass);
	}
	if(pt> 25000){
		Book(TH1F("LeadPhotonPt_TightIso25","Pt of Lead Photons when Z selected Pt>25Gev",25,-5000,100000))->Fill(pt);
	 	 Book(TH1F("Zm25","Zmass (mumu) Photon Pt>25",32,40000,200000))->Fill(Zmass);
	}
	if(pt> 30000){
		Book(TH1F("LeadPhotonPt_TightIso30","Pt of Lead Photons when Z selected Pt>30Gev",25,-5000,100000))->Fill(pt);
	 	 Book(TH1F("Zm30","Zmass (mumu) Photon Pt>30",32,40000,200000))->Fill(Zmass);
	}
	if(pt> 35000){
		Book(TH1F("LeadPhotonPt_TightIso35","Pt of Lead Photons when Z selected Pt>35Gev",25,-5000,100000))->Fill(pt);
	 	 Book(TH1F("Zm35","Zmass (mumu) Photon Pt>35",32,40000,200000))->Fill(Zmass);
	}
	if(pt> 40000){
		Book(TH1F("LeadPhotonPt_TightIso40","Pt of Lead Photons when Z selected  Pt>40Gev",25,-5000,100000))->Fill(pt);
	 	 Book(TH1F("Zm40","Zmass (mumu) Photon Pt>40",32,40000,200000))->Fill(Zmass);
	}
}
//This performs the ABCD method for me on the samples I need
void ZmmgammaEventSelection::DataAnalysis(std::vector<TLorentzVector> SelectedPhs, std::vector<int> SelectedPhsIndex, std::vector<TLorentzVector> SelectedMus){
	ABCD(SelectedPhs, SelectedPhsIndex, SelectedMus, "g", 0);
	if(SelectedPhs.size()<2) return;
	 float correctedIso =phr.CorrectedIso(SelectedPhsIndex[1],0,40); 
	 bool tight = phr.IsTightPhoton(SelectedPhsIndex[1]);
	if(tight&&(correctedIso<4000)) ABCD(SelectedPhs, SelectedPhsIndex, SelectedMus, "g1", 0);
	 correctedIso =phr.CorrectedIso(SelectedPhsIndex[0],0,40); 
	 tight = phr.IsTightPhoton(SelectedPhsIndex[0]);
	 if(!tight || correctedIso> 4000) return;
	ABCD(SelectedPhs, SelectedPhsIndex, SelectedMus, "gg", 1);
}
//This is my ABCD method
void ZmmgammaEventSelection::ABCD(std::vector<TLorentzVector> SelectedPhs, std::vector<int> SelectedPhsIndex, std::vector<TLorentzVector> SelectedMus ,std::string name, int index){
	 std::string fake = "FAKE";
	 std::string ph = "Ph";
	 std::string z = "Z";
	TLorentzVector mumu;
	mumu = SelectedMus[0] + SelectedMus[1];
	TLorentzVector Zg;
	Zg = mumu;
	for(int i = 0; i< index + 1; i++){
	Zg = Zg + SelectedPhs[i];
	}
	double Zmass = Zg.M();
	double mass = mumu.M();
	 float correctedIso;
	 correctedIso=phr.CorrectedIso(SelectedPhsIndex[index],0,40); 
	 float pt = SelectedPhs[index].Pt();
	 float eta = SelectedPhs[index].Eta();
	 bool tight = phr.IsTightPhoton(SelectedPhsIndex[index]);
	 bool antitight = phr.IsAntiTightPhoton(SelectedPhsIndex[index]);
	 //A region
	 if(tight&& correctedIso<4000){
		 ABCDPlotting("NA", Zmass, mass, pt, eta, index, name, SelectedPhsIndex, correctedIso);	 
		 if(FakedPhotons.size()>0)  Book(TH1F(("Background"+ name).c_str(),"Alpha",4,0,4))->Fill(0);
	 }
	 
	 //B region
	 else if(tight&& correctedIso>5000){
		 ABCDPlotting("NB", Zmass, mass, pt, eta, index, name, SelectedPhsIndex, correctedIso);
		 if(FakedPhotons.size()>0) Book(TH1F(("Background"+ name).c_str(),"Alpha",4,0,4))->Fill(1);
	 }
	 
	 //C region
	 else if(antitight&& correctedIso<4000){
		 ABCDPlotting("NC", Zmass, mass, pt, eta, index, name, SelectedPhsIndex, correctedIso);
		 if(FakedPhotons.size()>0) Book(TH1F(("Background"+ name).c_str(),"Alpha",4,0,4))->Fill(2);
	 }
	 
	 //D region
	 else if(antitight&& correctedIso>5000){
		 ABCDPlotting("ND", Zmass, mass, pt, eta,index, name, SelectedPhsIndex, correctedIso);	 
		 if(FakedPhotons.size()>0) Book(TH1F(("Background"+ name).c_str(),"Alpha",4,0,4))->Fill(3);
	 }
	 
	 // alpha
	 if(correctedIso>7000){
		 Book(TH1F(("Alpha"+ name).c_str(),"Alpha",5,0,5))->Fill(0);
		 if(tight){
			 Book(TH1F(("AlphaEta" + name).c_str(),"Alpha",40, -5, 5))->Fill(eta);
			 Book(TH1F(("Alpha"+ name).c_str(),"Alpha",5,0,5))->Fill(1);
		 Book(TH1F(("AlphaPh"+ name).c_str(),"Alpha Photon",21,-5000, 100000))->Fill(pt);
		 Book(TH1F(("AlphaIso"+ name).c_str(),"Alpha Iso",21,-5000, 100000))->Fill(correctedIso);
		 Book(TH1F(("AlphaZ"+ name).c_str(),("Alpha Z"+ name).c_str(),32,40000,200000))->Fill(Zmass); 
		 Book(TH1F(("AlphaM"+ name).c_str(),("Alpha M"+ name).c_str(),32,40000,200000))->Fill(mass);
		 }
		 else if(antitight){
			 Book(TH1F(("AlphaEta" + name).c_str(),"Alpha",40, -5, 5))->Fill(eta);
			 Book(TH1F(("Alpha"+ name).c_str(),"Alpha",5,0,5))->Fill(2);
			 Book(TH1F(("AlphaPh"+ name).c_str(),"Alpha Photon",21,-5000, 100000))->Fill(pt);
			 Book(TH1F(("AlphaZ"+ name).c_str(),("Alpha Z"+ name).c_str(),32,40000,200000))->Fill(Zmass);
			 Book(TH1F(("AlphaM"+ name).c_str(),("Alpha M"+ name).c_str(),32,40000,200000))->Fill(mass);
			 Book(TH1F(("AlphaIso"+ name).c_str(),"Alpha Iso",21,-5000, 100000))->Fill(correctedIso);
		 }
		 if(IsFakePhoton(SelectedPhsIndex[index])){
			 if(tight){
				 Book(TH1F(("AlphaEta" + name).c_str(),"Alpha",40, -5, 5))->Fill(eta);
				 Book(TH1F(("Alpha"+ name).c_str(),"Alpha",5,0,5))->Fill(3);
			 Book(TH1F(("AlphaPh"+ name).c_str(),"Alpha Photon",21,-5000, 100000))->Fill(pt);
			 Book(TH1F(("AlphaZ"+ name).c_str(),("Alpha Z"+ name).c_str(),32,40000,200000))->Fill(Zmass);
			 Book(TH1F(("AlphaM"+ name).c_str(),("Alpha M"+ name).c_str(),32,40000,200000))->Fill(mass);
			 Book(TH1F(("AlphaIso"+ name).c_str(),"Alpha Iso",24,-6000, 6000))->Fill(correctedIso);
			 }
			 else if(antitight){
				 Book(TH1F(("AlphaEta" + name).c_str(),"Alpha",40, -5, 5))->Fill(eta);
				 Book(TH1F(("Alpha"+ name).c_str(),"Alpha",5,0,5))->Fill(4);
				 Book(TH1F(("AlphaPh"+ name).c_str(),"Alpha Photon",21,-5000, 100000))->Fill(pt);
				 Book(TH1F(("AlphaZ"+ name).c_str(),("Alpha Z"+ name).c_str(),32,40000,200000))->Fill(Zmass);
				 Book(TH1F(("AlphaM"+ name).c_str(),("Alpha M"+ name).c_str(),32,40000,200000))->Fill(mass);
				 Book(TH1F(("AlphaIso"+ name).c_str(),"Alpha Iso",24,-6000, 6000))->Fill(correctedIso);
			 }
		 }
		 
	 }
	
}
//Here is how I plot variables for the abcd method...
void ZmmgammaEventSelection::ABCDPlotting(std::string prefix, double Zmass, double mass, double pt, double eta, int index, std::string name, std::vector<int> GoodPhotonIndex, double correctedIso){
	 std::string fake = "FAKE";
	 std::string ph = "Ph";
	 std::string n = "Eta";
	 std::string z = "Z";
	 std::string m = "M";
	 std::string isoph = "Iso";
	 Book(TH1F((prefix + name).c_str() ,prefix.c_str(),3,0,3))->Fill(0);
	 if(IsFakePhoton(GoodPhotonIndex[index])){
		 Book(TH1F((prefix + name).c_str(),prefix.c_str(),3,0,3))->Fill(1);
		 Book(TH1F((prefix+ fake + n + name).c_str(),(prefix+ fake + ph+ name).c_str(),40, -5, 5))->Fill(eta);
		 Book(TH1F((prefix+ fake + ph+ name).c_str(),(prefix+ fake + ph+ name).c_str(),21, -5000, 100000))->Fill(pt);
		 Book(TH1F((prefix+ fake +z+ name).c_str(),(prefix+ fake + ph+ name).c_str(),32,40000,200000))->Fill(Zmass);
		 Book(TH1F((prefix+ fake +m+ name).c_str(),(prefix+ fake + ph+ name).c_str(),32,40000,200000))->Fill(mass);
		 Book(TH1F((prefix+ fake +isoph+ name).c_str(),(prefix+ fake + isoph+ name).c_str(),24,-6000, 6000))->Fill(correctedIso);
	 }
	 else{
		 Book(TH1F((prefix+ name).c_str(),prefix.c_str(),3,0,3))->Fill(2);
		 Book(TH1F((prefix+ n + name).c_str(),(prefix+ ph+ name).c_str(),40, -5, 5))->Fill(eta);
		 Book(TH1F((prefix + ph+ name).c_str(),(prefix+ ph+ name).c_str(),21,-5000, 100000))->Fill(pt);
		 Book(TH1F((prefix + z+ name).c_str(),(prefix+ z+ name).c_str(),32,40000,200000))->Fill(Zmass);
		 Book(TH1F((prefix+m+ name).c_str(),(prefix+ ph+ name).c_str(),32,40000,200000))->Fill(mass);
		 Book(TH1F((prefix+isoph+ name).c_str(),(prefix+isoph+ name).c_str(),24,-6000, 6000))->Fill(correctedIso);
	 }
}
// THis is my method to get the cutflow, using proof
void ZmmgammaEventSelection::CountParticles(std::vector<int> &counter, std::string particle){
	 std::string name = "cutflow";
	 int size = counter.size();
	for(int i = 0; i <size; i++){
		int count = counter[i];
		if(count<1) continue;
		for(int j = 0; j <count; j++){
		Book(TH1F((particle + name).c_str(),(particle + name).c_str(),size, 0, size))->Fill(i);
		}
	}
	counter.clear();
	counter.assign(size, 0);
}
// I was going use this to save the Zg data as well, as I've included a boolean to be saved to determine whether the event is 
//Zg or Zgg (in my event selection)
void ZmmgammaEventSelection::SaveData(std::vector<TLorentzVector> SelectedPhs, std::vector<int> GoodPhotonIndex, 
		std::vector<TLorentzVector> SelectedMus, std::vector<int> TightMuonIndex, double Zgamma_mass, double Zmass,double xsection_weight){
         o_m_Mllg = Zgamma_mass;
         o_m_Mll = Zmass;
	 for(unsigned int i=0;i<SelectedPhs.size();i++)
	{
	 m_logger << VERBOSE << "/** save photons   **/" << SLogger::endmsg;
	 o_m_GoodPhotons_E.push_back(SelectedPhs.at(i).E());
	 o_m_GoodPhotons_Pt.push_back(SelectedPhs.at(i).Pt());
	 o_m_GoodPhotons_Eta.push_back(SelectedPhs.at(i).Eta());
	 o_m_GoodPhotons_Phi.push_back(SelectedPhs.at(i).Phi());
	 int phindex=GoodPhotonIndex.at(i);
	 float correctedIso;
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
 o_m_GoodPhotonPtConeIso20.push_back(phr.m_PhotonPtCone20->at(GoodPhotonIndex.at(i)));
 o_m_GoodPhotonPtConeIso30.push_back(phr.m_PhotonPtCone30->at(GoodPhotonIndex.at(i)));
 o_m_GoodPhotonPtConeIso40.push_back(phr.m_PhotonPtCone40->at(GoodPhotonIndex.at(i)));
 o_m_weights.push_back(xsection_weight); 
 std::vector<double> showershapes=phr.PhotonShowerShapes(GoodPhotonIndex.at(i));
 std::vector<int> conversions;
 conversions.push_back(phr.m_PhotonIsConv->at(GoodPhotonIndex.at(i)));
 conversions.push_back(m_ph_nSingleTrackConv->at(GoodPhotonIndex.at(i)));
 conversions.push_back(m_ph_nDoubleTrackConv->at(GoodPhotonIndex.at(i)));
 o_m_GoodPhotons_conversion.push_back( conversions); 
 o_m_GoodPhotons_showershape.push_back(showershapes);
	 if(isMC){ 
		 double combinedweight = m_pileupTool->GetCombinedWeight(m_RunNumber,m_mc_channel_number,m_averageIntPerXing); 
	o_m_weights.push_back(combinedweight);
	}
	}
	 for(int i=0;i<SelectedMus.size();i++){
	  m_logger << VERBOSE << "/** save muons   **/" << SLogger::endmsg;
	 o_m_TightLeptons_E.push_back(SelectedMus.at(i).E());
	 o_m_TightLeptons_Pt.push_back(SelectedMus.at(i).Pt());
	 o_m_TightLeptons_Eta.push_back(SelectedMus.at(i).Eta());
	 o_m_TightLeptons_Phi.push_back(SelectedMus.at(i).Phi());
        o_m_TightLeptons_Charge.push_back(mur.m_MuonCharge->at(TightMuonIndex.at(i)));
  	o_m_TightLeptonsPtConeIso20.push_back(mur.m_MuonIsoPtCone->at(TightMuonIndex.at(i)));
	o_m_TightLeptonsEtConeIso20.push_back(mur.m_MuonIsoEtCone->at(TightMuonIndex.at(i)));
	}
	 COPYVAR_WG;
}
