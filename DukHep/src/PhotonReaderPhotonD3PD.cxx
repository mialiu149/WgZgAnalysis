////bin/dukhep_create_reader.py PhotonMacro.dat -n PhotonReaderPhotonD3PD
#include "include/PhotonReaderPhotonD3PD.h"
PhotonReaderPhotonD3PD::PhotonReaderPhotonD3PD(SCycleBaseNTuple * ownr): owner(ownr),
m_Photonn(0),
m_PhotonE(0),
m_PhotonEt(0),
m_Photonpt(0),
m_Photonm(0),
m_Photoneta(0),
m_Photonphi(0),
m_Photonauthor(0),
m_PhotonisRecovered(0),
m_PhotonisEM(0),
m_PhotonOQ(0),
m_PhotonOQRecalc(0),
m_PhotonconvFlag(0),
m_PhotonisConv(0),
m_PhotonnConv(0),
m_PhotonnSingleTrackConv(0),
m_PhotonnDoubleTrackConv(0),
m_Photontype(0),
m_Photontruth_deltaRRecPhoton(0),
m_Photontruth_E(0),
m_Photontruth_pt(0),
m_Photontruth_eta(0),
m_Photontruth_phi(0),
m_Photontruth_type(0),
m_Photontruth_status(0),
m_Photontruth_barcode(0),
m_Photontruth_mothertype(0),
m_Photontruth_motherbarcode(0),
m_Photontruth_index(0),
m_Photonloose(0),
m_Photontight(0),
m_PhotontightIso(0),
m_PhotongoodOQ(0),
m_PhotonEthad(0),
m_PhotonEthad1(0),
m_PhotonE033(0),
m_Photonf1(0),
m_Photonf1core(0),
m_PhotonEmins1(0),
m_Photonfside(0),
m_PhotonEmax2(0),
m_Photonws3(0),
m_Photonwstot(0),
m_Photonemaxs1(0),
m_PhotondeltaEs(0),
m_PhotonE233(0),
m_PhotonE237(0),
m_PhotonE277(0),
m_Photonweta2(0),
m_Photonf3(0),
m_PhotonEtcone20(0),
m_Photonreta(0),
m_Photonrphi(0),
m_Photoncl_E(0),
m_Photoncl_pt(0),
m_Photoncl_eta(0),
m_Photoncl_phi(0),
m_PhotonEs0(0),
m_Photonetas0(0),
m_Photonphis0(0),
m_PhotonEs1(0),
m_Photonetas1(0),
m_Photonphis1(0),
m_PhotonEs2(0),
m_Photonetas2(0),
m_Photonphis2(0),
m_PhotonEs3(0),
m_Photonetas3(0),
m_Photonphis3(0),
m_Photontime(0),
m_Photontruth_isBrem(0),
m_Photontruth_isFromHardProc(0)
{}
void PhotonReaderPhotonD3PD::ConnectVariables(std::string treename){
  owner->ConnectVariable( treename.c_str(), VarName("ph_n").c_str(), m_Photonn );
  owner->ConnectVariable( treename.c_str(), VarName("ph_E").c_str(), m_PhotonE );
  owner->ConnectVariable( treename.c_str(), VarName("ph_Et").c_str(), m_PhotonEt );
  owner->ConnectVariable( treename.c_str(), VarName("ph_pt").c_str(), m_Photonpt );
  owner->ConnectVariable( treename.c_str(), VarName("ph_m").c_str(), m_Photonm );
  owner->ConnectVariable( treename.c_str(), VarName("ph_eta").c_str(), m_Photoneta );
  owner->ConnectVariable( treename.c_str(), VarName("ph_phi").c_str(), m_Photonphi );
  owner->ConnectVariable( treename.c_str(), VarName("ph_author").c_str(), m_Photonauthor );
  owner->ConnectVariable( treename.c_str(), VarName("ph_isRecovered").c_str(), m_PhotonisRecovered );
  owner->ConnectVariable( treename.c_str(), VarName("ph_isEM").c_str(), m_PhotonisEM );
  owner->ConnectVariable( treename.c_str(), VarName("ph_OQ").c_str(), m_PhotonOQ );
  owner->ConnectVariable( treename.c_str(), VarName("ph_OQRecalc").c_str(), m_PhotonOQRecalc );
  owner->ConnectVariable( treename.c_str(), VarName("ph_convFlag").c_str(), m_PhotonconvFlag );
  owner->ConnectVariable( treename.c_str(), VarName("ph_isConv").c_str(), m_PhotonisConv );
  owner->ConnectVariable( treename.c_str(), VarName("ph_nConv").c_str(), m_PhotonnConv );
  owner->ConnectVariable( treename.c_str(), VarName("ph_nSingleTrackConv").c_str(), m_PhotonnSingleTrackConv );
  owner->ConnectVariable( treename.c_str(), VarName("ph_nDoubleTrackConv").c_str(), m_PhotonnDoubleTrackConv );
  owner->ConnectVariable( treename.c_str(), VarName("ph_type").c_str(), m_Photontype );
  owner->ConnectVariable( treename.c_str(), VarName("ph_truth_deltaRRecPhoton").c_str(), m_Photontruth_deltaRRecPhoton );
  owner->ConnectVariable( treename.c_str(), VarName("ph_truth_E").c_str(), m_Photontruth_E );
  owner->ConnectVariable( treename.c_str(), VarName("ph_truth_pt").c_str(), m_Photontruth_pt );
  owner->ConnectVariable( treename.c_str(), VarName("ph_truth_eta").c_str(), m_Photontruth_eta );
  owner->ConnectVariable( treename.c_str(), VarName("ph_truth_phi").c_str(), m_Photontruth_phi );
  owner->ConnectVariable( treename.c_str(), VarName("ph_truth_type").c_str(), m_Photontruth_type );
  owner->ConnectVariable( treename.c_str(), VarName("ph_truth_status").c_str(), m_Photontruth_status );
  owner->ConnectVariable( treename.c_str(), VarName("ph_truth_barcode").c_str(), m_Photontruth_barcode );
  owner->ConnectVariable( treename.c_str(), VarName("ph_truth_mothertype").c_str(), m_Photontruth_mothertype );
  owner->ConnectVariable( treename.c_str(), VarName("ph_truth_motherbarcode").c_str(), m_Photontruth_motherbarcode );
  owner->ConnectVariable( treename.c_str(), VarName("ph_truth_index").c_str(), m_Photontruth_index );
  owner->ConnectVariable( treename.c_str(), VarName("ph_loose").c_str(), m_Photonloose );
  owner->ConnectVariable( treename.c_str(), VarName("ph_tight").c_str(), m_Photontight );
  owner->ConnectVariable( treename.c_str(), VarName("ph_tightIso").c_str(), m_PhotontightIso );
  owner->ConnectVariable( treename.c_str(), VarName("ph_goodOQ").c_str(), m_PhotongoodOQ );
  owner->ConnectVariable( treename.c_str(), VarName("ph_Ethad").c_str(), m_PhotonEthad );
  owner->ConnectVariable( treename.c_str(), VarName("ph_Ethad1").c_str(), m_PhotonEthad1 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_E033").c_str(), m_PhotonE033 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_f1").c_str(), m_Photonf1 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_f1core").c_str(), m_Photonf1core );
  owner->ConnectVariable( treename.c_str(), VarName("ph_Emins1").c_str(), m_PhotonEmins1 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_fside").c_str(), m_Photonfside );
  owner->ConnectVariable( treename.c_str(), VarName("ph_Emax2").c_str(), m_PhotonEmax2 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_ws3").c_str(), m_Photonws3 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_wstot").c_str(), m_Photonwstot );
  owner->ConnectVariable( treename.c_str(), VarName("ph_emaxs1").c_str(), m_Photonemaxs1 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_deltaEs").c_str(), m_PhotondeltaEs );
  owner->ConnectVariable( treename.c_str(), VarName("ph_E233").c_str(), m_PhotonE233 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_E237").c_str(), m_PhotonE237 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_E277").c_str(), m_PhotonE277 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_weta2").c_str(), m_Photonweta2 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_f3").c_str(), m_Photonf3 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_Etcone20").c_str(), m_PhotonEtcone20 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_reta").c_str(), m_Photonreta );
  owner->ConnectVariable( treename.c_str(), VarName("ph_rphi").c_str(), m_Photonrphi );
  owner->ConnectVariable( treename.c_str(), VarName("ph_cl_E").c_str(), m_Photoncl_E );
  owner->ConnectVariable( treename.c_str(), VarName("ph_cl_pt").c_str(), m_Photoncl_pt );
  owner->ConnectVariable( treename.c_str(), VarName("ph_cl_eta").c_str(), m_Photoncl_eta );
  owner->ConnectVariable( treename.c_str(), VarName("ph_cl_phi").c_str(), m_Photoncl_phi );
  owner->ConnectVariable( treename.c_str(), VarName("ph_Es0").c_str(), m_PhotonEs0 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_etas0").c_str(), m_Photonetas0 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_phis0").c_str(), m_Photonphis0 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_Es1").c_str(), m_PhotonEs1 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_etas1").c_str(), m_Photonetas1 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_phis1").c_str(), m_Photonphis1 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_Es2").c_str(), m_PhotonEs2 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_etas2").c_str(), m_Photonetas2 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_phis2").c_str(), m_Photonphis2 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_Es3").c_str(), m_PhotonEs3 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_etas3").c_str(), m_Photonetas3 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_phis3").c_str(), m_Photonphis3 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_time").c_str(), m_Photontime );
  owner->ConnectVariable( treename.c_str(), VarName("ph_truth_isBrem").c_str(), m_Photontruth_isBrem );
  owner->ConnectVariable( treename.c_str(), VarName("ph_truth_isFromHardProc").c_str(), m_Photontruth_isFromHardProc );
}
void PhotonReaderPhotonD3PD::DeclareVariables(){
  owner->DeclareVariable( o_m_Photonn, "ph_n" );
  owner->DeclareVariable( o_m_PhotonE, "ph_E" );
  owner->DeclareVariable( o_m_PhotonEt, "ph_Et" );
  owner->DeclareVariable( o_m_Photonpt, "ph_pt" );
  owner->DeclareVariable( o_m_Photonm, "ph_m" );
  owner->DeclareVariable( o_m_Photoneta, "ph_eta" );
  owner->DeclareVariable( o_m_Photonphi, "ph_phi" );
  owner->DeclareVariable( o_m_Photonauthor, "ph_author" );
  owner->DeclareVariable( o_m_PhotonisRecovered, "ph_isRecovered" );
  owner->DeclareVariable( o_m_PhotonisEM, "ph_isEM" );
  owner->DeclareVariable( o_m_PhotonOQ, "ph_OQ" );
  owner->DeclareVariable( o_m_PhotonOQRecalc, "ph_OQRecalc" );
  owner->DeclareVariable( o_m_PhotonconvFlag, "ph_convFlag" );
  owner->DeclareVariable( o_m_PhotonisConv, "ph_isConv" );
  owner->DeclareVariable( o_m_PhotonnConv, "ph_nConv" );
  owner->DeclareVariable( o_m_PhotonnSingleTrackConv, "ph_nSingleTrackConv" );
  owner->DeclareVariable( o_m_PhotonnDoubleTrackConv, "ph_nDoubleTrackConv" );
  owner->DeclareVariable( o_m_Photontype, "ph_type" );
  owner->DeclareVariable( o_m_Photontruth_deltaRRecPhoton, "ph_truth_deltaRRecPhoton" );
  owner->DeclareVariable( o_m_Photontruth_E, "ph_truth_E" );
  owner->DeclareVariable( o_m_Photontruth_pt, "ph_truth_pt" );
  owner->DeclareVariable( o_m_Photontruth_eta, "ph_truth_eta" );
  owner->DeclareVariable( o_m_Photontruth_phi, "ph_truth_phi" );
  owner->DeclareVariable( o_m_Photontruth_type, "ph_truth_type" );
  owner->DeclareVariable( o_m_Photontruth_status, "ph_truth_status" );
  owner->DeclareVariable( o_m_Photontruth_barcode, "ph_truth_barcode" );
  owner->DeclareVariable( o_m_Photontruth_mothertype, "ph_truth_mothertype" );
  owner->DeclareVariable( o_m_Photontruth_motherbarcode, "ph_truth_motherbarcode" );
  owner->DeclareVariable( o_m_Photontruth_index, "ph_truth_index" );
  owner->DeclareVariable( o_m_Photonloose, "ph_loose" );
  owner->DeclareVariable( o_m_Photontight, "ph_tight" );
  owner->DeclareVariable( o_m_PhotontightIso, "ph_tightIso" );
  owner->DeclareVariable( o_m_PhotongoodOQ, "ph_goodOQ" );
  owner->DeclareVariable( o_m_PhotonEthad, "ph_Ethad" );
  owner->DeclareVariable( o_m_PhotonEthad1, "ph_Ethad1" );
  owner->DeclareVariable( o_m_PhotonE033, "ph_E033" );
  owner->DeclareVariable( o_m_Photonf1, "ph_f1" );
  owner->DeclareVariable( o_m_Photonf1core, "ph_f1core" );
  owner->DeclareVariable( o_m_PhotonEmins1, "ph_Emins1" );
  owner->DeclareVariable( o_m_Photonfside, "ph_fside" );
  owner->DeclareVariable( o_m_PhotonEmax2, "ph_Emax2" );
  owner->DeclareVariable( o_m_Photonws3, "ph_ws3" );
  owner->DeclareVariable( o_m_Photonwstot, "ph_wstot" );
  owner->DeclareVariable( o_m_Photonemaxs1, "ph_emaxs1" );
  owner->DeclareVariable( o_m_PhotondeltaEs, "ph_deltaEs" );
  owner->DeclareVariable( o_m_PhotonE233, "ph_E233" );
  owner->DeclareVariable( o_m_PhotonE237, "ph_E237" );
  owner->DeclareVariable( o_m_PhotonE277, "ph_E277" );
  owner->DeclareVariable( o_m_Photonweta2, "ph_weta2" );
  owner->DeclareVariable( o_m_Photonf3, "ph_f3" );
  owner->DeclareVariable( o_m_PhotonEtcone20, "ph_Etcone20" );
  owner->DeclareVariable( o_m_Photonreta, "ph_reta" );
  owner->DeclareVariable( o_m_Photonrphi, "ph_rphi" );
  owner->DeclareVariable( o_m_Photoncl_E, "ph_cl_E" );
  owner->DeclareVariable( o_m_Photoncl_pt, "ph_cl_pt" );
  owner->DeclareVariable( o_m_Photoncl_eta, "ph_cl_eta" );
  owner->DeclareVariable( o_m_Photoncl_phi, "ph_cl_phi" );
  owner->DeclareVariable( o_m_PhotonEs0, "ph_Es0" );
  owner->DeclareVariable( o_m_Photonetas0, "ph_etas0" );
  owner->DeclareVariable( o_m_Photonphis0, "ph_phis0" );
  owner->DeclareVariable( o_m_PhotonEs1, "ph_Es1" );
  owner->DeclareVariable( o_m_Photonetas1, "ph_etas1" );
  owner->DeclareVariable( o_m_Photonphis1, "ph_phis1" );
  owner->DeclareVariable( o_m_PhotonEs2, "ph_Es2" );
  owner->DeclareVariable( o_m_Photonetas2, "ph_etas2" );
  owner->DeclareVariable( o_m_Photonphis2, "ph_phis2" );
  owner->DeclareVariable( o_m_PhotonEs3, "ph_Es3" );
  owner->DeclareVariable( o_m_Photonetas3, "ph_etas3" );
  owner->DeclareVariable( o_m_Photonphis3, "ph_phis3" );
  owner->DeclareVariable( o_m_Photontime, "ph_time" );
  owner->DeclareVariable( o_m_Photontruth_isBrem, "ph_truth_isBrem" );
  owner->DeclareVariable( o_m_Photontruth_isFromHardProc, "ph_truth_isFromHardProc" );
}
void PhotonReaderPhotonD3PD::Reset(){
 o_m_Photonn= -999;
 o_m_PhotonE.clear();
 o_m_PhotonEt.clear();
 o_m_Photonpt.clear();
 o_m_Photonm.clear();
 o_m_Photoneta.clear();
 o_m_Photonphi.clear();
 o_m_Photonauthor.clear();
 o_m_PhotonisRecovered.clear();
 o_m_PhotonisEM.clear();
 o_m_PhotonOQ.clear();
 o_m_PhotonOQRecalc.clear();
 o_m_PhotonconvFlag.clear();
 o_m_PhotonisConv.clear();
 o_m_PhotonnConv.clear();
 o_m_PhotonnSingleTrackConv.clear();
 o_m_PhotonnDoubleTrackConv.clear();
 o_m_Photontype.clear();
 o_m_Photontruth_deltaRRecPhoton.clear();
 o_m_Photontruth_E.clear();
 o_m_Photontruth_pt.clear();
 o_m_Photontruth_eta.clear();
 o_m_Photontruth_phi.clear();
 o_m_Photontruth_type.clear();
 o_m_Photontruth_status.clear();
 o_m_Photontruth_barcode.clear();
 o_m_Photontruth_mothertype.clear();
 o_m_Photontruth_motherbarcode.clear();
 o_m_Photontruth_index.clear();
 o_m_Photonloose.clear();
 o_m_Photontight.clear();
 o_m_PhotontightIso.clear();
 o_m_PhotongoodOQ.clear();
 o_m_PhotonEthad.clear();
 o_m_PhotonEthad1.clear();
 o_m_PhotonE033.clear();
 o_m_Photonf1.clear();
 o_m_Photonf1core.clear();
 o_m_PhotonEmins1.clear();
 o_m_Photonfside.clear();
 o_m_PhotonEmax2.clear();
 o_m_Photonws3.clear();
 o_m_Photonwstot.clear();
 o_m_Photonemaxs1.clear();
 o_m_PhotondeltaEs.clear();
 o_m_PhotonE233.clear();
 o_m_PhotonE237.clear();
 o_m_PhotonE277.clear();
 o_m_Photonweta2.clear();
 o_m_Photonf3.clear();
 o_m_PhotonEtcone20.clear();
 o_m_Photonreta.clear();
 o_m_Photonrphi.clear();
 o_m_Photoncl_E.clear();
 o_m_Photoncl_pt.clear();
 o_m_Photoncl_eta.clear();
 o_m_Photoncl_phi.clear();
 o_m_PhotonEs0.clear();
 o_m_Photonetas0.clear();
 o_m_Photonphis0.clear();
 o_m_PhotonEs1.clear();
 o_m_Photonetas1.clear();
 o_m_Photonphis1.clear();
 o_m_PhotonEs2.clear();
 o_m_Photonetas2.clear();
 o_m_Photonphis2.clear();
 o_m_PhotonEs3.clear();
 o_m_Photonetas3.clear();
 o_m_Photonphis3.clear();
 o_m_Photontime.clear();
 o_m_Photontruth_isBrem.clear();
 o_m_Photontruth_isFromHardProc.clear();
  }
void PhotonReaderPhotonD3PD::CopyToOutput(){
 o_m_Photonn = m_Photonn;
 o_m_PhotonE = std::vector<float>(*m_PhotonE);
 o_m_PhotonEt = std::vector<float>(*m_PhotonEt);
 o_m_Photonpt = std::vector<float>(*m_Photonpt);
 o_m_Photonm = std::vector<float>(*m_Photonm);
 o_m_Photoneta = std::vector<float>(*m_Photoneta);
 o_m_Photonphi = std::vector<float>(*m_Photonphi);
 o_m_Photonauthor = std::vector<int>(*m_Photonauthor);
 o_m_PhotonisRecovered = std::vector<int>(*m_PhotonisRecovered);
 o_m_PhotonisEM = std::vector<unsigned int>(*m_PhotonisEM);
 o_m_PhotonOQ = std::vector<unsigned int>(*m_PhotonOQ);
 o_m_PhotonOQRecalc = std::vector<unsigned int>(*m_PhotonOQRecalc);
 o_m_PhotonconvFlag = std::vector<int>(*m_PhotonconvFlag);
 o_m_PhotonisConv = std::vector<int>(*m_PhotonisConv);
 o_m_PhotonnConv = std::vector<int>(*m_PhotonnConv);
 o_m_PhotonnSingleTrackConv = std::vector<int>(*m_PhotonnSingleTrackConv);
 o_m_PhotonnDoubleTrackConv = std::vector<int>(*m_PhotonnDoubleTrackConv);
 o_m_Photontype = std::vector<int>(*m_Photontype);
 o_m_Photontruth_deltaRRecPhoton = std::vector<float>(*m_Photontruth_deltaRRecPhoton);
 o_m_Photontruth_E = std::vector<float>(*m_Photontruth_E);
 o_m_Photontruth_pt = std::vector<float>(*m_Photontruth_pt);
 o_m_Photontruth_eta = std::vector<float>(*m_Photontruth_eta);
 o_m_Photontruth_phi = std::vector<float>(*m_Photontruth_phi);
 o_m_Photontruth_type = std::vector<int>(*m_Photontruth_type);
 o_m_Photontruth_status = std::vector<int>(*m_Photontruth_status);
 o_m_Photontruth_barcode = std::vector<int>(*m_Photontruth_barcode);
 o_m_Photontruth_mothertype = std::vector<int>(*m_Photontruth_mothertype);
 o_m_Photontruth_motherbarcode = std::vector<int>(*m_Photontruth_motherbarcode);
 o_m_Photontruth_index = std::vector<int>(*m_Photontruth_index);
 o_m_Photonloose = std::vector<int>(*m_Photonloose);
 o_m_Photontight = std::vector<int>(*m_Photontight);
 o_m_PhotontightIso = std::vector<int>(*m_PhotontightIso);
 o_m_PhotongoodOQ = std::vector<int>(*m_PhotongoodOQ);
 o_m_PhotonEthad = std::vector<float>(*m_PhotonEthad);
 o_m_PhotonEthad1 = std::vector<float>(*m_PhotonEthad1);
 o_m_PhotonE033 = std::vector<float>(*m_PhotonE033);
 o_m_Photonf1 = std::vector<float>(*m_Photonf1);
 o_m_Photonf1core = std::vector<float>(*m_Photonf1core);
 o_m_PhotonEmins1 = std::vector<float>(*m_PhotonEmins1);
 o_m_Photonfside = std::vector<float>(*m_Photonfside);
 o_m_PhotonEmax2 = std::vector<float>(*m_PhotonEmax2);
 o_m_Photonws3 = std::vector<float>(*m_Photonws3);
 o_m_Photonwstot = std::vector<float>(*m_Photonwstot);
 o_m_Photonemaxs1 = std::vector<float>(*m_Photonemaxs1);
 o_m_PhotondeltaEs = std::vector<float>(*m_PhotondeltaEs);
 o_m_PhotonE233 = std::vector<float>(*m_PhotonE233);
 o_m_PhotonE237 = std::vector<float>(*m_PhotonE237);
 o_m_PhotonE277 = std::vector<float>(*m_PhotonE277);
 o_m_Photonweta2 = std::vector<float>(*m_Photonweta2);
 o_m_Photonf3 = std::vector<float>(*m_Photonf3);
 o_m_PhotonEtcone20 = std::vector<float>(*m_PhotonEtcone20);
 o_m_Photonreta = std::vector<float>(*m_Photonreta);
 o_m_Photonrphi = std::vector<float>(*m_Photonrphi);
 o_m_Photoncl_E = std::vector<float>(*m_Photoncl_E);
 o_m_Photoncl_pt = std::vector<float>(*m_Photoncl_pt);
 o_m_Photoncl_eta = std::vector<float>(*m_Photoncl_eta);
 o_m_Photoncl_phi = std::vector<float>(*m_Photoncl_phi);
 o_m_PhotonEs0 = std::vector<float>(*m_PhotonEs0);
 o_m_Photonetas0 = std::vector<float>(*m_Photonetas0);
 o_m_Photonphis0 = std::vector<float>(*m_Photonphis0);
 o_m_PhotonEs1 = std::vector<float>(*m_PhotonEs1);
 o_m_Photonetas1 = std::vector<float>(*m_Photonetas1);
 o_m_Photonphis1 = std::vector<float>(*m_Photonphis1);
 o_m_PhotonEs2 = std::vector<float>(*m_PhotonEs2);
 o_m_Photonetas2 = std::vector<float>(*m_Photonetas2);
 o_m_Photonphis2 = std::vector<float>(*m_Photonphis2);
 o_m_PhotonEs3 = std::vector<float>(*m_PhotonEs3);
 o_m_Photonetas3 = std::vector<float>(*m_Photonetas3);
 o_m_Photonphis3 = std::vector<float>(*m_Photonphis3);
 o_m_Photontime = std::vector<float>(*m_Photontime);
 o_m_Photontruth_isBrem = std::vector<int>(*m_Photontruth_isBrem);
 o_m_Photontruth_isFromHardProc = std::vector<int>(*m_Photontruth_isFromHardProc);
  }
