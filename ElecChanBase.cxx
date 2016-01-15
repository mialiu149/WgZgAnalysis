// NOTE: This analysis code is designed to:
//
// - Select all W->ev + jets candidate events (numerator of ratio calculation)
// - Select all Z->ee + jets candidate events (denominator of ratio calculation)
// - Fill all the sanity check histograms related to W, Z, electron and jets 
//   selections
//
#include <stdio.h>
#include "MuonReader.h"
#include "ElecChanBase.h"
#include "FudgeMCTool.h"
#include "PhotonIDTool.h"
#include <math.h>
#include <list>
#include <vector>
#include <iostream>
#include <iomanip>

#include <TSystem.h>
#include "Muon.h"
#include "Electron.h"
#include "Met.h"
#include "JET.h"
#include "Trigger.h"
#include "Track.h"
#include "Truth.h"
#include "GoodRunSelector.h"
//#include "egammaPIDdefsWithNewTight.h"
#include "WZJratioUtils.h"
#include "McEvtInfo.h"
#include "TRandom.h"
#include "egammaAnalysisUtils/IsEMPlusPlusDefs.h"
#include "egammaAnalysisUtils/checkOQ.h"
#include "egammaAnalysisUtils/egammaSFclass.h"
#include  "egammaAnalysisUtils/CaloIsoCorrection.h"
#include "egammaAnalysisUtils/ConvertedPhotonScaleTool.h"
#include "egammaAnalysisUtils/egammaTriggerMatching.h"
#include "TrigMuonEfficiency/TriggerNavigationVariables.h"
// histograms generated from par file
#include "ElecChanBase_hist.h"
using namespace CaloIsoCorrection;
using namespace ElecChanBase_hist;

using namespace std;
typedef unsigned int uint;

//enble inclusive (observation) analysis cuts
//#define WZJETS  
//#define WZINCLUSIVE
//enable V+jets analysis cuts
//#define WZJETS
#define TIGHTMEDIUM

//______________________________________________________________________
inline bool trkCutInnDet(Track* trk) {

  if (!(trk->nPixHits >= 1)) return 0;
  if ( (trk->nBLHits < 1) && (trk->expectHitInBLayer >= 1)) return 0;
  if (!(trk->nSCTHits >= 6)) return 0;
  if (!(trk->seedFinder == 0)) return 0;

  return 1;
} 

//______________________________________________________________________
inline bool trkCutVertex(Track* trk) {

  if (!(fabs(trk->d0_wrtPV) < 1.5)) return 0;
  if (!(fabs(trk->z0_wrtPV*sin(trk->theta_wrtPV)) < 1.5)) return 0;

  return 1;
}

//______________________________________________________________________
inline bool trkCutTight(Track* trk) {

  if (!trkCutInnDet(trk)) return 0;
  if (!trkCutVertex(trk)) return 0;

  return 1;
}

//______________________________________________________________________
inline bool truthCut(Truth* mc) {

  if (!(mc->status == 1)) return 0;
  if (!((mc->barcode !=0) && (mc->barcode < 100000))) return 0;
  if ( fabs(mc->charge) == 0) return 0;

  return 1;
}


void ElecChanBase::SelectZGamma(vector<Electron*>* myElecs,Met* myMet,vector<Photon*>* myPhotons) {
  //  if(flag_selecZ==0   ) return;

    if(nmedium<2) return;
  //  if(nmedium<2 || (eleotx<2 && flag_truthmatch)  ) return;


  if(pho_eveto_nloose<1 ) return;
  if(pho_eveto_ntight<1){pho_eveto_leadtightindex=pho_eveto_leadlooseindex;}
  //  if(pho_eveto_ntight<1){pho_eveto_leadtightindex=pho_eveto_leadindex;}
  pho_eveto_leadindex=pho_eveto_leadtightindex;

  //  if(pho_eveto_ntight<1|| (pho_eveto_otx<1 && flag_truthmatch)) return;
  //  pho_eveto_leadindex=pho_eveto_leadtightindex;

//   if(nmedium<2){
//     leadmediumindex=leadlooseindex;
//     scndmediumindex=scndlooseindex;
//   }


  TLorentzVector Z4vect(0.,0.,0.,0.);
  TLorentzVector Zgamma4vect(0.,0.,0.,0.);
  float Mee=-999.,MeeGamma;
  Z4vect = leadmedium + scndmedium;
  Mee = Z4vect.M();
 
  Zgamma4vect = leadmedium + scndmedium+pho_eveto_leadclus;
  MeeGamma = Zgamma4vect.M();
  bdeltaR_leadmedium_e_leadclus_gam=leadmedium.DeltaR(pho_eveto_leadclus);
  bdeltaR_scndmedium_e_leadclus_gam=scndmedium.DeltaR(pho_eveto_leadclus);
  //  std::cout<<" EventNumber="<<EventNumber <<" drr1="<<bdeltaR_leadmedium_e_leadclus_gam<<" drr2="<<bdeltaR_scndmedium_e_leadclus_gam<<std::endl;
  bMeeGamma_leadclus=MeeGamma;
  bMee_leadclus=Mee;
  bZpt_leadclus=(leadmedium + scndmedium).Pt();
  bZGpt_leadclus=(leadmedium + scndmedium+pho_eveto_leadclus).Pt();
  if(bMeeGamma_leadclus/1000.>110){
    bz_pass_meeg=1;
  }

}

void ElecChanBase::SelectWGamma(vector<Electron*>* myElecs,Met* myMet,vector<Photon*>* myPhotons) {
  //  cout<<" MET_LocHadTopo_et_org="<<MET_LocHadTopo_et_org <<" MET_LocHadTopo_et="<<MET_LocHadTopo_et<<endl;

  //  if(flag_selecWtight==0  ) return;
  //  if(ntight<1 || (eleotx<1 && flag_truthmatch) ) return;
  if(eleotx<1  ) return;
    if( ntight<1) { leadtightindex=leadlooseindex;}
  Electron* el = (myElecs->at(leadtightindex));
  TLorentzVector  vleadtightele;
  vleadtightele.SetPtEtaPhiE(el->cluster_pt ,el->correta,el->corrphi,el->cluster_E);
  float mEt_et=MET_LocHadTopo_et;
  float mEt_ex=MET_LocHadTopo_etx;
  float mEt_ey=MET_LocHadTopo_ety;//myMet->Ey();
  //  cout<<" MMMMMMMMMMMMM="<<el->cluster_E<< "   "<<el->track_eta<< "   "<<el->track_phi<<"  "<<el->cluster_E <<endl;
//   float mEt_et=myMet->Et();
//   float mEt_ex=myMet->Ex();
//   float mEt_ey=myMet->Ey();
  float totpt=vleadtightele.Pt()+mEt_et;
  float totpx=vleadtightele.Px()+mEt_ex;
  float totpy=vleadtightele.Py()+mEt_ey;
//   btranW=sqrt(totpt*totpt-totpx*totpx-totpy*totpy);
//   bWpt==sqrt(totpx*totpx+totpy*totpy);

//  if((pho_eveto_ntight<1) || (pho_eveto_otx<1 && flag_truthmatch) ) return;

  if((pho_eveto_otx<1)  ) return;
  if(pho_eveto_ntight<1){pho_eveto_leadtightindex=pho_eveto_leadlooseindex;}
  //  if(pho_eveto_ntight<1){pho_eveto_leadtightindex=pho_eveto_leadindex;}
  pho_eveto_leadindex=pho_eveto_leadtightindex;
  Photon* ph = (myPhotons->at(pho_eveto_leadindex));
  TLorentzVector pho_eveto_leadclus;
  pho_eveto_leadclus.SetPtEtaPhiE(ph->cluster_pt ,ph->sampl2_eta,ph->cluster_phi,ph->cluster_E);
  
  bdeltaR=pho_eveto_leadclus.DeltaR(vleadtightele);
  float totalpt2= pho_eveto_leadclus.Pt()+MET_LocHadTopo_et+ vleadtightele.Pt();
  float inveg=(pho_eveto_leadclus+vleadtightele).M();

  binveg=inveg;
  //  cout<<" inveg="<<inveg<<endl;
  float ptab=pow((pho_eveto_leadclus.Px()+vleadtightele.Px()),2)+pow((pho_eveto_leadclus.Py()+vleadtightele.Py()),2);
  float totalpar1=pow(sqrt(ptab+inveg*inveg)+MET_LocHadTopo_et,2);
  float totalpx=pho_eveto_leadclus.Px()+mEt_ex+ vleadtightele.Px();
  float totalpy=pho_eveto_leadclus.Py()+mEt_ey+ vleadtightele.Py();
  btranWpho=sqrt(totalpar1-totalpx*totalpx-totalpy*totalpy);

  flag_selecWgamma=1;

  if( fabs(binveg/1000.-91.1876)>10){
  b_pass_invwindow=1;
  }
  if( fabs(binveg/1000.)>100){
  b_pass_invthreshold=1;
  }
}


//______________________________________________________________________
ElecChanBase::ElecChanBase(TTree * /*tree*/) : 
  m_egammaScalingFactors() { 
  
  if (flag_DEBUG) std::cout << "In ElecChanBase constructor: " << this << std::endl;
}

void ElecChanBase::Init(TTree* tree) {
  // Call parent initialisation and call customisation for electron channel
  EvtBuilder::Init(tree);
  EvtBuilder::setPileupHists(tablespath + "/pileup/ilumicalc_histograms_EF_e20_medium_178044-184169.root");
  
  //  m_pileupMCFile("../tables/pileup/SummedMcPileupConf.root");
}
//______________________________________________________________________
void ElecChanBase::Begin(TTree * /*tree*/) {


// initiate the calibration tool

  jetAlgo="AntiKt4TopoEM";
  JES_config_file=tablespath+"CalibrationConfigs/Rel17_JES.config";
  myJES = new JetCalibrationTool(jetAlgo,JES_config_file, !flag_isMC);
  converted_tool=new ConvertedPhotonScaleTool("__panda_rootCoreWorkDir/egammaAnalysisUtils/share/conversion.root");
  //  TriggerNavigationVariables* triggerNavigationVariables = new TriggerNavigationVariables(); 
  m_timer.Reset();
  m_timer.Start();
  m_totaltime = 0;
  n_all=0;
  n_pt=0,n_eta=0,n_oq=0,n_author=0;
  n_tight=0,n_z0=0,n_d0=0,n_caloiso=0,n_trackiso=0;
   nph_all=0, nph_pt=0,    nph_otx=0,    nph_eta=0,nph_tight=0,nph_iso=0;

  // Initialize global variables

  fraclast=0.0;
  
  // counters
  
  nevt = 0;
  
  // not nice ! output file must be current file - check that it is  
  m_outputFile = gFile;    
 
  Info("Begin","Writing to %s",m_outputFile->GetName());
  
  //preparing for systematic studies
  cout << "flag_sysname " << flag_sysname << endl;
 
  TString syst="";
  syst+=flag_sysname;

  for(int i=0;i<sizeof(systematics)/sizeof(systematics[0]);i++) {
    if(systematics[i].CompareTo(syst)==0) m_systype=i;
  }
  
  cout<<m_systype<<endl;

  //bools for systematics
  looseelectron=0;
  looseelectrontruee=0;
  mediumelectron=0;
  mediumelectrontruee=0;
  truthept=0;
  trutheeta=0;
  truthmet=0;
  truthneutrino=0;
  JES5plus=0;
  JES5minus=0;
  QCDantitight=0;


  if(syst=="loose") {looseelectron=1;}
  if(syst=="loosetrue") {looseelectrontruee=1; looseelectron=1;}
  if(syst=="medium") {mediumelectron=1;}
  if(syst=="mediumtrue") {mediumelectrontruee=1;mediumelectron=1;}
  if(syst=="truthpt") {truthept=1;}
  if(syst=="trutheta") {trutheeta=1;}
  if(syst=="truthmet") {truthmet=1;}
  if(syst=="truthneutrino") {truthneutrino=1;}
  if(syst=="jetplus5") {JES5plus=1;}
  if(syst=="jetminus5") {JES5minus=1;}
  if(syst=="antitight") {QCDantitight=1;}

  cout << " looseelectron " << looseelectron << endl;
  cout << " looseelectrontruee " << looseelectrontruee << endl;
  cout << " mediumelectron " << mediumelectron << endl;
  cout << " mediumelectrontruee " << mediumelectrontruee << endl;
  cout << " truthpt " << truthept << endl;
  cout << " trutheta " <<trutheeta << endl;
  cout << " truthmet " << truthmet << endl;
  cout << " truthneutrino " <<truthneutrino << endl;
  cout << " jetplus5 " << JES5plus << endl;
  cout << " jetminus5 " << JES5minus << endl;
  cout << " QCDantitight " << QCDantitight << endl;

  //end preparing for systematic studies
  //-----------------------------------------------------------------------------


  // autogenerated histograms booking

  if (m_systype==0) {
    for (int sys=0; sys < MAXSYSTYPES; sys++) {
      for (int h=0; h < 400000; h++) {
        harray[sys][h] = 0;
      }
    }
    bookHistograms(m_outputFile, harray);
    Rebin(harray);
   alltree = new TTree("alltree","Reconst ntuple");

  alltree->Branch("train",   &train,"train/I"   );
  alltree->Branch("larError",&larError,"larError/i");
  alltree->Branch("EF_g40_loose",   &EF_g40_loose,"EF_g40_loose/b"   );
  alltree->Branch("EF_g60_loose",   &EF_g60_loose,"EF_g60_loose/b"   );
  alltree->Branch("EF_g80_loose",   &EF_g80_loose,"EF_g80_loose/b"   );

  alltree->Branch("flag_grl_wenu",&flag_grl_wenu,"flag_grl_wenu/I");
  //  alltree->Branch("flag_grl_zee",&flag_grl_zee,"flag_grl_zee/I");
  //  alltree->Branch("flag_PV",&flag_PV,"flag_PV/b");
  alltree->Branch("flag_isMC",&flag_isMC,"flag_isMC/b");
  // alltree->Branch("L1_EM10",&L1_EM10,"L1_EM10/b");
  alltree->Branch("L1_EM14",&L1_EM14,"L1_EM14/b");
  // alltree->Branch("EF_EM10Medium",&EF_EM10Medium,"EF_EM10Medium/b");
  // alltree->Branch("EF_EM15Medium",&EF_EM15Medium,"EF_EM15Medium/b");
  // alltree->Branch("EF_EM15loose",&EF_EM15loose,"EF_EM15loose/b");
  //  alltree->Branch("EF_EM20loose",&EF_EM20loose,"EF_EM20loose/b");
  alltree->Branch("npv",&npv,"npv/I");
  // alltree->Branch("eleauthor",&eleauthor,"eleauthor/I");
  // alltree->Branch("eleeta",&eleeta,"eleeta/I");
  // alltree->Branch("eleclus",&eleclus,"eleclus/I");
  alltree->Branch("flag_selecZ",&flag_selecZ,"flag_selecZ/I");
  alltree->Branch("flag_selecZmedium",&flag_selecZmedium,"flag_selecZmedium/I");
  alltree->Branch("flag_selecWtight",&flag_selecWtight,"flag_selecWtight/b");
  alltree->Branch("flag_METcleanup",&flag_METcleanup,"flag_METcleanup/b");
  alltree->Branch("flag_METcleanup2",&flag_METcleanup2,"flag_METcleanup2/b");
  alltree->Branch("b_pass_grl",&b_pass_grl,"b_pass_grl/b");
  alltree->Branch("b_pass_trigger",&b_pass_trigger,"b_pass_trigger/b");
  alltree->Branch("b_pass_tight",&b_pass_tight,"b_pass_tight/b");
  alltree->Branch("b_pass_zveto",&b_pass_zveto,"b_pass_zveto/b");
  alltree->Branch("b_pass_met",&b_pass_met,"b_pass_met/b");
  alltree->Branch("b_pass_mt",&b_pass_mt,"b_pass_mt/b");
  alltree->Branch("b_pass_photight",&b_pass_photight,"b_pass_photight/b");
  alltree->Branch("b_pass_phoiso",&b_pass_phoiso,"b_pass_phoiso/b");
  alltree->Branch("b_pass_invwindow",&b_pass_invwindow,"b_pass_invwindow/b");
  alltree->Branch("b_pass_invthreshold",&b_pass_invthreshold,"b_pass_invthreshold/b");
  alltree->Branch("b_pass_jetveto",&b_pass_jetveto,"b_pass_jetveto/b");
  alltree->Branch("bz_pass_nmedium",&bz_pass_nmedium,"bz_pass_nmedium/b");
  alltree->Branch("bz_pass_meeg",&bz_pass_meeg,"bz_pass_meeg/b");

  alltree->Branch("eleotx",&eleotx,"eleotx/I");
  alltree->Branch("nloose",&nloose,"nloose/I");
  alltree->Branch("nmedium",&nmedium,"nmedium/I");
  alltree->Branch("ntight",&ntight,"ntight/I");
//   alltree->Branch("Z_mass",&Z_mass,"Z_mass/F");
//   alltree->Branch("Z_charge",&Z_charge,"Z_charge/I");
//   alltree->Branch("Z_Pt",&Z_Pt,"Z_Pt/F");
//  alltree->Branch("pho_eveto_author",&pho_eveto_author,"pho_eveto_author/I");
  alltree->Branch("pho_eveto_eveto",&pho_eveto_eveto,"pho_eveto_eveto/I");
  alltree->Branch("pho_eveto_eta",&pho_eveto_eta,"pho_eveto_eta/I");
  alltree->Branch("pho_eveto_clus",&pho_eveto_clus,"pho_eveto_clus/I");
  alltree->Branch("pho_eveto_otx",&pho_eveto_otx,"pho_eveto_otx/I");
  alltree->Branch("pho_eveto_nloose",&pho_eveto_nloose,"pho_eveto_nloose/I");
  alltree->Branch("pho_eveto_nloose_iso",&pho_eveto_nloose_iso,"pho_eveto_nloose_iso/I");
  alltree->Branch("pho_eveto_ntight",&pho_eveto_ntight,"pho_eveto_ntight/I");

  alltree->Branch("EventNumber",&EventNumber,"EventNumber/I");
  alltree->Branch("RunNumber",&RunNumber,"RunNumber/I");
  alltree->Branch("lbn",&lbn,"lbn/I");
  //  alltree->Branch("bcid",&bcid,"bcid/I");
  alltree->Branch("bjetoverlap",   &bjetoverlap,"bjetoverlap/b"   );
  alltree->Branch("EF_e20_medium",   &EF_e20_medium,"EF_e20_medium/b"   );
  //  alltree->Branch("btranW",&btranW,"btranW/F");
  //  alltree->Branch("bWpt",&bWpt,"bWpt/F");
//   alltree->Branch("MET_LH_Topo_pt",&MET_LH_Topo_pt,"MET_LH_Topo_pt/F");
//   alltree->Branch("MET_LH_Topo_phi",&MET_LH_Topo_phi,"MET_LH_Topo_phi/F");
//   alltree->Branch("MET_Track_pt",&MET_Track_pt,"MET_Track_pt/F");
//   alltree->Branch("MET_Track_phi",&MET_Track_phi,"MET_Track_phi/F");
//   alltree->Branch("beleclpt",&beleclpt,"beleclpt/F");
//   alltree->Branch("bphoclpt",&bphoclpt,"bphoclpt/F");
//   alltree->Branch("belecleta",&belecleta,"belecleta/F");
//   alltree->Branch("bphocleta",&bphocleta,"bphocleta/F");
  alltree->Branch("jetsexc",&jetsexc,"jetsexc/I");
  alltree->Branch("bunchpos",&bunchpos,"bunchpos/I");

//   cutflowtree->Branch("bcid",&bcid,"bcid/I");
//   cutflowtree->Branch("bcid",&bcid,"bcid/I");
//   cutflowtree->Branch("bcid",&bcid,"bcid/I");
//   cutflowtree->Branch("bcid",&bcid,"bcid/I");


  outtree = new TTree("outtree","Truth ntuple");
  cutflowtree = new TTree("cutflowtree","Reconst ntuple");
  //  cutflowtree->Branch("",   &EF_g40_loose,"EF_g40_loose/b"   );

  //wperiodD
  if(flag_isMC){
  outtree->Branch("pileupweight",&pileupweight,"pileupweight/F");
  //  outtree->Branch("overallweight",&overallweight,"overallweight/F");
  outtree->Branch("overallweight_Zg",&overallweight_Zg,"overallweight_Zg/F");
  outtree->Branch("overallweight_Wg",&overallweight_Wg,"overallweight_Zg/F");
  outtree->Branch("mcevt_event_scale",&mcevt_event_scale,"mcevt_event_scale/F");
  outtree->Branch("mcevt_alphaQCD",&mcevt_alphaQCD,"mcevt_alphaQCD/F");
  outtree->Branch("mcevt_alphaQED",&mcevt_alphaQED,"mcevt_alphaQED/F");
  outtree->Branch("mcevt_pdf_scale",&mcevt_pdf_scale,"mcevt_pdf_scale/F");
  outtree->Branch("mcevt_pdf_id1",&mcevt_pdf_id1,"mcevt_pdf_id1/I");
  outtree->Branch("mcevt_pdf_id2",&mcevt_pdf_id2,"mcevt_pdf_id2/I");
  outtree->Branch("mcevt_pdf_x1",&mcevt_pdf_x1,"mcevt_pdf_x1/F");
  outtree->Branch("mcevt_pdf_x2",&mcevt_pdf_x2,"mcevt_pdf_x2/F");
  outtree->Branch("mcevt_pdf1",&mcevt_pdf1,"mcevt_pdf1/F");
  outtree->Branch("mcevt_pdf2",&mcevt_pdf2,"mcevt_pdf2/F");
  outtree->Branch("ngen",&ngen,"ngen/I");
  outtree->Branch("gen_parton_pdgId" ,&m_nt_gen_parton_pdgId,"m_nt_gen_parton_pdgId[ngen]/I"); 
  outtree->Branch("gen_parton_pt" ,&m_nt_gen_parton_pt,"m_nt_gen_parton_pt[ngen]/F"); 
  outtree->Branch("gen_parton_eta" ,&m_nt_gen_parton_eta,"m_nt_gen_parton_eta[ngen]/F"); 
  outtree->Branch("gen_parton_phi" ,&m_nt_gen_parton_phi,"m_nt_gen_parton_phi[ngen]/F"); 
  outtree->Branch("gen_parton_m" ,&m_nt_gen_parton_m,"m_nt_gen_parton_m[ngen]/F"); 


  outtree->Branch("pileupweight",&pileupweight,"pileupweight/F");

  outtree->Branch("overallweight_Zg",&overallweight_Zg,"overallweight_Zg/F");
  outtree->Branch("overallweight_Wg",&overallweight_Wg,"overallweight_Wg/F");

  outtree->Branch("btruthjetpt",&btruthjetpt,"btruthjetpt/F");
  outtree->Branch("btruthjeteta",&btruthjeteta,"btruthjeteta/F");
  outtree->Branch("btruthjetphi",&btruthjetphi,"btruthjetphi/F");

  outtree->Branch("btruthphopt",&btruthphopt,"btruthphopt/F");
  outtree->Branch("btruthphoeta",&btruthphoeta,"btruthphoeta/F");
  outtree->Branch("btruthphophi",&btruthphophi,"btruthphophi/F");

  outtree->Branch("btruthnupt",&btruthnupt,"btruthnupt/F");
  outtree->Branch("btruthnueta",&btruthnueta,"btruthnueta/F");
  outtree->Branch("btruthnuphi",&btruthnuphi,"btruthnuphi/F");

  outtree->Branch("btruthZmass",&btruthZmass,"btruthZmass/F");


  outtree->Branch("btruthleppt",&btruthleppt,"btruthleppt/F");
  outtree->Branch("btruthlepeta",&btruthlepeta,"btruthlepeta/F");
  outtree->Branch("btruthlepphi",&btruthlepphi,"btruthlepphi/F");

  outtree->Branch("btruthempt",&btruthempt,"btruthempt/F");
  outtree->Branch("btruthemeta",&btruthemeta,"btruthemeta/F");
  outtree->Branch("btruthemphi",&btruthemphi,"btruthemphi/F");

  outtree->Branch("btrutheppt",&btrutheppt,"btrutheppt/F");
  outtree->Branch("btruthepeta",&btruthepeta,"btruthepeta/F");
  outtree->Branch("btruthepphi",&btruthepphi,"btruthepphi/F");

  outtree->Branch("bphocleta",&bphocleta,"bphocleta/F");
  outtree->Branch("bphoclpt",&bphoclpt,"bphoclpt/F");
  outtree->Branch("belept",&belept,"belept/F");
//   outtree->Branch("btranW",&btranW,"btranW/F");
//   outtree->Branch("binveg",&binveg,"binveg/F");
  outtree->Branch("belecleta",&belecleta,"belecleta/F");
  outtree->Branch("MET_LocHadTopo_et",&MET_LocHadTopo_et,"MET_LocHadTopo_et/F");
  outtree->Branch("flagWg",&flagWg,"flagWg/b");
  outtree->Branch("flagZg",&flagZg,"flagZg/b");
  ///   cutflowtree->Branch("gen_parton_pt"    ,&m_nt_gen_parton_pt  );
//   cutflowtree->Branch("gen_parton_eta"   ,&m_nt_gen_parton_eta );
//   cutflowtree->Branch("gen_parton_phi"   ,&m_nt_gen_parton_phi );
//   cutflowtree->Branch("gen_parton_m"     ,&m_nt_gen_parton_m   );

  cutflowtree->Branch("pileupweight",&pileupweight,"pileupweight/F");
  cutflowtree->Branch("McEventWeight",&McEventWeight,"McEventWeight/F");
  cutflowtree->Branch("McEventWeightGenerator",&McEventWeightGenerator,"McEventWeightGenerator/F");
  cutflowtree->Branch("btruthphoiso_antikt4",&btruthphoiso_antikt4,"btruthphoiso_antikt4/F");
  cutflowtree->Branch("nantikt4truthjetpass",&nantikt4truthjetpass,"nantikt4truthjetpass/I");
  cutflowtree->Branch("nantikt4truthjet",&nantikt4truthjet,"nantikt4truthjet/I");
  //  cutflowtree->Branch("gen_parton_pdgId" ,&m_nt_gen_parton_pdgId,"m_nt_gen_parton_pdgId[nantikt4truthjet]/I"); 
  cutflowtree->Branch("truthjet_pt" ,&truthjet_pt,"truthjet_pt[nantikt4truthjet]/F"); 
  cutflowtree->Branch("truthjet_eta" ,&truthjet_eta,"truthjet_eta[nantikt4truthjet]/F"); 
  cutflowtree->Branch("truthjet_phi" ,&truthjet_phi,"truthjet_phi[nantikt4truthjet]/F"); 
  cutflowtree->Branch("truthjet_m" ,&truthjet_m,"truthjet_m[nantikt4truthjet]/F"); 
  cutflowtree->Branch("truthjet_rapidity" ,&truthjet_rapidity,"truthjet_rapidity[nantikt4truthjet]/F"); 
  cutflowtree->Branch("bttranW",&bttranW,"bttranW/F");
  cutflowtree->Branch("bscndmedium_type",&bscndmedium_type,"bscndmedium_type/I");
  cutflowtree->Branch("bscndmedium_orgin",&bscndmedium_orgin,"bscndmedium_orgin/I");
  cutflowtree->Branch("bscndmedium_hastbrem",&bscndmedium_hastbrem,"bscndmedium_hastbrem/I");
  cutflowtree->Branch("bscndmedium_pdg",&bscndmedium_pdg,"bscndmedium_pdg/I");
  cutflowtree->Branch("bscndmedium_mpdg",&bscndmedium_mpdg,"bscndmedium_mpdg/I");

//   cutflowtree->Branch("CS_ttheta2",&CS_ttheta2,"CS_ttheta2/F");
//   cutflowtree->Branch("CS_ttheta",&CS_ttheta,"CS_ttheta/F");
//   cutflowtree->Branch("CS_tphi",&CS_tphi,"CS_tphi/F");
//   cutflowtree->Branch("CS_tphi2",&CS_tphi2,"CS_tphi2/F");

  cutflowtree->Branch("bgoodphoclean",&bgoodphoclean,"bgoodphoclean/b");
  cutflowtree->Branch("bphotonclean",&bphotonclean,"bphotonclean/b");


//   cutflowtree->Branch("bhelicity_tsol1",&bhelicity_tsol1,"bhelicity_tsol1/F");
//   cutflowtree->Branch("bhelicity_tsol2",&bhelicity_tsol2,"bhelicity_tsol2/F");

   cutflowtree->Branch("flagem",&flagem,"flagem/I");
   cutflowtree->Branch("flagep",&flagep,"flagep/I");
   cutflowtree->Branch("btruthjettype",&btruthjettype,"btruthjettype/I");
   cutflowtree->Branch("bideal",&bideal,"bideal/b");



  if(flag_isMC){
  cutflowtree->Branch("truedeltaReg",&truedeltaReg,"truedeltaReg/F");
  cutflowtree->Branch("truedeltaRepg",&truedeltaRepg,"truedeltaRepg/F");
  cutflowtree->Branch("truedeltaRemg",&truedeltaRemg,"truedeltaRemg/F");
  cutflowtree->Branch("btMee",&btMee,"btMee/F");
  cutflowtree->Branch("btruth_Wpt",&btruth_Wpt,"btruth_Wpt/F");
  cutflowtree->Branch("bele_effSF",&bele_effSF,"bele_effSF/F");
  cutflowtree->Branch("bele_effSF_error",&bele_effSF_error,"bele_effSF_error/F");

  cutflowtree->Branch("bele_triggerSF",&bele_triggerSF,"bele_triggerSF/F");
  cutflowtree->Branch("bele_triggerSF_error",&bele_triggerSF_error,"bele_triggerSF_error/F");

  cutflowtree->Branch("bele_recoSF",&bele_recoSF,"bele_recoSF/F");
  cutflowtree->Branch("bele_recoSF_error",&bele_recoSF_error,"bele_recoSF_error/F");
    

  cutflowtree->Branch("bleadmedium_effSF",&bleadmedium_effSF,"bleadmedium_effSF/F");
  cutflowtree->Branch("bleadmedium_effSF_error",&bleadmedium_effSF_error,"bleadmedium_effSF_error/F");

  cutflowtree->Branch("bleadmedium_triggerSF",&bleadmedium_triggerSF,"bleadmedium_triggerSF/F");
  cutflowtree->Branch("bleadmedium_triggerSF_error",&bleadmedium_triggerSF_error,"bleadmedium_triggerSF_error/F");

  cutflowtree->Branch("bleadmedium_recoSF",&bleadmedium_recoSF,"bleadmedium_recoSF/F");
  cutflowtree->Branch("bleadmedium_recoSF_error",&bleadmedium_recoSF_error,"bleadmedium_recoSF_error/F");


  cutflowtree->Branch("bscndmedium_effSF",&bscndmedium_effSF,"bscndmedium_effSF/F");
  cutflowtree->Branch("bscndmedium_effSF_error",&bscndmedium_effSF_error,"bscndmedium_effSF_error/F");

  cutflowtree->Branch("bscndmedium_triggerSF",&bscndmedium_triggerSF,"bscndmedium_triggerSF/F");
  cutflowtree->Branch("bscndmedium_triggerSF_error",&bscndmedium_triggerSF_error,"bscndmedium_triggerSF_error/F");

  cutflowtree->Branch("bscndmedium_recoSF",&bscndmedium_recoSF,"bscndmedium_recoSF/F");
  cutflowtree->Branch("bscndmedium_recoSF_error",&bscndmedium_recoSF_error,"bscndmedium_recoSF_error/F");



  cutflowtree->Branch("bphopdg",&bphopdg,"bphopdg/I");
  cutflowtree->Branch("bphompdg",&bphompdg,"bphompdg/I");
  cutflowtree->Branch("belepdg",&belepdg,"belepdg/I");
  cutflowtree->Branch("belempdg",&belempdg,"belempdg/I");
  cutflowtree->Branch("beletype",&beletype,"beletype/I");
  cutflowtree->Branch("beleorgin",&beleorgin,"beleorgin/I");

//   cutflowtree->Branch("bphotruthdr",&bphotruthdr,"bphotruthdr/F");
//   cutflowtree->Branch("beletruthdr",&beletruthdr,"bphotruthdr/F");

  cutflowtree->Branch("wperiodD",&wperiodD,"wperiodD/F");
//   cutflowtree->Branch("wperiodE",&wperiodE,"wperiodE/F");
//   cutflowtree->Branch("wperiodF",&wperiodF,"wperiodF/F");
//   cutflowtree->Branch("wperiodG",&wperiodG,"wperiodG/F");
//   cutflowtree->Branch("wperiodDEF",&wperiodDEF,"wperiodDEF/F");

   cutflowtree->Branch("bleadmediumtruthdr",&bleadmediumtruthdr,"bleadmediumtruthdr/F");
   cutflowtree->Branch("bscndmediumtruthdr",&bscndmediumtruthdr,"bscndmediumtruthdr/F");

  cutflowtree->Branch("beletruthdr",&beletruthdr,"beletruthdr/F");
  cutflowtree->Branch("bphotruthdr",&bphotruthdr,"bphotruthdr/F");
//   cutflowtree->Branch("btruthLP",&btruthLP,"btruthLP/F");
//   cutflowtree->Branch("btruthLP3D",&btruthLP3D,"btruthLP3D/F");
//   cutflowtree->Branch("btruthLP3D_sol1",&btruthLP3D_sol1,"btruthLP3D_sol1/F");
//   cutflowtree->Branch("btruthLP3D_sol2",&btruthLP3D_sol2,"btruthLP3D_sol2/F");
//   cutflowtree->Branch("btruth_PW",&btruth_PW,"btruth_PW/F");
//   cutflowtree->Branch("btruth_EW",&btruth_EW,"btruth_EW/F");

  cutflowtree->Branch("bdeltaRphjet",&bdeltaRphjet,"bdeltaRphjet/F");
  cutflowtree->Branch("bdeltaphiphjet",&bdeltaphiphjet,"bdeltaphiphjet/F");
  cutflowtree->Branch("trueinveg",&trueinveg,"trueinveg/F");
  cutflowtree->Branch("trueinvenu",&trueinvenu,"trueinvenu/F");
  cutflowtree->Branch("trueinvenug",&trueinvenug,"trueinvenug/F");



  cutflowtree->Branch("ntruthjet",&ntruthjet,"ntruthjet/I");
  cutflowtree->Branch("ntruthjetpass",&ntruthjetpass,"ntruthjetpass/I");
  cutflowtree->Branch("ntruthjetpassww",&ntruthjetpassww,"ntruthjetpassww/I");
  cutflowtree->Branch("btruthjet1pt",&btruthjet1pt,"btruthjet1pt/F");
  cutflowtree->Branch("btruthjet2pt",&btruthjet2pt,"btruthjet2pt/F");
  cutflowtree->Branch("btruthjet3pt",&btruthjet3pt,"btruthjet3pt/F");
  cutflowtree->Branch("btruthjet4pt",&btruthjet4pt,"btruthjet4pt/F");
  cutflowtree->Branch("btruthjet5pt",&btruthjet5pt,"btruthjet5pt/F");

  cutflowtree->Branch("btruthjet1eta",&btruthjet1eta,"btruthjet1eta/F");
  cutflowtree->Branch("btruthjet2eta",&btruthjet2eta,"btruthjet2eta/F");
  cutflowtree->Branch("btruthjet3eta",&btruthjet3eta,"btruthjet3eta/F");
  cutflowtree->Branch("btruthjet4eta",&btruthjet4eta,"btruthjet4eta/F");
  cutflowtree->Branch("btruthjet5eta",&btruthjet5eta,"btruthjet5eta/F");


  cutflowtree->Branch("btruthjetpt",&btruthjetpt,"btruthjetpt/F");
  cutflowtree->Branch("btruthjeteta",&btruthjeteta,"btruthjeteta/F");
  cutflowtree->Branch("btruthjetphi",&btruthjetphi,"btruthjetphi/F");

  cutflowtree->Branch("btruthphopt",&btruthphopt,"btruthphopt/F");
  cutflowtree->Branch("btruthphoeta",&btruthphoeta,"btruthphoeta/F");
  cutflowtree->Branch("btruthphophi",&btruthphophi,"btruthphophi/F");

  cutflowtree->Branch("btruthnupt",&btruthnupt,"btruthnupt/F");
  cutflowtree->Branch("btruthnueta",&btruthnueta,"btruthnueta/F");
  cutflowtree->Branch("btruthnuphi",&btruthnuphi,"btruthnuphi/F");

  cutflowtree->Branch("btruthZmass",&btruthZmass,"btruthZmass/F");

  cutflowtree->Branch("btruthZgmass",&btruthZgmass,"btruthZgmass/F");

  cutflowtree->Branch("btruthleppt",&btruthleppt,"btruthleppt/F");
  cutflowtree->Branch("btruthlepeta",&btruthlepeta,"btruthlepeta/F");
  cutflowtree->Branch("btruthlepphi",&btruthlepphi,"btruthlepphi/F");

  cutflowtree->Branch("btruthempt",&btruthempt,"btruthempt/F");
  cutflowtree->Branch("btruthemeta",&btruthemeta,"btruthemeta/F");
  cutflowtree->Branch("btruthemphi",&btruthemphi,"btruthemphi/F");

  cutflowtree->Branch("btrutheppt",&btrutheppt,"btrutheppt/F");
  cutflowtree->Branch("btruthepeta",&btruthepeta,"btruthepeta/F");
  cutflowtree->Branch("btruthepphi",&btruthepphi,"btruthepphi/F");

  cutflowtree->Branch("btruthWM",&btruthWM,"btruthWM/F");
  cutflowtree->Branch("btruthWpt",&btruthWpt,"btruthWpt/F");
  cutflowtree->Branch("btruthWeta",&btruthWeta,"btruthWeta/F");
  cutflowtree->Branch("btruthWphi",&btruthWphi,"btruthWphi/F");
  cutflowtree->Branch("btruthWy",&btruthWy,"btruthWy/F");

//   cutflowtree->Branch("btnupz2",&btnupz2,"btnupz2/F");
//   cutflowtree->Branch("btnupz",&btnupz,"btnupz/F");
//   cutflowtree->Branch("btnupz_truth",&btnupz_truth,"btnupz_truth/F");
//   cutflowtree->Branch("bhelicity_tsol_min",&bhelicity_tsol_min,"bhelicity_tsol_min/F");
//   cutflowtree->Branch("bhelicity_tsol_max",&bhelicity_tsol_max,"bhelicity_tsol_max/F");

  cutflowtree->Branch("bphotruthiso10",&bphotruthiso10,"bphotruthiso10/F");
  cutflowtree->Branch("bphotruthiso20",&bphotruthiso20,"bphotruthiso20/F");
  cutflowtree->Branch("bphotruthiso30",&bphotruthiso30,"bphotruthiso30/F");
  cutflowtree->Branch("bphotruthiso40",&bphotruthiso40,"bphotruthiso40/F");
  cutflowtree->Branch("bphotruthiso60",&bphotruthiso60,"bphotruthiso60/F");


  cutflowtree->Branch("sumalgen30",&sumalgen30,"sumalgen30/F");
  cutflowtree->Branch("sumalgen40",&sumalgen40,"sumalgen40/F");
  cutflowtree->Branch("sumalgen30_159",&sumalgen30_159,"sumalgen30_159/F");
  cutflowtree->Branch("sumalgen40_159",&sumalgen40_159,"sumalgen40_159/F");
  cutflowtree->Branch("sumalgen30_158",&sumalgen30_158,"sumalgen30_158/F");
  cutflowtree->Branch("sumalgen40_158",&sumalgen40_158,"sumalgen40_158/F");

  cutflowtree->Branch("sumalgen30_158_159",&sumalgen30_158_159,"sumalgen30_158_159/F");
  cutflowtree->Branch("sumalgen40_158_159",&sumalgen40_158_159,"sumalgen40_158_159/F");


  cutflowtree->Branch("btruthscndjetpt",&btruthscndjetpt,"btruthscndjetpt/F");
  cutflowtree->Branch("btruthscndjeteta",&btruthscndjeteta,"btruthscndjeteta/F");
  cutflowtree->Branch("btruthscndjetphi",&btruthscndjetphi,"btruthscndjetphi/F");

  cutflowtree->Branch("btruejetphi",&btruejetphi,"btruejetphi/F");
  cutflowtree->Branch("btruejeteta",&btruejeteta,"btruejeteta/F");
  cutflowtree->Branch("btruebremphi",&btruebremphi,"btruebremphi/F");
  cutflowtree->Branch("btruebremeta",&btruebremeta,"btruebremeta/F");

  cutflowtree->Branch("flag_truejet",&flag_truejet,"flag_truejet/I");
  cutflowtree->Branch("btruejettype",&btruejettype,"btruejettype/I");
  cutflowtree->Branch("flagW_elecut_fid",&flagW_elecut_fid,"flagW_elecut_fid/I");
  cutflowtree->Branch("flagW_elecut_fidgap",&flagW_elecut_fidgap,"flagW_elecut_fidgap/I");
  cutflowtree->Branch("flagW_metcut_acc",&flagW_metcut_acc,"flagW_metcut_acc/I");
  cutflowtree->Branch("flagW_mtcut_acc",&flagW_mtcut_acc,"flagW_mtcut_acc/I");
  cutflowtree->Branch("flagW_elecut_fid_dress",&flagW_elecut_fid_dress,"flagW_elecut_fid_dress/I");
  cutflowtree->Branch("flagW_elecut_fidgap_dress",&flagW_elecut_fidgap_dress,"flagW_elecut_fidgap_dress/I");
  cutflowtree->Branch("flagW_mtcut_acc_dress",&flagW_mtcut_acc_dress,"flagW_mtcut_acc_dress/I");
  cutflowtree->Branch("flagZ_elecut_acc",&flagZ_elecut_acc,"flagZ_elecut_acc/I");
  cutflowtree->Branch("flagZ_elecut_fidgap",&flagZ_elecut_fidgap,"flagZ_elecut_fidgap/I"); 
  cutflowtree->Branch("flagZ_elecut_fidgap",&flagZ_elecut_fidgap,"flagZ_elecut_fidgap/I"); 
  cutflowtree->Branch("bleadmedium_type",&bleadmedium_type,"bleadmedium_type/I");
  cutflowtree->Branch("bleadmedium_orgin",&bleadmedium_orgin,"bleadmedium_orgin/I");
  cutflowtree->Branch("bleadmedium_hastbrem",&bleadmedium_hastbrem,"bleadmedium_hastbrem/I");
  cutflowtree->Branch("bleadmedium_pdg",&bleadmedium_pdg,"bleadmedium_pdg/I");
  cutflowtree->Branch("bleadmedium_mpdg",&bleadmedium_mpdg,"bleadmedium_mpdg/I");


  }



  cutflowtree->Branch("flagZ_masscut_acc",&flagZ_masscut_acc,"flagZ_masscut_acc/I"); 
 cutflowtree->Branch("flag_gam_fid_Z",&flag_gam_fid_Z,"flag_gam_fid_Z/I");
 cutflowtree->Branch("flag_gam_fidgap_Z",&flag_gam_fidgap_Z,"flag_gam_fidgap_Z/I");
 cutflowtree->Branch("flag_gam_fidgap",&flag_gam_fidgap,"flag_gam_fidgap/I");
  cutflowtree->Branch("flag_gam_fid",&flag_gam_fid,"flag_gam_fid/I");
  //  cutflowtree->Branch("HE_tphi",&HE_tphi,"HE_tphi/F");

  //  cutflowtree->Branch("bbremjetdr",&bbremjetdr,"bbremjetdr/F");
  //  cutflowtree->Branch("bbremdr",&bbremdr,"bbremdr/F");

  }

  cutflowtree->Branch("EF_g20_loose",&EF_g20_loose,"EF_g20_loose/b");
  cutflowtree->Branch("EF_g40_loose",&EF_g40_loose,"EF_g40_loose/b");
  cutflowtree->Branch("EF_g60_loose",&EF_g60_loose,"EF_g60_loose/b");
  cutflowtree->Branch("EF_g80_loose",&EF_g80_loose,"EF_g80_loose/b");
  cutflowtree->Branch("istrigger",&istrigger,"istrigger/b");



  cutflowtree->Branch("larError",&larError,"larError/i");

  cutflowtree->Branch("bis_tightAR",&bis_tightAR,"bis_tightAR/b");
//   cutflowtree->Branch("MET_Track_phi",&MET_Track_phi,"MET_Track_phi/F");
//   cutflowtree->Branch("MET_Track_et",&MET_Track_et,"MET_Track_et/F");
//   cutflowtree->Branch("MET_Track_sumet",&MET_Track_sumet,"MET_Track_sumet/F");


//   cutflowtree->Branch("dmetphi_trackcalo",&dmetphi_trackcalo,"dmetphi_trackcalo/F");
//   cutflowtree->Branch("dmetphi_reftopo",&dmetphi_reftopo,"dmetphi_reftopo/F");


//   cutflowtree->Branch("CS_theta2",&CS_theta2,"CS_theta2/F");
//   cutflowtree->Branch("CS_theta",&CS_theta,"CS_theta/F");
//   cutflowtree->Branch("CS_phi",&CS_phi,"CS_phi/F");
//   cutflowtree->Branch("CS_phi2",&CS_phi2,"CS_phi2/F");

//  cutflowtree->Branch("HE_tphi",&HE_tphi,"HE_tphi/F");
//  cutflowtree->Branch("HE_phi_max",&HE_phi_max,"HE_phi_max/F");


//   cutflowtree->Branch("HE_phi",&HE_phi,"HE_phi/F");
//   cutflowtree->Branch("HE_phi2",&HE_phi2,"HE_phi2/F");

  cutflowtree->Branch("b_pass_grl",&b_pass_grl,"b_pass_grl/b");
  cutflowtree->Branch("b_pass_trigger",&b_pass_trigger,"b_pass_trigger/b");
  cutflowtree->Branch("b_pass_tight",&b_pass_tight,"b_pass_tight/b");
  cutflowtree->Branch("b_pass_zveto",&b_pass_zveto,"b_pass_zveto/b");
  cutflowtree->Branch("b_pass_met",&b_pass_met,"b_pass_met/b");
  cutflowtree->Branch("b_pass_mt",&b_pass_mt,"b_pass_mt/b");
  cutflowtree->Branch("b_pass_photight",&b_pass_photight,"b_pass_photight/b");
  cutflowtree->Branch("b_pass_phoiso",&b_pass_phoiso,"b_pass_phoiso/b");
  cutflowtree->Branch("b_pass_invwindow",&b_pass_invwindow,"b_pass_invwindow/b");
  cutflowtree->Branch("b_pass_invthreshold",&b_pass_invthreshold,"b_pass_invthreshold/b");
  cutflowtree->Branch("b_pass_jetveto",&b_pass_jetveto,"b_pass_jetveto/b");
  cutflowtree->Branch("bz_pass_nmedium",&bz_pass_nmedium,"bz_pass_nmedium/b");
  cutflowtree->Branch("bz_pass_meeg",&bz_pass_meeg,"bz_pass_meeg/b");

  cutflowtree->Branch("bvetolarhole20",&bvetolarhole20,"bvetolarhole20/b");
  cutflowtree->Branch("bvetolarhole25",&bvetolarhole25,"bvetolarhole25/b");
  cutflowtree->Branch("bvetolarhole30",&bvetolarhole30,"bvetolarhole30/b");


  //  cutflowtree->Branch("bcid",&bcid,"bcid/I");
  cutflowtree->Branch("train",   &train,"train/I"   );
  //  cutflowtree->Branch("bunchpos",   &bunchpos,"bunchpos/I"   );
  cutflowtree->Branch("trainhalf",   &trainhalf,"trainhalf/I"   );

  cutflowtree->Branch("bjetlepoverlap",   &bjetlepoverlap,"bjetlepoverlap/b"   );
  cutflowtree->Branch("bjetphooverlap",   &bjetphooverlap,"bjetphooverlap/b"   );

  //  cutflowtree->Branch("njet30eta45",&njet30eta45,"njet30eta45/I");

    njet30_JESDOWN=0,njet30loose_JESDOWN=0;
    njet30_JESUP=0,njet30loose_JESUP=0;
    njet30_JR=0,njet30loose_JR=0;
    bvetolarhole30=0;

  cutflowtree->Branch("njet30_JESDOWN",&njet30_JESDOWN,"njet30_JESDOWN/I");
  cutflowtree->Branch("njet30_JESUP",&njet30_JESUP,"njet30_JESUP/I");
  cutflowtree->Branch("njet30_JR",&njet30_JR,"njet30_JR/I");

  cutflowtree->Branch("njet30loose_JESDOWN",&njet30loose_JESDOWN,"njet30loose_JESDOWN/I");
  cutflowtree->Branch("njet30loose_JESUP",&njet30loose_JESUP,"njet30loose_JESUP/I");
  cutflowtree->Branch("njet30loose_JR",&njet30loose_JR,"njet30loose_JR/I");


  cutflowtree->Branch("njet25",&njet25,"njet25/I");
  cutflowtree->Branch("njet30",&njet30,"njet30/I");
  cutflowtree->Branch("njet35",&njet35,"njet35/I");
  cutflowtree->Branch("njet40",&njet40,"njet40/I");
  cutflowtree->Branch("njet45",&njet45,"njet45/I");
  cutflowtree->Branch("njet50",&njet50,"njet50/I");
  cutflowtree->Branch("njet55",&njet55,"njet55/I");
  cutflowtree->Branch("njet60",&njet60,"njet60/I");

  cutflowtree->Branch("njet25loose",&njet25loose,"njet25loose/I");
  cutflowtree->Branch("njet30loose",&njet30loose,"njet30loose/I");
  cutflowtree->Branch("njet40loose",&njet40loose,"njet40loose/I");
  cutflowtree->Branch("njet50loose",&njet50loose,"njet50loose/I");
  cutflowtree->Branch("njet60loose",&njet60loose,"njet60loose/I");

  cutflowtree->Branch("bjetoverlap",   &bjetoverlap,"bjetoverlap/b"   );
  cutflowtree->Branch("EF_g40_loose",   &EF_g40_loose,"EF_g40_loose/b"   );
  cutflowtree->Branch("EF_g60_loose",   &EF_g60_loose,"EF_g60_loose/b"   );
  cutflowtree->Branch("EF_g80_loose",   &EF_g80_loose,"EF_g80_loose/b"   );
  cutflowtree->Branch("EF_g40_tight",   &EF_g40_tight,"EF_g40_tight/b"   );

  cutflowtree->Branch("EF_2g20_loose",   &EF_2g20_loose,"EF_2g20_loose/b"   );
  cutflowtree->Branch("EF_2g15_loose",   &EF_2g15_loose,"EF_2g15_loose/b"   );
  
  cutflowtree->Branch("EF_e20_medium",   &EF_e20_medium,"EF_e20_medium/b"   );
  cutflowtree->Branch("EF_e20_medium1",   &EF_e20_medium1,"EF_e20_medium1/b"   );

  cutflowtree->Branch("MET_LocHadTopo_et_org",   &MET_LocHadTopo_et_org,"MET_LocHadTopo_et_org/F"   );
  cutflowtree->Branch("MET_LocHadTopo_et",   &MET_LocHadTopo_et,"MET_LocHadTopo_et/F"   );
  cutflowtree->Branch("MET_LocHadTopo_etx",   &MET_LocHadTopo_etx,"MET_LocHadTopo_etx/F"   );
  cutflowtree->Branch("MET_LocHadTopo_ety",   &MET_LocHadTopo_ety,"MET_LocHadTopo_ety/F"   );
  cutflowtree->Branch("MET_LocHadTopo_sumet",   &MET_LocHadTopo_sumet,"MET_LocHadTopo_sumet/F"   );
  //  cutflowtree->Branch("MET_LocHadTopo_phi",   &MET_LocHadTopo_phi,"MET_LocHadTopo_phi/F");
  //MET_RefFinal_et
//   cutflowtree->Branch("MET_RefFinal_et",   &MET_RefFinal_et,"MET_RefFinal_et/F"   );
//   cutflowtree->Branch("MET_RefFinal_sumet",   &MET_RefFinal_sumet,"MET_RefFinal_sumet/F"   );
//   cutflowtree->Branch("MET_RefFinal_phi",   &MET_RefFinal_phi,"MET_RefFinal_phi/F");

//  cutflowtree->Branch("bleadmediumptcone40",&bleadmediumptcone40,"bleadmediumptcone40/F");
  cutflowtree->Branch("bleadmediumptcone30",&bleadmediumptcone30,"bleadmediumptcone30/F");
  //  cutflowtree->Branch("bleadmediumptcone20",&bleadmediumptcone20,"bleadmediumptcone20/F");

  //  cutflowtree->Branch("bscndmediumptcone40",&bscndmediumptcone40,"bscndmediumptcone40/F");
  cutflowtree->Branch("bscndmediumptcone30",&bscndmediumptcone30,"bscndmediumptcone30/F");
  //  cutflowtree->Branch("bscndmediumptcone20",&bscndmediumptcone20,"bscndmediumptcone20/F");

  cutflowtree->Branch("beleptcone40",&beleptcone40,"beleptcone40/F");
  cutflowtree->Branch("beleptcone30",&beleptcone30,"beleptcone30/F");
  cutflowtree->Branch("beleptcone20",&beleptcone20,"beleptcone20/F");

  cutflowtree->Branch("bscndmediumetcone20",&bscndmediumetcone20,"bscndmediumetcone20/F");
  cutflowtree->Branch("bscndmediumetcone30",&bscndmediumetcone30,"bscndmediumetcone30/F");
  cutflowtree->Branch("bscndmediumetcone40",&bscndmediumetcone40,"bscndmediumetcone40/F");

  cutflowtree->Branch("bleadmediumetcone20",&bleadmediumetcone20,"bleadmediumetcone20/F");
  cutflowtree->Branch("bleadmediumetcone30",&bleadmediumetcone30,"bleadmediumetcone30/F");
  cutflowtree->Branch("bleadmediumetcone40",&bleadmediumetcone40,"bleadmediumetcone40/F");

  cutflowtree->Branch("bleadmedium_etcone40_corr",&bleadmedium_etcone40_corr,"bleadmedium_etcone40_corr/F");

//   cutflowtree->Branch("bleadmedium_etcone40_ptcorr",&bleadmedium_etcone40_ptcorr,"bleadmedium_etcone40_ptcorr/F");
   cutflowtree->Branch("bleadmedium_etcone40_EDcorr",&bleadmedium_etcone40_EDcorr,"bleadmedium_etcone40_EDcorr/F");

  cutflowtree->Branch("bscndmedium_etcone40_corr",&bscndmedium_etcone40_corr,"bscndmedium_etcone40_corr/F");
//   cutflowtree->Branch("bscndmedium_etcone40_ptcorr",&bscndmedium_etcone40_ptcorr,"bscndmedium_etcone40_ptcorr/F");
   cutflowtree->Branch("bscndmedium_etcone40_EDcorr",&bscndmedium_etcone40_EDcorr,"bscndmedium_etcone40_EDcorr/F");


//   cutflowtree->Branch("bleadmedium_etcone40",&bleadmedium_etcone40,"bleadmedium_etcone40/F");
//   cutflowtree->Branch("bleadmedium_etcone30",&bleadmedium_etcone30,"bleadmedium_etcone30/F");
//   cutflowtree->Branch("bleadmedium_etcone20",&bleadmedium_etcone20,"bleadmedium_etcone20/F");


  cutflowtree->Branch("bele_medium",&bele_medium,"bele_medium/b");
  cutflowtree->Branch("bele_tight",&bele_tight,"bele_tight/b");
  cutflowtree->Branch("bele_loose",&bele_loose,"bele_loose/b");

  cutflowtree->Branch("bscndmedium_loose",&bscndmedium_loose,"bscndmedium_loose/b");
  cutflowtree->Branch("bscndmedium_medium",&bscndmedium_medium,"bscndmedium_medium/b");
  cutflowtree->Branch("bscndmedium_tight",&bscndmedium_tight,"bscndmedium_tight/b");

  cutflowtree->Branch("bleadmedium_loose",&bleadmedium_loose,"bleadmedium_loose/b");
  cutflowtree->Branch("bleadmedium_medium",&bleadmedium_medium,"bleadmedium_medium/b");
  cutflowtree->Branch("bleadmedium_tight",&bleadmedium_tight,"bleadmedium_tight/b");

  cutflowtree->Branch("bleadmedium_clpt",&bleadmedium_clpt,"bleadmedium_clpt/F");
  cutflowtree->Branch("bleadmedium_cleta",&bleadmedium_cleta,"bleadmedium_cleta/F");
  cutflowtree->Branch("bleadmedium_clphi",&bleadmedium_clphi,"bleadmedium_clphi/F");
  cutflowtree->Branch("bleadmedium_charge",&bleadmedium_charge,"bleadmedium_charge/I");

  cutflowtree->Branch("iscphoTight2_clus",&iscphoTight2_clus,"iscphoTight2_clus/I");
  cutflowtree->Branch("iscphobit1_v2",&iscphobit1_v2,"iscphobit1_v2/I");
  cutflowtree->Branch("iscphobit2_v2",&iscphobit2_v2,"iscphobit2_v2/I");
  cutflowtree->Branch("iscphobit3_v2",&iscphobit3_v2,"iscphobit3_v2/I");
  cutflowtree->Branch("iscphobit4_v2",&iscphobit4_v2,"iscphobit4_v2/I");
  cutflowtree->Branch("iscphobit5_v2",&iscphobit5_v2,"iscphobit5_v2/I");
  cutflowtree->Branch("iscphobit6_v2",&iscphobit6_v2,"iscphobit6_v2/I");
  cutflowtree->Branch("iscphobit7_v2",&iscphobit7_v2,"iscphobit7_v2/I");
  cutflowtree->Branch("iscphobit8_v2",&iscphobit8_v2,"iscphobit8_v2/I");
  cutflowtree->Branch("iscphobit9_v2",&iscphobit9_v2,"iscphobit9_v2/I");
  cutflowtree->Branch("iscphobit10_v2",&iscphobit10_v2,"iscphobit10_v2/I");
  cutflowtree->Branch("iscphobit11_v2",&iscphobit11_v2,"iscphobit11_v2/I");
  cutflowtree->Branch("iscphobit12_v2",&iscphobit12_v2,"iscphobit12_v2/I");

  cutflowtree->Branch("iscphoTight3_clus",&iscphoTight3_clus,"iscphoTight3_clus/I");
  cutflowtree->Branch("iscphobit1_v3",&iscphobit1_v3,"iscphobit1_v3/I");
  cutflowtree->Branch("iscphobit2_v3",&iscphobit2_v3,"iscphobit2_v3/I");
  cutflowtree->Branch("iscphobit3_v3",&iscphobit3_v3,"iscphobit3_v3/I");
  cutflowtree->Branch("iscphobit4_v3",&iscphobit4_v3,"iscphobit4_v3/I");
  cutflowtree->Branch("iscphobit5_v3",&iscphobit5_v3,"iscphobit5_v3/I");
  cutflowtree->Branch("iscphobit6_v3",&iscphobit6_v3,"iscphobit6_v3/I");
  cutflowtree->Branch("iscphobit7_v3",&iscphobit7_v3,"iscphobit7_v3/I");
  cutflowtree->Branch("iscphobit8_v3",&iscphobit8_v3,"iscphobit8_v3/I");
  cutflowtree->Branch("iscphobit9_v3",&iscphobit9_v3,"iscphobit9_v3/I");
  cutflowtree->Branch("iscphobit10_v3",&iscphobit10_v3,"iscphobit10_v3/I");
  cutflowtree->Branch("iscphobit11_v3",&iscphobit11_v3,"iscphobit11_v3/I");
  cutflowtree->Branch("iscphobit12_v3",&iscphobit12_v3,"iscphobit12_v3/I");


//   cutflowtree->Branch("iscphoTight4_clus",&iscphoTight4_clus,"iscphoTight4_clus/I");
//   cutflowtree->Branch("iscphobit1_v4",&iscphobit1_v4,"iscphobit1_v4/I");
//   cutflowtree->Branch("iscphobit2_v4",&iscphobit2_v4,"iscphobit2_v4/I");
//   cutflowtree->Branch("iscphobit3_v4",&iscphobit3_v4,"iscphobit3_v4/I");
//   cutflowtree->Branch("iscphobit4_v4",&iscphobit4_v4,"iscphobit4_v4/I");
//   cutflowtree->Branch("iscphobit5_v4",&iscphobit5_v4,"iscphobit5_v4/I");
//   cutflowtree->Branch("iscphobit6_v4",&iscphobit6_v4,"iscphobit6_v4/I");
//   cutflowtree->Branch("iscphobit7_v4",&iscphobit7_v4,"iscphobit7_v4/I");
//   cutflowtree->Branch("iscphobit8_v4",&iscphobit8_v4,"iscphobit8_v4/I");
//   cutflowtree->Branch("iscphobit9_v4",&iscphobit9_v4,"iscphobit9_v4/I");
//   cutflowtree->Branch("iscphobit10_v4",&iscphobit10_v4,"iscphobit10_v4/I");
//   cutflowtree->Branch("iscphobit11_v4",&iscphobit11_v4,"iscphobit11_v4/I");
//   cutflowtree->Branch("iscphobit12_v4",&iscphobit12_v4,"iscphobit12_v4/I");



//   cutflowtree->Branch("iscphoTight5_clus",&iscphoTight5_clus,"iscphoTight5_clus/I");
//   cutflowtree->Branch("iscphobit1_v5",&iscphobit1_v5,"iscphobit1_v5/I");
//   cutflowtree->Branch("iscphobit2_v5",&iscphobit2_v5,"iscphobit2_v5/I");
//   cutflowtree->Branch("iscphobit3_v5",&iscphobit3_v5,"iscphobit3_v5/I");
//   cutflowtree->Branch("iscphobit4_v5",&iscphobit4_v5,"iscphobit4_v5/I");
//   cutflowtree->Branch("iscphobit5_v5",&iscphobit5_v5,"iscphobit5_v5/I");
//   cutflowtree->Branch("iscphobit6_v5",&iscphobit6_v5,"iscphobit6_v5/I");
//   cutflowtree->Branch("iscphobit7_v5",&iscphobit7_v5,"iscphobit7_v5/I");
//   cutflowtree->Branch("iscphobit8_v5",&iscphobit8_v5,"iscphobit8_v5/I");
//   cutflowtree->Branch("iscphobit9_v5",&iscphobit9_v5,"iscphobit9_v5/I");
//   cutflowtree->Branch("iscphobit10_v5",&iscphobit10_v5,"iscphobit10_v5/I");
//   cutflowtree->Branch("iscphobit11_v5",&iscphobit11_v5,"iscphobit11_v5/I");
//   cutflowtree->Branch("iscphobit12_v5",&iscphobit12_v5,"iscphobit12_v5/I");







  cutflowtree->Branch("bw2",&bw2,"bw2/F");
  cutflowtree->Branch("bw1",&bw1,"bw1/F");
  cutflowtree->Branch("be233",&be233,"be233/F");
  cutflowtree->Branch("be237",&be237,"be237/F");
  cutflowtree->Branch("be277",&be277,"be277/F");
  cutflowtree->Branch("bdeltaEs",&bdeltaEs,"bdeltaEs/F");
  cutflowtree->Branch("bemaxs1",&bemaxs1,"bemaxs1/F");
  cutflowtree->Branch("bwstot",&bwstot,"bwstot/F");
  cutflowtree->Branch("bws3",&bws3,"bws3/F");
  cutflowtree->Branch("bEmax2",&bEmax2,"bEmax2/F");
  cutflowtree->Branch("bfside",&bfside,"bfside/F");
  cutflowtree->Branch("bEmins1",&bEmins1,"bEmins1/F");
  cutflowtree->Branch("bEthad",&bEthad,"bEthad/F");
  cutflowtree->Branch("bEthad1",&bEthad1,"bEthad1/F");




//   cutflowtree->Branch("bscndmedium_etcone40",&bscndmedium_etcone40,"bscndmedium_etcone40/F");
//   cutflowtree->Branch("bscndmedium_etcone30",&bscndmedium_etcone40,"bscndmedium_etcone40/F");
//   cutflowtree->Branch("bscndmedium_etcone20",&bscndmedium_etcone40,"bscndmedium_etcone40/F");
  cutflowtree->Branch("bscndmedium_clpt",&bscndmedium_clpt,"bscndmedium_clpt/F");
  cutflowtree->Branch("bscndmedium_cleta",&bscndmedium_cleta,"bscndmedium_cleta/F");
  cutflowtree->Branch("bscndmedium_clphi",&bscndmedium_clphi,"bscndmedium_clphi/F");
  cutflowtree->Branch("bscndmedium_charge",&bscndmedium_charge,"bscndmedium_charge/I");


  cutflowtree->Branch("njet25",&njet25,"njet25/I");
  cutflowtree->Branch("njet30",&njet30,"njet30/I");
  cutflowtree->Branch("njet35",&njet35,"njet35/I");
  cutflowtree->Branch("njet40",&njet35,"njet40/I");
  cutflowtree->Branch("njet45",&njet45,"njet45/I");
  cutflowtree->Branch("njet50",&njet50,"njet50/I");
  cutflowtree->Branch("njet55",&njet55,"njet55/I");
  cutflowtree->Branch("njet60",&njet60,"njet60/I");
  cutflowtree->Branch("jetsexc",&jetsexc,"jetsexc/I");
  cutflowtree->Branch("jet3eta",&jet3eta,"jet3eta/F");
  cutflowtree->Branch("jet3phi",&jet3phi,"jet3phi/F");
  cutflowtree->Branch("jet3pt",&jet3pt,"jet3pt/F");
  cutflowtree->Branch("jet3E",&jet3E,"jet3E/F");
//   cutflowtree->Branch("jet3dRpho",&jet3dRpho,"jet3dRpho/F");
//   cutflowtree->Branch("jet3dRele",&jet3dRele,"jet3dRele/F");
//   cutflowtree->Branch("jet3dphipho",&jet3dphipho,"jet3dphipho/F");


  cutflowtree->Branch("jet2eta",&jet2eta,"jet2eta/F");
  cutflowtree->Branch("jet2phi",&jet2phi,"jet2phi/F");
  cutflowtree->Branch("jet2pt",&jet2pt,"jet2pt/F");
  cutflowtree->Branch("jet2E",&jet2E,"jet2E/F");
  cutflowtree->Branch("jet2dRpho",&jet2dRpho,"jet2dRpho/F");
  cutflowtree->Branch("jet2dRele",&jet2dRele,"jet2dRele/F");
  cutflowtree->Branch("jet2dphipho",&jet2dphipho,"jet2dphipho/F");


  cutflowtree->Branch("jet1eta",&jet1eta,"jet1eta/F");
  cutflowtree->Branch("jet1phi",&jet1phi,"jet1phi/F");
  cutflowtree->Branch("jet1pt",&jet1pt,"jet1pt/F");
  cutflowtree->Branch("jet1E",&jet1E,"jet1E/F");
  cutflowtree->Branch("jet1dRpho",&jet1dRpho,"jet1dRpho/F");
  cutflowtree->Branch("jet1dRele",&jet1dRele,"jet1dRele/F");
  cutflowtree->Branch("jet1dphipho",&jet1dphipho,"jet1dphipho/F");
  cutflowtree->Branch("bdeltaR_leadmedium_e_leadclus_gam",&bdeltaR_leadmedium_e_leadclus_gam,"bdeltaR_leadmedium_e_leadclus_gam/F");
  cutflowtree->Branch("bdeltaR_scndmedium_e_leadclus_gam",&bdeltaR_scndmedium_e_leadclus_gam,"bdeltaR_scndmedium_e_leadclus_gam/F");
  cutflowtree->Branch("bMeeGamma_leadclus",&bMeeGamma_leadclus,"bMeeGamma_leadclus/F");
  cutflowtree->Branch("bMee_leadclus",&bMee_leadclus,"bMee_leadclus/F");
  cutflowtree->Branch("bZpt_leadclus",&bZpt_leadclus,"bZpt_leadclus/F");
  cutflowtree->Branch("bZGpt_leadclus",&bZGpt_leadclus,"bZGpt_leadclus/F");


  

  cutflowtree->Branch("Z_mass",&Z_mass,"Z_mass/F");
  cutflowtree->Branch("Z_charge",&Z_charge,"Z_charge/I");
  cutflowtree->Branch("Z_Pt",&Z_Pt,"Z_Pt/F");

//   cutflowtree->Branch("MET_LH_Topo_pt",&MET_LH_Topo_pt,"MET_LH_Topo_pt/F");
//   cutflowtree->Branch("MET_LH_Topo_px",&MET_LH_Topo_px,"MET_LH_Topo_px/F");
//   cutflowtree->Branch("MET_LH_Topo_py",&MET_LH_Topo_py,"MET_LH_Topo_py/F");
//   cutflowtree->Branch("MET_LH_Topo_phi",&MET_LH_Topo_phi,"MET_LH_Topo_phi/F");

//   cutflowtree->Branch("MET_Track_pt",&MET_Track_pt,"MET_Track_pt/F");
//   cutflowtree->Branch("MET_Track_px",&MET_Track_px,"MET_Track_px/F");
//   cutflowtree->Branch("MET_Track_py",&MET_Track_py,"MET_Track_py/F");
//   cutflowtree->Branch("MET_Track_phi",&MET_Track_phi,"MET_Track_phi/F");


//   cutflowtree->Branch("beleptcone20",&beleptcone20,"beleptcone20/F");
//   cutflowtree->Branch("beleptcone30",&beleptcone30,"beleptcone30/F");
//   cutflowtree->Branch("beleptcone40",&beleptcone40,"beleptcone40/F");



//   cutflowtree->Branch("bphoptcone20",&bphoptcone20,"bphoptcone20/F");
//   cutflowtree->Branch("bphoptcone30",&bphoptcone30,"bphoptcone30/F");
//   cutflowtree->Branch("bphoptcone40",&bphoptcone40,"bphoptcone40/F");

  cutflowtree->Branch("bphoetcone30_corr",&bphoetcone30_corr,"bphoetcone30_corr/F");
  cutflowtree->Branch("bphoetcone20_corr",&bphoetcone20_corr,"bphoetcone20_corr/F");

   cutflowtree->Branch("bphoetcone40_ptcorr",&bphoetcone40_ptcorr,"bphoetcone40_ptcorr/F");
   cutflowtree->Branch("bphoetcone40_EDcorr",&bphoetcone40_EDcorr,"bphoetcone40_EDcorr/F");
  cutflowtree->Branch("bphoetcone40_corr",&bphoetcone40_corr,"bphoetcone40_corr/F");
  //  cutflowtree->Branch("bphoetcone40_npvPT",&bphoetcone40_npvPT,"bphoetcone40_npvPT/F");
   cutflowtree->Branch("bphoetcone40",&bphoetcone40,"bphoetcone40/F");
   cutflowtree->Branch("bphoetcone30",&bphoetcone30,"bphoetcone30/F");
//   cutflowtree->Branch("bphoetcone20",&bphoetcone20,"bphoetcone20/F");
  cutflowtree->Branch("bphoetcone20_npvPT",&bphoetcone20_npvPT,"bphoetcone20_npvPT/F");

   nph_all=0, nph_pt=0,    nph_otx=0,    nph_eta=0,nph_tight=0,nph_iso=0;

  cutflowtree->Branch("nph_all",&nph_all,"nph_all/I");
  cutflowtree->Branch("nph_pt",&nph_pt,"nph_pt/I");
  cutflowtree->Branch("nph_otx",&nph_otx,"nph_otx/I");
  cutflowtree->Branch("nph_eta",&nph_eta,"nph_eta/I");
  cutflowtree->Branch("nph_tight",&nph_tight,"nph_tight/I");
  cutflowtree->Branch("nph_iso",&nph_iso,"nph_iso/I");

  cutflowtree->Branch("n_all",&n_all,"n_all/I");
  cutflowtree->Branch("n_pt",&n_pt,"n_pt/I");
  cutflowtree->Branch("n_author",&n_author,"n_author/I");
  cutflowtree->Branch("n_oq",&n_oq,"n_oq/I");
  cutflowtree->Branch("n_eta",&n_eta,"n_eta/I");
  cutflowtree->Branch("n_tight",&n_tight,"n_tight/I");
  cutflowtree->Branch("n_z0",&n_z0,"n_z0/I");
  cutflowtree->Branch("n_d0",&n_d0,"n_d0/I");
  cutflowtree->Branch("n_caloiso",&n_caloiso,"n_caloiso/I");


  cutflowtree->Branch("bphoclpt",&bphoclpt,"bphoclpt/F");
  cutflowtree->Branch("bphocleta",&bphocleta,"bphocleta/F");
  cutflowtree->Branch("bphoetap",&bphoetap,"bphoetap/F");
  cutflowtree->Branch("bphoetas2",&bphoetas2,"bphoetas2/F");
  cutflowtree->Branch("bphoclphi",&bphoclphi,"bphoclphi/F");
  cutflowtree->Branch("bphoclE",&bphoclE,"bphoclE/F");
  cutflowtree->Branch("bphoconvflag",&bphoconvflag,"bphoconvflag/I");
  cutflowtree->Branch("bpholoose",&bpholoose,"bpholoose/I");
  cutflowtree->Branch("bphotight",&bphotight,"bphotight/I");
  cutflowtree->Branch("bphoIsEM",&bphoIsEM,"bphoIsEM/I");

  cutflowtree->Branch("belehastbrem",&belehastbrem,"belehastbrem/I");

  cutflowtree->Branch("borgeleclE",&borgeleclE,"borgeleclE/F");
  cutflowtree->Branch("borgelept",&borgelept,"borgelept/F");
  cutflowtree->Branch("borgeleclpt",&borgeleclpt,"borgeleclpt/F");

  cutflowtree->Branch("borgphoclE",&borgphoclE,"borgphoclE/F");
  cutflowtree->Branch("borgphopt",&borgphopt,"borgphopt/F");
  cutflowtree->Branch("borgphoclpt",&borgphoclpt,"borgphoclpt/F");

  cutflowtree->Branch("beleetas2",&beleetas2,"beleetas2/F");
  cutflowtree->Branch("beleetap",&beleetap,"beleetap/F");
  cutflowtree->Branch("beleclE",&beleclE,"beleclE/F");
  cutflowtree->Branch("belept",&belept,"belept/F");

  cutflowtree->Branch("bleadmediumz0pv",&bleadmediumz0pv,"bleadmediumz0pv/F");
  cutflowtree->Branch("bleadmediumd0pv",&bleadmediumd0pv,"bleadmediumd0pv/F");
  cutflowtree->Branch("bleadmediumsigd0pv",&bleadmediumsigd0pv,"bleadmediumsigd0pv/F");

  cutflowtree->Branch("bscndmediumz0pv",&bscndmediumz0pv,"bscndmediumz0pv/F");
  cutflowtree->Branch("bscndmediumd0pv",&bscndmediumd0pv,"bscndmediumd0pv/F");
  cutflowtree->Branch("bscndmediumsigd0pv",&bscndmediumsigd0pv,"bscndmediumsigd0pv/F");

  cutflowtree->Branch("beleclpt",&beleclpt,"beleclpt/F");
  cutflowtree->Branch("belecleta",&belecleta,"belecleta/F");
  cutflowtree->Branch("beleclphi",&beleclphi,"beleclphi/F");
  cutflowtree->Branch("beletracketa",&beletracketa,"beletracketa/F");
  cutflowtree->Branch("bunchpos",&bunchpos,"bunchpos/I");

//   cutflowtree->Branch("beleetcone20_npvPT",&beleetcone20_npvPT,"beleetcone20_npvPT/F");  
//   cutflowtree->Branch("beleetcone40_npvPT",&beleetcone40_npvPT,"beleetcone40_npvPT/F");  

  cutflowtree->Branch("bleadtightetcone20_corr",&bleadtightetcone20_corr,"bleadtightetcone20_corr/F");  
  cutflowtree->Branch("bleadtightetcone30_corr",&bleadtightetcone30_corr,"bleadtightetcone30_corr/F");  
  cutflowtree->Branch("bleadtightetcone30_npvcorr",&bleadtightetcone30_npvcorr,"bleadtightetcone30_npvcorr/F");  
  cutflowtree->Branch("beleetcone30_npvPT",&beleetcone30_npvPT,"beleetcone30_npvPT/F");
  cutflowtree->Branch("beleetcone40_npvPT",&beleetcone40_npvPT,"beleetcone40_npvPT/F");
//   cutflowtree->Branch("beleetcone30",&beleetcone30,"beleetcone30/F");
//   cutflowtree->Branch("beleetcone40",&beleetcone40,"beleetcone40/F");

  cutflowtree->Branch("bleadmediumetcone20_corr",&bleadmediumetcone20_corr,"bleadmediumetcone20_corr/F");  
  cutflowtree->Branch("bleadmediumetcone30_corr",&bleadmediumetcone30_corr,"bleadmediumetcone30_corr/F");  

  cutflowtree->Branch("bscndmediumetcone20_corr",&bscndmediumetcone20_corr,"bscndmediumetcone20_corr/F");  
  cutflowtree->Branch("bscndmediumetcone30_corr",&bscndmediumetcone30_corr,"bscndmediumetcone30_corr/F");  

  //   cutflowtree->Branch("bleadmediumetcone20_npvPT",&bleadmediumetcone20_npvPT,"bleadmediumetcone20_npvPT/F");  
   cutflowtree->Branch("bleadmediumetcone30",&bleadmediumetcone30,"bleadmediumetcone30/F");  
   cutflowtree->Branch("bleadmediumetcone40",&bleadmediumetcone40,"bleadmediumetcone40/F");  
   cutflowtree->Branch("bleadmediumetcone30_npvPT",&bleadmediumetcone30_npvPT,"bleadmediumetcone30_npvPT/F");  
   cutflowtree->Branch("bleadmediumetcone40_npvPT",&bleadmediumetcone40_npvPT,"bleadmediumetcone40_npvPT/F");  

   cutflowtree->Branch("bscndmediumetcone30_npvPT",&bscndmediumetcone30_npvPT,"bscndmediumetcone30_npvPT/F");  
   cutflowtree->Branch("bscndmediumetcone40_npvPT",&bscndmediumetcone40_npvPT,"bscndmediumetcone40_npvPT/F");  


  cutflowtree->Branch("beleetcone40_corr",&beleetcone40_corr,"beleetcone40_corr/F");  
   cutflowtree->Branch("beleetcone40_ptcorr",&beleetcone40_ptcorr,"beleetcone40_ptcorr/F");  
   cutflowtree->Branch("beleetcone40_EDcorr",&beleetcone40_EDcorr,"beleetcone40_EDcorr/F");  

   cutflowtree->Branch("beleetcone40",&beleetcone40,"beleetcone40/F");  
   cutflowtree->Branch("beleetcone30",&beleetcone30,"beleetcone30/F");  
   cutflowtree->Branch("beleetcone20",&beleetcone20,"beleetcone20/F");  
  cutflowtree->Branch("belecharge",&belecharge,"belecharge/I");  




//   cutflowtree->Branch("bele_lead_medium_pdg",&bele_lead_medium_pdg,"bele_lead_medium_pdg/I");
//   cutflowtree->Branch("bele_lead_medium_mpdg",&bele_lead_medium_mpdg,"bele_lead_medium_mpdg/I");
//   cutflowtree->Branch("bele_lead_medium_type",&bele_lead_medium_type,"bele_lead_medium_type/I");
//   cutflowtree->Branch("bele_lead_medium_orgin",&bele_lead_medium_orgin,"bele_lead_medium_orgin/I");
//   cutflowtree->Branch("bele_lead_medium_hastbrem",&bele_lead_medium_hastbrem,"bele_lead_medium_hastbrem/I");
//   cutflowtree->Branch("bele_lead_medium_clpt",&bele_lead_medium_clpt,"bele_lead_medium_clpt/F");
//   cutflowtree->Branch("bele_lead_medium_cleta",&bele_lead_medium_cleta,"bele_lead_medium_cleta/F");
//   cutflowtree->Branch("bele_lead_medium_clphi",&bele_lead_medium_clphi,"bele_lead_medium_clphi/F");
//   cutflowtree->Branch("bele_lead_medium_clE",&bele_lead_medium_clE,"bele_lead_medium_clE/F");
//   cutflowtree->Branch("bele_lead_medium_etcone40",&bele_lead_medium_etcone40,"bele_lead_medium_etcone40/F");  
//   cutflowtree->Branch("bele_lead_medium_charge",&bele_lead_medium_charge,"bele_lead_medium_charge/I");  

//   cutflowtree->Branch("bele_scnd_medium_pdg",&bele_scnd_medium_pdg,"bele_scnd_medium_pdg/I");
//   cutflowtree->Branch("bele_scnd_medium_mpdg",&bele_scnd_medium_mpdg,"bele_scnd_medium_mpdg/I");
//   cutflowtree->Branch("bele_scnd_medium_type",&bele_scnd_medium_type,"bele_scnd_medium_type/I");
//   cutflowtree->Branch("bele_scnd_medium_orgin",&bele_scnd_medium_orgin,"bele_scnd_medium_orgin/I");
//   cutflowtree->Branch("bele_scnd_medium_hastbrem",&bele_scnd_medium_hastbrem,"bele_scnd_medium_hastbrem/I");
//   cutflowtree->Branch("bele_scnd_medium_clpt",&bele_scnd_medium_clpt,"bele_scnd_medium_clpt/F");
//   cutflowtree->Branch("bele_scnd_medium_cleta",&bele_scnd_medium_cleta,"bele_scnd_medium_cleta/F");
//   cutflowtree->Branch("bele_scnd_medium_clphi",&bele_scnd_medium_clphi,"bele_scnd_medium_clphi/F");
//   cutflowtree->Branch("bele_scnd_medium_clE",&bele_scnd_medium_clE,"bele_scnd_medium_clE/F");
//   cutflowtree->Branch("bele_scnd_medium_etcone40",&bele_scnd_medium_etcone40,"bele_scnd_medium_etcone40/F");  
//   cutflowtree->Branch("bele_scnd_medium_charge",&bele_scnd_medium_charge,"bele_scnd_medium_charge/I");  


//   cutflowtree->Branch("bMETclpt",&bMETclpt,"bMETclpt/F");
//   cutflowtree->Branch("bMETclphi",&bMETclphi,"bMETclphi/F");

  cutflowtree->Branch("bMT",&bMT,"bMT/F");

  cutflowtree->Branch("btranW",&btranW,"btranW/F");
  cutflowtree->Branch("bWpt",&bWpt,"bWpt/F");
  cutflowtree->Branch("btranWpho",&btranWpho,"btranWpho/F");
  cutflowtree->Branch("bdeltaR",&bdeltaR,"bdeltaR/F");
  cutflowtree->Branch("binveg",&binveg,"binveg/F");


  cutflowtree->Branch("bpholoose",&bpholoose,"bpholoose/I");
  cutflowtree->Branch("bphotight",&bphotight,"bphotight/I");

  cutflowtree->Branch("bphof0",&bphof0,"bphof0/F");
  cutflowtree->Branch("bphoEs0",&bphoEs0,"bphoEs0/F");

  cutflowtree->Branch("eleauthor",&eleauthor,"eleauthor/I");
  cutflowtree->Branch("eleeta",&eleeta,"eleeta/I");
  cutflowtree->Branch("eleclus",&eleclus,"eleclus/I");
  cutflowtree->Branch("eleotx",&eleotx,"eleotx/I");
  cutflowtree->Branch("nloose",&nloose,"nloose/I");
  cutflowtree->Branch("nmedium",&nmedium,"nmedium/I");
  cutflowtree->Branch("ntight",&ntight,"ntight/I");
  cutflowtree->Branch("EventNumber",&EventNumber,"EventNumber/I");
  cutflowtree->Branch("RunNumber",&RunNumber,"RunNumber/I");
  cutflowtree->Branch("lbn",&lbn,"lbn/I");

  cutflowtree->Branch("pho_eveto_author",&pho_eveto_author,"pho_eveto_author/I");
  cutflowtree->Branch("pho_eveto_eveto",&pho_eveto_eveto,"pho_eveto_eveto/I");
  cutflowtree->Branch("pho_eveto_eta",&pho_eveto_eta,"pho_eveto_eta/I");
  cutflowtree->Branch("pho_eveto_clus",&pho_eveto_clus,"pho_eveto_clus/I");
  cutflowtree->Branch("pho_eveto_otx",&pho_eveto_otx,"pho_eveto_otx/I");
  cutflowtree->Branch("pho_eveto_nloose",&pho_eveto_nloose,"pho_eveto_nloose/I");
  cutflowtree->Branch("pho_eveto_nloose_iso",&pho_eveto_nloose_iso,"pho_eveto_nloose_iso/I");
  cutflowtree->Branch("pho_eveto_ntight",&pho_eveto_ntight,"pho_eveto_ntight/I");
  cutflowtree->Branch("flag_selecZ",&flag_selecZ,"flag_selecZ/I");
  cutflowtree->Branch("flag_selecZmedium",&flag_selecZmedium,"flag_selecZmedium/I");
  cutflowtree->Branch("flag_selecWtight",&flag_selecWtight,"flag_selecWtight/b");

  cutflowtree->Branch("flag_METcleanup",&flag_METcleanup,"flag_METcleanup/b");
  cutflowtree->Branch("flag_METcleanup2",&flag_METcleanup2,"flag_METcleanup2/b");

  cutflowtree->Branch("flag_grl_wenu",&flag_grl_wenu,"flag_grl_wenu/I");
  cutflowtree->Branch("flag_grl_zee",&flag_grl_zee,"flag_grl_zee/I");
  cutflowtree->Branch("flag_PV",&flag_PV,"flag_PV/b");
  //  cutflowtree->Branch("L1_EM10",&L1_EM10,"L1_EM10/b");
//   cutflowtree->Branch("L1_EM14",&L1_EM14,"L1_EM14/b");
//   cutflowtree->Branch("EF_EM10Medium",&EF_EM10Medium,"EF_EM10Medium/b");
//   cutflowtree->Branch("EF_EM15Medium",&EF_EM15Medium,"EF_EM15Medium/b");
//   cutflowtree->Branch("EF_EM15loose",&EF_EM15loose,"EF_EM15loose/b");
//   cutflowtree->Branch("EF_EM20loose",&EF_EM20loose,"EF_EM20loose/b");
  cutflowtree->Branch("npv",&npv,"npv/I");
//   cutflowtree->Branch("bhelicity_2D",&bhelicity_2D,"bhelicity_2D/F");
   cutflowtree->Branch("bhelicity",&bhelicity,"bhelicity/F");

   wtree=cutflowtree->CloneTree(0);
   wtree->SetName("wtree");

    cand_tree = new TTree("Candidates", "Candidates");
    
    cand_tree->Branch("Run"   , &RunNumber  ,"Run/I"  );
    cand_tree->Branch("Event" , &EventNumber,"Event/I"  );  
    cand_tree->Branch("ncand" , &ncand  ,"ncand/I"  );
    cand_tree->Branch("nloose", &nloose ,"nloose/I" );
    cand_tree->Branch("nmedium",&nmedium,"nmedium/I");
    cand_tree->Branch("ntight", &ntight ,"ntight/I" );
    cand_tree->Branch("oppsign",&oppsign,"oppsign/I");
    cand_tree->Branch("mee",    &mee    ,"mee/F"    );
    cand_tree->Branch("met",    &met    ,"met/F"    );
    cand_tree->Branch("mt",     &mt     ,"mt/F"     );
    cand_tree->Branch("njet",   &jetsexc,"njet/I"   );
  }
  // Fill in the cutflow info as the first bin
  // fillh1f(cut_flow+hs_w, 0, nWeightedAcceptedEvents); //wcut=0
  //MS ????????????????????????????????
  
  // Initialise EnergyRescaler
  m_eRescale.useDefaultCalibConstants("2011");
}

//______________________________________________________________________

Bool_t ElecChanBase::Process(Long64_t entry)
{

  //fprintf (file_electrons, "----- new event -----\n");
  setEvtInfo();
  n_all=0;
  n_pt=0,n_eta=0,n_oq=0,n_author=0;
  n_tight=0,n_z0=0,n_d0=0,n_caloiso=0,n_trackiso=0;
   nph_all=0, nph_pt=0,    nph_otx=0,    nph_eta=0,nph_tight=0,nph_iso=0;


  ntruthjetpass=0;
  bphoetcone30_corr=-9999999;
  btruthjet1pt=-999999,btruthjet2pt=-999999,btruthjet3pt=-999999,btruthjet4pt=-999999,btruthjet5pt=-999999;
  b_pass_grl=0;
  b_pass_trigger=0;
  b_pass_tight=0;
  b_pass_zveto=0;
  b_pass_met=0;
  b_pass_mt=0;        	  
  b_pass_photight=0;        	  
  b_pass_phoiso=0;        	  
  b_pass_jetveto=0;
  b_pass_invwindow=0;
  b_pass_invthreshold=0;
  bvetolarhole=0; 
  bvetolarhole25=0;
  bvetolarhole40=0;
  bvetolarhole30=0;
  bvetolarhole20=0;
 // bz_pass_grl=0;
  // bz_pass_trigger=0;
  bz_pass_meeg=0;
  bz_pass_nmedium=0;
  bjetoverlap=0;
  bjetlepoverlap=0;
  bjetphooverlap=0;
    sumalgen30_159=0;
    sumalgen40_159=0;
    sumalgen30_158=0;
    sumalgen40_158=0;
    sumalgen30_158_159=0;
    sumalgen40_158_159=0;

    sumalgen30=0;
    sumalgen40=0;
//     m_nt_gen_parton_pt.clear();
//     m_nt_gen_parton_eta.clear();
//     m_nt_gen_parton_phi.clear();
//     m_nt_gen_parton_m.clear();
//     m_nt_gen_parton_pdgId.clear();

  //  b_pass_jetveto=0;
    flagWg=0,flagZg=0;
    bphotruthiso=-999999;
    njet25=0,njet30=0,njet35=0,njet40=0,njet45=0,njet50=0,njet55=0,njet60=0;
    njet25loose=0,njet30loose=0,njet40loose=0,njet50loose=0,njet60loose=0;
  bhelicity_2D=-9999;
  bLP3D_sol1=-99999;
  bLP3D_sol2=-9999;
  bLP=-99999;
  btruthLP=-99999;
  btruthLP3D=-99999;
  btruth_lepproject=-9999;
  btruth_PW=-99999;
  btruth_EW=-99999;

  bhelicity=-999999;
btruth_Wpt=-999999;
bphoclpt=-9999,bphoclE=-9999,bphocleta=-9999,bphoclphi=-9999;
beleclpt=-9999,beleclE=-9999,belecleta=-9999,beleclphi=-9999;
 bMETclpt=-9999,bMETclphi=-9999,btranW=-9999,bttranW=-9999,btranWpho=-9999,bdeltaR=-9999,bWpt=-9999;
 bMT=-9999;
 blooseisoWpt=-9999,blooseWpt=-9999,btightWpt=-9999;
 bloosephopdg=-999,bloosephompdg=-999;
 btightphopdg=-999,btightphompdg=-999;
 bphopdg=-999,bphompdg=-999;
 bphoetcone40=-99999, beleetcone40=-99999;
 bphoetcone30=-99999, beleetcone30=-99999;
 bphoetcone20=-99999, beleetcone20=-99999;
 bMeeGamma_leadclus=-9999,bMee_leadclus=-99999;
 bphoetcone40_corr=-9999;
  jet1eta=0,jet1phi=0,jet1pt=0,jet1E=0;
   jet2eta=0,jet2phi=0,jet2pt=0,jet2E=0;
   jet3eta=0,jet3phi=0,jet3pt=0,jet3E=0;
   
iscphoTight2_clus=-111,iscphobit1_v2=-111,iscphobit2_v2=-111,iscphobit3_v2=-111,iscphobit3_v2=-111,iscphobit4_v2=-111,iscphobit5_v2=-111,iscphobit6_v2=-111,iscphobit7_v2=-111,iscphobit8_v2=-111,iscphobit9_v2=-111,iscphobit10_v2=-111,iscphobit11_v2=-111,iscphobit12_v2=-111;

iscphoTight2_loose=-111,iscphobit1_v2_loose=-111,iscphobit2_v2_loose=-111,iscphobit3_v2_loose=-111,iscphobit3_v2_loose=-111,iscphobit4_v2_loose=-111,iscphobit5_v2_loose=-111,iscphobit6_v2_loose=-111,iscphobit7_v2_loose=-111,iscphobit8_v2_loose=-111,iscphobit9_v2_loose=-111,iscphobit10_v2_loose=-111,iscphobit11_v2_loose=-111,iscphobit12_v2_loose=-111;


iscphoTight2_looseiso=-111,iscphobit1_v2_looseiso=-111,iscphobit2_v2_looseiso=-111,iscphobit3_v2_looseiso=-111,iscphobit3_v2_looseiso=-111,iscphobit4_v2_looseiso=-111,iscphobit5_v2_looseiso=-111,iscphobit6_v2_looseiso=-111,iscphobit7_v2_looseiso=-111,iscphobit8_v2_looseiso=-111,iscphobit9_v2_looseiso=-111,iscphobit10_v2_looseiso=-111,iscphobit11_v2_looseiso=-111,iscphobit12_v2_looseiso=-111;
 btruthleppt=-999999;
 btruthlepeta=-999999;
 btruthlepphi=-999999;
 flagem=0,flagep=0;
// ranrun=m_RandomDataPeriod.GetDataPeriod();
  flag_selecWgamma=0;
  flag_selecZgamma=0;

  flag_selecWloose=0;
  flag_selecWmedium=0;
  flag_selecWtight=0;

  flag_selecWtruthept=0;
  flag_selecWtrutheeta=0;
  flag_selecWtruthmet=0;
  flag_selecWtruthneutrino=0;

  flag_selecZ=0;
  flag_selecZloose=0;
  flag_selecZmedium=0;
  flag_selecZtight=0;
  flag_selecZtruthept=0;
  flag_selecZtrutheeta=0;
  flag_selecZtruthmet=0;

  flag_trueElectron=0;
  flag_selecWloosetruee=0;
  flag_selecWmediumtruee=0;
  flag_selecZloosetruee=0;
  flag_selecZtighttruee=0;
  
  //track the #events at every cut  
//   wcutflow = 0;
//   zcutflow = 0;



  flag_selecW=0;
  flag_selecWp=0;
  flag_selecWm=0;
  flag_selecZ=0;
 
  // Begin with 'real' processing
  McEventWeight=1.;
  CutflowWeight=1.; //scounter not multiplied with MC weights
 
  fillh1f(cut_flow+hs_w,iwevt,CutflowWeight); 
  fillh1f(cut_flow+hs_z,izevt,CutflowWeight); 

  // Neccesary for the event builder
  m_entry = entry;
  
  // Needed to clear the particle data from prior event
  clearEvtData(); 
  setEvtInfo(); // HS changes needed for timestamp and eventnumber, not sure if it was related to MC D3PDs

  // Set the random generator seed for the energy rescaler to the eventnumber
  // m_entry == 0 leads to 'real randomness', so use m_entry+1 to be sure values are reproducible
  //m_eRescale.SetRandomSeed(m_entry+1000);

  m_eRescale.SetRandomSeed(EventNumber+1000); //Marisa: Use EventNumber and not the entry number!!!!!! Checked with Katharina

  // this is the random runnumber for MC - keep throughout event, do not redraw
  runno = run();
  if (flag_isMC) {runno = GetRandomRunNumberFromGRL(); RunNumber=runno;}
  // MCEvtWeight (eg. Sherpa)

  McEventWeightGenerator = 1;
  vector<Truth*>* myTruthParticles= getTruth();
    int Ntruthp = myTruthParticles->size();

  if(flag_isMC) {
  
      McEventWeightGenerator = getMcEvtInfo()->at(0)->weight;
      McEventWeight *= getMcEvtInfo()->at(0)->weight;

  }  
  // PileupReweighting
  pileupWeight = 1;
  vector<JET*>* mytruthJETs;  
  if( flag_isMC ) {
  
    pileupWeight = getMcPileupWeight();
    //    cout << "pileupWeight " << pileupWeight << endl;
    //    pileupEventWeight = m_pileupTool->GetCombinedWeight(RunNumber, mc_channel_number, averageIntPerXing);  
    //    McEventWeight *= pileupWeight;
    mytruthJETs = getJets(AntiKt4Truth);
  }
  
  fillh1f(cut_flow+hs_w,iwsumw,McEventWeight); 
  fillh1f(cut_flow+hs_z,izsumw,McEventWeight); 

  CutflowWeight=McEventWeight; 

   if ( flag_isMC ) {  
      SelectTruth3(myTruthParticles);
      //     SelectTruth3();
     if(flag_isMC){

      SelectTruthJets(mytruthJETs);
     }
     if (flag_selecW_truth) fillh1f(cut_flow+hs_w,iwtruth,CutflowWeight); 
     if (flag_selecZ_truth) fillh1f(cut_flow+hs_z,iztruth,CutflowWeight); 
   }

  static int nprint = 1000;
 

  nevt++;
  if (nevt%nprint==0) {  
    ::Info("ElecChanBase","Processed: %i", nevt);
    if (nevt>=nprint*10) nprint *= 10;

    ProcInfo_t p;
    gSystem->GetProcInfo(&p);

    //std::cout << "Process(): " <<  nevt <<"/" << evtmax <<" " << (100.*nevt)/evtmax <<"% processed" <<std::endl;
    if (nevt>=nprint*10) nprint *= 10;
    
    m_timer.Continue();
    fflush( stdout );
  }
  b_pass_grl=passGoodRun();
  // Good Run List
  //    if (!flag_isMC && !passGoodRun()) return kTRUE; 

  fillh1f(cut_flow+hs_w,iwgrl,CutflowWeight); 
  fillh1f(cut_flow+hs_z,izgrl,CutflowWeight);
 

  //DATA only: Data quality:
//   if(!flag_isMC ) {
     b_larError->GetEntry(m_entry);

//     if(larError!=0) return kTRUE;
//   }
    
  fillh1f(cut_flow+hs_w,iwlarerror,CutflowWeight); 
  fillh1f(cut_flow+hs_z,izlarerror,CutflowWeight);

  // Primary Vertex 
  // Event must have at least one primary and reconstructed vertex with index 0 has to have at least 3 tracks
  flag_PV=0;
  flag_PV=hasPrimaryVtx();
  //      if (!hasPrimaryVtx()) return kTRUE;

//  fillh1f(cut_flow+hs_w,iwvtx,CutflowWeight);
//  fillh1f(cut_flow+hs_z,izvtx,CutflowWeight);

/*
   // Veto Muon Trigger 

   if (run() < 186729) { // before period J 
      if(passTrigger(TRIG_EF_mu18_MG)) return true; 
      //if(passTrigger(TRIG_EF_mu15_mu10_EFFS)) return true; 
   } else { 
      if(passTrigger(TRIG_EF_mu18_MG_medium)) return true;
      //if(passTrigger(TRIG_EF_mu15_mu10_EFFS_medium)) return true;
   }
   
  fillh1f(cut_flow+hs_w,iwmuonveto, CutflowWeight); 
  fillh1f(cut_flow+hs_z,izmuonveto, CutflowWeight); 
*/


  // Electron kinematic preselections
      myElectrons = getElectrons();
    //   ManipulateElectron(myElectrons);
 
    myMet = getMet(MET_RefFinal);
// //   //  myMet = getMet(MET_LocHadTopo); 
// //   ManipulateMET(myMet);

 
// //   // Electrons 
    int Nelec = myElectrons->size();
    //    cout<<"Nelec="<<Nelec<<endl;
// //    if (m_debug) {
// //      ::Info("DEBUG ElecChanBase Process", "Nr. of electrons before selection: %i", Nelec);
// //    }
// //    if (Nelec == 0) return kTRUE;
  
// //   ncand = Nelec; // for ntuple
    vector<Photon*>* myPhotons=  getPhotons();
    //       cout<<" NNphoton="<<myPhotons->size()<<endl;
// /
  //Jets
   myJETs = getJets(AntiKt4TopoEM);
//   ManipulateJETs(myJETs, myMet);

//   //Selection of Electrons, W, Z and Jets----------------------------------

//   //Select Electrons
   SelectElectrons(myElectrons, myMet);
//   ManipulateIsEM();

  
//     //Select Z
   istrigger=0;
   EF_g40_loose=0;

//     if ((runno <= 186755) && passTrigger(TRIG_EF_e20_medium) ){ istrigger=1, EF_g40_loose==1;}
//          if ((runno >= 186873  && runno <= 187815) && passTrigger(TRIG_EF_e22_medium) ) {istrigger=1, EF_g40_loose==1;}
//          if ((runno >  187815) && passTrigger(TRIG_EF_e22vh_medium1)) {istrigger=1, EF_g40_loose==1;}


      SelectPhotonsLeptonVeto(myPhotons,myElectrons);  
       SelectW(myElectrons, myMet);  
       SelectZ(myElectrons);

        SelectWGamma(myElectrons, myMet,myPhotons);  
        SelectZGamma(myElectrons, myMet,myPhotons);  

        SelectJets( myElectrons, myJETs,myMet,hs_z);


   alltree->Fill();  
   //         if(flag_isMC || ( ( nmedium>=2) && bphoclpt>0 )|| ( ( nloose>=1) && bphoclpt>0 )) 
 {  
       wtree->Fill();
     }
//   if(flag_isMC){
//     outtree->Fill();  
//   }

  return kTRUE;
}
void ElecChanBase::SelectPhotonsLeptonVeto(vector<Photon*>* myPhotons,vector<Electron*>* myElectrons) {
  
  pho_eveto_eveto=0;
  pho_eveto_author=0;
  pho_eveto_eta=0;
  pho_eveto_clus=0;
  pho_eveto_chg=0;
  pho_eveto_nloose=0;
  pho_eveto_nloose_iso=0;
  pho_eveto_nmedium=0;
  pho_eveto_ntight=0;
  pho_eveto_ntight_iso=0;
  pho_eveto_otx=0;
  pho_eveto_bits=0;
  pho_eveto_truthpt=0;
  pho_eveto_trutheta=0;
  pho_eveto_leadindex = 0;
  pho_eveto_leadCluPt = -999999.;
  pho_eveto_leadlooseindex = 0;
  pho_eveto_leadlooseCluPt = -999999.;
  pho_eveto_leadtightindex = 0;
  pho_eveto_leadtightCluPt = -999999.;


  pho_eveto_leadlooseisoindex = 0;
  pho_eveto_leadlooseisoCluPt = -999999.;
  pho_eveto_leadtightisoindex = 0;
  pho_eveto_leadtightisoCluPt = -999999.;



  pho_eveto_leadtight = TLorentzVector(0.,0.,0.,0.);
  pho_eveto_leadtightiso = TLorentzVector(0.,0.,0.,0.);

  pho_eveto_leadloose = TLorentzVector(0.,0.,0.,0.);
  pho_eveto_leadlooseiso = TLorentzVector(0.,0.,0.,0.);
  pho_eveto_leadclus = TLorentzVector(0.,0.,0.,0.);
//   scndmedium = (0.,0.,0.,0.);
//   scndmediumCluPt = -999999.;
//   scndmediumindex = 0;
  
  iscphobit1_v2=0,  iscphobit2_v2=0, iscphobit3_v2=0, iscphobit4_v2=0, iscphobit5_v2=0, iscphobit6_v2=0, iscphobit7_v2=0, iscphobit8_v2=0, iscphobit9_v2=0, iscphobit10_v2=0, iscphobit11_v2=0,iscphobit12_v2=0,iscphoTight2_clus=0;
  
  iscphobit1_v3=0,  iscphobit2_v3=0, iscphobit3_v3=0, iscphobit4_v3=0, iscphobit5_v3=0, iscphobit6_v3=0, iscphobit7_v3=0, iscphobit8_v3=0, iscphobit9_v3=0, iscphobit10_v3=0, iscphobit11_v3=0,iscphobit12_v3=0,iscphoTight3_clus=0;
   //for ugly cut
   //vector<JET*>* myJETs = getJets(AntiKt6TopoGCW); 
   
  //PHO_EVETO_CTRON CUT LOOP
  float orgpt,orgE;
  float factor_ph;
  bphotonclean=1;
  //  cout<<" NNN photon"<<myPhotons->size()<<endl;
  for (int i=0; i<myPhotons->size(); i++) {
    
    Photon* ph = (myPhotons->at(i));
    std::string part_type;

    if( ph->convflag%10==0){
      part_type="UNCONVERTED_PHOTON"; //could be ELECTRON, UNCONVERTED_PHOTON, CONVERTED_PHOTON
    }
    if( ph->convflag%10!=0){
      part_type="CONVERTED_PHOTON"; //could be ELECTRON, UNCONVERTED_PHOTON, CONVERTED_PHOTON
    }


    //orgpt= ph->cluster_pt;

    orgpt= ph->cluster_E/cosh(ph->sampl2_eta);
    ph->oldcluster_pt=orgpt;
    orgE=ph->cluster_E;
    nph_all++;
      //      ph->cluster_pt=ph->cluster_E/cosh(ph->cluster_eta);
    //        cout<<"orgpt="<<orgpt<<endl;
      m_eRescale.SetRandomSeed(1771561+10*i+EventNumber);
    if(!flag_isMC){
      ph->cluster_E = m_eRescale.applyEnergyCorrectionGeV(ph->cluster_eta, ph->cluster_phi, ph->cluster_E/1000., ph->cluster_pt/1000., 0, part_type)*1000.;
      ph->cluster_pt=ph->cluster_E/cosh(ph->sampl2_eta);
    }

     if(flag_isMC){
       //              cout<<"before="<<ph->cluster_E<<endl;
       m_eRescale.SetRandomSeed(1771561+10*i+EventNumber);
       double mcWithConstantTerm=false;// if you use a MC without constant term, 

       double smearcorr ;
       smearcorr=m_eRescale.getSmearingCorrectionGeV(ph->cluster_eta, ph->cluster_E/1000., EMreso, mcWithConstantTerm, "2011");
       float        smearcorr2=m_eRescale.getSmearingCorrectionGeV(ph->cluster_eta, ph->cluster_E/1000., EMreso, mcWithConstantTerm, "2011");
       float smearcorr3=m_eRescale.getSmearingCorrectionGeV(ph->cluster_eta, ph->cluster_E/1000., EMreso, mcWithConstantTerm, "2011");
//        cout<<" smearcorr1="<<smearcorr<<endl;
//        smearcorr=m_eRescale.getSmearingCorrectionGeV(ph->cluster_eta, ph->cluster_E/1000., EMreso, mcWithConstantTerm, "2011");
//        cout<<" smearcorr2="<<smearcorr<<endl;

       ph->cluster_E = ph->cluster_E* smearcorr;
       ph->cluster_pt = ph->cluster_pt* smearcorr;
       //       ph->cluster_pt=ph->cluster_E/cosh(ph->sampl2_eta);///cosh(ph->cluster_eta);
       //       ph->cluster_pt=ph->cluster_E/cosh(ph->cluster_eta);
       //       cout<<"after="<<ph->cluster_E<<" smearcorr="<<smearcorr<<endl;

       if(EMscale>=1 && EMscale<=2){
	 float orgE=m_eRescale.applyEnergyCorrectionGeV(ph->cluster_eta, ph->cluster_phi, ph->cluster_E/1000., ph->cluster_pt/1000., 0, part_type)*1000.;
         float  Evar= m_eRescale.applyEnergyCorrectionGeV(ph->cluster_eta, ph->cluster_phi, ph->cluster_E/1000., ph->cluster_pt/1000., EMscale, part_type)*1000.;
	 //	 cout<<" pppppppppp="<<Evar/orgE<<endl;
	 ph->cluster_E = ph->cluster_E* Evar/orgE;
	 ph->cluster_pt=ph->cluster_E/cosh(ph->sampl2_eta);///cosh(ph->cluster_eta);
	 //	 ph->cluster_pt=ph->cluster_E/cosh(ph->cluster_eta);
       }
     }
      if ( ph->convflag%10!=0 ){
           double converted_scale = converted_tool->Scale(ph->sampl2_eta,ph->cluster_E,ph->Rconv);
           ph->cluster_E=converted_scale*ph->cluster_E;
           ph->cluster_pt=converted_scale*ph->cluster_pt;
	   //	   ph->cluster_pt=ph->cluster_E/cosh(ph->sampl2_eta);///cosh(ph->cluster_eta);
      }
     
     factor_ph=ph->cluster_E/orgE;



     //     cout<<"*factor_ph="<<factor_ph<<endl;
    float dr=99999;
    float dr1=99999,dr2=99999;
    //author pho_eveto_ctron
    //    if ((ph->author == 1) || (ph->author == 3))  pho_eveto_author++;
    //phse if (ph->author == 8) pho_eveto_author=2; //was in original file, is not used in author cut?
    //    else continue;
    pho_eveto_author++;
    //    if(ntight>=1  ){
    if(ntight>=1  ){
    dr = DeltaR(ph->cluster_eta,ph->cluster_phi,(myElectrons->at(leadtightindex))->cluster_eta,(myElectrons->at(leadtightindex))->cluster_phi);              
    }
    if(eleotx>=1 && ntight==0  ){
      leadtightindex=leadlooseindex;
    dr = DeltaR(ph->cluster_eta,ph->cluster_phi,(myElectrons->at(leadtightindex))->cluster_eta,(myElectrons->at(leadtightindex))->cluster_phi);              
    }

     //    std::cout<<" EventNumber="<<EventNumber<<" dr1="<<dr1<<" dr2="<<dr2<<std::endl;

     //    if (ph->cluster_pt < 15000.)  continue;
    if ( ph->cluster_pt < 15000.)  continue;
    else pho_eveto_clus++;
    //    cout<<" newpt="<<orgpt<< " EventNumber="<<EventNumber<<" nph_pt="<<nph_pt<<endl;
    nph_pt++;
    egammaOQ egammaOQ1;
    int oqflag=0,passoq=1;
    //    float rannum=ran.Uniform();    
    bool flagconv=(ph->convflag%10)>=1;
    if(flag_isMC){
      oqflag=egammaOQ1.checkOQClusterPhoton(ranrun, ph->cluster_eta,ph->cluster_phi,flagconv, 0, 0);
    }
      //      if(rannum<0.223) 
     if(oqflag>=3 ){
       passoq=0;
     }

    if ( (( (*ph_OQ)[i]&34214)==0) )  pho_eveto_otx++;
     else continue; 
    nph_otx++;

    if ((fabs(ph->sampl2_eta)>= 0.  && fabs(ph->sampl2_eta)<1.37)
 	 || (fabs(ph->sampl2_eta)> 1.52 && fabs(ph->sampl2_eta)<=2.37))  pho_eveto_eta++;
    else continue;
    pho_eveto_eveto++;        

    nph_eta++;
    //cluster pt pho_eveto_ctron


    float drtruth=0;
    if(flag_isMC){
      drtruth=DeltaR(ph->cluster_eta,ph->cluster_phi,btruthphoeta,btruthphophi);
    }
    //    if(drtruth>0.4 && flag_truthmatch) continue;


    if( ( ((*ph_OQ)[i]&134217728)!=0 && (ph->E233/ph->E237>0.98||ph->E237/ph->E277>1.0||((*ph_OQ)[i]&67108864)!=0) ) ){
      bphotonclean=0;
    }
        if (bphotonclean==0) continue;
    // MET Cleaning (on event level)
    // Note: Reject the event if at least one AntiKt4TopoJet with pT(EMScale)>10 GeV satisfies: 
    //             (n90<=5 AND fHEC>0.8) 
    //        OR   (fabs(jetTime)>50) 
    //        OR   (fabs(JetQuality)>0.8 AND emf>0.95)
    
    //Fiducial cuts OTX
    float eta2=fabs(ph->sampl2_eta);
    orgpt=(ph->cluster_E)/cosh(eta2);
    PhotonIDTool GammaSelection = PhotonIDTool( orgpt, 
						fabs(ph->sampl2_eta),
						ph->Ethad1,
						ph->Ethad,
						ph->E277*factor_ph,
						ph->E237*factor_ph ,
						ph->E233*factor_ph ,
						ph->weta2 ,
						ph->f1,
						ph->emaxs1*factor_ph,
						ph->Emax2*factor_ph ,
						ph->Emins1*factor_ph,
						ph->fside ,
						ph->wstot ,
						ph->ws3 ,
						ph->isconv );
//     cout<<" orgpt="<<orgpt<<" factor_ph="<<factor_ph<<endl;
//     cout<<" s2 eta="<<fabs(ph->sampl2_eta)<<endl;
//     cout<<" ph->Ethad1="<<ph->Ethad1<<endl;
//     cout<<" ph->Ethad="<<ph->Ethad<<endl;
//     cout<<" ph->E277="<<ph->E277<<endl;
//     cout<<" ph->E237="<<ph->E237<<endl;
//     cout<<" ph->E233="<<ph->E233<<endl;
//     cout<<" ph->weta2="<<ph->weta2<<endl;
//     cout<<" ph->f1="<<ph->weta2<<endl;
//     cout<<" ph->emaxs1="<<ph->emaxs1<<endl;
//     cout<<" ph->Emax2="<<ph->Emax2<<endl;
//     cout<<" ph->Emins1="<<ph->Emins1<<endl;
//     cout<<" ph->fside="<<ph->fside<<endl;
//     cout<<" ph->wstot="<<ph->wstot<<endl;
//     cout<<" ph->ws3="<<ph->ws3<<endl;
//     cout<<" ph->isconv="<<ph->isconv<<endl;
    //    GammaSelection.resetFactor();
    //    iscphoTight2= GammaSelection.PhotonCutsTight(6);
     int map=2;

     iscphoTight2_clus= GammaSelection.PhotonCutsTight(6,map);
     //     std::cout<<" iscphoTight2="<<iscphoTight2_clus << " tight="<<ph->tight<<std::endl;

     iscphobit1_v2=(map>>1)%2==0;
     //     cout<<"map="<<map<<endl;
//      int map2=4;
     iscphobit2_v2=(map>>2)%2==0;//
     iscphobit3_v2=(map>>3)%2==0;//
     iscphobit4_v2=(map>>4)%2==0;//
     iscphobit5_v2=(map>>5)%2==0;//
     iscphobit6_v2=(map>>6)%2==0;//
     iscphobit7_v2=(map>>7)%2==0;//
     iscphobit8_v2=(map>>8)%2==0;//
     iscphobit9_v2=(map>>9)%2==0;//
     iscphobit10_v2=(map>>10)%2==0;//
     iscphobit11_v2=(map>>11)%2==0;//
     iscphobit12_v2=(map>>12)%2==0;//

    double rhad1 =double(ph->Ethad1)/orgpt;
    double rhad   =double(ph->Ethad)/orgpt;
    double e277   =ph->E277;
    double reta  = ph->E277!=0? ph->E237/ph->E277 :0 ;
    double rphi   =ph->E237!=0?ph->E233/ph->E237:0 ;
    double weta2  =     ph->weta2 ;
    double f1    =ph->f1;
    double fside  =ph->fside ;
    double wtot   =ph->wstot ;
    double w1     = ph->ws3 ;
    double deltae =ph->Emax2*factor_ph-ph->Emins1*factor_ph;
    double emax2=ph->Emax2*factor_ph;
    double emax1=ph->emaxs1*factor_ph;
    double eratio  = (emax1+emax2)==0. ? 0 : (emax1-emax2)/(emax1+emax2);
    int     isConv      =ph->isconv ;



    if(flag_isMC){
       FudgeMCTool fudgetool2;
       fudgetool2.SetPreselection(8);
         fudgetool2.FudgeShowers( orgpt,
                                 eta2,
                                 rhad1,
                                 rhad,
                                 e277,
                                 reta,
                                 rphi,
                                 weta2,
                                 f1,
                                 fside,
                                 wtot,
                                 w1,
                                 deltae,
                                 eratio,
                                 isConv );

     PhotonIDTool GammaSelectionFF = PhotonIDTool( orgpt,
                                                    eta2,
                                                    rhad1,
                                                    rhad,
                                                    e277,
                                                    reta,
                                                    rphi,
                                                    weta2,
                                                    f1,
                                                    fside,
                                                    wtot,
                                                    w1,
                                                    deltae,
                                                    eratio,
                                                    isConv );

      iscphoTight2_clus= GammaSelectionFF.PhotonCutsTight(6,map);
    }

  float ietcone30corr= GetPtEDCorrectedIsolation( ph->etcone40,//float energy,
						ph->etcone40_EDcorr,
						ph->cluster_E,
						ph->sampl2_eta,
						ph->etap,
						ph->cluster_eta,
						30,
						flag_isMC,
						ph->etcone30,
						ph->isconv,
						CaloIsoCorrection::PHOTON,CaloIsoCorrection::REL17);



      if(iscphoTight2_clus) {
       nph_tight++;
       cout<<"bphoetcone30_corr="<<ietcone30corr<<endl;
       if( ietcone30corr<6000){nph_iso++;}
     }


       if(dr<0.7) continue;

    if( nmedium>=2 ){
    dr1 = DeltaR(ph->cluster_eta,ph->cluster_phi,(myElectrons->at(leadmediumindex))->track_eta,(myElectrons->at(leadmediumindex))->track_phi);              
    dr2 = DeltaR(ph->cluster_eta,ph->cluster_phi,(myElectrons->at(scndmediumindex))->track_eta,(myElectrons->at(scndmediumindex))->track_phi);              
    }
        if(dr1<0.7 ) continue;
        if(dr2<0.7)continue;

      
    if (ph->cluster_pt > pho_eveto_leadCluPt) {
      pho_eveto_leadindex = i;
      pho_eveto_leadCluPt=ph->cluster_pt;
      pho_eveto_leadclus.SetPtEtaPhiE(ph->cluster_pt ,ph->cluster_eta,ph->cluster_phi,ph->cluster_E);
      borgphoclpt=orgpt;
      borgphoclE=orgE;

    }     

    //loose  
    //    if(iscphobit1_v2 && iscphobit2_v2 && iscphobit3_v2 && iscphobit4_v2 && iscphobit5_v2)pho_eveto_nloose++;
    //    if (ph->loose == 1) pho_eveto_nloose++;
    
    //pho_eveto_leadloose index
    if (iscphobit1_v2 && iscphobit2_v2 && iscphobit3_v2 && iscphobit4_v2 && iscphobit5_v2 && ph->cluster_pt > pho_eveto_leadlooseCluPt) {
      pho_eveto_nloose++;
      pho_eveto_leadlooseindex = i;
      pho_eveto_leadlooseCluPt=ph->cluster_pt;
      pho_eveto_leadloose.SetPtEtaPhiE(ph->cluster_pt ,ph->cluster_eta,ph->cluster_phi,ph->cluster_E);
    }     

    if (ph->cluster_pt > pho_eveto_leadlooseisoCluPt && ph->etcone40<5000) {
      pho_eveto_leadlooseisoindex = i;
      pho_eveto_leadlooseisoCluPt=ph->cluster_pt;
      pho_eveto_leadlooseiso.SetPtEtaPhiE(ph->cluster_pt ,ph->cluster_eta,ph->cluster_phi,ph->cluster_E);
      pho_eveto_nloose_iso++;
    }     


    //tight
    if (iscphoTight2_clus) pho_eveto_ntight++;
    //    if(ph)pho_eveto_ntight++;
    else continue;
    //    if(iscphoTight2_clus==1)pho_eveto_ntight++;
    //        if (ph->tight) pho_eveto_ntight++;

    b_pass_photight=1;
    //leadtight index
    if(bphoetcone20_npvPT<5000){
      b_pass_phoiso=1;
    }
    if (ph->cluster_pt > pho_eveto_leadtightCluPt) {
	  pho_eveto_leadtightindex = i;
	  pho_eveto_leadtightCluPt=ph->cluster_pt;
	  pho_eveto_leadtight.SetPtEtaPhiE(ph->cluster_pt ,ph->cluster_eta,ph->cluster_phi,ph->cluster_E);
    }
    if (ph->cluster_pt > pho_eveto_leadtightisoCluPt&& ph->etcone40<5000) {
	  pho_eveto_leadtightisoindex = i;
	  pho_eveto_leadtightisoCluPt=ph->cluster_pt;
	  pho_eveto_leadtightiso.SetPtEtaPhiE(ph->cluster_pt ,ph->cluster_eta,ph->cluster_phi,ph->cluster_E);
	  pho_eveto_ntight_iso++;
    }


  }// END OF PHO_EVETO_CTRON LOOP

   if(pho_eveto_nloose>=1){
     pho_eveto_leadindex=pho_eveto_leadlooseindex;
     if(pho_eveto_ntight>=1){
       pho_eveto_leadindex=pho_eveto_leadtightindex;
     }
     bphoetcone40_npvPT=-999;


     double met_px_old=myMet->Px();
     double met_py_old=myMet->Py();
     float ph_px_old=(myPhotons->at(pho_eveto_leadindex))->oldcluster_pt*cos((myPhotons->at(pho_eveto_leadindex))->cluster_phi);
     float ph_py_old=(myPhotons->at(pho_eveto_leadindex))->oldcluster_pt*sin((myPhotons->at(pho_eveto_leadindex))->cluster_phi);
     float ph_px_new=(myPhotons->at(pho_eveto_leadindex))->cluster_pt*cos((myPhotons->at(pho_eveto_leadindex))->cluster_phi);
     float ph_py_new=(myPhotons->at(pho_eveto_leadindex))->cluster_pt*sin((myPhotons->at(pho_eveto_leadindex))->cluster_phi);
  
     double met_px_new = met_px_old - (ph_px_new - ph_px_old);
     double met_py_new = met_py_old - (ph_py_new - ph_py_old);
     myMet->Set(met_px_new, met_py_new);
//        cout << "met_px_old " << met_px_old << "  met_px_new " << met_px_new << endl;
//        cout << "met_py_old " << met_py_old << "  met_py_new " << met_py_new << endl;




     int ph_ARmask = 1 << 23;
    bis_tightAR = not ((myPhotons->at(pho_eveto_leadindex))->isem & ph_ARmask);

  bphoetcone30_corr= GetPtEDCorrectedIsolation( (myPhotons->at(pho_eveto_leadindex))->etcone40,//float energy,
						(myPhotons->at(pho_eveto_leadindex))->etcone40_EDcorr,
						(myPhotons->at(pho_eveto_leadindex))->cluster_E,
						(myPhotons->at(pho_eveto_leadindex))->sampl2_eta,
						(myPhotons->at(pho_eveto_leadindex))->etap,
						(myPhotons->at(pho_eveto_leadindex))->cluster_eta,
						30,
						flag_isMC,
						(myPhotons->at(pho_eveto_leadindex))->etcone30,
						myPhotons->at(pho_eveto_leadindex)->isconv,
						CaloIsoCorrection::PHOTON,CaloIsoCorrection::REL17);


  bphoetcone20_corr= GetPtEDCorrectedIsolation( (myPhotons->at(pho_eveto_leadindex))->etcone40,//float energy,
						(myPhotons->at(pho_eveto_leadindex))->etcone40_EDcorr,
						(myPhotons->at(pho_eveto_leadindex))->cluster_E,
						(myPhotons->at(pho_eveto_leadindex))->sampl2_eta,
						(myPhotons->at(pho_eveto_leadindex))->etap,
						(myPhotons->at(pho_eveto_leadindex))->cluster_eta,
						20,
						flag_isMC,
						(myPhotons->at(pho_eveto_leadindex))->etcone20,
						myPhotons->at(pho_eveto_leadindex)->isconv,
						CaloIsoCorrection::PHOTON,CaloIsoCorrection::REL17);



  bphoetcone40_npvPT= GetPtNPVCorrectedIsolation(npv,
                                   (myPhotons->at(pho_eveto_leadindex))->cluster_E,//float energy,
                                   (myPhotons->at(pho_eveto_leadindex))->sampl2_eta,
                                   (myPhotons->at(pho_eveto_leadindex))->etap,
                                   (myPhotons->at(pho_eveto_leadindex))->cluster_eta ,
                                   40,
                                   flag_isMC,
                                   (myPhotons->at(pho_eveto_leadindex))->etcone40,
                                   myPhotons->at(pho_eveto_leadindex)->isconv,
				   CaloIsoCorrection::PHOTON,CaloIsoCorrection::REL17);
  //                                    ELECTRON);

//      float bphoetcone40_EDPT =GetPtEDCorrectedIsolation((myPhotons->at(pho_eveto_leadindex))->etcone40,
//                                    (myPhotons->at(pho_eveto_leadindex))->etcone40_EDcorr   ,
//                                     (myPhotons->at(pho_eveto_leadindex))->cluster_E , 
// 			           (myPhotons->at(pho_eveto_leadindex))->sampl2_eta , 
// 			           (myPhotons->at(pho_eveto_leadindex))->sampl2_eta , 
// 			           (myPhotons->at(pho_eveto_leadindex))->cluster_eta , 
// 							0.4 , 
// 							flag_isMC, 
// 							(myPhotons->at(pho_eveto_leadindex))->etcone40,
// 							myPhotons->at(pho_eveto_leadindex)->isconv,
// 							PHOTON);
  


    bphoetcone40=(myPhotons->at(pho_eveto_leadindex))->etcone40;
    bphoetcone40_corr=(myPhotons->at(pho_eveto_leadindex))->etcone40_corr;
    bphoetcone40_EDcorr=(myPhotons->at(pho_eveto_leadindex))->etcone40_EDcorr;
    bphoetcone40_ptcorr=(myPhotons->at(pho_eveto_leadindex))->etcone40_ptcorr;

    bphoetcone30=(myPhotons->at(pho_eveto_leadindex))->etcone30;

//     bphoetcone20_corr=(myPhotons->at(pho_eveto_leadindex))->etcone20_corr;

//    bphoptcone20=(*ph_ptcone20)[pho_eveto_leadindex];
//    bphoptcone30=(*ph_ptcone30)[pho_eveto_leadindex];
//    bphoptcone40=(*ph_ptcone40)[pho_eveto_leadindex];

    //  bphoetcone20=(myPhotons->at(pho_eveto_leadindex))->etcone20;
//   bphoetcone20_npvPT= GetPtNPVCorrectedIsolation(npv,
//                                    (myPhotons->at(pho_eveto_leadindex))->cluster_E,//float energy,
//                                    (myPhotons->at(pho_eveto_leadindex))->sampl2_eta,
//                                    (myPhotons->at(pho_eveto_leadindex))->sampl2_eta,
//                                    (myPhotons->at(pho_eveto_leadindex))->cluster_eta ,
//                                    20,
//                                    flag_isMC,
//                                    (myPhotons->at(pho_eveto_leadindex))->etcone20,
//                                    myPhotons->at(pho_eveto_leadindex)->isconv,
// 				   PHOTON,CaloIsoCorrection::REL17);

  //    if ( (( (*ph_OQ)[i]&34214)==0) && passoq)  pho_eveto_otx++;

//     bphof0=(myPhotons->at(pho_eveto_leadindex))->f0;
//     bphoEs0=(myPhotons->at(pho_eveto_leadindex))->Es0;

    bpholoose=(myPhotons->at(pho_eveto_leadindex))->loose;
    bphotight=(myPhotons->at(pho_eveto_leadindex))->tight;
    bphoclpt=(myPhotons->at(pho_eveto_leadindex))->cluster_pt;
    bphoclE=(myPhotons->at(pho_eveto_leadindex))->cluster_E;
    bphoclphi=(myPhotons->at(pho_eveto_leadindex))->cluster_phi;
    bphocleta=(myPhotons->at(pho_eveto_leadindex))->cluster_eta;
    bphoetas2=(myPhotons->at(pho_eveto_leadindex))->sampl2_eta;
    bphoconvflag=(myPhotons->at(pho_eveto_leadindex))->convflag;
    bphoIsEM=(myPhotons->at(pho_eveto_leadindex))->isem;
    float eta2=fabs(myPhotons->at(pho_eveto_leadindex)->sampl2_eta);
    orgpt=(myPhotons->at(pho_eveto_leadindex)->cluster_E)/cosh(eta2);




    double rhad1 =double(myPhotons->at(pho_eveto_leadindex)->Ethad1)/bphoclpt;
    double rhad   =double(myPhotons->at(pho_eveto_leadindex)->Ethad)/bphoclpt;
    double e277   =myPhotons->at(pho_eveto_leadindex)->E277;
    double reta  = myPhotons->at(pho_eveto_leadindex)->E277!=0? myPhotons->at(pho_eveto_leadindex)->E237/myPhotons->at(pho_eveto_leadindex)->E277 :0 ;
    double rphi   =myPhotons->at(pho_eveto_leadindex)->E237!=0?myPhotons->at(pho_eveto_leadindex)->E233/myPhotons->at(pho_eveto_leadindex)->E237:0 ;
    double weta2  =     myPhotons->at(pho_eveto_leadindex)->weta2 ;
    double f1    =myPhotons->at(pho_eveto_leadindex)->f1;
    double fside  =myPhotons->at(pho_eveto_leadindex)->fside ;
    double wtot   =myPhotons->at(pho_eveto_leadindex)->wstot ;
    double w1     = myPhotons->at(pho_eveto_leadindex)->ws3 ;
    double deltae =myPhotons->at(pho_eveto_leadindex)->Emax2*factor_ph-myPhotons->at(pho_eveto_leadindex)->Emins1*factor_ph;
    double emax2=myPhotons->at(pho_eveto_leadindex)->Emax2*factor_ph;
    double emax1=myPhotons->at(pho_eveto_leadindex)->emaxs1*factor_ph;
    double eratio  = (emax1+emax2)==0. ? 0 : (emax1-emax2)/(emax1+emax2);
    int     isConv      =myPhotons->at(pho_eveto_leadindex)->isconv ;


    PhotonIDTool GammaSelection = PhotonIDTool( orgpt, 
						fabs(myPhotons->at(pho_eveto_leadindex)->sampl2_eta),
						myPhotons->at(pho_eveto_leadindex)->Ethad1,
						myPhotons->at(pho_eveto_leadindex)->Ethad,
						myPhotons->at(pho_eveto_leadindex)->E277*factor_ph,
						myPhotons->at(pho_eveto_leadindex)->E237*factor_ph ,
						myPhotons->at(pho_eveto_leadindex)->E233*factor_ph ,
						myPhotons->at(pho_eveto_leadindex)->weta2 ,
						myPhotons->at(pho_eveto_leadindex)->f1,
						myPhotons->at(pho_eveto_leadindex)->emaxs1*factor_ph,
						myPhotons->at(pho_eveto_leadindex)->Emax2*factor_ph ,
						myPhotons->at(pho_eveto_leadindex)->Emins1*factor_ph,
						myPhotons->at(pho_eveto_leadindex)->fside ,
						myPhotons->at(pho_eveto_leadindex)->wstot ,
						myPhotons->at(pho_eveto_leadindex)->ws3 ,
						myPhotons->at(pho_eveto_leadindex)->isconv );


//   PhotonIDTool GammaSelection = PhotonIDTool( orgpt,
//                                                  eta2,
//                                                  rhad1,
//                                                  rhad,
//                                                  e277,
//                                                  reta,
//                                                  rphi,
//                                                  weta2,
//                                                  f1,
//                                                  fside,
//                                                  wtot,
//                                                  w1,
//                                                  deltae,
//                                                  eratio,
//                                                  isConv );

  int map;

     iscphoTight3_clus= GammaSelection.PhotonCutsTight(6,map);
//     //    std::cout<<" iscphoTight2="<<iscphoTight2 << " tight="<<ph->tight<<std::endl;
     iscphobit1_v3=(map>>1)%2==0;
     //     cout<<"map="<<map<<endl;
//      int map2=4;
     iscphobit2_v3=(map>>2)%2==0;//
     iscphobit3_v3=(map>>3)%2==0;//
     iscphobit4_v3=(map>>4)%2==0;//
     iscphobit5_v3=(map>>5)%2==0;//
     iscphobit6_v3=(map>>6)%2==0;//
     iscphobit7_v3=(map>>7)%2==0;//
     iscphobit8_v3=(map>>8)%2==0;//
     iscphobit9_v3=(map>>9)%2==0;//
     iscphobit10_v3=(map>>10)%2==0;//
     iscphobit11_v3=(map>>11)%2==0;//
     iscphobit12_v3=(map>>12)%2==0;//





    //    cout<<"before reta="<<reta<<endl;
    FudgeMCTool fudgetool;
        if(flag_isMC){
       fudgetool.SetPreselection(8);
       fudgetool.FudgeShowers( orgpt,
                               eta2,
                               rhad1,
                               rhad,
                               e277,
                               reta,
                               rphi,
                               weta2,
                               f1,
                               fside,
                               wtot,
                               w1,
                               deltae,
                               eratio,
                               isConv );

	}

    //    cout<<"after reta="<<reta<<endl;
  PhotonIDTool GammaSelectionFF = PhotonIDTool( orgpt,
                                                 eta2,
                                                 rhad1,
                                                 rhad,
                                                 e277,
                                                 reta,
                                                 rphi,
                                                 weta2,
                                                 f1,
                                                 fside,
                                                 wtot,
                                                 w1,
                                                 deltae,
                                                 eratio,
                                                 isConv );
  //     cout<<"after reta="<<reta<<" rphi="<<rphi<<endl;


    bw2=weta2;
    bw1=w1;
    be233=(myPhotons->at(pho_eveto_leadindex))->E233;
    be237=(myPhotons->at(pho_eveto_leadindex))->E237;
    be277=(myPhotons->at(pho_eveto_leadindex))->E277;
    bdeltaEs=deltae;
    bemaxs1=(myPhotons->at(pho_eveto_leadindex))->emaxs1;
    bwstot=(myPhotons->at(pho_eveto_leadindex))->wstot;
    bws3=(myPhotons->at(pho_eveto_leadindex))->ws3;
    bEmax2=(myPhotons->at(pho_eveto_leadindex))->Emax2;
    bfside=fside;
    bEmins1=(myPhotons->at(pho_eveto_leadindex))->Emins1;
    bEthad=(myPhotons->at(pho_eveto_leadindex))->Ethad;
    bEthad1=(myPhotons->at(pho_eveto_leadindex))->Ethad1;


iscphoTight2_clus=-111,iscphobit1_v2=-111,iscphobit2_v2=-111,iscphobit3_v2=-111,iscphobit3_v2=-111,iscphobit4_v2=-111,iscphobit5_v2=-111,iscphobit6_v2=-111,iscphobit7_v2=-111,iscphobit8_v2=-111,iscphobit9_v2=-111,iscphobit10_v2=-111,iscphobit11_v2=-111,iscphobit12_v2=-111;

     iscphoTight2_clus= GammaSelectionFF.PhotonCutsTight(6,map);
     cout<<" SS="<<iscphoTight2_clus<<endl;
     iscphobit1_v2=(map>>1)%2==0;
     iscphobit2_v2=(map>>2)%2==0;//
     iscphobit3_v2=(map>>3)%2==0;//
     iscphobit4_v2=(map>>4)%2==0;//
     iscphobit5_v2=(map>>5)%2==0;//
     iscphobit6_v2=(map>>6)%2==0;//
     iscphobit7_v2=(map>>7)%2==0;//
     iscphobit8_v2=(map>>8)%2==0;//
     iscphobit9_v2=(map>>9)%2==0;//
     iscphobit10_v2=(map>>10)%2==0;//
     iscphobit11_v2=(map>>11)%2==0;//
     iscphobit12_v2=(map>>12)%2==0;//




    bgoodphoclean=0;
    if( !( ((*ph_OQ)[pho_eveto_leadindex]&134217728)!=0 && (be233/be237>0.98||be237/be277>1.0||((*ph_OQ)[pho_eveto_leadindex]&67108864)!=0) ) ){
      bgoodphoclean=1;
    }

    if(flag_isMC){
      bphopdg=(myPhotons->at(pho_eveto_leadindex))->truthInfo->truthtype;
      bphompdg=(myPhotons->at(pho_eveto_leadindex))->truthInfo->mothertype;
      bphotruthdr=DeltaR(btruthphoeta,btruthphophi,bphocleta,bphoclphi);

   }

  }


 return;
}
 

//______________________________________________________________________ 
void ElecChanBase::SelectElectrons(vector<Electron*>* myElecs,Met * myMet) {
 
  // electron counters (resetted per event)  
  eleauthor=0;
  eleeta=0;
  eleclus=0;
  nmedium=0;
  ntight=0;
  nloose=0;
  ntightpt25=0;
  eleotx=0;
  elebits=0;
  metclean=0;
  nmediumpp20=0;
  niso=0;

  leadlooseindex = 0;
  leadlooseCluPt = -999999.;
  leadlooseismedium = 0;
  leadlooseistight = 0;
  leadloose = TLorentzVector(0.,0.,0.,0.);

  scndlooseindex = 0;
  scndlooseCluPt = -999999.;
  scndlooseismedium = 0;
  scndlooseistight = 0;
  scndloose = TLorentzVector(0.,0.,0.,0.);

  leadmediumindex = 0;
  leadmediumCluPt = -999999.;
  leadmediumistight = 0;
  leadmediumisantitight = 0;
  leadmedium = TLorentzVector(0.,0.,0.,0.);

  scndmediumindex = 0;
  scndmediumCluPt = -999999.;
  scndmediumistight = 0;
  scndmedium = TLorentzVector(0.,0.,0.,0.);

  leadtightindex = 0;
  leadtightCluPt = -999999.;
  leadtight = TLorentzVector(0.,0.,0.,0.);

  scndtightindex = 0;
  scndtightCluPt = -999999.;
  scndtight = TLorentzVector(0.,0.,0.,0.);
    b_vxp_trk_n->GetEntry(m_entry);
    int nVertex=0;
    for(uint ii=0; ii<vxp_trk_n->size(); ii++)
    {
      if (vxp_trk_n->at(ii) > 2) nVertex++;
    }

  //ELECTRON CUT LOOP
  //cout << "myElecs->size()  ------------------------------------------------------    " << myElecs->size() << endl;
  Electron* tmpE = 0;
  for (uint i=0; i<myElecs->size(); i++) {
    n_all++;
    tmpE = 0;
    tmpE = myElecs->at(i);
  
    double eta_e = tmpE->cluster_eta;               // for cut flow always use cluster_eta  
    double E_e   = fabs(tmpE->cluster_E)/1000.;     // in GeV
    double pt_e  = fabs(tmpE->cluster_pt)/1000.;
    double phi_e = fabs(tmpE->cluster_phi); 

    double Et_e; 
    double etacorr,phicorr;
    if((tmpE->nSCTHits+tmpE->nPixHits)>=4) {
      Et_e = E_e/cosh(tmpE->track_eta);
      etacorr=tmpE->track_eta;
      phicorr=tmpE->track_phi;
    } else {
      Et_e = E_e/cosh(tmpE->cluster_eta);
      etacorr=tmpE->cluster_eta;
      phicorr=tmpE->cluster_phi;
    }
    tmpE->correta=etacorr;
    tmpE->corrphi=phicorr;
      // The 'old' variables (w/o scaling/smearing) are required for subsequent MET corrections
    double ele_px_old=tmpE->com_pt*cos(tmpE->com_phi);//Et_e*cos(phicorr);
    double ele_py_old=tmpE->com_pt*sin(tmpE->com_phi);//Et_e*sin(phicorr);

    // Initialise variables for smeared/corrected quantities
    double ele_px_new = ele_px_old;
    double ele_py_new = ele_py_old;

    //CALIBRATION for crack region - both data and MC

    // Treatment of data -- here we only scale (and re-convert to MeV)
    float mcscale=1;
    m_eRescale.SetRandomSeed(1771561+10*i+EventNumber);
    if(!flag_isMC) {
//       ele_px_new = m_eRescale.applyEnergyCorrectionGeV(tmpE->cluster_eta, tmpE->cluster_phi, Et_e*cos(phicorr), Et_e, 0, "ELECTRON");
//       ele_py_new = m_eRescale.applyEnergyCorrectionGeV(tmpE->cluster_eta, tmpE->cluster_phi, Et_e*sin(phicorr), Et_e, 0, "ELECTRON");
      //      double corr_pt = 1000. * m_eRescale.applyEnergyCorrectionGeV(tmpE->cluster_eta, tmpE->cluster_phi, pt_e, Et_e, 0, "ELECTRON"); //TODO what about et?
//       tmpE->cluster_pt=corr_pt;
//       tmpE->cluster_E=corr_E;
//       ele_px_new = corr_E/E_e/1000. * ele_px_old;//tmpE->Px();
//       ele_py_new = corr_E/E_e/1000. * ele_py_old;
      //    fact_calib=1;
//     E_e  =  E_e*fact_calib;
//     pt_e = pt_e*fact_calib;
      double corr_E  = m_eRescale.applyEnergyCorrectionGeV(tmpE->cluster_eta, tmpE->cluster_phi,tmpE->cluster_E/1000., Et_e, 0, "ELECTRON"); //TODO what about et?
      Et_e=corr_E/cosh(etacorr);
      double fact_calib = m_eRescale.applyMCCalibrationGeV(tmpE->cluster_eta, Et_e, "ELECTRON");
      Et_e = Et_e*fact_calib;
      tmpE->cluster_pt = Et_e*1000.;
      tmpE->cluster_E  = E_e*1000.;

    } else {
      double mcWithConstantTerm=false;
      Et_e  =m_eRescale.applyMCCalibrationMeV(tmpE->cluster_eta, Et_e, "ELECTRON");

      double smear_fac = m_eRescale.getSmearingCorrectionGeV(tmpE->cluster_eta, tmpE->cluster_E,  EMreso, mcWithConstantTerm, "2011");
        if(EMscale>=1 && EMscale<=2){
	  // 	 float orgpt=m_eRescale.applyEnergyCorrectionGeV(eta_e, phi_e, pt_e, Et_e, 0, "ELECTRON")*1000.;
 	 float orgE=m_eRescale.applyEnergyCorrectionGeV(tmpE->cluster_eta, tmpE->cluster_phi, tmpE->cluster_E/1000., Et_e, 0,"ELECTRON")*1000.;
 	 float corr_E=m_eRescale.applyEnergyCorrectionGeV(tmpE->cluster_eta, tmpE->cluster_phi, tmpE->cluster_E/1000., Et_e, EMscale,"ELECTRON")*1000.;
     	 mcscale=corr_E/orgE;
        }
      tmpE->cluster_E  =  smear_fac *mcscale* tmpE->cluster_E;
      tmpE->cluster_pt =tmpE->cluster_E/cosh(etacorr); 
      //      cout<<" mcscale="<<mcscale<<endl;
    }
    //     cout << "tmpE->cluster_pt " << tmpE->cluster_pt << endl;
    ele_px_new = tmpE->cluster_pt * cos(phicorr);
    ele_py_new = tmpE->cluster_pt* sin(phicorr);


    // Correct MET after smearing/scaling!!! 
    double met_px_old=myMet->Px();
    double met_py_old=myMet->Py();

    double met_px_new = met_px_old - (ele_px_new - ele_px_old);
    double met_py_new = met_py_old - (ele_py_new - ele_py_old);

    //       if (m_debug)
//  {
//      cout << "ele_px_old " << ele_px_old << "  ele_px_new " << ele_px_new << endl;
//      cout << "ele_py_old " << ele_py_old << "  ele_py_new " << ele_py_new << endl;
//      //     cout << "before: myMet->Et() " << myMet->Et() << endl;
//     }

    // HS: Corrected/smeared MET was commented out!!!
    myMet->Set(met_px_new, met_py_new);

    // Author electron 

    double el_pt=0.;

//     if((tmpE->nSCTHits+tmpE->nPixHits)>=4) {
//       el_pt=tmpE->cluster_E*sin(tmpE->track_theta);
//     } else {
//       el_pt=tmpE->cluster_pt;
//     }
    
    float pt_min = 25.;
    if (tmpE->cluster_pt/1000. > pt_min && tmpE->mediumPP) { nmediumpp20++; }    
    //    if (el_pt/1000. > pt_min && tmpE->mediumPP) { nmediumpp20++; }
  
    // Cluster pt of the electron, require at least 25 GeV (beware: cluster_pt is in MeV) 
    if (m_debug) {
      ::Info("DEBUG ElecChanBase SelectElectrons", "This electrons cluster pt: %f MeV", tmpE->cluster_pt);
    }
    
    if (tmpE->cluster_pt/1000. <= 25) {
      if (m_debug) {
        ::Info("DEBUG ElecChanBase SelectElectrons", "This electron missed cluster pt cut");
      }

      continue;
    }
    else eleclus++;
    n_pt++;
    
    if ((tmpE->author == 1) || (tmpE->author == 3)) {
        eleauthor++;
	n_author++;
    } else continue;


    if((tmpE->OQ&1446) != 0) continue;
    eleotx++;  
    n_oq++;

    eta_e = fabs(eta_e);
    if (eta_e < 2.47 && !(eta_e > 1.37 && eta_e < 1.52)) {
      eleeta++;
    } else continue;
    n_eta++;   

    if (tmpE->loose==1 && tmpE->cluster_pt > leadlooseCluPt)
      {
	nloose++;

//         scndmedium = leadloose;
//         scndmediumCluPt = leadlooseCluPt;
//         scndmediumindex = leadlooseindex;
//         scndmediumistight = leadlooseistight;
        if((tmpE->nSCTHits+tmpE->nPixHits)>=4) 
          {
            leadloose.SetPtEtaPhiE(el_pt,
                                    tmpE->track_eta,
                                    tmpE->track_phi,
                                    tmpE->cluster_E);
          }
        else
          {
            leadloose.SetPtEtaPhiE(el_pt,
                                    tmpE->cluster_eta,
                                    tmpE->cluster_phi,
                                    tmpE->cluster_E);
          }
        leadlooseCluPt = el_pt;
        leadlooseindex = i;          
        if(tmpE->tight)leadlooseistight = 1;
      }
    
      
    //    if( fabs(tmpE->) continue;    
    // egammaPID::medium
    if (m_debug) {
      ::Info("DEBUG ElecChanBase SelectElectrons", "This electrons medium: %i", int(tmpE->medium));
    }
    if (tmpE->mediumPP!=1) continue;
	    //   if (tmpE->tightPP!=1) continue;
    if (tmpE->tightPP==1){
    n_tight++;   
    }

     if( fabs(tmpE->trackz0pv)>1) continue;
     n_z0++;
     if( fabs(tmpE->trackd0pv/tmpE->tracksigd0pv)>10) continue;
     n_d0++;
    float caloiso;

    caloiso= GetPtNPVCorrectedIsolation(nVertex,
                                   tmpE->cluster_E,//float energy,
                                   tmpE->sampl2_eta,
                                   tmpE->etap,
                                   tmpE->cluster_eta ,
                                   30,
                                   flag_isMC,
                                   tmpE->etcone30,
                                   1,
				   CaloIsoCorrection::ELECTRON,CaloIsoCorrection::REL17);
    float caloiso2= GetPtEDCorrectedIsolation( tmpE->etcone40,//float energy,
 						tmpE->etcone40_EDcorr,
 						tmpE->cluster_E,
 						tmpE->sampl2_eta,
 						tmpE->etap,
 						tmpE->cluster_eta,
 						30,
 						flag_isMC,
 						tmpE->etcone30,
 						1,
 						CaloIsoCorrection::ELECTRON,CaloIsoCorrection::REL17);



//            if (caloiso/el_pt>0.14) continue;
    if(caloiso2<6000){
      n_caloiso++;
    }
//           if (tmpE->ptcone30/el_pt>0.13) continue;
//           n_trackiso++;
      nmedium++;
   //cout << "Electron: " << i << " " << el_pt << " " << eta_e << endl;




//  float GetPtEDCorrectedTopoIsolation(float ED_median,
//                                         float energy,
//                                         float etaS2,
//                                         float etaPointing,
//                                         float etaCluster,
//                                         float radius,
//                                         bool is_mc,
//                                         float topoEtCone_value,
//                                         bool isConversion,
//                                         ParticleType parttype,
//                                         Version ver);

    //isolation
   //  bool isMC(true);                                                    
//   EisoTool* m_eiso = new EisoTool(isMC);                              
//    if( !(m_eiso->Eiso98Etcone20(vxp_n, tmpE->cluster_E, tmpE->track_eta, tmpE->cluster_eta, 
//                           tmpE->etas2, tmpE->etap,tmpE->etcone20) == 1 && 
//    m_eiso->Eiso98Ptcone30(tmpE->cluster_E, tmpE->track_eta, tmpE->cluster_eta, tmpE->ptcone30) == 1))

//   {                        
//     delete m_eiso; 
//     continue;                                                                                                 
//   }    
                                                                  
//   delete m_eiso;                                                      
//   // delete m_eisoOther;  
     
     niso++;
  
/*
    FOR QCD TEMPLATES LATER
 
        if t.RunNumber <= 186755: # up to end of period J                                                                                                                 
           trigger = t.trig_EF_el_EF_e20_loose                                                                                                                           
        elif t.RunNumber <= 187815: # period K                                                                                                                            
            trigger = t.trig_EF_el_EF_e22_loose                                                                                                                           
        else: # everything from period L                                                                                                                                  
            trigger = t.trig_EF_el_EF_e22vh_loose1                                                                                                                        

  
  # do the old school loose cut here, before optimising the QCD selection properly                                                                              
            if (t.el_isEM[ele_i] & ROOT.egammaPID.ElectronLoose) == 0:                                                                                                    
                ele_pass_dict["ele_loose"] = True                                                                                                                         
            else:                                                                                                                                                         
                continue                                                                                                                                                  
                                                                                                                                                                          
                                                                                                                                                                          
                                                                                                                                                                          
            if t.el_mediumPP[ele_i]:                                                                                                                                      
                medium_count += 1                                                                                                                                         
                                                                                                                                                                          
            #Do the QCD template selection here                                                                                                                           
            template_mask_pass = (0                                                                                                                                       
                                  | 0x1 << ROOT.egammaPID.TrackPixel_Electron                                                                                             
                                  | 0x1 << ROOT.egammaPID.TrackSi_Electron                                                                                                
                                  | 0x1 << ROOT.egammaPID.TrackMatchEta_Electron                                                                                          
                                  | 0x1 << ROOT.egammaPID.TrackMatchEoverP_Electron)                                                                                      
                                                                                                                                                                          
                                                                                                                                                                          
            template_mask_fail = (ROOT.egammaPID.ElectronTight                                                                                                            
                                  & ~(ROOT.egammaPID.ElectronLoose)                                                                                                       
                                  & ~(0x1 << ROOT.egammaPID.ConversionMatch_Electron)                                                                                     
                                  & ~(0x1 << ROOT.egammaPID.ClusterMiddleEratio37_Electron)                                                                               
                                  & ~(0x1 << ROOT.egammaPID.ClusterMiddleWidth_Electron)                                                                                  
                                  & ~(0x1 << ROOT.egammaPID.TrackMatchPhi_Electron)                                                                                       
                                  & ~(0x1 << ROOT.egammaPID.TrackMatchEtaTight_Electron))                                                                                 
                                                                                                                                                                          
            if (t.el_isEM[ele_i] & template_mask_pass) == 0 and (t.el_isEM[ele_i] & template_mask_fail != 0):                                                             
                ele_pass_dict["qcd_template"] = True                                                                                                                      
            else:                                                                                                                                                         
                continue                                                                                    
*/  
  
  

    // leadmedium and secondmedium index
    if (tmpE->cluster_pt > leadmediumCluPt)
      {
        scndmedium = leadmedium;
        scndmediumCluPt = leadmediumCluPt;
        scndmediumindex = leadmediumindex;
        scndmediumistight = leadmediumistight;
	leadmedium.SetPtEtaPhiE(tmpE->cluster_pt,
				tmpE->correta,
				tmpE->corrphi,
				tmpE->cluster_E);
	cout<<" correta="<<tmpE->correta<<endl;
	cout<<" corrphi="<<tmpE->corrphi<<endl;
//         if((tmpE->nSCTHits+tmpE->nPixHits)>=4) 
//           {
//           }
//         else
//           {
//             leadmedium.SetPtEtaPhiE(el_pt,
//                                     tmpE->cluster_eta,
//                                     tmpE->cluster_phi,
//                                     tmpE->cluster_E);
//           }
        leadmediumCluPt = el_pt;
        leadmediumindex = i;          
        if(tmpE->tight)leadmediumistight = 1;
      }
    
    else if (tmpE->cluster_pt > scndmediumCluPt) 
      {
        scndmediumCluPt = el_pt;
        scndmediumindex = i;

	scndmedium.SetPtEtaPhiE(tmpE->cluster_pt,
				tmpE->correta,
				tmpE->corrphi,
				tmpE->cluster_E);


        if(tmpE->tight)scndmediumistight = 1;         
      }
      
    if (tmpE->tightPP!=1) { continue; }    
    ntight++;    
    
    if (el_pt/1000. <= 25.) { continue; }
    ntightpt25++;
     
    // leadtight and secondtight index
    if (tmpE->cluster_pt > leadtightCluPt){
        scndtight = leadtight;
        scndtightCluPt = leadtightCluPt;
        scndtightindex = leadtightindex;

	leadtight.SetPtEtaPhiE(tmpE->cluster_pt,
				tmpE->correta,
				tmpE->corrphi,
				tmpE->cluster_E);



        leadtightCluPt = el_pt;
        leadtightindex = i;           
    }
    else if (tmpE->cluster_pt > scndtightCluPt) {

	scndtight.SetPtEtaPhiE(tmpE->cluster_pt,
				tmpE->correta,
				tmpE->corrphi,
				tmpE->cluster_E);

      scndtightCluPt = el_pt;
      scndtightindex = i;
    }

    //    belept=(myElecs->at(leadtightindex))->Tran();

//     beleetas2=(myElecs->at(leadtightindex))->sampl2_eta;
//     beleetap=(myElecs->at(leadtightindex))->etap;

 
  }// END OF ELECTRON LOOP
  if(nloose>=1){
    if( ntight==0){
      leadtightindex=leadmediumindex;
    }
    if( nmedium==0){
      leadtightindex=leadlooseindex;
    }
    bele_loose=(myElecs->at(leadtightindex))->loose;
    bele_medium=(myElecs->at(leadtightindex))->mediumPP;
    bele_tight=(myElecs->at(leadtightindex))->tightPP;
    beleclpt=(myElecs->at(leadtightindex))->cluster_pt;
    beleclphi=(myElecs->at(leadtightindex))->corrphi;
    belecleta=(myElecs->at(leadtightindex))->correta;
    belecharge=(myElecs->at(leadtightindex))->charge;
    beletracketa=(myElecs->at(leadtightindex))->track_eta;

    unsigned int vertices = 0;

  

//        float el_Etcone30_ptNPV_corrected = CaloIsoCorrection::GetPtNPVCorrectedIsolation(nVertex, 
// 								                         E,
// 									                 dilepton->el_etas2->at(i), 
// 									                 dilepton->el_etap->at(i), 
// 									                 dilepton->el_cl_eta->at(i), 
// 									                 30., 				      
// 									                 !isDATA, 
// 									                 dilepton->el_Etcone30->at(i),
// 									                 kFALSE,
// 									                 CaloIsoCorrection::ELECTRON);

       bleadtightetcone30_npvcorr= GetPtEDCorrectedIsolation(nVertex,
 						(myElecs->at(leadtightindex))->cluster_E,
 						(myElecs->at(leadtightindex))->sampl2_eta,
 						(myElecs->at(leadtightindex))->etap,
 						(myElecs->at(leadtightindex))->cluster_eta,
 						30,
 						flag_isMC,
							     (myElecs->at(leadtightindex))->etcone30,
							     	                 kFALSE,
							     CaloIsoCorrection::ELECTRON);

     bleadtightetcone30_corr= GetPtEDCorrectedIsolation( (myElecs->at(leadtightindex))->etcone40,//float energy,
 						(myElecs->at(leadtightindex))->etcone40_EDcorr,
 						(myElecs->at(leadtightindex))->cluster_E,
 						(myElecs->at(leadtightindex))->sampl2_eta,
 						(myElecs->at(leadtightindex))->etap,
 						(myElecs->at(leadtightindex))->cluster_eta,
 						30,
 						flag_isMC,
 						(myElecs->at(leadtightindex))->etcone30,
 						1,
 						CaloIsoCorrection::ELECTRON,CaloIsoCorrection::REL17);
    beleptcone30=(myElecs->at(leadtightindex))->ptcone30;


    bleadtightz0pv=(myElecs->at(leadtightindex))->trackz0pv;
    bleadtightd0pv=(myElecs->at(leadtightindex))->trackd0pv;
    bleadtightsigd0pv=(myElecs->at(leadtightindex))->tracksigd0pv;
    beleetcone30_npvPT= GetPtNPVCorrectedIsolation(npv,
                                   (myElecs->at(leadtightindex))->cluster_E,//float energy,
                                   (myElecs->at(leadtightindex))->sampl2_eta,
                                   (myElecs->at(leadtightindex))->etap,
                                   (myElecs->at(leadtightindex))->cluster_eta ,
                                   30,
                                   flag_isMC,
                                   (myElecs->at(leadtightindex))->etcone30,
                                   1,
				   CaloIsoCorrection::ELECTRON,CaloIsoCorrection::REL17);


    beleetcone40_npvPT= GetPtNPVCorrectedIsolation(npv,
                                   (myElecs->at(leadtightindex))->cluster_E,//float energy,
                                   (myElecs->at(leadtightindex))->sampl2_eta,
                                   (myElecs->at(leadtightindex))->etap,
                                   (myElecs->at(leadtightindex))->cluster_eta ,
                                   40,
                                   flag_isMC,
                                   (myElecs->at(leadtightindex))->etcone40,
                                   1,
				   CaloIsoCorrection::ELECTRON,CaloIsoCorrection::REL17);
     beleetcone40=(myElecs->at(leadtightindex))->etcone40;
     beleetcone30=(myElecs->at(leadtightindex))->etcone30;
//     bleadtight_etcone40_EDcorr=(myElecs->at(leadtightindex))->etcone40_EDcorr;
  if(flag_isMC){
       beletype=(myElecs->at(leadtightindex))->truthInfo->type    ;
       beleorgin=(myElecs->at(leadtightindex))->truthInfo->origin;
       belehastbrem=(myElecs->at(leadtightindex))->truthInfo->hasHardBrem ;
       belepdg=(myElecs->at(leadtightindex))->truthInfo->truthtype;
       belempdg=(myElecs->at(leadtightindex))->truthInfo->mothertype;
       beletruthdr = DeltaR(btruthlepeta,btruthlepphi,belecleta,beleclphi);
     }

  }



  if(nmedium>=1){ 
    bleadmedium_clpt=(myElecs->at(leadmediumindex))->cluster_pt;
    bleadmedium_clphi=(myElecs->at(leadmediumindex))->cluster_phi;
    bleadmedium_cleta=(myElecs->at(leadmediumindex))->cluster_eta;
    bleadmedium_charge=(myElecs->at(leadmediumindex))->charge;
    bleadmediumetcone30_corr= GetPtEDCorrectedIsolation( (myElecs->at(leadmediumindex))->etcone40,//float energy,
						(myElecs->at(leadmediumindex))->etcone40_EDcorr,
						(myElecs->at(leadmediumindex))->cluster_E,
						(myElecs->at(leadmediumindex))->sampl2_eta,
						(myElecs->at(leadmediumindex))->etap,
						(myElecs->at(leadmediumindex))->cluster_eta,
						30,
						flag_isMC,
						(myElecs->at(leadmediumindex))->etcone30,
						1,
						CaloIsoCorrection::ELECTRON,CaloIsoCorrection::REL17);
    bleadmediumptcone30=(myElecs->at(leadmediumindex))->ptcone30;


    bleadmediumz0pv=(myElecs->at(leadmediumindex))->trackz0pv;
    bleadmediumd0pv=(myElecs->at(leadmediumindex))->trackd0pv;
    bleadmediumsigd0pv=(myElecs->at(leadmediumindex))->tracksigd0pv;
    bleadmediumetcone30_npvPT= GetPtNPVCorrectedIsolation(npv,
                                   (myElecs->at(leadmediumindex))->cluster_E,//float energy,
                                   (myElecs->at(leadmediumindex))->sampl2_eta,
                                   (myElecs->at(leadmediumindex))->etap,
                                   (myElecs->at(leadmediumindex))->cluster_eta ,
                                   30,
                                   flag_isMC,
                                   (myElecs->at(leadmediumindex))->etcone30,
                                   1,
				   CaloIsoCorrection::ELECTRON,CaloIsoCorrection::REL17);


    bleadmediumetcone40_npvPT= GetPtNPVCorrectedIsolation(npv,
                                   (myElecs->at(leadmediumindex))->cluster_E,//float energy,
                                   (myElecs->at(leadmediumindex))->sampl2_eta,
                                   (myElecs->at(leadmediumindex))->etap,
                                   (myElecs->at(leadmediumindex))->cluster_eta ,
                                   40,
                                   flag_isMC,
                                   (myElecs->at(leadmediumindex))->etcone40,
                                   1,
				   CaloIsoCorrection::ELECTRON,CaloIsoCorrection::REL17);
    bleadmediumetcone40=(myElecs->at(leadmediumindex))->etcone40;
    bleadmediumetcone30=(myElecs->at(leadmediumindex))->etcone30;
    bleadmedium_etcone40_EDcorr=(myElecs->at(leadmediumindex))->etcone40_EDcorr;
  }
  if(nmedium>=2){ 
    bscndmedium_clpt=(myElecs->at(scndmediumindex))->cluster_pt;
    bscndmedium_clphi=(myElecs->at(scndmediumindex))->cluster_phi;
    bscndmedium_cleta=(myElecs->at(scndmediumindex))->cluster_eta;
    bscndmedium_charge=(myElecs->at(scndmediumindex))->charge;
    bscndmediumptcone30=(myElecs->at(scndmediumindex))->ptcone30;
    bscndmediumz0pv=(myElecs->at(scndmediumindex))->trackz0pv;
    bscndmediumd0pv=(myElecs->at(scndmediumindex))->trackd0pv;
    bscndmediumsigd0pv=(myElecs->at(scndmediumindex))->tracksigd0pv;

    bscndmediumetcone30_npvPT= GetPtNPVCorrectedIsolation(npv,
                                   (myElecs->at(scndmediumindex))->cluster_E,//float energy,
                                   (myElecs->at(scndmediumindex))->sampl2_eta,
                                   (myElecs->at(scndmediumindex))->etap,
                                   (myElecs->at(scndmediumindex))->cluster_eta ,
                                   30,
                                   flag_isMC,
                                   (myElecs->at(scndmediumindex))->etcone30,
                                   1,
				   CaloIsoCorrection::ELECTRON,CaloIsoCorrection::REL17);

    bscndmediumetcone40_npvPT= GetPtNPVCorrectedIsolation(npv,
                                   (myElecs->at(scndmediumindex))->cluster_E,//float energy,
                                   (myElecs->at(scndmediumindex))->sampl2_eta,
                                   (myElecs->at(scndmediumindex))->etap,
                                   (myElecs->at(scndmediumindex))->cluster_eta ,
                                   40,
                                   flag_isMC,
                                   (myElecs->at(scndmediumindex))->etcone40,
                                   1,
				   CaloIsoCorrection::ELECTRON,CaloIsoCorrection::REL17);


    bscndmediumetcone30_corr= GetPtEDCorrectedIsolation( (myElecs->at(scndmediumindex))->etcone40,//float energy,
						(myElecs->at(scndmediumindex))->etcone40_EDcorr,
						(myElecs->at(scndmediumindex))->cluster_E,
						(myElecs->at(scndmediumindex))->sampl2_eta,
						(myElecs->at(scndmediumindex))->etap,
						(myElecs->at(scndmediumindex))->cluster_eta,
						30,
						flag_isMC,
						(myElecs->at(scndmediumindex))->etcone30,
						1,
						CaloIsoCorrection::ELECTRON,CaloIsoCorrection::REL17);


    bscndmediumetcone30=(myElecs->at(scndmediumindex))->etcone30;

    bscndmedium_etcone40_EDcorr=(myElecs->at(scndmediumindex))->etcone40_EDcorr;
  }





  return;
}  

//______________________________________________________________________ 
void ElecChanBase::SelectZ(vector<Electron*>* myElecs) {
// period -J: - 186755
// period K: from 186873 - 187815
// period L-: from 188902
//   if ((runno >= 188951) && !passTrigger(TRIG_EF_e22vh_medium1)) return;

   // Z+jets Trigger (von Katharina)

//    if(RunNumber <= 184169) {
//      if (!passTrigger(TRIG_EF_e20_medium))          istrigger=1;
//    }
//    if(RunNumber >=185353 && RunNumber <= 187815) {
//        if (!passTrigger(TRIG_EF_e22_medium))       istrigger=1;
//    }
//    if(RunNumber >=188951 && RunNumber <=191920) {
//        if (!passTrigger(TRIG_EF_e22vh_medium1))     istrigger=1;
//    }
   
//   fillh1f(cut_flow+hs_z,iztrigger, CutflowWeight);
   
//   if(!(eleauthor>1)) return;
//   fillh1f(cut_flow+hs_z,izeleauthor,CutflowWeight);

//  //  if(!(deltaZ > 1 && d0sig > 1)) return;
//  // fillh1f(cut_flow+hs_z,zcutflow,CutflowWeight);

//   if(!(eleeta>1)) return;
//   fillh1f(cut_flow+hs_z,izeleeta,CutflowWeight);

//   if(!(eleclus>1)) return;
//   fillh1f(cut_flow+hs_z,izeleclus,CutflowWeight);

//   if(!(eleotx>1)) return; 
//   fillh1f(cut_flow+hs_z,izeleotx,CutflowWeight);

  
  // Require two medium electrons and at least one tight and isolated electron
  //if(!(nmedium==2 && ntightpt25>=1)) return; //for cut flow
  if(!(nmedium>=2)) return;
  fillh1f(cut_flow+hs_z,iz2medele,CutflowWeight); 

  //cout << "Runnumber: " << RunNumber << " Eventnumber: " << EventNumber << endl;
  
  
  
   
  b_trig_EF_el_n->GetEntry(m_entry);
  b_trig_EF_el_eta->GetEntry(m_entry);
  b_trig_EF_el_phi->GetEntry(m_entry);

  int EFindex;

  Electron* le = myElecs->at(leadmediumindex); 
  Electron* se = myElecs->at(scndmediumindex);
  

  // Opposite sign
  oppsign = 0;
  if( ( myElecs->at(leadmediumindex)->charge ) * ( myElecs->at(scndmediumindex)->charge ) == -1) {
    oppsign = 1;
  }
  //  if (!(oppsign==1)) return; 
  
  fillh1f(cut_flow+hs_z,izoppsign,CutflowWeight);

  //  if(leadmedium.DeltaR(scndmedium) < 0.2) return;

  fillh1f(cut_flow+hs_z,izeesep,CutflowWeight);

  // Cut on invariant mass window
  TLorentzVector Z4vect(0.,0.,0.,0.);
  Z4vect = leadmedium + scndmedium;
  double Mee = Z4vect.M();  
  
  mee = Mee;
  bMee_leadclus=mee;
  //  if (!(Mee > 66000. && Mee < 116000.)) return;

  flag_selecZ=1;
  fillh1f(cut_flow+hs_z,izmee,CutflowWeight);
/*
  for(uint iJET = 0; iJET < myJETs->size(); iJET++) {
      JET* myJET = myJETs->at(iJET);
      if ((flag_isMC && (runno == 183003)) || ((runno >=180614) && (runno <185352))) {      
        if (myJET->isLArHoleVeto(1,30000.)) return;
      }  
  }
*/
  fillh1f(cut_flow+hs_z,izlarhole,CutflowWeight); 

 
  //calculate SFs of event
  
  std::pair<float,float> sf1,sf2,eps1,eps2;
  float SFtrigger=1., SFreco=1., SFid=1., SFevent=1.;
  if (flag_isMC) {

     //  double Et_e_lead, eta_e_lead; 
//       double Et_e_scnd, eta_e_scnd; 
//       if((myElecs->at(leadmediumindex)->nSCTHits+myElecs->at(leadmediumindex)->nPixHits)>=4) 
//      {
//        Et_e_lead=myElecs->at(leadmediumindex)->cluster_E/cosh(myElecs->at(leadmediumindex)->track_eta);
//        eta_e_lead=myElecs->at(leadmediumindex)->track_eta;
//      }
//       else
//      {
//        Et_e_lead=myElecs->at(leadmediumindex)->cluster_E/cosh(myElecs->at(leadmediumindex)->cluster_eta);
//        eta_e_lead=myElecs->at(leadmediumindex)->cluster_eta;
//      }
//       if((myElecs->at(scndmediumindex)->nSCTHits+myElecs->at(scndmediumindex)->nPixHits)>=4) 
//      {
//        Et_e_scnd=myElecs->at(scndmediumindex)->cluster_E/cosh(myElecs->at(scndmediumindex)->track_eta);
//        eta_e_scnd=myElecs->at(scndmediumindex)->track_eta;
//      }
//       else
//      {
//        Et_e_scnd=myElecs->at(scndmediumindex)->cluster_E/cosh(myElecs->at(scndmediumindex)->cluster_eta);
//        eta_e_scnd=myElecs->at(scndmediumindex)->cluster_eta;
//      }

      double Et_e_lead, eta_e_lead; 
      double Et_e_scnd, eta_e_scnd; 
      
      Et_e_lead=le->cluster_E/cosh(le->cluster_eta);
      eta_e_lead=le->cluster_eta;
      
      Et_e_scnd=se->cluster_E/cosh(se->cluster_eta);
      eta_e_scnd=se->cluster_eta;

      if ((runno <= 186755) ) {
	sf1=m_egammaScalingFactors.scaleFactor( (le)->cluster_eta, leadmedium.Pt(), 8, 0, 6, true);
	sf2=m_egammaScalingFactors.scaleFactor( (se)->cluster_eta, scndmedium.Pt(), 8, 0, 6, true);
      }
      if (runno >= 186873  &&         runno <= 187815) {
	sf1=m_egammaScalingFactors.scaleFactor( (le)->cluster_eta, leadmedium.Pt(), 12, 0, 6, true);
	sf2=m_egammaScalingFactors.scaleFactor( (se)->cluster_eta, scndmedium.Pt(), 12, 0, 6, true);
      }
      if (runno >  187815) {
	sf1=m_egammaScalingFactors.scaleFactor( (le)->cluster_eta, leadmedium.Pt(), 16, 0, 6, true);
	sf2=m_egammaScalingFactors.scaleFactor( (se)->cluster_eta, scndmedium.Pt(), 16, 0, 6, true);
      }
       bleadmedium_triggerSF=sf1.first;
       bleadmedium_triggerSF_error=sf1.second;
       bscndmedium_triggerSF=sf2.first;
       bscndmedium_triggerSF_error=sf2.second;
 

     //EF_e22_medium, dielectron trigger not supported
//       sf1=m_egammaScalingFactors.scaleFactor( (le)->cluster_eta, leadmedium.Pt(), 12, 0, 5, true);
//       eps1=m_egammaScalingFactors.scaleFactor( (le)->cluster_eta, leadmedium.Pt(), 13, 0, 5, true);
//       sf2=m_egammaScalingFactors.scaleFactor( (se)->cluster_eta, scndmedium.Pt(), 12, 0, 5, true);
//       eps2=m_egammaScalingFactors.scaleFactor( (se)->cluster_eta, scndmedium.Pt(), 13, 0, 5, true);
//       SFtrigger=(1-(1-eps1.first*sf1.first)*(1-eps2.first*sf2.first))/(1-(1-eps1.first)*(1-eps2.first));
//       bleadmedium_effSF=sf1.first;
       sf1=m_egammaScalingFactors.scaleFactor( (le)->cluster_eta, Et_e_lead, 4, 0, 6, true);
       sf2=m_egammaScalingFactors.scaleFactor( (se)->cluster_eta, Et_e_scnd, 4, 0, 6, true);
       SFreco=sf1.first*sf2.first;

       bleadmedium_recoSF=sf1.first;
       bleadmedium_recoSF_error=sf1.second;
       bscndmedium_recoSF=sf2.first;
       bscndmedium_recoSF_error=sf2.second;

       sf1=m_egammaScalingFactors.scaleFactor( (le)->cluster_eta, Et_e_lead, 6, 0, 6, true);
       sf2=m_egammaScalingFactors.scaleFactor( (se)->cluster_eta, Et_e_scnd, 6, 0, 6, true);
       SFid=sf1.first*sf2.first;
       bleadmedium_effSF=sf1.first;
       bleadmedium_effSF_error=sf1.second;
       bscndmedium_effSF=sf2.first;
       bscndmedium_effSF_error=sf2.second;
//       sf1=m_egammaScalingFactors.scaleFactor( eta_e_lead, Et_e_lead, 4, 0, 6, true);
//       sf2=m_egammaScalingFactors.scaleFactor( eta_e_scnd, Et_e_scnd, 4, 0, 6, true);
//       SFreco=sf1.first*sf2.first;

//       sf1=m_egammaScalingFactors.scaleFactor( eta_e_lead, Et_e_lead, 6, 0, 6, true);
//       sf2=m_egammaScalingFactors.scaleFactor( eta_e_scnd, Et_e_scnd, 6, 0, 6, true);
//       SFid=sf1.first*sf2.first;


      SFevent=/*SFtrigger**/SFreco*SFid;
      //      McEventWeight*=SFevent;
    }

  return;
}

//______________________________________________________________________ 
void ElecChanBase::SelectW(vector<Electron*>* myElecs,Met * myMet) {

  // Single lepton triggers

//  cout <<  "runno  " << runno << endl;

//   if ((runno <= 186755) && !pfdfdfassTrigger(TRIG_EF_e20_medium)) return;   
//   if ((runno >= 186873  && 
//        runno <= 187815) && !passTrigger(TRIG_EF_e22_medium)) return;
//   if ((runno >  187815) && !passTrigger(TRIG_EF_e22vh_medium1)) return;
// period -J: - 186755
// period K: from 186873 - 187815
// period L-: from 188902
//   if ((runno >= 188951) && !passTrigger(TRIG_EF_e22vh_medium1)) return;

  fillh1f(cut_flow+hs_w,iwtrigger, CutflowWeight); 
  
  met = myMet->Et();
  MET_LocHadTopo_et = myMet->Et();
  MET_LocHadTopo_etx = myMet->Px();
  MET_LocHadTopo_ety = myMet->Py();

  if (myElecs->size() == 0) return;

    if( ntight==0){
      leadtightindex=leadmediumindex;
    }
    if( nmedium==0){
      leadtightindex=leadlooseindex;
    }

   std::string trigger_chain = "";
   if ((runno <= 186755)  )                    {trigger_chain = "EF_e20_medium";}
   if ((runno >= 186873  && runno <= 187815) ) { trigger_chain = "EF_e22_medium";}
   if ((runno >  187815)) {trigger_chain = "EF_e22vh_medium1";}

  Electron* ele = myElecs->at(leadtightindex);
  //  bool isLeptonMatched = eMatch_tool->match(ele->track_eta, ele->track_phi, trigger_chain);
  //    cout<< " isLeptonMatched="<<isLeptonMatched<<endl;

  float MT = sqrt(2*ele->cluster_E/cosh(ele->correta) *myMet->Et()
       *(1.- cos((ele)->corrphi- myMet->Phi()))); 
 
  mt  = MT;         

  
  //MET cleaning
  
  //  if(!isMETGood(ele)) return; 
  //  fillh1f(cut_flow+hs_w, iwmetclean,CutflowWeight);

  // LAr Hole
  //double mu = averageIntPerXing;
  int NPV=0; 
  for(int i=0; i<vxp_n; i++) { if (vxp_trk_n->at(i) > 2) NPV++; }

//   for(uint iJET = 0; iJET < myJETs->size(); iJET++) 
//   {
//       JET* myJET = myJETs->at(iJET);
// /*      
//       //OffsetEtaJES
//       double Eraw    = myJET->emscale_E;
//       double eta_det = myJET->emscale_eta;
//       double eta     = myJET->EtaOrigin;
//       double phi     = myJET->PhiOrigin;
//       double m       = myJET->MOrigin;
      
//       //TLorentzVector jet = myJES->ApplyOffsetEtaJES(Eraw,eta_det,eta,phi,m,mu,NPV);   
//       //myJET->pt=(double) jet.Pt();
// */  

//       if ((flag_isMC && (runno == 183003)) || ((runno >=180614) && (runno <185352))) {
// //      if (myJET->isLArHoleVeto(1,30000.)) return;
//         if (myJET->isLArHoleVeto(1,20000.)) return;
//       }  

//   }

//   fillh1f(cut_flow+hs_w,iwlarhole,CutflowWeight); 

//   //MissingET

//   if(myMet->Et() <= 25000.) { return; } 
//   fillh1f(cut_flow+hs_w,iwmet,CutflowWeight); 
  
//   //transverse mass

//   if(MT <= 40000.) { return; }  
//   fillh1f(cut_flow+hs_w,iwmt,CutflowWeight);
  
  flag_selecW=1;
  float mEt_et=MET_LocHadTopo_et;
  float mEt_ex=MET_LocHadTopo_etx;
  float mEt_ey=MET_LocHadTopo_ety;//myMet->Ey();
  float totpt=ele->cluster_pt+mEt_et;
  float totpx=ele->cluster_pt*cos(ele->corrphi)+mEt_ex;
  float totpy=ele->cluster_pt*sin(ele->corrphi)+mEt_ey;
  btranW=sqrt(totpt*totpt-totpx*totpx-totpy*totpy);
  bWpt=sqrt(totpx*totpx+totpy*totpy);


  if (myElecs->at(leadtightindex)->charge == -1) {  
    fillh1f(cut_flow+hs_w,iwminus,CutflowWeight);
    flag_selecWm=1;
  }
    
  if (myElecs->at(leadtightindex)->charge == 1) {  
    fillh1f(cut_flow+hs_w,iwplus,CutflowWeight);
    flag_selecWp=1;
  }  
     
    // store UEtree variables for filling later
//     elec_charge  = ele->charge;
//     elec_trk_pt  = ele->track_pt;
//     elec_trk_eta = ele->track_eta;
//     elec_trk_phi = ele->track_phi;
//     elec_cl_E    = ele->cluster_E;
//     elec_cl_pt   = ele->cluster_pt;
//     elec_cl_eta  = ele->cluster_eta;
//     elec_cl_phi  = ele->cluster_phi;
//     met_phi      = myMet->Phi(); //HS: TODO check if this is correct now myMet->Phi();
    //met_phi      = mrf_phi; //HS: TODO check if this is correct now myMet->Phi();
    
    return;       
}

//______________________________________________________________________ 
bool ElecChanBase::SelectJets(vector<Electron*>* myEls, vector<JET*>* myJETs,Met * myM,int hs) {
     //jets are already presorted from high to low Pt
  cout<<" ElecChanBase::SelectJets"<<endl;
  counted_jets.clear();
//   counted_rap_jets.clear();
  overlap=999;
  dr=999.;
  drLow=999.;

  overlap2=999;
  dr2=999.;
  drLow2=999.; 
  float dr3;
  jetsexc=0;
  //for OffsetEtaJES
  double mu = averageIntPerXing;  
  int NPV=0; 
  for(unsigned i=0; i<vxp_trk_n->size(); i++) {
    if (vxp_trk_n->at(i) > 2) NPV++;
  }
  

  for (unsigned iJET = 0; iJET < myJETs->size(); iJET++) {
  
      JET* myJET = myJETs->at(iJET);
      //      cout<<" iJET="<<iJET<<endl;


      //OffsetEtaJES
//       double Eraw    = myJET->emscale_E;
//       double eta_det = myJET->emscale_eta;
//       double eta     = myJET->EtaOrigin;
//       double phi     = myJET->PhiOrigin;
//       double m       = myJET->MOrigin;
      
//      TLorentzVector jet = myJES->ApplyOffsetEtaJES(Eraw,eta_det,eta,phi,m,mu,NPV);
//      myJET->pt=(double) jet.Pt();
  
      //isolation requirement (different for W/Z events)
      if(nloose>=1) {
        dr = DeltaR(myJET->eta,myJET->phi,leadloose.Eta(),leadloose.Phi());
      }  
      if(ntight>=1) {
        dr = DeltaR(myJET->eta,myJET->phi,leadtight.Eta(),leadtight.Phi());
      }  
     
      if(nmedium>=2) {
        dr  = DeltaR(myJET->eta,myJET->phi,leadmedium.Eta(),leadmedium.Phi());
        dr2 = DeltaR(myJET->eta,myJET->phi,scndmedium.Eta(),scndmedium.Phi());
      }
      if(bphoclpt>0){
        dr3 = DeltaR(myJET->eta,myJET->phi,bphocleta,bphoclphi);
      }

      if(dr < 0.3 || dr2 < 0.3|| dr3 < 0.3) continue;

      if(myJET->E < 0.) continue;
      
      if(fabs(myJET->Rapidity()) >= 4.4) continue; 
      
      if(myJET->isLooserBad()) continue;

      //      cout<<" runno="<<runno<<endl;
      if ((flag_isMC && (runno == 183003)) || ((runno >=180614) && (runno <185352))) {
	if (myJET->isLArHoleVeto(1,20000.)) {
	  bvetolarhole20=1;
	  //	  cout<<" bvetolarhole30="<<bvetolarhole30<<endl;
	}
	if (myJET->isLArHoleVeto(1,25000.)) {
	  bvetolarhole25=1;
	  //	  cout<<" bvetolarhole30="<<bvetolarhole30<<endl;
	}
	if (myJET->isLArHoleVeto(1,30000.)) {
	  bvetolarhole30=1;
	  //	  cout<<" bvetolarhole30="<<bvetolarhole30<<endl;
	}

      }

//      for(uint iJET = 0; iJET < myJETs->size(); iJET++) {
//          JET* myJET = myJETs->at(iJET);

      if(myJET->pt>=25000.) {njet25loose++;}
      if(myJET->pt>=30000.) {njet30loose++;}
      //      if(myJET->pt<=35000.) {njet35loose++;}
      if(myJET->pt>=40000.) {njet40loose++;}
      if(myJET->pt>=50000.) {njet50loose++;}
      if(myJET->pt>=60000.) {njet60loose++;}


      if (fabs(myJET->Rapidity()) < 2.4) { 
        if(fabs(myJET->jvtxf) <= 0.75 ) continue;
      }
      

      if(myJET->pt<=25000.) continue;
      njet25++;
      if(myJET->pt<=30000.) continue;
      jetsexc++;
      njet30++;
      if(myJET->pt<=35000.) continue;
      njet35++;      
      if(myJET->pt<=40000.) continue;
      njet40++;      
      if(myJET->pt<=50000.) continue;
      njet50++;      
      if(myJET->pt<=60000.) continue;
      njet60++;      

      counted_jets.push_back(iJET);



//       if(myJET->pt<=30000.) continue;
//       jetsexc++;
      
//       counted_jets.push_back(iJET);


	  if(njet30loose==1){
	    jet1eta=myJET->eta;
	    jet1phi=myJET->phi;
	    jet1pt=myJET->pt;
	    jet1E=myJET->E;
	  }
	  if(njet30loose==2){
	    jet2eta=myJET->eta;
	    jet2phi=myJET->phi;
	    jet2pt=myJET->pt;
	    jet2E=myJET->E;

	  }
	  if(njet30loose==3){
	    jet3eta=myJET->eta;
	    jet3phi=myJET->phi;
	    jet3pt=myJET->pt;
	    jet3E=myJET->E;

	  }


  }//end of loop over jets
  

 
  //W/Z + JETS Selection
  
  if (counted_jets.size() > 0) {
    if (flag_selecW) fillh1f(cut_flow+hs_w,iwjets,CutflowWeight); 
    if (flag_selecZ) fillh1f(cut_flow+hs_z,izjets,CutflowWeight);    
  }
  
  int jetsexc_bound = jetsexc;
  if (jetsexc_bound > 11) jetsexc_bound = 11;

  if(flag_selecW) {    
    fillh1f(cut_flow+hs_w,iw0jets + jetsexc_bound,CutflowWeight);   
    //cout<<hs_w<<endl<<leadtight<<endl<<myM<<myJETs<<McEventWeight;
    fillEventVars(hs_w ,  leadtight,  leadtight, myM, myJETs, McEventWeight, counted_jets);

  }

  if(flag_selecZ) {     
    fillh1f(cut_flow+hs_z,iz0jets + jetsexc_bound,CutflowWeight);    
    fillEventVars(hs_z , leadmedium, scndmedium, myM, myJETs, McEventWeight,counted_jets); 

  }
  

  return true;
}
/*
  if(flag_selecWp==1) { fillEventVars(hs_inc_wp,  leadtight,  leadtight, myM, myJETs, McEventWeight); }
  if(flag_selecWm==1) { fillEventVars(hs_inc_wm,  leadtight,  leadtight, myM, myJETs, McEventWeight); }
*/ 

//_________________________________________________________________________________________

//______________________________________________________________________
void ElecChanBase::Terminate()
{
  m_outputFile->cd();
  
 // print and write ntuples
  if(m_systype==0) {
    cand_tree->Write();

    cand_tree->SetScanField(0);
  }

  cout<<" n_all="<<n_all<<endl;
  cout<<" n_pt="<<n_pt<<endl;
  cout<<" n_author="<<n_author<<endl;
  cout<<" n_oq="<<n_oq<<endl;
   cout<<" n_eta="<<n_eta<<endl;
   cout<<" n_tight="<<n_tight<<endl;
   cout<<" n_z0="<<n_z0<<endl;
   cout<<" n_d0="<<n_d0<<endl;
   cout<<" n_calo="<<n_caloiso<<endl;
   cout<<" n_track="<<n_trackiso<<endl;

  cout<<" nph_all="<<nph_all<<endl;
  cout<<" nph_pt="<<nph_pt<<endl;
  cout<<" nph_otx="<<nph_otx<<endl;
  cout<<" nph_eta="<<nph_eta<<endl;
  cout<<" nph_tight="<<nph_tight<<endl;
  cout<<" nph_iso="<<nph_iso<<endl;

  Float_t* wc = ((TH1F*)(harray[m_systype][cut_flow+hs_w]))->GetArray(); 
  Float_t* zc = ((TH1F*)(harray[m_systype][cut_flow+hs_z]))->GetArray();
  
  cout << "In ElecChanAna::Terminate()" << endl << endl << endl; 
  cout << "                      Cut flow for W candidates:            Cut flow for Z candidates: " << endl;
  cout << "                      --------------------------            -------------------------- " << endl;
  cout << "                                                                                       " << endl;
  cout << "Events Processed:     " << wc[iwevt+1]        << "                                     " << zc[izevt+1]        <<   endl;
  cout << "Truth Phasespace:     " << wc[iwtruth+1]      << "                                     " << zc[iztruth+1]        <<   endl;
  cout << "GRL:                  " << wc[iwgrl+1]        << "                                     " << zc[izgrl+1]        <<   endl;
  cout << "lar error             " << wc[iwlarerror+1]   << "                                     " << zc[izlarerror+1]   <<   endl; 
  cout << "primary vertex        " << wc[iwvtx+1]        << "                                     " << zc[izvtx+1]        <<   endl;
  cout << "Not Muon Trigger      " << wc[iwmuonveto+1]   << "                                     " << zc[izmuonveto+1]   <<   endl;
  cout << "trigger               " << wc[iwtrigger+1]    << "                                     " << zc[iztrigger+1]   <<   endl;
  cout << "ele author            " << wc[iweleauthor+1]  << "                                     " << zc[izeleauthor+1] <<   endl; 
  cout << "ele clust eta         " << wc[iweleeta+1]     << "                                     " << zc[izeleeta+1]    <<   endl; 
  cout << "ele clust ET 20       " << wc[iweleclus20+1]  << "                                     " << zc[izeleclus+1]   <<   endl; 
  cout << "otx fid               " << wc[iweleotx+1]     << "                                     " << zc[izeleotx+1]    <<   endl; 
  cout << "ele medium++          " << wc[iwelemedium+1]  << "                                     " << zc[izelemedium+1] <<   endl; 
  cout << "ele tight++           " << wc[iweletight+1]   << "                                     " << "---"    <<   endl; 
  cout << "ele clust ET 25       " << wc[iweleclus25+1]  << "                                     " << "---"    <<   endl; 
  cout << "trigger match         " << wc[iwtrigmatch+1]  << "                                     " << zc[iztrigmatch+1] <<   endl; 
  cout << "Z veto                " << wc[iwvetoz+1]      << "                                     " << "---"    <<   endl;   
  cout << "n_e == 2              " << " --- "            << "                                     " << zc[iz2medele+1]   << endl; 
  cout << "opp. charge           " << " --- "            << "                                     " << zc[izoppsign+1]   << endl; 
  cout << "dR(ee) > 0.2          " << " --- "            << "                                     " << zc[izeesep+1]     << endl; 
  cout << "66 < Mee < 116        " << " --- "            << "                                     " << zc[izmee+1]       << endl; 
  cout << "MET clean             " << wc[iwmetclean+1]   << "                                     " << "---"             << endl; 
  cout << "lar hole veto         " << wc[iwlarhole +1]   << "                                     " << zc[izlarhole +1]  << endl;
  cout << "MET 25                " << wc[iwmet+1]        << "                                     " << "---"             << endl;
  cout << "MT  40                " << wc[iwmt+1]         << "                                     " << "---"             << endl;
  cout << "W+                    " << wc[iwplus+1]       << "                                     " << "---"     << endl;
  cout << "W-                    " << wc[iwminus+1]      << "                                     " << "---"     << endl;
  cout << "V+jets                " << wc[iwjets+1]       << "                                     " << zc[izjets+ 1]   << endl;
  cout << "0 jets            " <<setw(5)<< wc[iw0jets+ 1]     << "                              " <<  zc[iz0jets+ 1]  <<   endl;
  cout << "1 jets            " <<setw(5)<< wc[iw0jets+ 2]     << "                              " <<  zc[iz0jets+ 2]  <<   endl;
  cout << "2 jets            " <<setw(5)<< wc[iw0jets+ 3]     << "                              " <<  zc[iz0jets+ 3]  <<   endl;
  cout << "3 jets            " <<setw(5)<< wc[iw0jets+ 4]     << "                              " <<  zc[iz0jets+ 4]  <<   endl;
  cout << "4 jets            " <<setw(5)<< wc[iw0jets+ 5]     << "                              " <<  zc[iz0jets+ 5]  <<   endl;
  cout << "5 jets:           " <<setw(5)<< wc[iw0jets+ 6]     << "                              " <<  zc[iz0jets+ 6]  <<   endl;
  cout << "6 jets            " <<setw(5)<< wc[iw0jets+ 7]     << "                              " <<  zc[iz0jets+ 7]  <<   endl;
  cout << "7 jets            " <<setw(5)<< wc[iw0jets+ 8]     << "                              " <<  zc[iz0jets+ 8]  <<   endl;
  cout << "8 jets            " <<setw(5)<< wc[iw0jets+ 9]     << "                              " <<  zc[iz0jets+ 9]  <<   endl;
  cout << "9 jets            " <<setw(5)<< wc[iw0jets+10]     << "                              " <<  zc[iz0jets+10]  <<   endl;
  cout << "10 jets           " <<setw(5)<< wc[iw0jets+11]     << "                              " <<  zc[iz0jets+11]  <<   endl; 
  cout << "11 jets           " <<setw(5)<< wc[iw0jets+12]     << "                              " <<  zc[iz0jets+12]  <<   endl;
  cout << endl;
  cout << "VBF njet>=2       " <<setw(5)<< wc[iwvbfnjet+1]    << "                              " <<  zc[izvbfnjet+1] << endl;
  cout << "VBF drjj          " <<setw(5)<< wc[iwvbfdrjj+1]    << "                              " <<  zc[izvbfdrjj+1] << endl;
  cout << "VBF mjj           " <<setw(5)<< wc[iwvbfmjj +1]    << "                              " <<  zc[izvbfmjj +1] << endl;

  // MAL: prevent doubling of tree writing into ntuple
  if (cand_tree && m_systype==0) delete cand_tree;  

};


//----------------------------------------------------------------------------
void ElecChanBase::printElectron(Electron *el) {
}

void ElecChanBase::ManipulateElectron(vector<Electron*>* theElectrons){
  // empty body of routine to manipulate electron for systematics 
}
void ElecChanBase::ManipulateIsEM(){
  // empty body of routine to manipulate electron for systematics 
}
void ElecChanBase::ManipulateMET(Met * theMET){
  // empty body of routine to manipulate electron for systematics 
}
void ElecChanBase::ManipulateJETs(vector<JET*>* myJets, Met * myMet){
}
bool ElecChanBase::SkipEventTruth(){
  return 1;
}

void ElecChanBase::Rebin(TH1* harray[][400000]){

  int nptjetBins = 10;
  int neleetBins = 10;
  int neleetaBins = 18;
  
  Double_t ptjetBins[nptjetBins+1];
  Double_t eleetBins[nptjetBins+1];
  Double_t eleetaBins[neleetaBins+1];

  ptjetBins[0] = 15; // 25000
  ptjetBins[1] = 25;
  ptjetBins[2] = 35;
  ptjetBins[3] = 45;
  ptjetBins[4] = 55;
  ptjetBins[5] = 65;
  ptjetBins[6] = 75;
  ptjetBins[7] = 85;
  ptjetBins[8] = 95;
  ptjetBins[9] = 105;
  ptjetBins[10] = 115;

  eleetBins[0] = 20; // 25000
  eleetBins[1] = 25;
  eleetBins[2] = 30;
  eleetBins[3] = 35;
  eleetBins[4] = 40;
  eleetBins[5] = 45;
  eleetBins[6] = 50;
  eleetBins[7] = 60;
  eleetBins[8] = 80;
  eleetBins[9] = 100;
  eleetBins[10] = 500;

  eleetaBins[0] = -2.47;
  eleetaBins[1] = -2.37;
  eleetaBins[2] = -2.01;
  eleetaBins[3] = -1.81;
  eleetaBins[4] = -1.52;
  eleetaBins[5] = -1.37;
  eleetaBins[6] = -1.15;
  eleetaBins[7] = -0.8;
  eleetaBins[8] = -0.6;
  eleetaBins[9] = 0.0;
  eleetaBins[10] = 0.6;
  eleetaBins[11] = 0.8;
  eleetaBins[12] = 1.15;
  eleetaBins[13] = 1.37;
  eleetaBins[14] = 1.52;
  eleetaBins[15] = 1.81;
  eleetaBins[16] = 2.01;
  eleetaBins[17] = 2.37;
  eleetaBins[18] = 2.47;

  
  int npiBins=20;
  Double_t piBins[npiBins+1];

  for (int ibin=0; ibin<npiBins+1; ibin++)
    piBins[ibin]= -3.14159265+((2*3.14159265)/20.)*ibin;

  int sys=0;
  for (int h=0; h<400000; h++) {
    if (harray[sys][h]) {  
      TString hname(harray[sys][h]->GetName());
      TString htitle(harray[sys][h]->GetTitle());
      if (hname.BeginsWith("electron_eta")) {
        delete harray[sys][h];
        harray[sys][h] = new TH1F(hname,htitle, neleetaBins,eleetaBins);
        harray[sys][h]->Sumw2();
      }            
      if (hname.BeginsWith("electron_map")) {
        delete harray[sys][h];
        harray[sys][h] = new TH2F(hname,htitle,neleetaBins,eleetaBins,npiBins,piBins);
        harray[sys][h]->Sumw2();
      }                 
      if (hname.BeginsWith("electron_effmap")) {
        delete harray[sys][h];
        harray[sys][h] = new TH3F(hname,htitle, nptjetBins,ptjetBins,neleetBins,eleetBins,neleetaBins,eleetaBins);
        harray[sys][h]->Sumw2();
      }
    }     
  }
}

//____________________________________________________________________________
void ElecChanBase::fillEventVars(
  int postfix, 
  TLorentzVector electron1, 
  TLorentzVector electron2, 
  Met* m, 
  vector<JET*>*  js, 
  float weight, 
  vector<unsigned int> jet_selection )  {
  
  //fill various things 
  //if W event, electron1 and electron2 are identical

  bool fill_truth = flag_isMC && (flag_selecW_truth || flag_selecZ_truth );
 
 //for vbf tag1 and tag2 show the tagged jets.
 //for std vbf 

  double ht=0.;

  for(unsigned int i=0;i<jet_selection.size();i++) { 
    ht+=js->at(jet_selection[i])->Et()/1000.; 
  }
  
  double DeltaRejet1=0.;
  if(jet_selection.size()>0) {
    DeltaRejet1=DeltaR(js->at(jet_selection[0])->eta,js->at(jet_selection[0])->phi,
                       electron1.Eta(),electron1.Phi());
  }
  
  double mj1j2=0.;
  double deltaRj1j2=0.;
  double deltaRapj1j2=0.;
  double deltaPhij1j2=0;
  
  if(jet_selection.size()>=2) {
      //work out variables of dijet system
      TLorentzVector jet1,jet2, dijet, dielectron;
      jet1.SetPtEtaPhiE(js->at(jet_selection[0])->pt, 
                        js->at(jet_selection[0])->eta,  
                        js->at(jet_selection[0])->phi,  
                        js->at(jet_selection[0])->E);
      jet2.SetPtEtaPhiE(js->at(jet_selection[1])->pt, 
                        js->at(jet_selection[1])->eta,  
                        js->at(jet_selection[1])->phi,  
                        js->at(jet_selection[1])->E);
      dijet=jet1+jet2;
      dielectron = electron1 + electron2;
      mj1j2=dijet.M()/1000.;
      deltaRj1j2=DeltaR(js->at(jet_selection[0])->eta,js->at(jet_selection[0])->phi,
                        js->at(jet_selection[1])->eta,js->at(jet_selection[1])->phi);
      deltaRapj1j2=fabs( jet1.Rapidity() - jet2.Rapidity());   
      deltaPhij1j2=DeltaPhi(js->at(jet_selection[0])->phi,js->at(jet_selection[1])->phi);
      
  }
  
  double boson_pT;
  if(flag_selecW) {
      boson_pT=sqrt(pow(electron1.Px() + m->Px(),2)+
                    pow(electron1.Py() + m->Py(),2))/1000.;
  }
  if(flag_selecZ) {
      boson_pT=sqrt(pow(electron1.Px() + electron2.Px(),2)+
                    pow(electron1.Py() + electron2.Py(),2))/1000.;
  }
 
  double transmass=sqrt(2*electron1.E()/cosh(electron1.Eta()) *m->Et()
                        *(1.- cos(electron1.Phi()- m->Phi())));
    
  TLorentzVector Z4vect;
  double Mee = 0;
  if(flag_selecZ) {
      Z4vect = electron1 + electron2;
      Mee = Z4vect.M();
  }
  
  int njet = jet_selection.size();

  fillh1f(number_of_jets        +postfix,njet,weight);
  fillh1f(navgintperbx          +postfix,averageIntPerXing,weight);
  fillh1f(runnumber             +postfix,RunNumber,weight);

  fillh2f(missing_et            +postfix,njet,m->Et()/1000.,weight);
  fillh2f(transverse_mass       +postfix,njet,transmass/1000.,weight);
  fillh2f(invariant_mass        +postfix,njet,Mee/1000.,weight);
  fillh2f(boson_pt              +postfix,njet,boson_pT,weight);
  fillh2f(leading_electron_eta  +postfix,njet,electron1.Eta(),weight);  
  fillh2f(leading_electron_pt   +postfix,njet,electron1.Pt()/1000.,weight);
  fillh2f(hht                      +postfix,njet,ht,weight);

  for (unsigned i=0; i < njet; i++) {
    fillh2f(leading_jet_pt      +postfix,njet,js->at(jet_selection[i])->pt/1000.,weight);
    fillh2f(leading_jet_rap     +postfix,njet,js->at(jet_selection[i])->Rapidity(),weight);
  }


  if ( fill_truth ) {
    fillh2f(T_number_of_jets +postfix,truthJets.size(),njet,weight);
  }

  // >= 1 jet  
  if(jet_selection.size() < 1) return;
  
  fillh2f(DeltaR_electron_jet1  +postfix,njet, DeltaRejet1,weight);

  fillh2f(leading_jet_pt        +postfix,njet,js->at(jet_selection[0])->pt/1000.,weight);
  fillh2f(leading_jet_eta       +postfix,njet,js->at(jet_selection[0])->eta,weight);     
  fillh2f(leading_jet_rap       +postfix,njet,js->at(jet_selection[0])->Rapidity(),weight);
  fillh2f(leading_jet_phi       +postfix,njet,js->at(jet_selection[0])->phi,weight);

  if ( fill_truth ) {      
    if ( truthJets.size() > 0 ) {
      fillh2f(T_leading_jet_pt +postfix, truthJets[0]->Pt()/1000., js->at(jet_selection[0])->pt/1000.,weight);
    }
  }  

  fillh2f(leading_jet_pt        +postfix,njet,js->at(jet_selection[0])->pt/1000.,weight);
  fillh2f(leading_jet_eta       +postfix,njet,js->at(jet_selection[0])->eta,weight);            
  fillh2f(leading_jet_rap       +postfix,njet,js->at(jet_selection[0])->Rapidity(),weight);            
  fillh2f(leading_jet_phi       +postfix,njet,js->at(jet_selection[0])->phi,weight);      

  // >= 2 jets
  if (jet_selection.size() < 2) return;
  
  fillh2f(DeltaR_jet1_jet2      +postfix,njet,deltaRj1j2,weight);
  fillh2f(DeltaPhi_jet1_jet2    +postfix,njet,deltaPhij1j2,weight);     
  fillh2f(DeltaRap_jet1_jet2    +postfix,njet,deltaRapj1j2,weight);
  fillh2f(hmj1j2                +postfix,njet,mj1j2,weight);   

 
  fillh2f(jet2_pt        +postfix,njet,js->at(jet_selection[1])->pt/1000.,weight);
  fillh2f(jet2_rap       +postfix,njet,js->at(jet_selection[1])->Rapidity(),weight);

  
  // higher multiplicities
  
  if (jet_selection.size() < 3) return; 

  //tag1 and tag2 already pT ordered.
  
  fillh2f(jet3_pt        +postfix,njet,js->at(jet_selection[2])->pt/1000.,weight);
  fillh2f(jet3_rap       +postfix,njet,js->at(jet_selection[2])->Rapidity(),weight);            
  


  if (jet_selection.size() < 4) return;
  fillh2f(jet4_pt        +postfix,njet,js->at(jet_selection[3])->pt/1000.,weight);
  fillh2f(jet4_rap       +postfix,njet,js->at(jet_selection[3])->Rapidity(),weight);

  if (jet_selection.size() < 5) return;
  fillh2f(jet5_pt        +postfix,njet,js->at(jet_selection[4])->pt/1000.,weight);
  fillh2f(jet5_rap       +postfix,njet,js->at(jet_selection[4])->Rapidity(),weight);

  if (jet_selection.size() < 6) return;
  fillh2f(jet6_pt        +postfix,njet,js->at(jet_selection[5])->pt/1000.,weight);
  fillh2f(jet6_rap       +postfix,njet,js->at(jet_selection[5])->Rapidity(),weight);            

  if (jet_selection.size() < 7) return;
  fillh2f(jet7_pt        +postfix,njet,js->at(jet_selection[6])->pt/1000.,weight);
  fillh2f(jet7_rap       +postfix,njet,js->at(jet_selection[6])->Rapidity(),weight);            

  if (jet_selection.size() < 8) return;
  fillh2f(jet8_pt        +postfix,njet,js->at(jet_selection[7])->pt/1000.,weight);
  fillh2f(jet8_rap       +postfix,njet,js->at(jet_selection[7])->Rapidity(),weight);            

  if (jet_selection.size() < 9) return;
  fillh2f(jet9_pt        +postfix,njet,js->at(jet_selection[8])->pt/1000.,weight);
  fillh2f(jet9_rap       +postfix,njet,js->at(jet_selection[8])->Rapidity(),weight);            
}

//____________________________________________________________________________
void ElecChanBase::fillUEtree(int kind = 0) {

  /* Write out UEtree
     As there are different values needed for Z and W events,
     'kind' defines which to write out (1 == Zee, 2 == W).
  */
 
  if(kind != 1 && kind != 2) return;
  
  /* Fill Metadata */
  uetree->VB_run          = RunNumber;
  uetree->VB_event        = EventNumber;

  /* shared properties */
  uetree->VB_njet = jetsexc;

  uetree->VB_lep1_charge   = myElectrons->at(leadmediumindex)->charge;
  uetree->VB_lep1_trk_pt   = myElectrons->at(leadmediumindex)->track_pt/1.e3; // GeV
  uetree->VB_lep1_trk_eta  = myElectrons->at(leadmediumindex)->track_eta;
  uetree->VB_lep1_trk_phi  = myElectrons->at(leadmediumindex)->track_phi;
  uetree->VB_lep1_cl_E     = myElectrons->at(leadmediumindex)->cluster_E/1.e3; // GeV
  uetree->VB_lep1_cl_pt    = myElectrons->at(leadmediumindex)->cluster_pt/1.e3; // GeV
  uetree->VB_lep1_cl_eta   = myElectrons->at(leadmediumindex)->cluster_eta;
  uetree->VB_lep1_cl_phi   = myElectrons->at(leadmediumindex)->cluster_phi;
  uetree->VB_lep1_isElec   = true; // electron

  /* Zee only */
  if(kind == 1){
    uetree->VB_lep2_charge   = myElectrons->at(scndmediumindex)->charge;
    uetree->VB_lep2_trk_pt   = myElectrons->at(scndmediumindex)->track_pt/1.e3; // GeV
    uetree->VB_lep2_trk_eta  = myElectrons->at(scndmediumindex)->track_eta;
    uetree->VB_lep2_trk_phi  = myElectrons->at(scndmediumindex)->track_phi;
    uetree->VB_lep2_cl_E     = myElectrons->at(scndmediumindex)->cluster_E/1.e3; // GeV
    uetree->VB_lep2_cl_pt    = myElectrons->at(scndmediumindex)->cluster_pt/1.e3; // GeV
    uetree->VB_lep2_cl_eta   = myElectrons->at(scndmediumindex)->cluster_eta;
    uetree->VB_lep2_cl_phi   = myElectrons->at(scndmediumindex)->cluster_phi;
    uetree->VB_lep2_isElec   = true; // electron
    uetree->VB_mee           = (leadmedium + scndmedium).M()/1.e3; // GeV
  }
  else{
    uetree->VB_lep2_charge   = 0;
    uetree->VB_lep2_trk_pt   = 0; // GeV
    uetree->VB_lep2_trk_eta  = 0;
    uetree->VB_lep2_trk_phi  = 0;
    uetree->VB_lep2_cl_E     = 0; // GeV
    uetree->VB_lep2_cl_pt    = 0; // GeV
    uetree->VB_lep2_cl_eta   = 0;
    uetree->VB_lep2_cl_phi   = 0;
    uetree->VB_lep2_isElec   = true; // electron
    uetree->VB_mee           = 0; // no scnd electron, so no inv electron mass
  }

  /* Wenu only */
  if(kind == 2){
    uetree->VB_mt           = mt/1.e3; // GeV
    uetree->VB_met_et       = met/1.e3; // GeV
    uetree->VB_met_phi      = met_phi;
/* GB: n/a in rel17 ?
    // HS: build another MET object to get the HR stuff
    
    Met* hr_Met  = getMet(hr_MET);
    double myPhi = hr_Met->Phi();
    if (myPhi > TMath::Pi()) myPhi -= 2.*TMath::Pi();
    
    uetree->VB_hr_met_et   = hr_Met->Et()/1.e3; // GeV
    uetree->VB_hr_met_phi  = myPhi;
*/    
  }
  else{
    uetree->VB_mt = 0;
    uetree->VB_met_et = 0;
    uetree->VB_met_phi = 0;
    uetree->VB_hr_met_et = 0;
    uetree->VB_hr_met_phi = 0;
  }
    
 /* Fill corrections, weights et al */
  /*
  uetree->VB_weight_gen        = McEventWeightGenerator;
  uetree->VB_weight_pileup     = pileupWeight;
  uetree->VB_corr_trigger_lep1 = m_egammaScalingFactors.scaleFactorTrigger(uetree->VB_lep1_trk_eta).first;
  // Set to one in case of Wenu for convenience
  uetree->VB_corr_trigger_lep2 = kind == 1 ? m_egammaScalingFactors.scaleFactorTrigger(uetree->VB_lep2_trk_eta).first : 1;
  uetree->VB_corr_reco_lep1    = m_egammaScalingFactors.scaleFactorRecoTrkQual(uetree->VB_lep1_cl_eta, \
                                        uetree->VB_lep1_cl_E/TMath::CosH(uetree->VB_lep1_trk_eta)*1.e3).first; 
  uetree->VB_corr_reco_lep2    = kind == 1 ? m_egammaScalingFactors.scaleFactorRecoTrkQual(uetree->VB_lep2_cl_eta, \
                                        uetree->VB_lep2_cl_E/TMath::CosH(uetree->VB_lep2_trk_eta)*1.e3).first : 1;
  // ScaleFactors for electron reco ID "Prob. a tight/medium electron reconstructed as tight/medium" 
  uetree->VB_corr_id_lep1      = myElectrons->at(leadmediumindex)->tight ?
    m_egammaScalingFactors.scaleFactorTightETcorrected( uetree->VB_lep1_cl_eta, \
        uetree->VB_lep1_cl_E/TMath::CosH(uetree->VB_lep1_trk_eta)*1.e3, \
        4).first :
    m_egammaScalingFactors.scaleFactorMediumETcorrected(uetree->VB_lep1_cl_eta, \
        uetree->VB_lep1_cl_E/TMath::CosH(uetree->VB_lep1_trk_eta)*1.e3, \
        4).first;

  if (kind==1) { // Zee ...
    uetree->VB_corr_id_lep2      = myElectrons->at(scndmediumindex)->tight ?
      m_egammaScalingFactors.scaleFactorTightETcorrected( uetree->VB_lep2_cl_eta, \
          uetree->VB_lep2_cl_E/TMath::CosH(uetree->VB_lep2_trk_eta)*1.e3, 4).first :
      m_egammaScalingFactors.scaleFactorMediumETcorrected(uetree->VB_lep2_cl_eta, \
          uetree->VB_lep2_cl_E/TMath::CosH(uetree->VB_lep2_trk_eta)*1.e3, 4).first ;
          }
  else uetree->VB_corr_id_lep2 =1;
  
  // Multiply all weights for total event weight 
  uetree->VB_evt_weight        =   \
      uetree->VB_weight_gen        \
    * uetree->VB_weight_pileup     \
    * uetree->VB_corr_reco_lep1    \
    * uetree->VB_corr_reco_lep1    \
    * uetree->VB_corr_id_lep1      \
    * uetree->VB_corr_id_lep2;   

  if (kind == 1){
    uetree->VB_evt_weight *= 1 - (1 - uetree->VB_corr_trigger_lep1) \
      * (1 - uetree->VB_corr_trigger_lep2);
  }
  if (kind == 2){
    uetree->VB_evt_weight *= uetree->VB_corr_trigger_lep1;
  }

  */

  uetree->fillTree(m_entry+m_chain_offset);
}

//____________________________________________________________________________
void ElecChanBase::SelectTruthJets(vector<JET*>* mytruthJETs) {
  nantikt4truthjet=0;
  nantikt4truthjetpass=0;
  for(uint iJET = 0; iJET <mytruthJETs->size(); iJET++) {  
    JET* mytruthJET = mytruthJETs->at(iJET);
    truthjet_pt[nantikt4truthjet]=mytruthJET->pt;
    truthjet_eta[nantikt4truthjet]=mytruthJET->eta;
    truthjet_phi[nantikt4truthjet]=mytruthJET->phi;
    truthjet_m[nantikt4truthjet]=mytruthJET->m;
    TLorentzVector v_antikt4truthjet;
    v_antikt4truthjet.SetPtEtaPhiM(mytruthJET->pt,mytruthJET->eta,mytruthJET->phi,mytruthJET->m);
    truthjet_rapidity[nantikt4truthjet]=v_antikt4truthjet.Rapidity();
    nantikt4truthjet++;
    float dr1=999,dr2=999,dr3=999;
//     if(flagep || flagem){
//       dr1=DeltaR(v_antikt4truthjet.Rapidity(),mytruthJET->phi,btruthlepeta,btruthlepphi);
//     }
    if(flagep){
      dr1=DeltaR(v_antikt4truthjet.Rapidity(),mytruthJET->phi,btruthepeta,btruthepphi);
    }
    if(flagem){
      dr2=DeltaR(v_antikt4truthjet.Rapidity(),mytruthJET->phi,btruthemeta,btruthemphi);
    }
    if(flag_gam){
      dr3=DeltaR(v_antikt4truthjet.Rapidity(),mytruthJET->phi,btruthphoeta,btruthphophi);
    }

    if(dr3<0.4){
      btruthphoiso_antikt4=(mytruthJET->pt-btruthphopt)/btruthphopt;
    }

    if(mytruthJET->pt<30000) continue;
    if(fabs(mytruthJET->eta)>4.5) continue;

    if(dr1<0.3 || dr2<0.3||dr3<0.3 ) continue; 
    //    if(dr1<0.3  ) continue; 

    nantikt4truthjetpass++;
    if(nantikt4truthjetpass==1) {btruthjet1pt=mytruthJET->pt;btruthjet1eta=mytruthJET->eta;}
    if(nantikt4truthjetpass==3) {btruthjet3pt=mytruthJET->pt;btruthjet3eta=mytruthJET->eta;}
    if(nantikt4truthjetpass==2) {btruthjet2pt=mytruthJET->pt;btruthjet2eta=mytruthJET->eta;}
    if(nantikt4truthjetpass==4) {btruthjet4pt=mytruthJET->pt;btruthjet4eta=mytruthJET->eta;}
    if(nantikt4truthjetpass==5) {btruthjet5pt=mytruthJET->pt;btruthjet5eta=mytruthJET->eta;}
  }

}

void ElecChanBase::SelectTruth3(vector<Truth*>* myTruthParticles) {

  flagZ_masscut_acc=0,flagZ_elecut_fid=0;
  flagep_fid=0,flagem_fid=0;	   
  flagep_fidgap=0,flagem_fidgap=0;	   
bflagW_elecut=0,   flagW_elecut=0,flagW_elecut_fid=0,flagW_elecut_fidgap=0,flagW_metcut_acc=0,flagW_mtcut_acc=0,flagW_mtcut_acc_dress=0;
    flag_gam_fid=0;
    flag_gam_fidgap=0;
    flag_tjet=0;
    flag_tjetscnd=0;	  
    flagem=0,flagep=0;

  int Ntruthp=myTruthParticles->size();
  //  int MCtype=2;
  for(int i=0;i<Ntruthp;i++){ 
//       if( (fabs(myTruthParticles->at(i)->pdgId) == 12 )&& ( (fabs(myTruthParticles->at(i)->status)==2 && MCtype==1) || (    (fabs(myTruthParticles->at(i)->status)==123 || fabs(myTruthParticles->at(i)->status)==124) && MCtype==2) ) ){
// 	flag_nu=1;
// 	v_true_nu.SetPtEtaPhiE(myTruthParticles->at(i)->Pt(), 
// 				myTruthParticles->at(i)->Eta(),  
// 				myTruthParticles->at(i)->Phi(),  
// 				myTruthParticles->at(i)->E());


//       }

            if( (fabs(myTruthParticles->at(i)->pdgId) == 22 )&& ( (fabs(myTruthParticles->at(i)->status)==3 && MCtype==1) || (    (fabs(myTruthParticles->at(i)->status)==143 || fabs(myTruthParticles->at(i)->status)==144) && MCtype==3) ) ){

	flag_gam=1;
	v_truegam.SetPtEtaPhiE(myTruthParticles->at(i)->Pt(), 
				myTruthParticles->at(i)->Eta(),  
				myTruthParticles->at(i)->Phi(),  
				myTruthParticles->at(i)->E());
      }

	//            if ( ((myTruthParticles->at(i)->pdgId) == 11 ) && ( (fabs(myTruthParticles->at(i)->status)==123 || fabs(myTruthParticles->at(i)->status)==124) ) ){
      if( ((myTruthParticles->at(i)->pdgId) == 11 )&& ( (fabs(myTruthParticles->at(i)->status)==3 && MCtype==1) || (    (fabs(myTruthParticles->at(i)->status)==123 || fabs(myTruthParticles->at(i)->status)==124) && MCtype==3) ) ){

	//	      if ( ((myTruthParticles->at(i)->pdgId) == 11 ) && ( (b_select_sherpa_truthlep && MCtype==1) || (b_select_alpgen_truthlep && MCtype==2) )  ){	   
	flagep=1;
	v_trueelep.SetPtEtaPhiE(myTruthParticles->at(i)->Pt(), 
				myTruthParticles->at(i)->Eta(),  
				myTruthParticles->at(i)->Phi(),  
				myTruthParticles->at(i)->E());
      }

      if( ((myTruthParticles->at(i)->pdgId) == -11 )&& ( (fabs(myTruthParticles->at(i)->status)==3 && MCtype==1) || (    (fabs(myTruthParticles->at(i)->status)==123 || fabs(myTruthParticles->at(i)->status)==124) && MCtype==3) ) ){
	//      if( (myTruthParticles->at(i)->pdgId) == -11 && ( (b_select_sherpa_truthlep && MCtype==1) || (b_select_alpgen_truthlep && MCtype==2) ) ){
	flagem=1;
	v_trueelem.SetPtEtaPhiE(myTruthParticles->at(i)->Pt(), 
				myTruthParticles->at(i)->Eta(),  
				myTruthParticles->at(i)->Phi(),  
				myTruthParticles->at(i)->E());
      }

      bool b_select_sherpa_truthjet= ((fabs(myTruthParticles->at(i)->pdgId) < 7 ) ||fabs(myTruthParticles->at(i)->pdgId)==21) && ( (fabs(myTruthParticles->at(i)->status)==3 || fabs(myTruthParticles->at(i)->status)==3  ) ) && myTruthParticles->at(i)->Pt()>0;
     bool b_select_alpgen_truthjet= ((fabs(myTruthParticles->at(i)->pdgId) < 7 ) ||fabs(myTruthParticles->at(i)->pdgId)==21) && ( (fabs(myTruthParticles->at(i)->status)==123 || fabs(myTruthParticles->at(i)->status)==124  ) ) && myTruthParticles->at(i)->Pt()>0&& myTruthParticles->at(i)->barcode<10;
      if( (MCtype==1 && b_select_sherpa_truthjet) || (MCtype==3 && b_select_alpgen_truthjet)){
	flag_tjet=1;
	if(myTruthParticles->at(i)->Pt()>maxjetpt){
	v_true_jet.SetPtEtaPhiE(myTruthParticles->at(i)->Pt(), 
				myTruthParticles->at(i)->Eta(),  
				myTruthParticles->at(i)->Phi(),  
				myTruthParticles->at(i)->E());

	btruthjettype=myTruthParticles->at(i)->pdgId;
	btruthscndjettype=myTruthParticles->at(i)->pdgId;
	maxjetpt=myTruthParticles->at(i)->Pt();
	}
	
	if (myTruthParticles->at(i)->Pt()>scndjetpt && myTruthParticles->at(i)->Pt()<maxjetpt){
	  flag_tjetscnd=1;	  
	  scndjetpt=myTruthParticles->at(i)->Pt();
	  btruthscndjettype=myTruthParticles->at(i)->pdgId;
	  v_true_scnd_jet.SetPtEtaPhiE(myTruthParticles->at(i)->Pt(), 
				       myTruthParticles->at(i)->Eta(),  
				       myTruthParticles->at(i)->Phi(),  
				       myTruthParticles->at(i)->E());
	}
      }



      if( (MCtype==1 && b_select_sherpa_truthjet) || (MCtype==3 && b_select_alpgen_truthjet)){
	ntruthjet++;
	if(ntruthjet==1){
	  btruthjet1pt=myTruthParticles->at(i)->Pt();
	  btruthjet1type=myTruthParticles->at(i)->pdgId;
	}
	if(ntruthjet==2){
	  btruthjet2pt=myTruthParticles->at(i)->Pt();
	  btruthjet2type=myTruthParticles->at(i)->pdgId;
	}
	if(ntruthjet==3){
	  btruthjet3pt=myTruthParticles->at(i)->Pt();
	  btruthjet3type=myTruthParticles->at(i)->pdgId;
	}
	if(ntruthjet==4){
	  btruthjet4pt=myTruthParticles->at(i)->Pt();
	  btruthjet4type=myTruthParticles->at(i)->pdgId;
	}
	if(ntruthjet==5){
	  btruthjet5pt=myTruthParticles->at(i)->Pt();
	  btruthjet5type=myTruthParticles->at(i)->pdgId;
	}
	if(myTruthParticles->at(i)->Pt()>30000 && fabs(myTruthParticles->at(i)->Eta())<4.4){
	  ntruthjetpass++;
	}
	if(myTruthParticles->at(i)->Pt()>25000 && fabs(myTruthParticles->at(i)->Eta())<4.4){
	  ntruthjetpassww++;
	}

      }



    }


  if(flag_nu){
    btruthnupt=v_true_nu.Pt();
    btruthnueta=v_true_nu.Eta();
    btruthnuphi=v_true_nu.Phi();

  }

  if(flag_gam &&flagep){
    trueinveg=(v_truegam+v_trueelep).M();
    trueinvenug=(v_truegam+v_true_nu+v_trueelep).M();
    trueinvenu=(v_true_nu+v_trueelep).M();

    truedeltaReg=DeltaR(v_truegam.Eta(),v_truegam.Phi(),v_trueelep.Eta(),v_trueelep.Phi());
    truedeltaRepg=DeltaR(v_truegam.Eta(),v_truegam.Phi(),v_trueelep.Eta(),v_trueelep.Phi());

    
  }
  if(flagem&&flagep){
    btruthZmass=(v_trueelem+v_trueelep).M();
  }
  if(flagem&&flagep && flag_gam){
    btruthZgmass=(v_trueelem+v_trueelep+v_truegam).M();
  }

  if(flagep){
     btruthleppt=v_trueelep.Pt();
     btruthlepeta=v_trueelep.Eta();
     btruthlepphi=v_trueelep.Phi();

    btrutheppt=v_trueelep.Pt();
    btruthepeta=v_trueelep.Eta();
    btruthepphi=v_trueelep.Phi();

  }
  if(flagem){
     btruthleppt=v_trueelem.Pt();
     btruthlepeta=v_trueelem.Eta();
     btruthlepphi=v_trueelem.Phi();

    btruthempt=v_trueelem.Pt();
    btruthemeta=v_trueelem.Eta();
    btruthemphi=v_trueelem.Phi();
  }

  if(flag_gam &&flagem){
    trueinveg=(v_truegam+v_trueelem).M();
    trueinvenug=(v_truegam+v_true_nu+v_trueelem).M();
    trueinvenu=(v_true_nu+v_trueelem).M();
    truedeltaRemg=DeltaR(v_truegam.Eta(),v_truegam.Phi(),v_trueelem.Eta(),v_trueelem.Phi());
    truedeltaReg=DeltaR(v_truegam.Eta(),v_truegam.Phi(),v_trueelem.Eta(),v_trueelem.Phi());
  }

  if(flag_gam)
    {
    btruthphopt=v_truegam.Pt();
    btruthphoeta=v_truegam.Eta();
    btruthphophi=v_truegam.Phi();
    }

   if(flag_gam &&flag_tjet){
     bdeltaRphjet=v_true_jet.DeltaR(v_truegam);
     bdeltaphiphjet=v_true_jet.DeltaPhi(v_truegam);
   }
  if(flag_tjet){
    btruthjetpt=v_true_jet.Pt();
    btruthjeteta=v_true_jet.Eta();
    btruthjetphi=v_true_jet.Phi();
  }
   if(flag_tjetscnd){
     btruthscndjetpt=v_true_scnd_jet.Pt();
     btruthscndjetphi=v_true_scnd_jet.Phi();
     btruthscndjeteta=v_true_scnd_jet.Eta();
   }

}
bool ElecChanBase::SelectTruth2() {
}


bool ElecChanBase::SelectTruth() {

  if (!flag_isMC) return false;

  // Unselected Objects

  vector<Truth*> truElec  = getTruthByPdgId(11,1);
  vector<Truth*> truNeutr = getTruthByPdgId(12,1);
  vector<Truth*> truPhoto = getTruthByPdgId(22,1);
  vector<JET*>*  truJets  = getJets(AntiKt4Truth);

  truthLeadEl = 0;
  truthScndEl = 0;
  truthNu = 0;
  truthJets.clear();
  
  for (unsigned i = 0; i < truElec.size();i++) {
    if (truthLeadEl == 0 ) {
      truthLeadEl = truElec[i];
    } else if ( truElec[i]->Pt() > truthLeadEl->Pt() ) {
      truthLeadEl = truElec[i]; 
    }
  }
  if (!truthLeadEl) return false;
  //cout << "Truth Leading Electron: ";  truthLeadEl->Print();

  int npholead = 0;
  TLorentzVector ptruthLeadEl = *truthLeadEl;
  for (unsigned int ipho = 0; ipho <  truPhoto.size(); ipho++) {

    TLorentzVector * mypho = (TLorentzVector *)truPhoto.at(ipho);

    float dphi1 = truthLeadEl->Phi() - mypho->Phi();
    float deta1 = truthLeadEl->Eta() - mypho->Eta();
    float dr1   = sqrt(pow(dphi1,2) + pow(deta1,2));
    
    if (dr1 < 0.1) { 

      ptruthLeadEl += *mypho;
      npholead++;
    } 
  }
   
  for (unsigned i = 0; i < truElec.size();i++) {

    if (truElec[i] == truthLeadEl) continue;

    if (truthScndEl == 0) { truthScndEl = truElec[i]; }

    if (truElec[i]->Pt() > truthScndEl->Pt()) {
        truthScndEl = truElec[i];
    }
  }
  //if (truthScndEl) { cout << "Truth Second Electron: ";  truthScndEl->Print(); }  

  // dress electrons
    
  if (truthScndEl) {
  
    TLorentzVector ptruthScndEl = *truthScndEl;  
    int nphoscnd = 0;
    
    for (unsigned int ipho = 0; ipho <  truPhoto.size(); ipho++) {

      TLorentzVector * mypho = (TLorentzVector *)truPhoto.at(ipho);


        float dphi2 = truthScndEl->Phi() - mypho->Phi();
        float deta2 = truthScndEl->Eta() - mypho->Eta();
        float dr2   = sqrt(pow(dphi2,2) + pow(deta2,2));

        if (dr2 < 0.1) {
          ptruthScndEl += *mypho;
          nphoscnd++;
        }
      }
  }

  //TLorentzVector ptruthLeadEl = *truthLeadEl;
  //TLorentzVector ptruthLeadEl = *truthLeadEl;


/*cout << "Truth Leading Electron dressed ("<< npholead <<" photons): ";  truthLeadEl->Print();
  if (truthScndEl) {
    cout << "Truth Second Electron dressed ("<< nphoscnd <<" photons): ";  truthScndEl->Print();
  }
*/
   
  for (uint i =0; i < truNeutr.size();i++) {
    if (truthNu == 0) { truthNu = truNeutr[i]; }
    else if (truNeutr[i]->Pt() > truthNu->Pt()) { truthNu = truNeutr[i]; }
  }
  //if (truthNu) { cout << "Truth Neutrino: ";  truthNu->Print(); }
 
  flag_selecW_truth = 0;
  flag_selecZ_truth = 0;
  
  // select truth W

  if ( truthLeadEl && truthNu) {
    
    TLorentzVector truthW  = *truthLeadEl + *truthNu;    
/*    
    cout << "select truth W: " << truthLeadEl->Pt() << " " 
         << fabs(truthLeadEl->Eta()) << " "
         << truthNu->Pt() << " "
         << truthW.Mt() << endl;
*/
    if ( (truthLeadEl->Pt() > 25000.) && fabs(truthLeadEl->Eta() < 2.4)
      && (truthNu->Pt() > 25000.) && (truthW.Mt() > 40000.) ) {
      
      flag_selecW_truth = true;      
      //cout << "Truth W: "; truthW.Print();
    }  
  }
  
  // select truth Z

  // TODO: dR(e,e) cut

  if ( truthLeadEl && truthScndEl) {  
    
    TLorentzVector truthZ  = *truthLeadEl + *truthScndEl;
/*    
    cout << truthLeadEl->Pt() << " " << fabs(truthLeadEl->Eta()) << " "
         << truthScndEl->Pt() << " " << fabs(truthScndEl->Eta()) << " "
         << truthZ.M() << endl;
*/
    if (    (truthLeadEl->Pt() > 20000.) && fabs(truthLeadEl->Eta() < 2.4)
         && (truthScndEl->Pt() > 20000.) && fabs(truthScndEl->Eta() < 2.4)
         &&  truthZ.M() > 66000. && truthZ.M() < 116000. ) {

      flag_selecZ_truth = true;
      //cout << "Truth Z: "; truthZ.Print();
    }
  }

  if ( !flag_selecW_truth && !flag_selecZ_truth ) return false;
  
  // Select Truth Jets 
  for (uint i = 0; i < truJets->size(); i++) {
     JET * ajet = truJets->at(i);
     if (ajet->Pt() > 30000. && ajet->Rapidity() < 4.4) {
     
	truthJets.push_back(ajet);       
        //cout << "Truth Jet " << i << ": ";  ajet->Print();  
     }   
   }
  
  return true;
}




