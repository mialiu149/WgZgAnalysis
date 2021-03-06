////DukHep/bin/dukhep_create_filter.py DukHep/hzgskim_tiny_data12_mu.txt
#undef INIT_NULLS_CTOR
#undef DUKEHEPHEADER_MEMBERS
#undef CONNECT
#undef DECLARE
#undef RESETVAR
#undef COPYVAR

#define DEF_FILTER 1
//begin macro definitions

#if DUKHEPFILTER_TYPE == DEF_FILTER
#define INIT_NULLS_CTOR		\
m_RunNumber(0),	\
m_EventNumber(0),	\
m_lbn(0),	\
m_actualIntPerXing(0),	\
m_averageIntPerXing(0),	\
m_EF_e18_medium1_g25_loose(0),	\
m_EF_e24vhi_medium1(0),	\
m_EF_e60_medium1(0),	\
m_EF_2e12Tvh_loose1(0),	\
m_EF_mu24i_tight(0),	\
m_EF_mu36_tight(0),	\
m_EF_2mu13(0),	\
m_EF_2mu10_MSonly_g10_loose(0),	\
m_EF_mu18tight_mu8_EFFS(0),	\
m_EF_mu18_2g10_loose(0),	\
m_EF_mu18_2g10_medium(0),	\
m_EF_3g15vh_loose(0),	\
m_ph_n(0),	\
m_ph_E(0),	\
m_ph_Et(0),	\
m_ph_pt(0),	\
m_ph_m(0),	\
m_ph_eta(0),	\
m_ph_phi(0),	\
m_ph_px(0),	\
m_ph_py(0),	\
m_ph_pz(0),	\
m_ph_author(0),	\
m_ph_isRecovered(0),	\
m_ph_isEM(0),	\
m_ph_OQ(0),	\
m_ph_convFlag(0),	\
m_ph_isConv(0),	\
m_ph_nConv(0),	\
m_ph_nSingleTrackConv(0),	\
m_ph_nDoubleTrackConv(0),	\
m_ph_loose(0),	\
m_ph_tight(0),	\
m_ph_looseAR(0),	\
m_ph_tightAR(0),	\
m_ph_goodOQ(0),	\
m_ph_Ethad(0),	\
m_ph_Ethad1(0),	\
m_ph_E033(0),	\
m_ph_f1(0),	\
m_ph_f1core(0),	\
m_ph_Emins1(0),	\
m_ph_fside(0),	\
m_ph_Emax2(0),	\
m_ph_ws3(0),	\
m_ph_wstot(0),	\
m_ph_E132(0),	\
m_ph_E1152(0),	\
m_ph_emaxs1(0),	\
m_ph_deltaEs(0),	\
m_ph_E233(0),	\
m_ph_E237(0),	\
m_ph_E277(0),	\
m_ph_weta2(0),	\
m_ph_f3(0),	\
m_ph_f3core(0),	\
m_ph_rphiallcalo(0),	\
m_ph_Etcone45(0),	\
m_ph_Etcone15(0),	\
m_ph_Etcone20(0),	\
m_ph_Etcone25(0),	\
m_ph_Etcone30(0),	\
m_ph_Etcone35(0),	\
m_ph_Etcone40(0),	\
m_ph_ptcone20(0),	\
m_ph_ptcone30(0),	\
m_ph_ptcone40(0),	\
m_ph_Etcone15_pt_corrected(0),	\
m_ph_Etcone20_pt_corrected(0),	\
m_ph_Etcone25_pt_corrected(0),	\
m_ph_Etcone30_pt_corrected(0),	\
m_ph_Etcone35_pt_corrected(0),	\
m_ph_Etcone40_pt_corrected(0),	\
m_ph_hasconv(0),	\
m_ph_Rconv(0),	\
m_ph_zconv(0),	\
m_ph_ptconv(0),	\
m_ph_pzconv(0),	\
m_ph_reta(0),	\
m_ph_rphi(0),	\
m_ph_photonweight(0),	\
m_ph_photonbgweight(0),	\
m_ph_neuralnet(0),	\
m_ph_zvertex(0),	\
m_ph_etap(0),	\
m_ph_cl_E(0),	\
m_ph_cl_pt(0),	\
m_ph_cl_eta(0),	\
m_ph_cl_phi(0),	\
m_ph_Es0(0),	\
m_ph_etas0(0),	\
m_ph_phis0(0),	\
m_ph_Es1(0),	\
m_ph_etas1(0),	\
m_ph_phis1(0),	\
m_ph_Es2(0),	\
m_ph_etas2(0),	\
m_ph_phis2(0),	\
m_ph_Es3(0),	\
m_ph_etas3(0),	\
m_ph_phis3(0),	\
m_ph_deltaEmax2(0),	\
m_ph_isIso(0),	\
m_ph_mvaptcone20(0),	\
m_ph_mvaptcone30(0),	\
m_ph_mvaptcone40(0),	\
m_ph_topoEtcone20(0),	\
m_ph_topoEtcone40(0),	\
m_ph_topoEtcone60(0),	\
m_ph_topoEtcone20_corrected(0),	\
m_ph_topoEtcone30_corrected(0),	\
m_ph_topoEtcone40_corrected(0),	\
m_ph_Etcone40_ED_corrected(0),	\
m_ph_Etcone40_corrected(0),	\
m_ph_ED_median(0),	\
m_ph_ED_sigma(0),	\
m_ph_ED_Njets(0),	\
m_mu_staco_n(0),	\
m_mu_staco_E(0),	\
m_mu_staco_pt(0),	\
m_mu_staco_m(0),	\
m_mu_staco_eta(0),	\
m_mu_staco_phi(0),	\
m_mu_staco_px(0),	\
m_mu_staco_py(0),	\
m_mu_staco_pz(0),	\
m_mu_staco_charge(0),	\
m_mu_staco_allauthor(0),	\
m_mu_staco_author(0),	\
m_mu_staco_beta(0),	\
m_mu_staco_isMuonLikelihood(0),	\
m_mu_staco_etcone20(0),	\
m_mu_staco_etcone30(0),	\
m_mu_staco_etcone40(0),	\
m_mu_staco_nucone20(0),	\
m_mu_staco_nucone30(0),	\
m_mu_staco_nucone40(0),	\
m_mu_staco_ptcone20(0),	\
m_mu_staco_ptcone30(0),	\
m_mu_staco_ptcone40(0),	\
m_mu_staco_isStandAloneMuon(0),	\
m_mu_staco_isCombinedMuon(0),	\
m_mu_staco_isCaloMuonId(0),	\
m_mu_staco_loose(0),	\
m_mu_staco_medium(0),	\
m_mu_staco_tight(0),	\
m_mu_staco_d0_exPV(0),	\
m_mu_staco_z0_exPV(0),	\
m_mu_staco_phi_exPV(0),	\
m_mu_staco_theta_exPV(0),	\
m_mu_staco_qoverp_exPV(0),	\
m_mu_staco_id_z0_exPV(0),	\
m_mu_staco_id_phi_exPV(0),	\
m_mu_staco_id_theta_exPV(0),	\
m_mu_staco_id_qoverp_exPV(0),	\
m_mu_staco_id_z0(0),	\
m_mu_staco_id_phi(0),	\
m_mu_staco_id_theta(0),	\
m_mu_staco_id_qoverp(0),	\
m_mu_staco_nOutliersOnTrack(0),	\
m_mu_staco_nBLHits(0),	\
m_mu_staco_nPixHits(0),	\
m_mu_staco_nSCTHits(0),	\
m_mu_staco_nTRTHits(0),	\
m_mu_staco_nTRTHighTHits(0),	\
m_mu_staco_nBLSharedHits(0),	\
m_mu_staco_nPixSharedHits(0),	\
m_mu_staco_nPixHoles(0),	\
m_mu_staco_nSCTSharedHits(0),	\
m_mu_staco_nSCTHoles(0),	\
m_mu_staco_nTRTOutliers(0),	\
m_mu_staco_nTRTHighTOutliers(0),	\
m_mu_staco_expectBLayerHit(0),	\
m_mu_staco_trackd0(0),	\
m_mu_staco_trackz0(0),	\
m_mu_staco_trackphi(0),	\
m_mu_staco_tracktheta(0),	\
m_mu_staco_trackqoverp(0),	\
m_mu_staco_trackd0beam(0),	\
m_mu_staco_trackz0beam(0),	\
m_mu_staco_tracksigd0beam(0),	\
m_mu_staco_tracksigz0beam(0),	\
m_mu_staco_trackd0pv(0),	\
m_mu_staco_trackz0pv(0),	\
m_mu_staco_tracksigd0pv(0),	\
m_mu_staco_tracksigz0pv(0),	\
m_mu_calo_n(0),	\
m_mu_calo_E(0),	\
m_mu_calo_pt(0),	\
m_mu_calo_m(0),	\
m_mu_calo_eta(0),	\
m_mu_calo_phi(0),	\
m_mu_calo_px(0),	\
m_mu_calo_py(0),	\
m_mu_calo_pz(0),	\
m_mu_calo_charge(0),	\
m_mu_calo_allauthor(0),	\
m_mu_calo_author(0),	\
m_mu_calo_isMuonLikelihood(0),	\
m_mu_calo_etcone20(0),	\
m_mu_calo_etcone30(0),	\
m_mu_calo_etcone40(0),	\
m_mu_calo_nucone20(0),	\
m_mu_calo_nucone30(0),	\
m_mu_calo_nucone40(0),	\
m_mu_calo_ptcone20(0),	\
m_mu_calo_ptcone30(0),	\
m_mu_calo_ptcone40(0),	\
m_mu_calo_scatteringCurvatureSignificance(0),	\
m_mu_calo_scatteringNeighbourSignificance(0),	\
m_mu_calo_momentumBalanceSignificance(0),	\
m_mu_calo_energyLossPar(0),	\
m_mu_calo_energyLossErr(0),	\
m_mu_calo_etCore(0),	\
m_mu_calo_energyLossType(0),	\
m_mu_calo_caloMuonIdTag(0),	\
m_mu_calo_caloLRLikelihood(0),	\
m_mu_calo_loose(0),	\
m_mu_calo_medium(0),	\
m_mu_calo_tight(0),	\
m_mu_calo_nOutliersOnTrack(0),	\
m_mu_calo_nBLHits(0),	\
m_mu_calo_nPixHits(0),	\
m_mu_calo_nSCTHits(0),	\
m_mu_calo_nTRTHits(0),	\
m_mu_calo_nTRTHighTHits(0),	\
m_mu_calo_nBLSharedHits(0),	\
m_mu_calo_nPixSharedHits(0),	\
m_mu_calo_nPixHoles(0),	\
m_mu_calo_nSCTSharedHits(0),	\
m_mu_calo_nSCTHoles(0),	\
m_mu_calo_nTRTOutliers(0),	\
m_mu_calo_nTRTHighTOutliers(0),	\
m_mu_calo_nGangedPixels(0),	\
m_mu_calo_nPixelDeadSensors(0),	\
m_mu_calo_nSCTDeadSensors(0),	\
m_mu_calo_nTRTDeadStraws(0),	\
m_mu_calo_expectBLayerHit(0),	\
m_mu_calo_nMDTHits(0),	\
m_mu_calo_nMDTHoles(0),	\
m_mu_calo_nCSCEtaHits(0),	\
m_mu_calo_nCSCEtaHoles(0),	\
m_mu_calo_nCSCUnspoiledEtaHits(0),	\
m_mu_calo_nCSCPhiHits(0),	\
m_mu_calo_nCSCPhiHoles(0),	\
m_mu_calo_nRPCEtaHits(0),	\
m_mu_calo_nRPCEtaHoles(0),	\
m_mu_calo_nRPCPhiHits(0),	\
m_mu_calo_nRPCPhiHoles(0),	\
m_mu_calo_nTGCEtaHits(0),	\
m_mu_calo_nTGCEtaHoles(0),	\
m_mu_calo_nTGCPhiHits(0),	\
m_mu_calo_nTGCPhiHoles(0),	\
m_mu_calo_hastrack(0),	\
m_jet_AntiKt4TopoEM_emscale_E(0),	\
m_jet_AntiKt4TopoEM_emscale_pt(0),	\
m_jet_AntiKt4TopoEM_emscale_m(0),	\
m_jet_AntiKt4TopoEM_emscale_eta(0),	\
m_jet_AntiKt4TopoEM_emscale_phi(0),	\
m_jet_AntiKt4TopoEM_jvtx_x(0),	\
m_jet_AntiKt4TopoEM_jvtx_y(0),	\
m_jet_AntiKt4TopoEM_jvtx_z(0),	\
m_jet_AntiKt4TopoEM_jvtxf(0),	\
m_jet_AntiKt4TopoEM_jvtxfFull(0),	\
m_MET_RefFinal_phi(0),	\
m_MET_RefFinal_et(0),	\
m_MET_RefFinal_sumet(0),	\
m_MET_RefFinal_etx_CentralReg(0),	\
m_MET_RefFinal_ety_CentralReg(0),	\
m_MET_RefFinal_sumet_CentralReg(0),	\
m_MET_RefFinal_phi_CentralReg(0),	\
m_MET_RefFinal_etx_EndcapRegion(0),	\
m_MET_RefFinal_ety_EndcapRegion(0),	\
m_MET_RefFinal_sumet_EndcapRegion(0),	\
m_MET_RefFinal_phi_EndcapRegion(0),	\
m_MET_RefFinal_etx_ForwardReg(0),	\
m_MET_RefFinal_ety_ForwardReg(0),	\
m_MET_RefFinal_sumet_ForwardReg(0),	\
m_MET_RefFinal_phi_ForwardReg(0),	\
m_MET_RefMuon_Track_phi(0),	\
m_MET_RefMuon_Track_et(0),	\
m_MET_RefMuon_Track_sumet(0),	\
m_MET_LocHadTopo_phi(0),	\
m_MET_LocHadTopo_et(0),	\
m_MET_LocHadTopo_sumet(0),	\
m_MET_MuonBoy_phi(0),	\
m_MET_MuonBoy_et(0),	\
m_MET_MuonBoy_sumet(0),	\
m_vxp_n(0),	\
m_vxp_x(0),	\
m_vxp_y(0),	\
m_vxp_z(0),	\
m_vxp_err_x(0),	\
m_vxp_err_y(0),	\
m_vxp_err_z(0),	\
m_vxp_type(0),	\
m_vxp_chi2(0),	\
m_vxp_ndof(0),	\
m_vxp_px(0),	\
m_vxp_py(0),	\
m_vxp_pz(0),	\
m_vxp_E(0),	\
m_vxp_m(0),	\
m_vxp_nTracks(0),	\
m_vxp_sumPt(0),	\
m_vxp_trk_n(0),	\
m_vxp_trk_weight(0),	\
m_vxp_trk_index(0)
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define DUKEHEPHEADER_MEMBERS                          \
UInt_t m_RunNumber;	\
UInt_t o_m_RunNumber;	\
UInt_t m_EventNumber;	\
UInt_t o_m_EventNumber;	\
UInt_t m_lbn;	\
UInt_t o_m_lbn;	\
Float_t m_actualIntPerXing;	\
Float_t o_m_actualIntPerXing;	\
Float_t m_averageIntPerXing;	\
Float_t o_m_averageIntPerXing;	\
Bool_t m_EF_e18_medium1_g25_loose;	\
Bool_t o_m_EF_e18_medium1_g25_loose;	\
Bool_t m_EF_e24vhi_medium1;	\
Bool_t o_m_EF_e24vhi_medium1;	\
Bool_t m_EF_e60_medium1;	\
Bool_t o_m_EF_e60_medium1;	\
Bool_t m_EF_2e12Tvh_loose1;	\
Bool_t o_m_EF_2e12Tvh_loose1;	\
Bool_t m_EF_mu24i_tight;	\
Bool_t o_m_EF_mu24i_tight;	\
Bool_t m_EF_mu36_tight;	\
Bool_t o_m_EF_mu36_tight;	\
Bool_t m_EF_2mu13;	\
Bool_t o_m_EF_2mu13;	\
Bool_t m_EF_2mu10_MSonly_g10_loose;	\
Bool_t o_m_EF_2mu10_MSonly_g10_loose;	\
Bool_t m_EF_mu18tight_mu8_EFFS;	\
Bool_t o_m_EF_mu18tight_mu8_EFFS;	\
Bool_t m_EF_mu18_2g10_loose;	\
Bool_t o_m_EF_mu18_2g10_loose;	\
Bool_t m_EF_mu18_2g10_medium;	\
Bool_t o_m_EF_mu18_2g10_medium;	\
Bool_t m_EF_3g15vh_loose;	\
Bool_t o_m_EF_3g15vh_loose;	\
Int_t m_ph_n;	\
Int_t o_m_ph_n;	\
std::vector<float>* m_ph_E;	\
std::vector<float> o_m_ph_E;	\
std::vector<float>* m_ph_Et;	\
std::vector<float> o_m_ph_Et;	\
std::vector<float>* m_ph_pt;	\
std::vector<float> o_m_ph_pt;	\
std::vector<float>* m_ph_m;	\
std::vector<float> o_m_ph_m;	\
std::vector<float>* m_ph_eta;	\
std::vector<float> o_m_ph_eta;	\
std::vector<float>* m_ph_phi;	\
std::vector<float> o_m_ph_phi;	\
std::vector<float>* m_ph_px;	\
std::vector<float> o_m_ph_px;	\
std::vector<float>* m_ph_py;	\
std::vector<float> o_m_ph_py;	\
std::vector<float>* m_ph_pz;	\
std::vector<float> o_m_ph_pz;	\
std::vector<int>* m_ph_author;	\
std::vector<int> o_m_ph_author;	\
std::vector<int>* m_ph_isRecovered;	\
std::vector<int> o_m_ph_isRecovered;	\
std::vector<unsigned int>* m_ph_isEM;	\
std::vector<unsigned int> o_m_ph_isEM;	\
std::vector<unsigned int>* m_ph_OQ;	\
std::vector<unsigned int> o_m_ph_OQ;	\
std::vector<int>* m_ph_convFlag;	\
std::vector<int> o_m_ph_convFlag;	\
std::vector<int>* m_ph_isConv;	\
std::vector<int> o_m_ph_isConv;	\
std::vector<int>* m_ph_nConv;	\
std::vector<int> o_m_ph_nConv;	\
std::vector<int>* m_ph_nSingleTrackConv;	\
std::vector<int> o_m_ph_nSingleTrackConv;	\
std::vector<int>* m_ph_nDoubleTrackConv;	\
std::vector<int> o_m_ph_nDoubleTrackConv;	\
std::vector<int>* m_ph_loose;	\
std::vector<int> o_m_ph_loose;	\
std::vector<int>* m_ph_tight;	\
std::vector<int> o_m_ph_tight;	\
std::vector<int>* m_ph_looseAR;	\
std::vector<int> o_m_ph_looseAR;	\
std::vector<int>* m_ph_tightAR;	\
std::vector<int> o_m_ph_tightAR;	\
std::vector<int>* m_ph_goodOQ;	\
std::vector<int> o_m_ph_goodOQ;	\
std::vector<float>* m_ph_Ethad;	\
std::vector<float> o_m_ph_Ethad;	\
std::vector<float>* m_ph_Ethad1;	\
std::vector<float> o_m_ph_Ethad1;	\
std::vector<float>* m_ph_E033;	\
std::vector<float> o_m_ph_E033;	\
std::vector<float>* m_ph_f1;	\
std::vector<float> o_m_ph_f1;	\
std::vector<float>* m_ph_f1core;	\
std::vector<float> o_m_ph_f1core;	\
std::vector<float>* m_ph_Emins1;	\
std::vector<float> o_m_ph_Emins1;	\
std::vector<float>* m_ph_fside;	\
std::vector<float> o_m_ph_fside;	\
std::vector<float>* m_ph_Emax2;	\
std::vector<float> o_m_ph_Emax2;	\
std::vector<float>* m_ph_ws3;	\
std::vector<float> o_m_ph_ws3;	\
std::vector<float>* m_ph_wstot;	\
std::vector<float> o_m_ph_wstot;	\
std::vector<float>* m_ph_E132;	\
std::vector<float> o_m_ph_E132;	\
std::vector<float>* m_ph_E1152;	\
std::vector<float> o_m_ph_E1152;	\
std::vector<float>* m_ph_emaxs1;	\
std::vector<float> o_m_ph_emaxs1;	\
std::vector<float>* m_ph_deltaEs;	\
std::vector<float> o_m_ph_deltaEs;	\
std::vector<float>* m_ph_E233;	\
std::vector<float> o_m_ph_E233;	\
std::vector<float>* m_ph_E237;	\
std::vector<float> o_m_ph_E237;	\
std::vector<float>* m_ph_E277;	\
std::vector<float> o_m_ph_E277;	\
std::vector<float>* m_ph_weta2;	\
std::vector<float> o_m_ph_weta2;	\
std::vector<float>* m_ph_f3;	\
std::vector<float> o_m_ph_f3;	\
std::vector<float>* m_ph_f3core;	\
std::vector<float> o_m_ph_f3core;	\
std::vector<float>* m_ph_rphiallcalo;	\
std::vector<float> o_m_ph_rphiallcalo;	\
std::vector<float>* m_ph_Etcone45;	\
std::vector<float> o_m_ph_Etcone45;	\
std::vector<float>* m_ph_Etcone15;	\
std::vector<float> o_m_ph_Etcone15;	\
std::vector<float>* m_ph_Etcone20;	\
std::vector<float> o_m_ph_Etcone20;	\
std::vector<float>* m_ph_Etcone25;	\
std::vector<float> o_m_ph_Etcone25;	\
std::vector<float>* m_ph_Etcone30;	\
std::vector<float> o_m_ph_Etcone30;	\
std::vector<float>* m_ph_Etcone35;	\
std::vector<float> o_m_ph_Etcone35;	\
std::vector<float>* m_ph_Etcone40;	\
std::vector<float> o_m_ph_Etcone40;	\
std::vector<float>* m_ph_ptcone20;	\
std::vector<float> o_m_ph_ptcone20;	\
std::vector<float>* m_ph_ptcone30;	\
std::vector<float> o_m_ph_ptcone30;	\
std::vector<float>* m_ph_ptcone40;	\
std::vector<float> o_m_ph_ptcone40;	\
std::vector<float>* m_ph_Etcone15_pt_corrected;	\
std::vector<float> o_m_ph_Etcone15_pt_corrected;	\
std::vector<float>* m_ph_Etcone20_pt_corrected;	\
std::vector<float> o_m_ph_Etcone20_pt_corrected;	\
std::vector<float>* m_ph_Etcone25_pt_corrected;	\
std::vector<float> o_m_ph_Etcone25_pt_corrected;	\
std::vector<float>* m_ph_Etcone30_pt_corrected;	\
std::vector<float> o_m_ph_Etcone30_pt_corrected;	\
std::vector<float>* m_ph_Etcone35_pt_corrected;	\
std::vector<float> o_m_ph_Etcone35_pt_corrected;	\
std::vector<float>* m_ph_Etcone40_pt_corrected;	\
std::vector<float> o_m_ph_Etcone40_pt_corrected;	\
std::vector<int>* m_ph_hasconv;	\
std::vector<int> o_m_ph_hasconv;	\
std::vector<float>* m_ph_Rconv;	\
std::vector<float> o_m_ph_Rconv;	\
std::vector<float>* m_ph_zconv;	\
std::vector<float> o_m_ph_zconv;	\
std::vector<float>* m_ph_ptconv;	\
std::vector<float> o_m_ph_ptconv;	\
std::vector<float>* m_ph_pzconv;	\
std::vector<float> o_m_ph_pzconv;	\
std::vector<float>* m_ph_reta;	\
std::vector<float> o_m_ph_reta;	\
std::vector<float>* m_ph_rphi;	\
std::vector<float> o_m_ph_rphi;	\
std::vector<double>* m_ph_photonweight;	\
std::vector<double> o_m_ph_photonweight;	\
std::vector<double>* m_ph_photonbgweight;	\
std::vector<double> o_m_ph_photonbgweight;	\
std::vector<double>* m_ph_neuralnet;	\
std::vector<double> o_m_ph_neuralnet;	\
std::vector<float>* m_ph_zvertex;	\
std::vector<float> o_m_ph_zvertex;	\
std::vector<float>* m_ph_etap;	\
std::vector<float> o_m_ph_etap;	\
std::vector<float>* m_ph_cl_E;	\
std::vector<float> o_m_ph_cl_E;	\
std::vector<float>* m_ph_cl_pt;	\
std::vector<float> o_m_ph_cl_pt;	\
std::vector<float>* m_ph_cl_eta;	\
std::vector<float> o_m_ph_cl_eta;	\
std::vector<float>* m_ph_cl_phi;	\
std::vector<float> o_m_ph_cl_phi;	\
std::vector<float>* m_ph_Es0;	\
std::vector<float> o_m_ph_Es0;	\
std::vector<float>* m_ph_etas0;	\
std::vector<float> o_m_ph_etas0;	\
std::vector<float>* m_ph_phis0;	\
std::vector<float> o_m_ph_phis0;	\
std::vector<float>* m_ph_Es1;	\
std::vector<float> o_m_ph_Es1;	\
std::vector<float>* m_ph_etas1;	\
std::vector<float> o_m_ph_etas1;	\
std::vector<float>* m_ph_phis1;	\
std::vector<float> o_m_ph_phis1;	\
std::vector<float>* m_ph_Es2;	\
std::vector<float> o_m_ph_Es2;	\
std::vector<float>* m_ph_etas2;	\
std::vector<float> o_m_ph_etas2;	\
std::vector<float>* m_ph_phis2;	\
std::vector<float> o_m_ph_phis2;	\
std::vector<float>* m_ph_Es3;	\
std::vector<float> o_m_ph_Es3;	\
std::vector<float>* m_ph_etas3;	\
std::vector<float> o_m_ph_etas3;	\
std::vector<float>* m_ph_phis3;	\
std::vector<float> o_m_ph_phis3;	\
std::vector<float>* m_ph_deltaEmax2;	\
std::vector<float> o_m_ph_deltaEmax2;	\
std::vector<unsigned int>* m_ph_isIso;	\
std::vector<unsigned int> o_m_ph_isIso;	\
std::vector<float>* m_ph_mvaptcone20;	\
std::vector<float> o_m_ph_mvaptcone20;	\
std::vector<float>* m_ph_mvaptcone30;	\
std::vector<float> o_m_ph_mvaptcone30;	\
std::vector<float>* m_ph_mvaptcone40;	\
std::vector<float> o_m_ph_mvaptcone40;	\
std::vector<float>* m_ph_topoEtcone20;	\
std::vector<float> o_m_ph_topoEtcone20;	\
std::vector<float>* m_ph_topoEtcone40;	\
std::vector<float> o_m_ph_topoEtcone40;	\
std::vector<float>* m_ph_topoEtcone60;	\
std::vector<float> o_m_ph_topoEtcone60;	\
std::vector<float>* m_ph_topoEtcone20_corrected;	\
std::vector<float> o_m_ph_topoEtcone20_corrected;	\
std::vector<float>* m_ph_topoEtcone30_corrected;	\
std::vector<float> o_m_ph_topoEtcone30_corrected;	\
std::vector<float>* m_ph_topoEtcone40_corrected;	\
std::vector<float> o_m_ph_topoEtcone40_corrected;	\
std::vector<float>* m_ph_Etcone40_ED_corrected;	\
std::vector<float> o_m_ph_Etcone40_ED_corrected;	\
std::vector<float>* m_ph_Etcone40_corrected;	\
std::vector<float> o_m_ph_Etcone40_corrected;	\
std::vector<float>* m_ph_ED_median;	\
std::vector<float> o_m_ph_ED_median;	\
std::vector<float>* m_ph_ED_sigma;	\
std::vector<float> o_m_ph_ED_sigma;	\
std::vector<float>* m_ph_ED_Njets;	\
std::vector<float> o_m_ph_ED_Njets;	\
Int_t m_mu_staco_n;	\
Int_t o_m_mu_staco_n;	\
std::vector<float>* m_mu_staco_E;	\
std::vector<float> o_m_mu_staco_E;	\
std::vector<float>* m_mu_staco_pt;	\
std::vector<float> o_m_mu_staco_pt;	\
std::vector<float>* m_mu_staco_m;	\
std::vector<float> o_m_mu_staco_m;	\
std::vector<float>* m_mu_staco_eta;	\
std::vector<float> o_m_mu_staco_eta;	\
std::vector<float>* m_mu_staco_phi;	\
std::vector<float> o_m_mu_staco_phi;	\
std::vector<float>* m_mu_staco_px;	\
std::vector<float> o_m_mu_staco_px;	\
std::vector<float>* m_mu_staco_py;	\
std::vector<float> o_m_mu_staco_py;	\
std::vector<float>* m_mu_staco_pz;	\
std::vector<float> o_m_mu_staco_pz;	\
std::vector<float>* m_mu_staco_charge;	\
std::vector<float> o_m_mu_staco_charge;	\
std::vector<unsigned short>* m_mu_staco_allauthor;	\
std::vector<unsigned short> o_m_mu_staco_allauthor;	\
std::vector<int>* m_mu_staco_author;	\
std::vector<int> o_m_mu_staco_author;	\
std::vector<float>* m_mu_staco_beta;	\
std::vector<float> o_m_mu_staco_beta;	\
std::vector<float>* m_mu_staco_isMuonLikelihood;	\
std::vector<float> o_m_mu_staco_isMuonLikelihood;	\
std::vector<float>* m_mu_staco_etcone20;	\
std::vector<float> o_m_mu_staco_etcone20;	\
std::vector<float>* m_mu_staco_etcone30;	\
std::vector<float> o_m_mu_staco_etcone30;	\
std::vector<float>* m_mu_staco_etcone40;	\
std::vector<float> o_m_mu_staco_etcone40;	\
std::vector<float>* m_mu_staco_nucone20;	\
std::vector<float> o_m_mu_staco_nucone20;	\
std::vector<float>* m_mu_staco_nucone30;	\
std::vector<float> o_m_mu_staco_nucone30;	\
std::vector<float>* m_mu_staco_nucone40;	\
std::vector<float> o_m_mu_staco_nucone40;	\
std::vector<float>* m_mu_staco_ptcone20;	\
std::vector<float> o_m_mu_staco_ptcone20;	\
std::vector<float>* m_mu_staco_ptcone30;	\
std::vector<float> o_m_mu_staco_ptcone30;	\
std::vector<float>* m_mu_staco_ptcone40;	\
std::vector<float> o_m_mu_staco_ptcone40;	\
std::vector<int>* m_mu_staco_isStandAloneMuon;	\
std::vector<int> o_m_mu_staco_isStandAloneMuon;	\
std::vector<int>* m_mu_staco_isCombinedMuon;	\
std::vector<int> o_m_mu_staco_isCombinedMuon;	\
std::vector<int>* m_mu_staco_isCaloMuonId;	\
std::vector<int> o_m_mu_staco_isCaloMuonId;	\
std::vector<int>* m_mu_staco_loose;	\
std::vector<int> o_m_mu_staco_loose;	\
std::vector<int>* m_mu_staco_medium;	\
std::vector<int> o_m_mu_staco_medium;	\
std::vector<int>* m_mu_staco_tight;	\
std::vector<int> o_m_mu_staco_tight;	\
std::vector<float>* m_mu_staco_d0_exPV;	\
std::vector<float> o_m_mu_staco_d0_exPV;	\
std::vector<float>* m_mu_staco_z0_exPV;	\
std::vector<float> o_m_mu_staco_z0_exPV;	\
std::vector<float>* m_mu_staco_phi_exPV;	\
std::vector<float> o_m_mu_staco_phi_exPV;	\
std::vector<float>* m_mu_staco_theta_exPV;	\
std::vector<float> o_m_mu_staco_theta_exPV;	\
std::vector<float>* m_mu_staco_qoverp_exPV;	\
std::vector<float> o_m_mu_staco_qoverp_exPV;	\
std::vector<float>* m_mu_staco_id_z0_exPV;	\
std::vector<float> o_m_mu_staco_id_z0_exPV;	\
std::vector<float>* m_mu_staco_id_phi_exPV;	\
std::vector<float> o_m_mu_staco_id_phi_exPV;	\
std::vector<float>* m_mu_staco_id_theta_exPV;	\
std::vector<float> o_m_mu_staco_id_theta_exPV;	\
std::vector<float>* m_mu_staco_id_qoverp_exPV;	\
std::vector<float> o_m_mu_staco_id_qoverp_exPV;	\
std::vector<float>* m_mu_staco_id_z0;	\
std::vector<float> o_m_mu_staco_id_z0;	\
std::vector<float>* m_mu_staco_id_phi;	\
std::vector<float> o_m_mu_staco_id_phi;	\
std::vector<float>* m_mu_staco_id_theta;	\
std::vector<float> o_m_mu_staco_id_theta;	\
std::vector<float>* m_mu_staco_id_qoverp;	\
std::vector<float> o_m_mu_staco_id_qoverp;	\
std::vector<int>* m_mu_staco_nOutliersOnTrack;	\
std::vector<int> o_m_mu_staco_nOutliersOnTrack;	\
std::vector<int>* m_mu_staco_nBLHits;	\
std::vector<int> o_m_mu_staco_nBLHits;	\
std::vector<int>* m_mu_staco_nPixHits;	\
std::vector<int> o_m_mu_staco_nPixHits;	\
std::vector<int>* m_mu_staco_nSCTHits;	\
std::vector<int> o_m_mu_staco_nSCTHits;	\
std::vector<int>* m_mu_staco_nTRTHits;	\
std::vector<int> o_m_mu_staco_nTRTHits;	\
std::vector<int>* m_mu_staco_nTRTHighTHits;	\
std::vector<int> o_m_mu_staco_nTRTHighTHits;	\
std::vector<int>* m_mu_staco_nBLSharedHits;	\
std::vector<int> o_m_mu_staco_nBLSharedHits;	\
std::vector<int>* m_mu_staco_nPixSharedHits;	\
std::vector<int> o_m_mu_staco_nPixSharedHits;	\
std::vector<int>* m_mu_staco_nPixHoles;	\
std::vector<int> o_m_mu_staco_nPixHoles;	\
std::vector<int>* m_mu_staco_nSCTSharedHits;	\
std::vector<int> o_m_mu_staco_nSCTSharedHits;	\
std::vector<int>* m_mu_staco_nSCTHoles;	\
std::vector<int> o_m_mu_staco_nSCTHoles;	\
std::vector<int>* m_mu_staco_nTRTOutliers;	\
std::vector<int> o_m_mu_staco_nTRTOutliers;	\
std::vector<int>* m_mu_staco_nTRTHighTOutliers;	\
std::vector<int> o_m_mu_staco_nTRTHighTOutliers;	\
std::vector<int>* m_mu_staco_expectBLayerHit;	\
std::vector<int> o_m_mu_staco_expectBLayerHit;	\
std::vector<float>* m_mu_staco_trackd0;	\
std::vector<float> o_m_mu_staco_trackd0;	\
std::vector<float>* m_mu_staco_trackz0;	\
std::vector<float> o_m_mu_staco_trackz0;	\
std::vector<float>* m_mu_staco_trackphi;	\
std::vector<float> o_m_mu_staco_trackphi;	\
std::vector<float>* m_mu_staco_tracktheta;	\
std::vector<float> o_m_mu_staco_tracktheta;	\
std::vector<float>* m_mu_staco_trackqoverp;	\
std::vector<float> o_m_mu_staco_trackqoverp;	\
std::vector<float>* m_mu_staco_trackd0beam;	\
std::vector<float> o_m_mu_staco_trackd0beam;	\
std::vector<float>* m_mu_staco_trackz0beam;	\
std::vector<float> o_m_mu_staco_trackz0beam;	\
std::vector<float>* m_mu_staco_tracksigd0beam;	\
std::vector<float> o_m_mu_staco_tracksigd0beam;	\
std::vector<float>* m_mu_staco_tracksigz0beam;	\
std::vector<float> o_m_mu_staco_tracksigz0beam;	\
std::vector<float>* m_mu_staco_trackd0pv;	\
std::vector<float> o_m_mu_staco_trackd0pv;	\
std::vector<float>* m_mu_staco_trackz0pv;	\
std::vector<float> o_m_mu_staco_trackz0pv;	\
std::vector<float>* m_mu_staco_tracksigd0pv;	\
std::vector<float> o_m_mu_staco_tracksigd0pv;	\
std::vector<float>* m_mu_staco_tracksigz0pv;	\
std::vector<float> o_m_mu_staco_tracksigz0pv;	\
Int_t m_mu_calo_n;	\
Int_t o_m_mu_calo_n;	\
std::vector<float>* m_mu_calo_E;	\
std::vector<float> o_m_mu_calo_E;	\
std::vector<float>* m_mu_calo_pt;	\
std::vector<float> o_m_mu_calo_pt;	\
std::vector<float>* m_mu_calo_m;	\
std::vector<float> o_m_mu_calo_m;	\
std::vector<float>* m_mu_calo_eta;	\
std::vector<float> o_m_mu_calo_eta;	\
std::vector<float>* m_mu_calo_phi;	\
std::vector<float> o_m_mu_calo_phi;	\
std::vector<float>* m_mu_calo_px;	\
std::vector<float> o_m_mu_calo_px;	\
std::vector<float>* m_mu_calo_py;	\
std::vector<float> o_m_mu_calo_py;	\
std::vector<float>* m_mu_calo_pz;	\
std::vector<float> o_m_mu_calo_pz;	\
std::vector<float>* m_mu_calo_charge;	\
std::vector<float> o_m_mu_calo_charge;	\
std::vector<unsigned short>* m_mu_calo_allauthor;	\
std::vector<unsigned short> o_m_mu_calo_allauthor;	\
std::vector<int>* m_mu_calo_author;	\
std::vector<int> o_m_mu_calo_author;	\
std::vector<float>* m_mu_calo_isMuonLikelihood;	\
std::vector<float> o_m_mu_calo_isMuonLikelihood;	\
std::vector<float>* m_mu_calo_etcone20;	\
std::vector<float> o_m_mu_calo_etcone20;	\
std::vector<float>* m_mu_calo_etcone30;	\
std::vector<float> o_m_mu_calo_etcone30;	\
std::vector<float>* m_mu_calo_etcone40;	\
std::vector<float> o_m_mu_calo_etcone40;	\
std::vector<float>* m_mu_calo_nucone20;	\
std::vector<float> o_m_mu_calo_nucone20;	\
std::vector<float>* m_mu_calo_nucone30;	\
std::vector<float> o_m_mu_calo_nucone30;	\
std::vector<float>* m_mu_calo_nucone40;	\
std::vector<float> o_m_mu_calo_nucone40;	\
std::vector<float>* m_mu_calo_ptcone20;	\
std::vector<float> o_m_mu_calo_ptcone20;	\
std::vector<float>* m_mu_calo_ptcone30;	\
std::vector<float> o_m_mu_calo_ptcone30;	\
std::vector<float>* m_mu_calo_ptcone40;	\
std::vector<float> o_m_mu_calo_ptcone40;	\
std::vector<float>* m_mu_calo_scatteringCurvatureSignificance;	\
std::vector<float> o_m_mu_calo_scatteringCurvatureSignificance;	\
std::vector<float>* m_mu_calo_scatteringNeighbourSignificance;	\
std::vector<float> o_m_mu_calo_scatteringNeighbourSignificance;	\
std::vector<float>* m_mu_calo_momentumBalanceSignificance;	\
std::vector<float> o_m_mu_calo_momentumBalanceSignificance;	\
std::vector<float>* m_mu_calo_energyLossPar;	\
std::vector<float> o_m_mu_calo_energyLossPar;	\
std::vector<float>* m_mu_calo_energyLossErr;	\
std::vector<float> o_m_mu_calo_energyLossErr;	\
std::vector<float>* m_mu_calo_etCore;	\
std::vector<float> o_m_mu_calo_etCore;	\
std::vector<float>* m_mu_calo_energyLossType;	\
std::vector<float> o_m_mu_calo_energyLossType;	\
std::vector<unsigned short>* m_mu_calo_caloMuonIdTag;	\
std::vector<unsigned short> o_m_mu_calo_caloMuonIdTag;	\
std::vector<double>* m_mu_calo_caloLRLikelihood;	\
std::vector<double> o_m_mu_calo_caloLRLikelihood;	\
std::vector<int>* m_mu_calo_loose;	\
std::vector<int> o_m_mu_calo_loose;	\
std::vector<int>* m_mu_calo_medium;	\
std::vector<int> o_m_mu_calo_medium;	\
std::vector<int>* m_mu_calo_tight;	\
std::vector<int> o_m_mu_calo_tight;	\
std::vector<int>* m_mu_calo_nOutliersOnTrack;	\
std::vector<int> o_m_mu_calo_nOutliersOnTrack;	\
std::vector<int>* m_mu_calo_nBLHits;	\
std::vector<int> o_m_mu_calo_nBLHits;	\
std::vector<int>* m_mu_calo_nPixHits;	\
std::vector<int> o_m_mu_calo_nPixHits;	\
std::vector<int>* m_mu_calo_nSCTHits;	\
std::vector<int> o_m_mu_calo_nSCTHits;	\
std::vector<int>* m_mu_calo_nTRTHits;	\
std::vector<int> o_m_mu_calo_nTRTHits;	\
std::vector<int>* m_mu_calo_nTRTHighTHits;	\
std::vector<int> o_m_mu_calo_nTRTHighTHits;	\
std::vector<int>* m_mu_calo_nBLSharedHits;	\
std::vector<int> o_m_mu_calo_nBLSharedHits;	\
std::vector<int>* m_mu_calo_nPixSharedHits;	\
std::vector<int> o_m_mu_calo_nPixSharedHits;	\
std::vector<int>* m_mu_calo_nPixHoles;	\
std::vector<int> o_m_mu_calo_nPixHoles;	\
std::vector<int>* m_mu_calo_nSCTSharedHits;	\
std::vector<int> o_m_mu_calo_nSCTSharedHits;	\
std::vector<int>* m_mu_calo_nSCTHoles;	\
std::vector<int> o_m_mu_calo_nSCTHoles;	\
std::vector<int>* m_mu_calo_nTRTOutliers;	\
std::vector<int> o_m_mu_calo_nTRTOutliers;	\
std::vector<int>* m_mu_calo_nTRTHighTOutliers;	\
std::vector<int> o_m_mu_calo_nTRTHighTOutliers;	\
std::vector<int>* m_mu_calo_nGangedPixels;	\
std::vector<int> o_m_mu_calo_nGangedPixels;	\
std::vector<int>* m_mu_calo_nPixelDeadSensors;	\
std::vector<int> o_m_mu_calo_nPixelDeadSensors;	\
std::vector<int>* m_mu_calo_nSCTDeadSensors;	\
std::vector<int> o_m_mu_calo_nSCTDeadSensors;	\
std::vector<int>* m_mu_calo_nTRTDeadStraws;	\
std::vector<int> o_m_mu_calo_nTRTDeadStraws;	\
std::vector<int>* m_mu_calo_expectBLayerHit;	\
std::vector<int> o_m_mu_calo_expectBLayerHit;	\
std::vector<int>* m_mu_calo_nMDTHits;	\
std::vector<int> o_m_mu_calo_nMDTHits;	\
std::vector<int>* m_mu_calo_nMDTHoles;	\
std::vector<int> o_m_mu_calo_nMDTHoles;	\
std::vector<int>* m_mu_calo_nCSCEtaHits;	\
std::vector<int> o_m_mu_calo_nCSCEtaHits;	\
std::vector<int>* m_mu_calo_nCSCEtaHoles;	\
std::vector<int> o_m_mu_calo_nCSCEtaHoles;	\
std::vector<int>* m_mu_calo_nCSCUnspoiledEtaHits;	\
std::vector<int> o_m_mu_calo_nCSCUnspoiledEtaHits;	\
std::vector<int>* m_mu_calo_nCSCPhiHits;	\
std::vector<int> o_m_mu_calo_nCSCPhiHits;	\
std::vector<int>* m_mu_calo_nCSCPhiHoles;	\
std::vector<int> o_m_mu_calo_nCSCPhiHoles;	\
std::vector<int>* m_mu_calo_nRPCEtaHits;	\
std::vector<int> o_m_mu_calo_nRPCEtaHits;	\
std::vector<int>* m_mu_calo_nRPCEtaHoles;	\
std::vector<int> o_m_mu_calo_nRPCEtaHoles;	\
std::vector<int>* m_mu_calo_nRPCPhiHits;	\
std::vector<int> o_m_mu_calo_nRPCPhiHits;	\
std::vector<int>* m_mu_calo_nRPCPhiHoles;	\
std::vector<int> o_m_mu_calo_nRPCPhiHoles;	\
std::vector<int>* m_mu_calo_nTGCEtaHits;	\
std::vector<int> o_m_mu_calo_nTGCEtaHits;	\
std::vector<int>* m_mu_calo_nTGCEtaHoles;	\
std::vector<int> o_m_mu_calo_nTGCEtaHoles;	\
std::vector<int>* m_mu_calo_nTGCPhiHits;	\
std::vector<int> o_m_mu_calo_nTGCPhiHits;	\
std::vector<int>* m_mu_calo_nTGCPhiHoles;	\
std::vector<int> o_m_mu_calo_nTGCPhiHoles;	\
std::vector<int>* m_mu_calo_hastrack;	\
std::vector<int> o_m_mu_calo_hastrack;	\
std::vector<float>* m_jet_AntiKt4TopoEM_emscale_E;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_emscale_E;	\
std::vector<float>* m_jet_AntiKt4TopoEM_emscale_pt;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_emscale_pt;	\
std::vector<float>* m_jet_AntiKt4TopoEM_emscale_m;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_emscale_m;	\
std::vector<float>* m_jet_AntiKt4TopoEM_emscale_eta;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_emscale_eta;	\
std::vector<float>* m_jet_AntiKt4TopoEM_emscale_phi;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_emscale_phi;	\
std::vector<float>* m_jet_AntiKt4TopoEM_jvtx_x;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_jvtx_x;	\
std::vector<float>* m_jet_AntiKt4TopoEM_jvtx_y;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_jvtx_y;	\
std::vector<float>* m_jet_AntiKt4TopoEM_jvtx_z;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_jvtx_z;	\
std::vector<float>* m_jet_AntiKt4TopoEM_jvtxf;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_jvtxf;	\
std::vector<std::vector<float> >* m_jet_AntiKt4TopoEM_jvtxfFull;	\
std::vector<std::vector<float> > o_m_jet_AntiKt4TopoEM_jvtxfFull;	\
Float_t m_MET_RefFinal_phi;	\
Float_t o_m_MET_RefFinal_phi;	\
Float_t m_MET_RefFinal_et;	\
Float_t o_m_MET_RefFinal_et;	\
Float_t m_MET_RefFinal_sumet;	\
Float_t o_m_MET_RefFinal_sumet;	\
Float_t m_MET_RefFinal_etx_CentralReg;	\
Float_t o_m_MET_RefFinal_etx_CentralReg;	\
Float_t m_MET_RefFinal_ety_CentralReg;	\
Float_t o_m_MET_RefFinal_ety_CentralReg;	\
Float_t m_MET_RefFinal_sumet_CentralReg;	\
Float_t o_m_MET_RefFinal_sumet_CentralReg;	\
Float_t m_MET_RefFinal_phi_CentralReg;	\
Float_t o_m_MET_RefFinal_phi_CentralReg;	\
Float_t m_MET_RefFinal_etx_EndcapRegion;	\
Float_t o_m_MET_RefFinal_etx_EndcapRegion;	\
Float_t m_MET_RefFinal_ety_EndcapRegion;	\
Float_t o_m_MET_RefFinal_ety_EndcapRegion;	\
Float_t m_MET_RefFinal_sumet_EndcapRegion;	\
Float_t o_m_MET_RefFinal_sumet_EndcapRegion;	\
Float_t m_MET_RefFinal_phi_EndcapRegion;	\
Float_t o_m_MET_RefFinal_phi_EndcapRegion;	\
Float_t m_MET_RefFinal_etx_ForwardReg;	\
Float_t o_m_MET_RefFinal_etx_ForwardReg;	\
Float_t m_MET_RefFinal_ety_ForwardReg;	\
Float_t o_m_MET_RefFinal_ety_ForwardReg;	\
Float_t m_MET_RefFinal_sumet_ForwardReg;	\
Float_t o_m_MET_RefFinal_sumet_ForwardReg;	\
Float_t m_MET_RefFinal_phi_ForwardReg;	\
Float_t o_m_MET_RefFinal_phi_ForwardReg;	\
Float_t m_MET_RefMuon_Track_phi;	\
Float_t o_m_MET_RefMuon_Track_phi;	\
Float_t m_MET_RefMuon_Track_et;	\
Float_t o_m_MET_RefMuon_Track_et;	\
Float_t m_MET_RefMuon_Track_sumet;	\
Float_t o_m_MET_RefMuon_Track_sumet;	\
Float_t m_MET_LocHadTopo_phi;	\
Float_t o_m_MET_LocHadTopo_phi;	\
Float_t m_MET_LocHadTopo_et;	\
Float_t o_m_MET_LocHadTopo_et;	\
Float_t m_MET_LocHadTopo_sumet;	\
Float_t o_m_MET_LocHadTopo_sumet;	\
Float_t m_MET_MuonBoy_phi;	\
Float_t o_m_MET_MuonBoy_phi;	\
Float_t m_MET_MuonBoy_et;	\
Float_t o_m_MET_MuonBoy_et;	\
Float_t m_MET_MuonBoy_sumet;	\
Float_t o_m_MET_MuonBoy_sumet;	\
Int_t m_vxp_n;	\
Int_t o_m_vxp_n;	\
std::vector<float>* m_vxp_x;	\
std::vector<float> o_m_vxp_x;	\
std::vector<float>* m_vxp_y;	\
std::vector<float> o_m_vxp_y;	\
std::vector<float>* m_vxp_z;	\
std::vector<float> o_m_vxp_z;	\
std::vector<float>* m_vxp_err_x;	\
std::vector<float> o_m_vxp_err_x;	\
std::vector<float>* m_vxp_err_y;	\
std::vector<float> o_m_vxp_err_y;	\
std::vector<float>* m_vxp_err_z;	\
std::vector<float> o_m_vxp_err_z;	\
std::vector<int>* m_vxp_type;	\
std::vector<int> o_m_vxp_type;	\
std::vector<float>* m_vxp_chi2;	\
std::vector<float> o_m_vxp_chi2;	\
std::vector<int>* m_vxp_ndof;	\
std::vector<int> o_m_vxp_ndof;	\
std::vector<float>* m_vxp_px;	\
std::vector<float> o_m_vxp_px;	\
std::vector<float>* m_vxp_py;	\
std::vector<float> o_m_vxp_py;	\
std::vector<float>* m_vxp_pz;	\
std::vector<float> o_m_vxp_pz;	\
std::vector<float>* m_vxp_E;	\
std::vector<float> o_m_vxp_E;	\
std::vector<float>* m_vxp_m;	\
std::vector<float> o_m_vxp_m;	\
std::vector<int>* m_vxp_nTracks;	\
std::vector<int> o_m_vxp_nTracks;	\
std::vector<float>* m_vxp_sumPt;	\
std::vector<float> o_m_vxp_sumPt;	\
std::vector<int>* m_vxp_trk_n;	\
std::vector<int> o_m_vxp_trk_n;	\
std::vector<std::vector<float> >* m_vxp_trk_weight;	\
std::vector<std::vector<float> > o_m_vxp_trk_weight;	\
std::vector<std::vector<int> >* m_vxp_trk_index;	\
std::vector<std::vector<int> > o_m_vxp_trk_index;
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define CONNECT( stringTREENAME )                      \
  {    ConnectVariable( (stringTREENAME), "RunNumber", m_RunNumber );	\
    ConnectVariable( (stringTREENAME), "EventNumber", m_EventNumber );	\
    ConnectVariable( (stringTREENAME), "lbn", m_lbn );	\
    ConnectVariable( (stringTREENAME), "actualIntPerXing", m_actualIntPerXing );	\
    ConnectVariable( (stringTREENAME), "averageIntPerXing", m_averageIntPerXing );	\
    ConnectVariable( (stringTREENAME), "EF_e18_medium1_g25_loose", m_EF_e18_medium1_g25_loose );	\
    ConnectVariable( (stringTREENAME), "EF_e24vhi_medium1", m_EF_e24vhi_medium1 );	\
    ConnectVariable( (stringTREENAME), "EF_e60_medium1", m_EF_e60_medium1 );	\
    ConnectVariable( (stringTREENAME), "EF_2e12Tvh_loose1", m_EF_2e12Tvh_loose1 );	\
    ConnectVariable( (stringTREENAME), "EF_mu24i_tight", m_EF_mu24i_tight );	\
    ConnectVariable( (stringTREENAME), "EF_mu36_tight", m_EF_mu36_tight );	\
    ConnectVariable( (stringTREENAME), "EF_2mu13", m_EF_2mu13 );	\
    ConnectVariable( (stringTREENAME), "EF_2mu10_MSonly_g10_loose", m_EF_2mu10_MSonly_g10_loose );	\
    ConnectVariable( (stringTREENAME), "EF_mu18_tight_mu8_EFFS", m_EF_mu18tight_mu8_EFFS );	\
    ConnectVariable( (stringTREENAME), "EF_mu18_2g10_loose", m_EF_mu18_2g10_loose );	\
    ConnectVariable( (stringTREENAME), "EF_mu18_2g10_medium", m_EF_mu18_2g10_medium );	\
    ConnectVariable( (stringTREENAME), "EF_3g15vh_loose", m_EF_3g15vh_loose );	\
    ConnectVariable( (stringTREENAME), "ph_n", m_ph_n );	\
    ConnectVariable( (stringTREENAME), "ph_E", m_ph_E );	\
    ConnectVariable( (stringTREENAME), "ph_Et", m_ph_Et );	\
    ConnectVariable( (stringTREENAME), "ph_pt", m_ph_pt );	\
    ConnectVariable( (stringTREENAME), "ph_m", m_ph_m );	\
    ConnectVariable( (stringTREENAME), "ph_eta", m_ph_eta );	\
    ConnectVariable( (stringTREENAME), "ph_phi", m_ph_phi );	\
    ConnectVariable( (stringTREENAME), "ph_px", m_ph_px );	\
    ConnectVariable( (stringTREENAME), "ph_py", m_ph_py );	\
    ConnectVariable( (stringTREENAME), "ph_pz", m_ph_pz );	\
    ConnectVariable( (stringTREENAME), "ph_author", m_ph_author );	\
    ConnectVariable( (stringTREENAME), "ph_isRecovered", m_ph_isRecovered );	\
    ConnectVariable( (stringTREENAME), "ph_isEM", m_ph_isEM );	\
    ConnectVariable( (stringTREENAME), "ph_OQ", m_ph_OQ );	\
    ConnectVariable( (stringTREENAME), "ph_convFlag", m_ph_convFlag );	\
    ConnectVariable( (stringTREENAME), "ph_isConv", m_ph_isConv );	\
    ConnectVariable( (stringTREENAME), "ph_nConv", m_ph_nConv );	\
    ConnectVariable( (stringTREENAME), "ph_nSingleTrackConv", m_ph_nSingleTrackConv );	\
    ConnectVariable( (stringTREENAME), "ph_nDoubleTrackConv", m_ph_nDoubleTrackConv );	\
    ConnectVariable( (stringTREENAME), "ph_loose", m_ph_loose );	\
    ConnectVariable( (stringTREENAME), "ph_tight", m_ph_tight );	\
    ConnectVariable( (stringTREENAME), "ph_looseAR", m_ph_looseAR );	\
    ConnectVariable( (stringTREENAME), "ph_tightAR", m_ph_tightAR );	\
    ConnectVariable( (stringTREENAME), "ph_goodOQ", m_ph_goodOQ );	\
    ConnectVariable( (stringTREENAME), "ph_Ethad", m_ph_Ethad );	\
    ConnectVariable( (stringTREENAME), "ph_Ethad1", m_ph_Ethad1 );	\
    ConnectVariable( (stringTREENAME), "ph_E033", m_ph_E033 );	\
    ConnectVariable( (stringTREENAME), "ph_f1", m_ph_f1 );	\
    ConnectVariable( (stringTREENAME), "ph_f1core", m_ph_f1core );	\
    ConnectVariable( (stringTREENAME), "ph_Emins1", m_ph_Emins1 );	\
    ConnectVariable( (stringTREENAME), "ph_fside", m_ph_fside );	\
    ConnectVariable( (stringTREENAME), "ph_Emax2", m_ph_Emax2 );	\
    ConnectVariable( (stringTREENAME), "ph_ws3", m_ph_ws3 );	\
    ConnectVariable( (stringTREENAME), "ph_wstot", m_ph_wstot );	\
    ConnectVariable( (stringTREENAME), "ph_E132", m_ph_E132 );	\
    ConnectVariable( (stringTREENAME), "ph_E1152", m_ph_E1152 );	\
    ConnectVariable( (stringTREENAME), "ph_emaxs1", m_ph_emaxs1 );	\
    ConnectVariable( (stringTREENAME), "ph_deltaEs", m_ph_deltaEs );	\
    ConnectVariable( (stringTREENAME), "ph_E233", m_ph_E233 );	\
    ConnectVariable( (stringTREENAME), "ph_E237", m_ph_E237 );	\
    ConnectVariable( (stringTREENAME), "ph_E277", m_ph_E277 );	\
    ConnectVariable( (stringTREENAME), "ph_weta2", m_ph_weta2 );	\
    ConnectVariable( (stringTREENAME), "ph_f3", m_ph_f3 );	\
    ConnectVariable( (stringTREENAME), "ph_f3core", m_ph_f3core );	\
    ConnectVariable( (stringTREENAME), "ph_rphiallcalo", m_ph_rphiallcalo );	\
    ConnectVariable( (stringTREENAME), "ph_Etcone45", m_ph_Etcone45 );	\
    ConnectVariable( (stringTREENAME), "ph_Etcone15", m_ph_Etcone15 );	\
    ConnectVariable( (stringTREENAME), "ph_Etcone20", m_ph_Etcone20 );	\
    ConnectVariable( (stringTREENAME), "ph_Etcone25", m_ph_Etcone25 );	\
    ConnectVariable( (stringTREENAME), "ph_Etcone30", m_ph_Etcone30 );	\
    ConnectVariable( (stringTREENAME), "ph_Etcone35", m_ph_Etcone35 );	\
    ConnectVariable( (stringTREENAME), "ph_Etcone40", m_ph_Etcone40 );	\
    ConnectVariable( (stringTREENAME), "ph_ptcone20", m_ph_ptcone20 );	\
    ConnectVariable( (stringTREENAME), "ph_ptcone30", m_ph_ptcone30 );	\
    ConnectVariable( (stringTREENAME), "ph_ptcone40", m_ph_ptcone40 );	\
    ConnectVariable( (stringTREENAME), "ph_Etcone15_pt_corrected", m_ph_Etcone15_pt_corrected );	\
    ConnectVariable( (stringTREENAME), "ph_Etcone20_pt_corrected", m_ph_Etcone20_pt_corrected );	\
    ConnectVariable( (stringTREENAME), "ph_Etcone25_pt_corrected", m_ph_Etcone25_pt_corrected );	\
    ConnectVariable( (stringTREENAME), "ph_Etcone30_pt_corrected", m_ph_Etcone30_pt_corrected );	\
    ConnectVariable( (stringTREENAME), "ph_Etcone35_pt_corrected", m_ph_Etcone35_pt_corrected );	\
    ConnectVariable( (stringTREENAME), "ph_Etcone40_pt_corrected", m_ph_Etcone40_pt_corrected );	\
    ConnectVariable( (stringTREENAME), "ph_hasconv", m_ph_hasconv );	\
    ConnectVariable( (stringTREENAME), "ph_Rconv", m_ph_Rconv );	\
    ConnectVariable( (stringTREENAME), "ph_zconv", m_ph_zconv );	\
    ConnectVariable( (stringTREENAME), "ph_ptconv", m_ph_ptconv );	\
    ConnectVariable( (stringTREENAME), "ph_pzconv", m_ph_pzconv );	\
    ConnectVariable( (stringTREENAME), "ph_reta", m_ph_reta );	\
    ConnectVariable( (stringTREENAME), "ph_rphi", m_ph_rphi );	\
    ConnectVariable( (stringTREENAME), "ph_photonweight", m_ph_photonweight );	\
    ConnectVariable( (stringTREENAME), "ph_photonbgweight", m_ph_photonbgweight );	\
    ConnectVariable( (stringTREENAME), "ph_neuralnet", m_ph_neuralnet );	\
    ConnectVariable( (stringTREENAME), "ph_zvertex", m_ph_zvertex );	\
    ConnectVariable( (stringTREENAME), "ph_etap", m_ph_etap );	\
    ConnectVariable( (stringTREENAME), "ph_cl_E", m_ph_cl_E );	\
    ConnectVariable( (stringTREENAME), "ph_cl_pt", m_ph_cl_pt );	\
    ConnectVariable( (stringTREENAME), "ph_cl_eta", m_ph_cl_eta );	\
    ConnectVariable( (stringTREENAME), "ph_cl_phi", m_ph_cl_phi );	\
    ConnectVariable( (stringTREENAME), "ph_Es0", m_ph_Es0 );	\
    ConnectVariable( (stringTREENAME), "ph_etas0", m_ph_etas0 );	\
    ConnectVariable( (stringTREENAME), "ph_phis0", m_ph_phis0 );	\
    ConnectVariable( (stringTREENAME), "ph_Es1", m_ph_Es1 );	\
    ConnectVariable( (stringTREENAME), "ph_etas1", m_ph_etas1 );	\
    ConnectVariable( (stringTREENAME), "ph_phis1", m_ph_phis1 );	\
    ConnectVariable( (stringTREENAME), "ph_Es2", m_ph_Es2 );	\
    ConnectVariable( (stringTREENAME), "ph_etas2", m_ph_etas2 );	\
    ConnectVariable( (stringTREENAME), "ph_phis2", m_ph_phis2 );	\
    ConnectVariable( (stringTREENAME), "ph_Es3", m_ph_Es3 );	\
    ConnectVariable( (stringTREENAME), "ph_etas3", m_ph_etas3 );	\
    ConnectVariable( (stringTREENAME), "ph_phis3", m_ph_phis3 );	\
    ConnectVariable( (stringTREENAME), "ph_deltaEmax2", m_ph_deltaEmax2 );	\
    ConnectVariable( (stringTREENAME), "ph_isIso", m_ph_isIso );	\
    ConnectVariable( (stringTREENAME), "ph_mvaptcone20", m_ph_mvaptcone20 );	\
    ConnectVariable( (stringTREENAME), "ph_mvaptcone30", m_ph_mvaptcone30 );	\
    ConnectVariable( (stringTREENAME), "ph_mvaptcone40", m_ph_mvaptcone40 );	\
    ConnectVariable( (stringTREENAME), "ph_topoEtcone20", m_ph_topoEtcone20 );	\
    ConnectVariable( (stringTREENAME), "ph_topoEtcone40", m_ph_topoEtcone40 );	\
    ConnectVariable( (stringTREENAME), "ph_topoEtcone60", m_ph_topoEtcone60 );	\
    ConnectVariable( (stringTREENAME), "ph_topoEtcone20_corrected", m_ph_topoEtcone20_corrected );	\
    ConnectVariable( (stringTREENAME), "ph_topoEtcone30_corrected", m_ph_topoEtcone30_corrected );	\
    ConnectVariable( (stringTREENAME), "ph_topoEtcone40_corrected", m_ph_topoEtcone40_corrected );	\
    ConnectVariable( (stringTREENAME), "ph_Etcone40_ED_corrected", m_ph_Etcone40_ED_corrected );	\
    ConnectVariable( (stringTREENAME), "ph_Etcone40_corrected", m_ph_Etcone40_corrected );	\
    ConnectVariable( (stringTREENAME), "ph_ED_median", m_ph_ED_median );	\
    ConnectVariable( (stringTREENAME), "ph_ED_sigma", m_ph_ED_sigma );	\
    ConnectVariable( (stringTREENAME), "ph_ED_Njets", m_ph_ED_Njets );	\
    ConnectVariable( (stringTREENAME), "mu_staco_n", m_mu_staco_n );	\
    ConnectVariable( (stringTREENAME), "mu_staco_E", m_mu_staco_E );	\
    ConnectVariable( (stringTREENAME), "mu_staco_pt", m_mu_staco_pt );	\
    ConnectVariable( (stringTREENAME), "mu_staco_m", m_mu_staco_m );	\
    ConnectVariable( (stringTREENAME), "mu_staco_eta", m_mu_staco_eta );	\
    ConnectVariable( (stringTREENAME), "mu_staco_phi", m_mu_staco_phi );	\
    ConnectVariable( (stringTREENAME), "mu_staco_px", m_mu_staco_px );	\
    ConnectVariable( (stringTREENAME), "mu_staco_py", m_mu_staco_py );	\
    ConnectVariable( (stringTREENAME), "mu_staco_pz", m_mu_staco_pz );	\
    ConnectVariable( (stringTREENAME), "mu_staco_charge", m_mu_staco_charge );	\
    ConnectVariable( (stringTREENAME), "mu_staco_allauthor", m_mu_staco_allauthor );	\
    ConnectVariable( (stringTREENAME), "mu_staco_author", m_mu_staco_author );	\
    ConnectVariable( (stringTREENAME), "mu_staco_beta", m_mu_staco_beta );	\
    ConnectVariable( (stringTREENAME), "mu_staco_isMuonLikelihood", m_mu_staco_isMuonLikelihood );	\
    ConnectVariable( (stringTREENAME), "mu_staco_etcone20", m_mu_staco_etcone20 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_etcone30", m_mu_staco_etcone30 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_etcone40", m_mu_staco_etcone40 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nucone20", m_mu_staco_nucone20 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nucone30", m_mu_staco_nucone30 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nucone40", m_mu_staco_nucone40 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_ptcone20", m_mu_staco_ptcone20 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_ptcone30", m_mu_staco_ptcone30 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_ptcone40", m_mu_staco_ptcone40 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_isStandAloneMuon", m_mu_staco_isStandAloneMuon );	\
    ConnectVariable( (stringTREENAME), "mu_staco_isCombinedMuon", m_mu_staco_isCombinedMuon );	\
    ConnectVariable( (stringTREENAME), "mu_staco_isCaloMuonId", m_mu_staco_isCaloMuonId );	\
    ConnectVariable( (stringTREENAME), "mu_staco_loose", m_mu_staco_loose );	\
    ConnectVariable( (stringTREENAME), "mu_staco_medium", m_mu_staco_medium );	\
    ConnectVariable( (stringTREENAME), "mu_staco_tight", m_mu_staco_tight );	\
    ConnectVariable( (stringTREENAME), "mu_staco_d0_exPV", m_mu_staco_d0_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_z0_exPV", m_mu_staco_z0_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_phi_exPV", m_mu_staco_phi_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_theta_exPV", m_mu_staco_theta_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_qoverp_exPV", m_mu_staco_qoverp_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_z0_exPV", m_mu_staco_id_z0_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_phi_exPV", m_mu_staco_id_phi_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_theta_exPV", m_mu_staco_id_theta_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_qoverp_exPV", m_mu_staco_id_qoverp_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_z0", m_mu_staco_id_z0 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_phi", m_mu_staco_id_phi );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_theta", m_mu_staco_id_theta );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_qoverp", m_mu_staco_id_qoverp );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nOutliersOnTrack", m_mu_staco_nOutliersOnTrack );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nBLHits", m_mu_staco_nBLHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nPixHits", m_mu_staco_nPixHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nSCTHits", m_mu_staco_nSCTHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nTRTHits", m_mu_staco_nTRTHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nTRTHighTHits", m_mu_staco_nTRTHighTHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nBLSharedHits", m_mu_staco_nBLSharedHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nPixSharedHits", m_mu_staco_nPixSharedHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nPixHoles", m_mu_staco_nPixHoles );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nSCTSharedHits", m_mu_staco_nSCTSharedHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nSCTHoles", m_mu_staco_nSCTHoles );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nTRTOutliers", m_mu_staco_nTRTOutliers );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nTRTHighTOutliers", m_mu_staco_nTRTHighTOutliers );	\
    ConnectVariable( (stringTREENAME), "mu_staco_expectBLayerHit", m_mu_staco_expectBLayerHit );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackd0", m_mu_staco_trackd0 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackz0", m_mu_staco_trackz0 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackphi", m_mu_staco_trackphi );	\
    ConnectVariable( (stringTREENAME), "mu_staco_tracktheta", m_mu_staco_tracktheta );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackqoverp", m_mu_staco_trackqoverp );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackd0beam", m_mu_staco_trackd0beam );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackz0beam", m_mu_staco_trackz0beam );	\
    ConnectVariable( (stringTREENAME), "mu_staco_tracksigd0beam", m_mu_staco_tracksigd0beam );	\
    ConnectVariable( (stringTREENAME), "mu_staco_tracksigz0beam", m_mu_staco_tracksigz0beam );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackd0pv", m_mu_staco_trackd0pv );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackz0pv", m_mu_staco_trackz0pv );	\
    ConnectVariable( (stringTREENAME), "mu_staco_tracksigd0pv", m_mu_staco_tracksigd0pv );	\
    ConnectVariable( (stringTREENAME), "mu_staco_tracksigz0pv", m_mu_staco_tracksigz0pv );	\
    ConnectVariable( (stringTREENAME), "mu_calo_n", m_mu_calo_n );	\
    ConnectVariable( (stringTREENAME), "mu_calo_E", m_mu_calo_E );	\
    ConnectVariable( (stringTREENAME), "mu_calo_pt", m_mu_calo_pt );	\
    ConnectVariable( (stringTREENAME), "mu_calo_m", m_mu_calo_m );	\
    ConnectVariable( (stringTREENAME), "mu_calo_eta", m_mu_calo_eta );	\
    ConnectVariable( (stringTREENAME), "mu_calo_phi", m_mu_calo_phi );	\
    ConnectVariable( (stringTREENAME), "mu_calo_px", m_mu_calo_px );	\
    ConnectVariable( (stringTREENAME), "mu_calo_py", m_mu_calo_py );	\
    ConnectVariable( (stringTREENAME), "mu_calo_pz", m_mu_calo_pz );	\
    ConnectVariable( (stringTREENAME), "mu_calo_charge", m_mu_calo_charge );	\
    ConnectVariable( (stringTREENAME), "mu_calo_allauthor", m_mu_calo_allauthor );	\
    ConnectVariable( (stringTREENAME), "mu_calo_author", m_mu_calo_author );	\
    ConnectVariable( (stringTREENAME), "mu_calo_isMuonLikelihood", m_mu_calo_isMuonLikelihood );	\
    ConnectVariable( (stringTREENAME), "mu_calo_etcone20", m_mu_calo_etcone20 );	\
    ConnectVariable( (stringTREENAME), "mu_calo_etcone30", m_mu_calo_etcone30 );	\
    ConnectVariable( (stringTREENAME), "mu_calo_etcone40", m_mu_calo_etcone40 );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nucone20", m_mu_calo_nucone20 );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nucone30", m_mu_calo_nucone30 );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nucone40", m_mu_calo_nucone40 );	\
    ConnectVariable( (stringTREENAME), "mu_calo_ptcone20", m_mu_calo_ptcone20 );	\
    ConnectVariable( (stringTREENAME), "mu_calo_ptcone30", m_mu_calo_ptcone30 );	\
    ConnectVariable( (stringTREENAME), "mu_calo_ptcone40", m_mu_calo_ptcone40 );	\
    ConnectVariable( (stringTREENAME), "mu_calo_scatteringCurvatureSignificance", m_mu_calo_scatteringCurvatureSignificance );	\
    ConnectVariable( (stringTREENAME), "mu_calo_scatteringNeighbourSignificance", m_mu_calo_scatteringNeighbourSignificance );	\
    ConnectVariable( (stringTREENAME), "mu_calo_momentumBalanceSignificance", m_mu_calo_momentumBalanceSignificance );	\
    ConnectVariable( (stringTREENAME), "mu_calo_energyLossPar", m_mu_calo_energyLossPar );	\
    ConnectVariable( (stringTREENAME), "mu_calo_energyLossErr", m_mu_calo_energyLossErr );	\
    ConnectVariable( (stringTREENAME), "mu_calo_etCore", m_mu_calo_etCore );	\
    ConnectVariable( (stringTREENAME), "mu_calo_energyLossType", m_mu_calo_energyLossType );	\
    ConnectVariable( (stringTREENAME), "mu_calo_caloMuonIdTag", m_mu_calo_caloMuonIdTag );	\
    ConnectVariable( (stringTREENAME), "mu_calo_caloLRLikelihood", m_mu_calo_caloLRLikelihood );	\
    ConnectVariable( (stringTREENAME), "mu_calo_loose", m_mu_calo_loose );	\
    ConnectVariable( (stringTREENAME), "mu_calo_medium", m_mu_calo_medium );	\
    ConnectVariable( (stringTREENAME), "mu_calo_tight", m_mu_calo_tight );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nOutliersOnTrack", m_mu_calo_nOutliersOnTrack );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nBLHits", m_mu_calo_nBLHits );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nPixHits", m_mu_calo_nPixHits );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nSCTHits", m_mu_calo_nSCTHits );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nTRTHits", m_mu_calo_nTRTHits );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nTRTHighTHits", m_mu_calo_nTRTHighTHits );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nBLSharedHits", m_mu_calo_nBLSharedHits );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nPixSharedHits", m_mu_calo_nPixSharedHits );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nPixHoles", m_mu_calo_nPixHoles );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nSCTSharedHits", m_mu_calo_nSCTSharedHits );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nSCTHoles", m_mu_calo_nSCTHoles );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nTRTOutliers", m_mu_calo_nTRTOutliers );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nTRTHighTOutliers", m_mu_calo_nTRTHighTOutliers );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nGangedPixels", m_mu_calo_nGangedPixels );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nPixelDeadSensors", m_mu_calo_nPixelDeadSensors );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nSCTDeadSensors", m_mu_calo_nSCTDeadSensors );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nTRTDeadStraws", m_mu_calo_nTRTDeadStraws );	\
    ConnectVariable( (stringTREENAME), "mu_calo_expectBLayerHit", m_mu_calo_expectBLayerHit );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nMDTHits", m_mu_calo_nMDTHits );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nMDTHoles", m_mu_calo_nMDTHoles );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nCSCEtaHits", m_mu_calo_nCSCEtaHits );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nCSCEtaHoles", m_mu_calo_nCSCEtaHoles );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nCSCUnspoiledEtaHits", m_mu_calo_nCSCUnspoiledEtaHits );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nCSCPhiHits", m_mu_calo_nCSCPhiHits );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nCSCPhiHoles", m_mu_calo_nCSCPhiHoles );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nRPCEtaHits", m_mu_calo_nRPCEtaHits );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nRPCEtaHoles", m_mu_calo_nRPCEtaHoles );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nRPCPhiHits", m_mu_calo_nRPCPhiHits );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nRPCPhiHoles", m_mu_calo_nRPCPhiHoles );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nTGCEtaHits", m_mu_calo_nTGCEtaHits );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nTGCEtaHoles", m_mu_calo_nTGCEtaHoles );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nTGCPhiHits", m_mu_calo_nTGCPhiHits );	\
    ConnectVariable( (stringTREENAME), "mu_calo_nTGCPhiHoles", m_mu_calo_nTGCPhiHoles );	\
    ConnectVariable( (stringTREENAME), "mu_calo_hastrack", m_mu_calo_hastrack );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_emscale_E", m_jet_AntiKt4TopoEM_emscale_E );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_emscale_pt", m_jet_AntiKt4TopoEM_emscale_pt );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_emscale_m", m_jet_AntiKt4TopoEM_emscale_m );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_emscale_eta", m_jet_AntiKt4TopoEM_emscale_eta );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_emscale_phi", m_jet_AntiKt4TopoEM_emscale_phi );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_jvtx_x", m_jet_AntiKt4TopoEM_jvtx_x );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_jvtx_y", m_jet_AntiKt4TopoEM_jvtx_y );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_jvtx_z", m_jet_AntiKt4TopoEM_jvtx_z );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_jvtxf", m_jet_AntiKt4TopoEM_jvtxf );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_jvtxfFull", m_jet_AntiKt4TopoEM_jvtxfFull );	\
    ConnectVariable( (stringTREENAME), "MET_RefFinal_phi", m_MET_RefFinal_phi );	\
    ConnectVariable( (stringTREENAME), "MET_RefFinal_et", m_MET_RefFinal_et );	\
    ConnectVariable( (stringTREENAME), "MET_RefFinal_sumet", m_MET_RefFinal_sumet );	\
    ConnectVariable( (stringTREENAME), "MET_RefFinal_etx_CentralReg", m_MET_RefFinal_etx_CentralReg );	\
    ConnectVariable( (stringTREENAME), "MET_RefFinal_ety_CentralReg", m_MET_RefFinal_ety_CentralReg );	\
    ConnectVariable( (stringTREENAME), "MET_RefFinal_sumet_CentralReg", m_MET_RefFinal_sumet_CentralReg );	\
    ConnectVariable( (stringTREENAME), "MET_RefFinal_phi_CentralReg", m_MET_RefFinal_phi_CentralReg );	\
    ConnectVariable( (stringTREENAME), "MET_RefFinal_etx_EndcapRegion", m_MET_RefFinal_etx_EndcapRegion );	\
    ConnectVariable( (stringTREENAME), "MET_RefFinal_ety_EndcapRegion", m_MET_RefFinal_ety_EndcapRegion );	\
    ConnectVariable( (stringTREENAME), "MET_RefFinal_sumet_EndcapRegion", m_MET_RefFinal_sumet_EndcapRegion );	\
    ConnectVariable( (stringTREENAME), "MET_RefFinal_phi_EndcapRegion", m_MET_RefFinal_phi_EndcapRegion );	\
    ConnectVariable( (stringTREENAME), "MET_RefFinal_etx_ForwardReg", m_MET_RefFinal_etx_ForwardReg );	\
    ConnectVariable( (stringTREENAME), "MET_RefFinal_ety_ForwardReg", m_MET_RefFinal_ety_ForwardReg );	\
    ConnectVariable( (stringTREENAME), "MET_RefFinal_sumet_ForwardReg", m_MET_RefFinal_sumet_ForwardReg );	\
    ConnectVariable( (stringTREENAME), "MET_RefFinal_phi_ForwardReg", m_MET_RefFinal_phi_ForwardReg );	\
    ConnectVariable( (stringTREENAME), "MET_RefMuon_Track_phi", m_MET_RefMuon_Track_phi );	\
    ConnectVariable( (stringTREENAME), "MET_RefMuon_Track_et", m_MET_RefMuon_Track_et );	\
    ConnectVariable( (stringTREENAME), "MET_RefMuon_Track_sumet", m_MET_RefMuon_Track_sumet );	\
    ConnectVariable( (stringTREENAME), "MET_LocHadTopo_phi", m_MET_LocHadTopo_phi );	\
    ConnectVariable( (stringTREENAME), "MET_LocHadTopo_et", m_MET_LocHadTopo_et );	\
    ConnectVariable( (stringTREENAME), "MET_LocHadTopo_sumet", m_MET_LocHadTopo_sumet );	\
    ConnectVariable( (stringTREENAME), "MET_MuonBoy_phi", m_MET_MuonBoy_phi );	\
    ConnectVariable( (stringTREENAME), "MET_MuonBoy_et", m_MET_MuonBoy_et );	\
    ConnectVariable( (stringTREENAME), "MET_MuonBoy_sumet", m_MET_MuonBoy_sumet );	\
    ConnectVariable( (stringTREENAME), "vxp_n", m_vxp_n );	\
    ConnectVariable( (stringTREENAME), "vxp_x", m_vxp_x );	\
    ConnectVariable( (stringTREENAME), "vxp_y", m_vxp_y );	\
    ConnectVariable( (stringTREENAME), "vxp_z", m_vxp_z );	\
    ConnectVariable( (stringTREENAME), "vxp_err_x", m_vxp_err_x );	\
    ConnectVariable( (stringTREENAME), "vxp_err_y", m_vxp_err_y );	\
    ConnectVariable( (stringTREENAME), "vxp_err_z", m_vxp_err_z );	\
    ConnectVariable( (stringTREENAME), "vxp_type", m_vxp_type );	\
    ConnectVariable( (stringTREENAME), "vxp_chi2", m_vxp_chi2 );	\
    ConnectVariable( (stringTREENAME), "vxp_ndof", m_vxp_ndof );	\
    ConnectVariable( (stringTREENAME), "vxp_px", m_vxp_px );	\
    ConnectVariable( (stringTREENAME), "vxp_py", m_vxp_py );	\
    ConnectVariable( (stringTREENAME), "vxp_pz", m_vxp_pz );	\
    ConnectVariable( (stringTREENAME), "vxp_E", m_vxp_E );	\
    ConnectVariable( (stringTREENAME), "vxp_m", m_vxp_m );	\
    ConnectVariable( (stringTREENAME), "vxp_nTracks", m_vxp_nTracks );	\
    ConnectVariable( (stringTREENAME), "vxp_sumPt", m_vxp_sumPt );	\
    ConnectVariable( (stringTREENAME), "vxp_trk_n", m_vxp_trk_n );	\
    ConnectVariable( (stringTREENAME), "vxp_trk_weight", m_vxp_trk_weight );	\
    ConnectVariable( (stringTREENAME), "vxp_trk_index", m_vxp_trk_index );	\
  }
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define DECLARE( stringTREENAME )                      \
  {    DeclareVariable( o_m_RunNumber, "RunNumber" );	\
    DeclareVariable( o_m_EventNumber, "EventNumber" );	\
    DeclareVariable( o_m_lbn, "lbn" );	\
    DeclareVariable( o_m_actualIntPerXing, "actualIntPerXing" );	\
    DeclareVariable( o_m_averageIntPerXing, "averageIntPerXing" );	\
    DeclareVariable( o_m_EF_e18_medium1_g25_loose, "EF_e18_medium1_g25_loose" );	\
    DeclareVariable( o_m_EF_e24vhi_medium1, "EF_e24vhi_medium1" );	\
    DeclareVariable( o_m_EF_e60_medium1, "EF_e60_medium1" );	\
    DeclareVariable( o_m_EF_2e12Tvh_loose1, "EF_2e12Tvh_loose1" );	\
    DeclareVariable( o_m_EF_mu24i_tight, "EF_mu24i_tight" );	\
    DeclareVariable( o_m_EF_mu36_tight, "EF_mu36_tight" );	\
    DeclareVariable( o_m_EF_2mu13, "EF_2mu13" );	\
    DeclareVariable( o_m_EF_2mu10_MSonly_g10_loose, "EF_2mu10_MSonly_g10_loose" );	\
    DeclareVariable( o_m_EF_mu18tight_mu8_EFFS, "EF_mu18_tight_mu8_EFFS" );	\
    DeclareVariable( o_m_EF_mu18_2g10_loose, "EF_mu18_2g10_loose" );	\
    DeclareVariable( o_m_EF_mu18_2g10_medium, "EF_mu18_2g10_medium" );	\
    DeclareVariable( o_m_EF_3g15vh_loose, "EF_3g15vh_loose" );	\
    DeclareVariable( o_m_ph_n, "ph_n" );	\
    DeclareVariable( o_m_ph_E, "ph_E" );	\
    DeclareVariable( o_m_ph_Et, "ph_Et" );	\
    DeclareVariable( o_m_ph_pt, "ph_pt" );	\
    DeclareVariable( o_m_ph_m, "ph_m" );	\
    DeclareVariable( o_m_ph_eta, "ph_eta" );	\
    DeclareVariable( o_m_ph_phi, "ph_phi" );	\
    DeclareVariable( o_m_ph_px, "ph_px" );	\
    DeclareVariable( o_m_ph_py, "ph_py" );	\
    DeclareVariable( o_m_ph_pz, "ph_pz" );	\
    DeclareVariable( o_m_ph_author, "ph_author" );	\
    DeclareVariable( o_m_ph_isRecovered, "ph_isRecovered" );	\
    DeclareVariable( o_m_ph_isEM, "ph_isEM" );	\
    DeclareVariable( o_m_ph_OQ, "ph_OQ" );	\
    DeclareVariable( o_m_ph_convFlag, "ph_convFlag" );	\
    DeclareVariable( o_m_ph_isConv, "ph_isConv" );	\
    DeclareVariable( o_m_ph_nConv, "ph_nConv" );	\
    DeclareVariable( o_m_ph_nSingleTrackConv, "ph_nSingleTrackConv" );	\
    DeclareVariable( o_m_ph_nDoubleTrackConv, "ph_nDoubleTrackConv" );	\
    DeclareVariable( o_m_ph_loose, "ph_loose" );	\
    DeclareVariable( o_m_ph_tight, "ph_tight" );	\
    DeclareVariable( o_m_ph_looseAR, "ph_looseAR" );	\
    DeclareVariable( o_m_ph_tightAR, "ph_tightAR" );	\
    DeclareVariable( o_m_ph_goodOQ, "ph_goodOQ" );	\
    DeclareVariable( o_m_ph_Ethad, "ph_Ethad" );	\
    DeclareVariable( o_m_ph_Ethad1, "ph_Ethad1" );	\
    DeclareVariable( o_m_ph_E033, "ph_E033" );	\
    DeclareVariable( o_m_ph_f1, "ph_f1" );	\
    DeclareVariable( o_m_ph_f1core, "ph_f1core" );	\
    DeclareVariable( o_m_ph_Emins1, "ph_Emins1" );	\
    DeclareVariable( o_m_ph_fside, "ph_fside" );	\
    DeclareVariable( o_m_ph_Emax2, "ph_Emax2" );	\
    DeclareVariable( o_m_ph_ws3, "ph_ws3" );	\
    DeclareVariable( o_m_ph_wstot, "ph_wstot" );	\
    DeclareVariable( o_m_ph_E132, "ph_E132" );	\
    DeclareVariable( o_m_ph_E1152, "ph_E1152" );	\
    DeclareVariable( o_m_ph_emaxs1, "ph_emaxs1" );	\
    DeclareVariable( o_m_ph_deltaEs, "ph_deltaEs" );	\
    DeclareVariable( o_m_ph_E233, "ph_E233" );	\
    DeclareVariable( o_m_ph_E237, "ph_E237" );	\
    DeclareVariable( o_m_ph_E277, "ph_E277" );	\
    DeclareVariable( o_m_ph_weta2, "ph_weta2" );	\
    DeclareVariable( o_m_ph_f3, "ph_f3" );	\
    DeclareVariable( o_m_ph_f3core, "ph_f3core" );	\
    DeclareVariable( o_m_ph_rphiallcalo, "ph_rphiallcalo" );	\
    DeclareVariable( o_m_ph_Etcone45, "ph_Etcone45" );	\
    DeclareVariable( o_m_ph_Etcone15, "ph_Etcone15" );	\
    DeclareVariable( o_m_ph_Etcone20, "ph_Etcone20" );	\
    DeclareVariable( o_m_ph_Etcone25, "ph_Etcone25" );	\
    DeclareVariable( o_m_ph_Etcone30, "ph_Etcone30" );	\
    DeclareVariable( o_m_ph_Etcone35, "ph_Etcone35" );	\
    DeclareVariable( o_m_ph_Etcone40, "ph_Etcone40" );	\
    DeclareVariable( o_m_ph_ptcone20, "ph_ptcone20" );	\
    DeclareVariable( o_m_ph_ptcone30, "ph_ptcone30" );	\
    DeclareVariable( o_m_ph_ptcone40, "ph_ptcone40" );	\
    DeclareVariable( o_m_ph_Etcone15_pt_corrected, "ph_Etcone15_pt_corrected" );	\
    DeclareVariable( o_m_ph_Etcone20_pt_corrected, "ph_Etcone20_pt_corrected" );	\
    DeclareVariable( o_m_ph_Etcone25_pt_corrected, "ph_Etcone25_pt_corrected" );	\
    DeclareVariable( o_m_ph_Etcone30_pt_corrected, "ph_Etcone30_pt_corrected" );	\
    DeclareVariable( o_m_ph_Etcone35_pt_corrected, "ph_Etcone35_pt_corrected" );	\
    DeclareVariable( o_m_ph_Etcone40_pt_corrected, "ph_Etcone40_pt_corrected" );	\
    DeclareVariable( o_m_ph_hasconv, "ph_hasconv" );	\
    DeclareVariable( o_m_ph_Rconv, "ph_Rconv" );	\
    DeclareVariable( o_m_ph_zconv, "ph_zconv" );	\
    DeclareVariable( o_m_ph_ptconv, "ph_ptconv" );	\
    DeclareVariable( o_m_ph_pzconv, "ph_pzconv" );	\
    DeclareVariable( o_m_ph_reta, "ph_reta" );	\
    DeclareVariable( o_m_ph_rphi, "ph_rphi" );	\
    DeclareVariable( o_m_ph_photonweight, "ph_photonweight" );	\
    DeclareVariable( o_m_ph_photonbgweight, "ph_photonbgweight" );	\
    DeclareVariable( o_m_ph_neuralnet, "ph_neuralnet" );	\
    DeclareVariable( o_m_ph_zvertex, "ph_zvertex" );	\
    DeclareVariable( o_m_ph_etap, "ph_etap" );	\
    DeclareVariable( o_m_ph_cl_E, "ph_cl_E" );	\
    DeclareVariable( o_m_ph_cl_pt, "ph_cl_pt" );	\
    DeclareVariable( o_m_ph_cl_eta, "ph_cl_eta" );	\
    DeclareVariable( o_m_ph_cl_phi, "ph_cl_phi" );	\
    DeclareVariable( o_m_ph_Es0, "ph_Es0" );	\
    DeclareVariable( o_m_ph_etas0, "ph_etas0" );	\
    DeclareVariable( o_m_ph_phis0, "ph_phis0" );	\
    DeclareVariable( o_m_ph_Es1, "ph_Es1" );	\
    DeclareVariable( o_m_ph_etas1, "ph_etas1" );	\
    DeclareVariable( o_m_ph_phis1, "ph_phis1" );	\
    DeclareVariable( o_m_ph_Es2, "ph_Es2" );	\
    DeclareVariable( o_m_ph_etas2, "ph_etas2" );	\
    DeclareVariable( o_m_ph_phis2, "ph_phis2" );	\
    DeclareVariable( o_m_ph_Es3, "ph_Es3" );	\
    DeclareVariable( o_m_ph_etas3, "ph_etas3" );	\
    DeclareVariable( o_m_ph_phis3, "ph_phis3" );	\
    DeclareVariable( o_m_ph_deltaEmax2, "ph_deltaEmax2" );	\
    DeclareVariable( o_m_ph_isIso, "ph_isIso" );	\
    DeclareVariable( o_m_ph_mvaptcone20, "ph_mvaptcone20" );	\
    DeclareVariable( o_m_ph_mvaptcone30, "ph_mvaptcone30" );	\
    DeclareVariable( o_m_ph_mvaptcone40, "ph_mvaptcone40" );	\
    DeclareVariable( o_m_ph_topoEtcone20, "ph_topoEtcone20" );	\
    DeclareVariable( o_m_ph_topoEtcone40, "ph_topoEtcone40" );	\
    DeclareVariable( o_m_ph_topoEtcone60, "ph_topoEtcone60" );	\
    DeclareVariable( o_m_ph_topoEtcone20_corrected, "ph_topoEtcone20_corrected" );	\
    DeclareVariable( o_m_ph_topoEtcone30_corrected, "ph_topoEtcone30_corrected" );	\
    DeclareVariable( o_m_ph_topoEtcone40_corrected, "ph_topoEtcone40_corrected" );	\
    DeclareVariable( o_m_ph_Etcone40_ED_corrected, "ph_Etcone40_ED_corrected" );	\
    DeclareVariable( o_m_ph_Etcone40_corrected, "ph_Etcone40_corrected" );	\
    DeclareVariable( o_m_ph_ED_median, "ph_ED_median" );	\
    DeclareVariable( o_m_ph_ED_sigma, "ph_ED_sigma" );	\
    DeclareVariable( o_m_ph_ED_Njets, "ph_ED_Njets" );	\
    DeclareVariable( o_m_mu_staco_n, "mu_staco_n" );	\
    DeclareVariable( o_m_mu_staco_E, "mu_staco_E" );	\
    DeclareVariable( o_m_mu_staco_pt, "mu_staco_pt" );	\
    DeclareVariable( o_m_mu_staco_m, "mu_staco_m" );	\
    DeclareVariable( o_m_mu_staco_eta, "mu_staco_eta" );	\
    DeclareVariable( o_m_mu_staco_phi, "mu_staco_phi" );	\
    DeclareVariable( o_m_mu_staco_px, "mu_staco_px" );	\
    DeclareVariable( o_m_mu_staco_py, "mu_staco_py" );	\
    DeclareVariable( o_m_mu_staco_pz, "mu_staco_pz" );	\
    DeclareVariable( o_m_mu_staco_charge, "mu_staco_charge" );	\
    DeclareVariable( o_m_mu_staco_allauthor, "mu_staco_allauthor" );	\
    DeclareVariable( o_m_mu_staco_author, "mu_staco_author" );	\
    DeclareVariable( o_m_mu_staco_beta, "mu_staco_beta" );	\
    DeclareVariable( o_m_mu_staco_isMuonLikelihood, "mu_staco_isMuonLikelihood" );	\
    DeclareVariable( o_m_mu_staco_etcone20, "mu_staco_etcone20" );	\
    DeclareVariable( o_m_mu_staco_etcone30, "mu_staco_etcone30" );	\
    DeclareVariable( o_m_mu_staco_etcone40, "mu_staco_etcone40" );	\
    DeclareVariable( o_m_mu_staco_nucone20, "mu_staco_nucone20" );	\
    DeclareVariable( o_m_mu_staco_nucone30, "mu_staco_nucone30" );	\
    DeclareVariable( o_m_mu_staco_nucone40, "mu_staco_nucone40" );	\
    DeclareVariable( o_m_mu_staco_ptcone20, "mu_staco_ptcone20" );	\
    DeclareVariable( o_m_mu_staco_ptcone30, "mu_staco_ptcone30" );	\
    DeclareVariable( o_m_mu_staco_ptcone40, "mu_staco_ptcone40" );	\
    DeclareVariable( o_m_mu_staco_isStandAloneMuon, "mu_staco_isStandAloneMuon" );	\
    DeclareVariable( o_m_mu_staco_isCombinedMuon, "mu_staco_isCombinedMuon" );	\
    DeclareVariable( o_m_mu_staco_isCaloMuonId, "mu_staco_isCaloMuonId" );	\
    DeclareVariable( o_m_mu_staco_loose, "mu_staco_loose" );	\
    DeclareVariable( o_m_mu_staco_medium, "mu_staco_medium" );	\
    DeclareVariable( o_m_mu_staco_tight, "mu_staco_tight" );	\
    DeclareVariable( o_m_mu_staco_d0_exPV, "mu_staco_d0_exPV" );	\
    DeclareVariable( o_m_mu_staco_z0_exPV, "mu_staco_z0_exPV" );	\
    DeclareVariable( o_m_mu_staco_phi_exPV, "mu_staco_phi_exPV" );	\
    DeclareVariable( o_m_mu_staco_theta_exPV, "mu_staco_theta_exPV" );	\
    DeclareVariable( o_m_mu_staco_qoverp_exPV, "mu_staco_qoverp_exPV" );	\
    DeclareVariable( o_m_mu_staco_id_z0_exPV, "mu_staco_id_z0_exPV" );	\
    DeclareVariable( o_m_mu_staco_id_phi_exPV, "mu_staco_id_phi_exPV" );	\
    DeclareVariable( o_m_mu_staco_id_theta_exPV, "mu_staco_id_theta_exPV" );	\
    DeclareVariable( o_m_mu_staco_id_qoverp_exPV, "mu_staco_id_qoverp_exPV" );	\
    DeclareVariable( o_m_mu_staco_id_z0, "mu_staco_id_z0" );	\
    DeclareVariable( o_m_mu_staco_id_phi, "mu_staco_id_phi" );	\
    DeclareVariable( o_m_mu_staco_id_theta, "mu_staco_id_theta" );	\
    DeclareVariable( o_m_mu_staco_id_qoverp, "mu_staco_id_qoverp" );	\
    DeclareVariable( o_m_mu_staco_nOutliersOnTrack, "mu_staco_nOutliersOnTrack" );	\
    DeclareVariable( o_m_mu_staco_nBLHits, "mu_staco_nBLHits" );	\
    DeclareVariable( o_m_mu_staco_nPixHits, "mu_staco_nPixHits" );	\
    DeclareVariable( o_m_mu_staco_nSCTHits, "mu_staco_nSCTHits" );	\
    DeclareVariable( o_m_mu_staco_nTRTHits, "mu_staco_nTRTHits" );	\
    DeclareVariable( o_m_mu_staco_nTRTHighTHits, "mu_staco_nTRTHighTHits" );	\
    DeclareVariable( o_m_mu_staco_nBLSharedHits, "mu_staco_nBLSharedHits" );	\
    DeclareVariable( o_m_mu_staco_nPixSharedHits, "mu_staco_nPixSharedHits" );	\
    DeclareVariable( o_m_mu_staco_nPixHoles, "mu_staco_nPixHoles" );	\
    DeclareVariable( o_m_mu_staco_nSCTSharedHits, "mu_staco_nSCTSharedHits" );	\
    DeclareVariable( o_m_mu_staco_nSCTHoles, "mu_staco_nSCTHoles" );	\
    DeclareVariable( o_m_mu_staco_nTRTOutliers, "mu_staco_nTRTOutliers" );	\
    DeclareVariable( o_m_mu_staco_nTRTHighTOutliers, "mu_staco_nTRTHighTOutliers" );	\
    DeclareVariable( o_m_mu_staco_expectBLayerHit, "mu_staco_expectBLayerHit" );	\
    DeclareVariable( o_m_mu_staco_trackd0, "mu_staco_trackd0" );	\
    DeclareVariable( o_m_mu_staco_trackz0, "mu_staco_trackz0" );	\
    DeclareVariable( o_m_mu_staco_trackphi, "mu_staco_trackphi" );	\
    DeclareVariable( o_m_mu_staco_tracktheta, "mu_staco_tracktheta" );	\
    DeclareVariable( o_m_mu_staco_trackqoverp, "mu_staco_trackqoverp" );	\
    DeclareVariable( o_m_mu_staco_trackd0beam, "mu_staco_trackd0beam" );	\
    DeclareVariable( o_m_mu_staco_trackz0beam, "mu_staco_trackz0beam" );	\
    DeclareVariable( o_m_mu_staco_tracksigd0beam, "mu_staco_tracksigd0beam" );	\
    DeclareVariable( o_m_mu_staco_tracksigz0beam, "mu_staco_tracksigz0beam" );	\
    DeclareVariable( o_m_mu_staco_trackd0pv, "mu_staco_trackd0pv" );	\
    DeclareVariable( o_m_mu_staco_trackz0pv, "mu_staco_trackz0pv" );	\
    DeclareVariable( o_m_mu_staco_tracksigd0pv, "mu_staco_tracksigd0pv" );	\
    DeclareVariable( o_m_mu_staco_tracksigz0pv, "mu_staco_tracksigz0pv" );	\
    DeclareVariable( o_m_mu_calo_n, "mu_calo_n" );	\
    DeclareVariable( o_m_mu_calo_E, "mu_calo_E" );	\
    DeclareVariable( o_m_mu_calo_pt, "mu_calo_pt" );	\
    DeclareVariable( o_m_mu_calo_m, "mu_calo_m" );	\
    DeclareVariable( o_m_mu_calo_eta, "mu_calo_eta" );	\
    DeclareVariable( o_m_mu_calo_phi, "mu_calo_phi" );	\
    DeclareVariable( o_m_mu_calo_px, "mu_calo_px" );	\
    DeclareVariable( o_m_mu_calo_py, "mu_calo_py" );	\
    DeclareVariable( o_m_mu_calo_pz, "mu_calo_pz" );	\
    DeclareVariable( o_m_mu_calo_charge, "mu_calo_charge" );	\
    DeclareVariable( o_m_mu_calo_allauthor, "mu_calo_allauthor" );	\
    DeclareVariable( o_m_mu_calo_author, "mu_calo_author" );	\
    DeclareVariable( o_m_mu_calo_isMuonLikelihood, "mu_calo_isMuonLikelihood" );	\
    DeclareVariable( o_m_mu_calo_etcone20, "mu_calo_etcone20" );	\
    DeclareVariable( o_m_mu_calo_etcone30, "mu_calo_etcone30" );	\
    DeclareVariable( o_m_mu_calo_etcone40, "mu_calo_etcone40" );	\
    DeclareVariable( o_m_mu_calo_nucone20, "mu_calo_nucone20" );	\
    DeclareVariable( o_m_mu_calo_nucone30, "mu_calo_nucone30" );	\
    DeclareVariable( o_m_mu_calo_nucone40, "mu_calo_nucone40" );	\
    DeclareVariable( o_m_mu_calo_ptcone20, "mu_calo_ptcone20" );	\
    DeclareVariable( o_m_mu_calo_ptcone30, "mu_calo_ptcone30" );	\
    DeclareVariable( o_m_mu_calo_ptcone40, "mu_calo_ptcone40" );	\
    DeclareVariable( o_m_mu_calo_scatteringCurvatureSignificance, "mu_calo_scatteringCurvatureSignificance" );	\
    DeclareVariable( o_m_mu_calo_scatteringNeighbourSignificance, "mu_calo_scatteringNeighbourSignificance" );	\
    DeclareVariable( o_m_mu_calo_momentumBalanceSignificance, "mu_calo_momentumBalanceSignificance" );	\
    DeclareVariable( o_m_mu_calo_energyLossPar, "mu_calo_energyLossPar" );	\
    DeclareVariable( o_m_mu_calo_energyLossErr, "mu_calo_energyLossErr" );	\
    DeclareVariable( o_m_mu_calo_etCore, "mu_calo_etCore" );	\
    DeclareVariable( o_m_mu_calo_energyLossType, "mu_calo_energyLossType" );	\
    DeclareVariable( o_m_mu_calo_caloMuonIdTag, "mu_calo_caloMuonIdTag" );	\
    DeclareVariable( o_m_mu_calo_caloLRLikelihood, "mu_calo_caloLRLikelihood" );	\
    DeclareVariable( o_m_mu_calo_loose, "mu_calo_loose" );	\
    DeclareVariable( o_m_mu_calo_medium, "mu_calo_medium" );	\
    DeclareVariable( o_m_mu_calo_tight, "mu_calo_tight" );	\
    DeclareVariable( o_m_mu_calo_nOutliersOnTrack, "mu_calo_nOutliersOnTrack" );	\
    DeclareVariable( o_m_mu_calo_nBLHits, "mu_calo_nBLHits" );	\
    DeclareVariable( o_m_mu_calo_nPixHits, "mu_calo_nPixHits" );	\
    DeclareVariable( o_m_mu_calo_nSCTHits, "mu_calo_nSCTHits" );	\
    DeclareVariable( o_m_mu_calo_nTRTHits, "mu_calo_nTRTHits" );	\
    DeclareVariable( o_m_mu_calo_nTRTHighTHits, "mu_calo_nTRTHighTHits" );	\
    DeclareVariable( o_m_mu_calo_nBLSharedHits, "mu_calo_nBLSharedHits" );	\
    DeclareVariable( o_m_mu_calo_nPixSharedHits, "mu_calo_nPixSharedHits" );	\
    DeclareVariable( o_m_mu_calo_nPixHoles, "mu_calo_nPixHoles" );	\
    DeclareVariable( o_m_mu_calo_nSCTSharedHits, "mu_calo_nSCTSharedHits" );	\
    DeclareVariable( o_m_mu_calo_nSCTHoles, "mu_calo_nSCTHoles" );	\
    DeclareVariable( o_m_mu_calo_nTRTOutliers, "mu_calo_nTRTOutliers" );	\
    DeclareVariable( o_m_mu_calo_nTRTHighTOutliers, "mu_calo_nTRTHighTOutliers" );	\
    DeclareVariable( o_m_mu_calo_nGangedPixels, "mu_calo_nGangedPixels" );	\
    DeclareVariable( o_m_mu_calo_nPixelDeadSensors, "mu_calo_nPixelDeadSensors" );	\
    DeclareVariable( o_m_mu_calo_nSCTDeadSensors, "mu_calo_nSCTDeadSensors" );	\
    DeclareVariable( o_m_mu_calo_nTRTDeadStraws, "mu_calo_nTRTDeadStraws" );	\
    DeclareVariable( o_m_mu_calo_expectBLayerHit, "mu_calo_expectBLayerHit" );	\
    DeclareVariable( o_m_mu_calo_nMDTHits, "mu_calo_nMDTHits" );	\
    DeclareVariable( o_m_mu_calo_nMDTHoles, "mu_calo_nMDTHoles" );	\
    DeclareVariable( o_m_mu_calo_nCSCEtaHits, "mu_calo_nCSCEtaHits" );	\
    DeclareVariable( o_m_mu_calo_nCSCEtaHoles, "mu_calo_nCSCEtaHoles" );	\
    DeclareVariable( o_m_mu_calo_nCSCUnspoiledEtaHits, "mu_calo_nCSCUnspoiledEtaHits" );	\
    DeclareVariable( o_m_mu_calo_nCSCPhiHits, "mu_calo_nCSCPhiHits" );	\
    DeclareVariable( o_m_mu_calo_nCSCPhiHoles, "mu_calo_nCSCPhiHoles" );	\
    DeclareVariable( o_m_mu_calo_nRPCEtaHits, "mu_calo_nRPCEtaHits" );	\
    DeclareVariable( o_m_mu_calo_nRPCEtaHoles, "mu_calo_nRPCEtaHoles" );	\
    DeclareVariable( o_m_mu_calo_nRPCPhiHits, "mu_calo_nRPCPhiHits" );	\
    DeclareVariable( o_m_mu_calo_nRPCPhiHoles, "mu_calo_nRPCPhiHoles" );	\
    DeclareVariable( o_m_mu_calo_nTGCEtaHits, "mu_calo_nTGCEtaHits" );	\
    DeclareVariable( o_m_mu_calo_nTGCEtaHoles, "mu_calo_nTGCEtaHoles" );	\
    DeclareVariable( o_m_mu_calo_nTGCPhiHits, "mu_calo_nTGCPhiHits" );	\
    DeclareVariable( o_m_mu_calo_nTGCPhiHoles, "mu_calo_nTGCPhiHoles" );	\
    DeclareVariable( o_m_mu_calo_hastrack, "mu_calo_hastrack" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_emscale_E, "jet_AntiKt4TopoEM_emscale_E" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_emscale_pt, "jet_AntiKt4TopoEM_emscale_pt" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_emscale_m, "jet_AntiKt4TopoEM_emscale_m" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_emscale_eta, "jet_AntiKt4TopoEM_emscale_eta" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_emscale_phi, "jet_AntiKt4TopoEM_emscale_phi" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_jvtx_x, "jet_AntiKt4TopoEM_jvtx_x" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_jvtx_y, "jet_AntiKt4TopoEM_jvtx_y" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_jvtx_z, "jet_AntiKt4TopoEM_jvtx_z" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_jvtxf, "jet_AntiKt4TopoEM_jvtxf" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_jvtxfFull, "jet_AntiKt4TopoEM_jvtxfFull" );	\
    DeclareVariable( o_m_MET_RefFinal_phi, "MET_RefFinal_phi" );	\
    DeclareVariable( o_m_MET_RefFinal_et, "MET_RefFinal_et" );	\
    DeclareVariable( o_m_MET_RefFinal_sumet, "MET_RefFinal_sumet" );	\
    DeclareVariable( o_m_MET_RefFinal_etx_CentralReg, "MET_RefFinal_etx_CentralReg" );	\
    DeclareVariable( o_m_MET_RefFinal_ety_CentralReg, "MET_RefFinal_ety_CentralReg" );	\
    DeclareVariable( o_m_MET_RefFinal_sumet_CentralReg, "MET_RefFinal_sumet_CentralReg" );	\
    DeclareVariable( o_m_MET_RefFinal_phi_CentralReg, "MET_RefFinal_phi_CentralReg" );	\
    DeclareVariable( o_m_MET_RefFinal_etx_EndcapRegion, "MET_RefFinal_etx_EndcapRegion" );	\
    DeclareVariable( o_m_MET_RefFinal_ety_EndcapRegion, "MET_RefFinal_ety_EndcapRegion" );	\
    DeclareVariable( o_m_MET_RefFinal_sumet_EndcapRegion, "MET_RefFinal_sumet_EndcapRegion" );	\
    DeclareVariable( o_m_MET_RefFinal_phi_EndcapRegion, "MET_RefFinal_phi_EndcapRegion" );	\
    DeclareVariable( o_m_MET_RefFinal_etx_ForwardReg, "MET_RefFinal_etx_ForwardReg" );	\
    DeclareVariable( o_m_MET_RefFinal_ety_ForwardReg, "MET_RefFinal_ety_ForwardReg" );	\
    DeclareVariable( o_m_MET_RefFinal_sumet_ForwardReg, "MET_RefFinal_sumet_ForwardReg" );	\
    DeclareVariable( o_m_MET_RefFinal_phi_ForwardReg, "MET_RefFinal_phi_ForwardReg" );	\
    DeclareVariable( o_m_MET_RefMuon_Track_phi, "MET_RefMuon_Track_phi" );	\
    DeclareVariable( o_m_MET_RefMuon_Track_et, "MET_RefMuon_Track_et" );	\
    DeclareVariable( o_m_MET_RefMuon_Track_sumet, "MET_RefMuon_Track_sumet" );	\
    DeclareVariable( o_m_MET_LocHadTopo_phi, "MET_LocHadTopo_phi" );	\
    DeclareVariable( o_m_MET_LocHadTopo_et, "MET_LocHadTopo_et" );	\
    DeclareVariable( o_m_MET_LocHadTopo_sumet, "MET_LocHadTopo_sumet" );	\
    DeclareVariable( o_m_MET_MuonBoy_phi, "MET_MuonBoy_phi" );	\
    DeclareVariable( o_m_MET_MuonBoy_et, "MET_MuonBoy_et" );	\
    DeclareVariable( o_m_MET_MuonBoy_sumet, "MET_MuonBoy_sumet" );	\
    DeclareVariable( o_m_vxp_n, "vxp_n" );	\
    DeclareVariable( o_m_vxp_x, "vxp_x" );	\
    DeclareVariable( o_m_vxp_y, "vxp_y" );	\
    DeclareVariable( o_m_vxp_z, "vxp_z" );	\
    DeclareVariable( o_m_vxp_err_x, "vxp_err_x" );	\
    DeclareVariable( o_m_vxp_err_y, "vxp_err_y" );	\
    DeclareVariable( o_m_vxp_err_z, "vxp_err_z" );	\
    DeclareVariable( o_m_vxp_type, "vxp_type" );	\
    DeclareVariable( o_m_vxp_chi2, "vxp_chi2" );	\
    DeclareVariable( o_m_vxp_ndof, "vxp_ndof" );	\
    DeclareVariable( o_m_vxp_px, "vxp_px" );	\
    DeclareVariable( o_m_vxp_py, "vxp_py" );	\
    DeclareVariable( o_m_vxp_pz, "vxp_pz" );	\
    DeclareVariable( o_m_vxp_E, "vxp_E" );	\
    DeclareVariable( o_m_vxp_m, "vxp_m" );	\
    DeclareVariable( o_m_vxp_nTracks, "vxp_nTracks" );	\
    DeclareVariable( o_m_vxp_sumPt, "vxp_sumPt" );	\
    DeclareVariable( o_m_vxp_trk_n, "vxp_trk_n" );	\
    DeclareVariable( o_m_vxp_trk_weight, "vxp_trk_weight" );	\
    DeclareVariable( o_m_vxp_trk_index, "vxp_trk_index" );	\
  }
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define RESETVAR                      \
  {    o_m_RunNumber = -999;\
    o_m_EventNumber = -999;\
    o_m_lbn = -999;\
    o_m_actualIntPerXing = -999;\
    o_m_averageIntPerXing = -999;\
    o_m_EF_e18_medium1_g25_loose = -999;\
    o_m_EF_e24vhi_medium1 = -999;\
    o_m_EF_e60_medium1 = -999;\
    o_m_EF_2e12Tvh_loose1 = -999;\
    o_m_EF_mu24i_tight = -999;\
    o_m_EF_mu36_tight = -999;\
    o_m_EF_2mu13 = -999;\
    o_m_EF_2mu10_MSonly_g10_loose = -999;\
    o_m_EF_mu18tight_mu8_EFFS = -999;\
    o_m_EF_mu18_2g10_loose = -999;\
    o_m_EF_mu18_2g10_medium = -999;\
    o_m_EF_3g15vh_loose = -999;\
    o_m_ph_n = -999;\
    o_m_ph_E.clear();\
    o_m_ph_Et.clear();\
    o_m_ph_pt.clear();\
    o_m_ph_m.clear();\
    o_m_ph_eta.clear();\
    o_m_ph_phi.clear();\
    o_m_ph_px.clear();\
    o_m_ph_py.clear();\
    o_m_ph_pz.clear();\
    o_m_ph_author.clear();\
    o_m_ph_isRecovered.clear();\
    o_m_ph_isEM.clear();\
    o_m_ph_OQ.clear();\
    o_m_ph_convFlag.clear();\
    o_m_ph_isConv.clear();\
    o_m_ph_nConv.clear();\
    o_m_ph_nSingleTrackConv.clear();\
    o_m_ph_nDoubleTrackConv.clear();\
    o_m_ph_loose.clear();\
    o_m_ph_tight.clear();\
    o_m_ph_looseAR.clear();\
    o_m_ph_tightAR.clear();\
    o_m_ph_goodOQ.clear();\
    o_m_ph_Ethad.clear();\
    o_m_ph_Ethad1.clear();\
    o_m_ph_E033.clear();\
    o_m_ph_f1.clear();\
    o_m_ph_f1core.clear();\
    o_m_ph_Emins1.clear();\
    o_m_ph_fside.clear();\
    o_m_ph_Emax2.clear();\
    o_m_ph_ws3.clear();\
    o_m_ph_wstot.clear();\
    o_m_ph_E132.clear();\
    o_m_ph_E1152.clear();\
    o_m_ph_emaxs1.clear();\
    o_m_ph_deltaEs.clear();\
    o_m_ph_E233.clear();\
    o_m_ph_E237.clear();\
    o_m_ph_E277.clear();\
    o_m_ph_weta2.clear();\
    o_m_ph_f3.clear();\
    o_m_ph_f3core.clear();\
    o_m_ph_rphiallcalo.clear();\
    o_m_ph_Etcone45.clear();\
    o_m_ph_Etcone15.clear();\
    o_m_ph_Etcone20.clear();\
    o_m_ph_Etcone25.clear();\
    o_m_ph_Etcone30.clear();\
    o_m_ph_Etcone35.clear();\
    o_m_ph_Etcone40.clear();\
    o_m_ph_ptcone20.clear();\
    o_m_ph_ptcone30.clear();\
    o_m_ph_ptcone40.clear();\
    o_m_ph_Etcone15_pt_corrected.clear();\
    o_m_ph_Etcone20_pt_corrected.clear();\
    o_m_ph_Etcone25_pt_corrected.clear();\
    o_m_ph_Etcone30_pt_corrected.clear();\
    o_m_ph_Etcone35_pt_corrected.clear();\
    o_m_ph_Etcone40_pt_corrected.clear();\
    o_m_ph_hasconv.clear();\
    o_m_ph_Rconv.clear();\
    o_m_ph_zconv.clear();\
    o_m_ph_ptconv.clear();\
    o_m_ph_pzconv.clear();\
    o_m_ph_reta.clear();\
    o_m_ph_rphi.clear();\
    o_m_ph_photonweight.clear();\
    o_m_ph_photonbgweight.clear();\
    o_m_ph_neuralnet.clear();\
    o_m_ph_zvertex.clear();\
    o_m_ph_etap.clear();\
    o_m_ph_cl_E.clear();\
    o_m_ph_cl_pt.clear();\
    o_m_ph_cl_eta.clear();\
    o_m_ph_cl_phi.clear();\
    o_m_ph_Es0.clear();\
    o_m_ph_etas0.clear();\
    o_m_ph_phis0.clear();\
    o_m_ph_Es1.clear();\
    o_m_ph_etas1.clear();\
    o_m_ph_phis1.clear();\
    o_m_ph_Es2.clear();\
    o_m_ph_etas2.clear();\
    o_m_ph_phis2.clear();\
    o_m_ph_Es3.clear();\
    o_m_ph_etas3.clear();\
    o_m_ph_phis3.clear();\
    o_m_ph_deltaEmax2.clear();\
    o_m_ph_isIso.clear();\
    o_m_ph_mvaptcone20.clear();\
    o_m_ph_mvaptcone30.clear();\
    o_m_ph_mvaptcone40.clear();\
    o_m_ph_topoEtcone20.clear();\
    o_m_ph_topoEtcone40.clear();\
    o_m_ph_topoEtcone60.clear();\
    o_m_ph_topoEtcone20_corrected.clear();\
    o_m_ph_topoEtcone30_corrected.clear();\
    o_m_ph_topoEtcone40_corrected.clear();\
    o_m_ph_Etcone40_ED_corrected.clear();\
    o_m_ph_Etcone40_corrected.clear();\
    o_m_ph_ED_median.clear();\
    o_m_ph_ED_sigma.clear();\
    o_m_ph_ED_Njets.clear();\
    o_m_mu_staco_n = -999;\
    o_m_mu_staco_E.clear();\
    o_m_mu_staco_pt.clear();\
    o_m_mu_staco_m.clear();\
    o_m_mu_staco_eta.clear();\
    o_m_mu_staco_phi.clear();\
    o_m_mu_staco_px.clear();\
    o_m_mu_staco_py.clear();\
    o_m_mu_staco_pz.clear();\
    o_m_mu_staco_charge.clear();\
    o_m_mu_staco_allauthor.clear();\
    o_m_mu_staco_author.clear();\
    o_m_mu_staco_beta.clear();\
    o_m_mu_staco_isMuonLikelihood.clear();\
    o_m_mu_staco_etcone20.clear();\
    o_m_mu_staco_etcone30.clear();\
    o_m_mu_staco_etcone40.clear();\
    o_m_mu_staco_nucone20.clear();\
    o_m_mu_staco_nucone30.clear();\
    o_m_mu_staco_nucone40.clear();\
    o_m_mu_staco_ptcone20.clear();\
    o_m_mu_staco_ptcone30.clear();\
    o_m_mu_staco_ptcone40.clear();\
    o_m_mu_staco_isStandAloneMuon.clear();\
    o_m_mu_staco_isCombinedMuon.clear();\
    o_m_mu_staco_isCaloMuonId.clear();\
    o_m_mu_staco_loose.clear();\
    o_m_mu_staco_medium.clear();\
    o_m_mu_staco_tight.clear();\
    o_m_mu_staco_d0_exPV.clear();\
    o_m_mu_staco_z0_exPV.clear();\
    o_m_mu_staco_phi_exPV.clear();\
    o_m_mu_staco_theta_exPV.clear();\
    o_m_mu_staco_qoverp_exPV.clear();\
    o_m_mu_staco_id_z0_exPV.clear();\
    o_m_mu_staco_id_phi_exPV.clear();\
    o_m_mu_staco_id_theta_exPV.clear();\
    o_m_mu_staco_id_qoverp_exPV.clear();\
    o_m_mu_staco_id_z0.clear();\
    o_m_mu_staco_id_phi.clear();\
    o_m_mu_staco_id_theta.clear();\
    o_m_mu_staco_id_qoverp.clear();\
    o_m_mu_staco_nOutliersOnTrack.clear();\
    o_m_mu_staco_nBLHits.clear();\
    o_m_mu_staco_nPixHits.clear();\
    o_m_mu_staco_nSCTHits.clear();\
    o_m_mu_staco_nTRTHits.clear();\
    o_m_mu_staco_nTRTHighTHits.clear();\
    o_m_mu_staco_nBLSharedHits.clear();\
    o_m_mu_staco_nPixSharedHits.clear();\
    o_m_mu_staco_nPixHoles.clear();\
    o_m_mu_staco_nSCTSharedHits.clear();\
    o_m_mu_staco_nSCTHoles.clear();\
    o_m_mu_staco_nTRTOutliers.clear();\
    o_m_mu_staco_nTRTHighTOutliers.clear();\
    o_m_mu_staco_expectBLayerHit.clear();\
    o_m_mu_staco_trackd0.clear();\
    o_m_mu_staco_trackz0.clear();\
    o_m_mu_staco_trackphi.clear();\
    o_m_mu_staco_tracktheta.clear();\
    o_m_mu_staco_trackqoverp.clear();\
    o_m_mu_staco_trackd0beam.clear();\
    o_m_mu_staco_trackz0beam.clear();\
    o_m_mu_staco_tracksigd0beam.clear();\
    o_m_mu_staco_tracksigz0beam.clear();\
    o_m_mu_staco_trackd0pv.clear();\
    o_m_mu_staco_trackz0pv.clear();\
    o_m_mu_staco_tracksigd0pv.clear();\
    o_m_mu_staco_tracksigz0pv.clear();\
    o_m_mu_calo_n = -999;\
    o_m_mu_calo_E.clear();\
    o_m_mu_calo_pt.clear();\
    o_m_mu_calo_m.clear();\
    o_m_mu_calo_eta.clear();\
    o_m_mu_calo_phi.clear();\
    o_m_mu_calo_px.clear();\
    o_m_mu_calo_py.clear();\
    o_m_mu_calo_pz.clear();\
    o_m_mu_calo_charge.clear();\
    o_m_mu_calo_allauthor.clear();\
    o_m_mu_calo_author.clear();\
    o_m_mu_calo_isMuonLikelihood.clear();\
    o_m_mu_calo_etcone20.clear();\
    o_m_mu_calo_etcone30.clear();\
    o_m_mu_calo_etcone40.clear();\
    o_m_mu_calo_nucone20.clear();\
    o_m_mu_calo_nucone30.clear();\
    o_m_mu_calo_nucone40.clear();\
    o_m_mu_calo_ptcone20.clear();\
    o_m_mu_calo_ptcone30.clear();\
    o_m_mu_calo_ptcone40.clear();\
    o_m_mu_calo_scatteringCurvatureSignificance.clear();\
    o_m_mu_calo_scatteringNeighbourSignificance.clear();\
    o_m_mu_calo_momentumBalanceSignificance.clear();\
    o_m_mu_calo_energyLossPar.clear();\
    o_m_mu_calo_energyLossErr.clear();\
    o_m_mu_calo_etCore.clear();\
    o_m_mu_calo_energyLossType.clear();\
    o_m_mu_calo_caloMuonIdTag.clear();\
    o_m_mu_calo_caloLRLikelihood.clear();\
    o_m_mu_calo_loose.clear();\
    o_m_mu_calo_medium.clear();\
    o_m_mu_calo_tight.clear();\
    o_m_mu_calo_nOutliersOnTrack.clear();\
    o_m_mu_calo_nBLHits.clear();\
    o_m_mu_calo_nPixHits.clear();\
    o_m_mu_calo_nSCTHits.clear();\
    o_m_mu_calo_nTRTHits.clear();\
    o_m_mu_calo_nTRTHighTHits.clear();\
    o_m_mu_calo_nBLSharedHits.clear();\
    o_m_mu_calo_nPixSharedHits.clear();\
    o_m_mu_calo_nPixHoles.clear();\
    o_m_mu_calo_nSCTSharedHits.clear();\
    o_m_mu_calo_nSCTHoles.clear();\
    o_m_mu_calo_nTRTOutliers.clear();\
    o_m_mu_calo_nTRTHighTOutliers.clear();\
    o_m_mu_calo_nGangedPixels.clear();\
    o_m_mu_calo_nPixelDeadSensors.clear();\
    o_m_mu_calo_nSCTDeadSensors.clear();\
    o_m_mu_calo_nTRTDeadStraws.clear();\
    o_m_mu_calo_expectBLayerHit.clear();\
    o_m_mu_calo_nMDTHits.clear();\
    o_m_mu_calo_nMDTHoles.clear();\
    o_m_mu_calo_nCSCEtaHits.clear();\
    o_m_mu_calo_nCSCEtaHoles.clear();\
    o_m_mu_calo_nCSCUnspoiledEtaHits.clear();\
    o_m_mu_calo_nCSCPhiHits.clear();\
    o_m_mu_calo_nCSCPhiHoles.clear();\
    o_m_mu_calo_nRPCEtaHits.clear();\
    o_m_mu_calo_nRPCEtaHoles.clear();\
    o_m_mu_calo_nRPCPhiHits.clear();\
    o_m_mu_calo_nRPCPhiHoles.clear();\
    o_m_mu_calo_nTGCEtaHits.clear();\
    o_m_mu_calo_nTGCEtaHoles.clear();\
    o_m_mu_calo_nTGCPhiHits.clear();\
    o_m_mu_calo_nTGCPhiHoles.clear();\
    o_m_mu_calo_hastrack.clear();\
    o_m_jet_AntiKt4TopoEM_emscale_E.clear();\
    o_m_jet_AntiKt4TopoEM_emscale_pt.clear();\
    o_m_jet_AntiKt4TopoEM_emscale_m.clear();\
    o_m_jet_AntiKt4TopoEM_emscale_eta.clear();\
    o_m_jet_AntiKt4TopoEM_emscale_phi.clear();\
    o_m_jet_AntiKt4TopoEM_jvtx_x.clear();\
    o_m_jet_AntiKt4TopoEM_jvtx_y.clear();\
    o_m_jet_AntiKt4TopoEM_jvtx_z.clear();\
    o_m_jet_AntiKt4TopoEM_jvtxf.clear();\
    o_m_jet_AntiKt4TopoEM_jvtxfFull.clear();\
    o_m_MET_RefFinal_phi = -999;\
    o_m_MET_RefFinal_et = -999;\
    o_m_MET_RefFinal_sumet = -999;\
    o_m_MET_RefFinal_etx_CentralReg = -999;\
    o_m_MET_RefFinal_ety_CentralReg = -999;\
    o_m_MET_RefFinal_sumet_CentralReg = -999;\
    o_m_MET_RefFinal_phi_CentralReg = -999;\
    o_m_MET_RefFinal_etx_EndcapRegion = -999;\
    o_m_MET_RefFinal_ety_EndcapRegion = -999;\
    o_m_MET_RefFinal_sumet_EndcapRegion = -999;\
    o_m_MET_RefFinal_phi_EndcapRegion = -999;\
    o_m_MET_RefFinal_etx_ForwardReg = -999;\
    o_m_MET_RefFinal_ety_ForwardReg = -999;\
    o_m_MET_RefFinal_sumet_ForwardReg = -999;\
    o_m_MET_RefFinal_phi_ForwardReg = -999;\
    o_m_MET_RefMuon_Track_phi = -999;\
    o_m_MET_RefMuon_Track_et = -999;\
    o_m_MET_RefMuon_Track_sumet = -999;\
    o_m_MET_LocHadTopo_phi = -999;\
    o_m_MET_LocHadTopo_et = -999;\
    o_m_MET_LocHadTopo_sumet = -999;\
    o_m_MET_MuonBoy_phi = -999;\
    o_m_MET_MuonBoy_et = -999;\
    o_m_MET_MuonBoy_sumet = -999;\
    o_m_vxp_n = -999;\
    o_m_vxp_x.clear();\
    o_m_vxp_y.clear();\
    o_m_vxp_z.clear();\
    o_m_vxp_err_x.clear();\
    o_m_vxp_err_y.clear();\
    o_m_vxp_err_z.clear();\
    o_m_vxp_type.clear();\
    o_m_vxp_chi2.clear();\
    o_m_vxp_ndof.clear();\
    o_m_vxp_px.clear();\
    o_m_vxp_py.clear();\
    o_m_vxp_pz.clear();\
    o_m_vxp_E.clear();\
    o_m_vxp_m.clear();\
    o_m_vxp_nTracks.clear();\
    o_m_vxp_sumPt.clear();\
    o_m_vxp_trk_n.clear();\
    o_m_vxp_trk_weight.clear();\
    o_m_vxp_trk_index.clear();\
  }
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define COPYVAR                      \
  {   o_m_RunNumber = m_RunNumber;\
   o_m_EventNumber = m_EventNumber;\
   o_m_lbn = m_lbn;\
   o_m_actualIntPerXing = m_actualIntPerXing;\
   o_m_averageIntPerXing = m_averageIntPerXing;\
   o_m_EF_e18_medium1_g25_loose = m_EF_e18_medium1_g25_loose;\
   o_m_EF_e24vhi_medium1 = m_EF_e24vhi_medium1;\
   o_m_EF_e60_medium1 = m_EF_e60_medium1;\
   o_m_EF_2e12Tvh_loose1 = m_EF_2e12Tvh_loose1;\
   o_m_EF_mu24i_tight = m_EF_mu24i_tight;\
   o_m_EF_mu36_tight = m_EF_mu36_tight;\
   o_m_EF_2mu13 = m_EF_2mu13;\
   o_m_EF_2mu10_MSonly_g10_loose = m_EF_2mu10_MSonly_g10_loose;\
   o_m_EF_mu18tight_mu8_EFFS = m_EF_mu18tight_mu8_EFFS;\
   o_m_EF_mu18_2g10_loose = m_EF_mu18_2g10_loose;\
   o_m_EF_mu18_2g10_medium = m_EF_mu18_2g10_medium;\
   o_m_EF_3g15vh_loose = m_EF_3g15vh_loose;\
   o_m_ph_n = m_ph_n;\
   o_m_ph_E = std::vector<float>(*m_ph_E);\
   o_m_ph_Et = std::vector<float>(*m_ph_Et);\
   o_m_ph_pt = std::vector<float>(*m_ph_pt);\
   o_m_ph_m = std::vector<float>(*m_ph_m);\
   o_m_ph_eta = std::vector<float>(*m_ph_eta);\
   o_m_ph_phi = std::vector<float>(*m_ph_phi);\
   o_m_ph_px = std::vector<float>(*m_ph_px);\
   o_m_ph_py = std::vector<float>(*m_ph_py);\
   o_m_ph_pz = std::vector<float>(*m_ph_pz);\
   o_m_ph_author = std::vector<int>(*m_ph_author);\
   o_m_ph_isRecovered = std::vector<int>(*m_ph_isRecovered);\
   o_m_ph_isEM = std::vector<unsigned int>(*m_ph_isEM);\
   o_m_ph_OQ = std::vector<unsigned int>(*m_ph_OQ);\
   o_m_ph_convFlag = std::vector<int>(*m_ph_convFlag);\
   o_m_ph_isConv = std::vector<int>(*m_ph_isConv);\
   o_m_ph_nConv = std::vector<int>(*m_ph_nConv);\
   o_m_ph_nSingleTrackConv = std::vector<int>(*m_ph_nSingleTrackConv);\
   o_m_ph_nDoubleTrackConv = std::vector<int>(*m_ph_nDoubleTrackConv);\
   o_m_ph_loose = std::vector<int>(*m_ph_loose);\
   o_m_ph_tight = std::vector<int>(*m_ph_tight);\
   o_m_ph_looseAR = std::vector<int>(*m_ph_looseAR);\
   o_m_ph_tightAR = std::vector<int>(*m_ph_tightAR);\
   o_m_ph_goodOQ = std::vector<int>(*m_ph_goodOQ);\
   o_m_ph_Ethad = std::vector<float>(*m_ph_Ethad);\
   o_m_ph_Ethad1 = std::vector<float>(*m_ph_Ethad1);\
   o_m_ph_E033 = std::vector<float>(*m_ph_E033);\
   o_m_ph_f1 = std::vector<float>(*m_ph_f1);\
   o_m_ph_f1core = std::vector<float>(*m_ph_f1core);\
   o_m_ph_Emins1 = std::vector<float>(*m_ph_Emins1);\
   o_m_ph_fside = std::vector<float>(*m_ph_fside);\
   o_m_ph_Emax2 = std::vector<float>(*m_ph_Emax2);\
   o_m_ph_ws3 = std::vector<float>(*m_ph_ws3);\
   o_m_ph_wstot = std::vector<float>(*m_ph_wstot);\
   o_m_ph_E132 = std::vector<float>(*m_ph_E132);\
   o_m_ph_E1152 = std::vector<float>(*m_ph_E1152);\
   o_m_ph_emaxs1 = std::vector<float>(*m_ph_emaxs1);\
   o_m_ph_deltaEs = std::vector<float>(*m_ph_deltaEs);\
   o_m_ph_E233 = std::vector<float>(*m_ph_E233);\
   o_m_ph_E237 = std::vector<float>(*m_ph_E237);\
   o_m_ph_E277 = std::vector<float>(*m_ph_E277);\
   o_m_ph_weta2 = std::vector<float>(*m_ph_weta2);\
   o_m_ph_f3 = std::vector<float>(*m_ph_f3);\
   o_m_ph_f3core = std::vector<float>(*m_ph_f3core);\
   o_m_ph_rphiallcalo = std::vector<float>(*m_ph_rphiallcalo);\
   o_m_ph_Etcone45 = std::vector<float>(*m_ph_Etcone45);\
   o_m_ph_Etcone15 = std::vector<float>(*m_ph_Etcone15);\
   o_m_ph_Etcone20 = std::vector<float>(*m_ph_Etcone20);\
   o_m_ph_Etcone25 = std::vector<float>(*m_ph_Etcone25);\
   o_m_ph_Etcone30 = std::vector<float>(*m_ph_Etcone30);\
   o_m_ph_Etcone35 = std::vector<float>(*m_ph_Etcone35);\
   o_m_ph_Etcone40 = std::vector<float>(*m_ph_Etcone40);\
   o_m_ph_ptcone20 = std::vector<float>(*m_ph_ptcone20);\
   o_m_ph_ptcone30 = std::vector<float>(*m_ph_ptcone30);\
   o_m_ph_ptcone40 = std::vector<float>(*m_ph_ptcone40);\
   o_m_ph_Etcone15_pt_corrected = std::vector<float>(*m_ph_Etcone15_pt_corrected);\
   o_m_ph_Etcone20_pt_corrected = std::vector<float>(*m_ph_Etcone20_pt_corrected);\
   o_m_ph_Etcone25_pt_corrected = std::vector<float>(*m_ph_Etcone25_pt_corrected);\
   o_m_ph_Etcone30_pt_corrected = std::vector<float>(*m_ph_Etcone30_pt_corrected);\
   o_m_ph_Etcone35_pt_corrected = std::vector<float>(*m_ph_Etcone35_pt_corrected);\
   o_m_ph_Etcone40_pt_corrected = std::vector<float>(*m_ph_Etcone40_pt_corrected);\
   o_m_ph_hasconv = std::vector<int>(*m_ph_hasconv);\
   o_m_ph_Rconv = std::vector<float>(*m_ph_Rconv);\
   o_m_ph_zconv = std::vector<float>(*m_ph_zconv);\
   o_m_ph_ptconv = std::vector<float>(*m_ph_ptconv);\
   o_m_ph_pzconv = std::vector<float>(*m_ph_pzconv);\
   o_m_ph_reta = std::vector<float>(*m_ph_reta);\
   o_m_ph_rphi = std::vector<float>(*m_ph_rphi);\
   o_m_ph_photonweight = std::vector<double>(*m_ph_photonweight);\
   o_m_ph_photonbgweight = std::vector<double>(*m_ph_photonbgweight);\
   o_m_ph_neuralnet = std::vector<double>(*m_ph_neuralnet);\
   o_m_ph_zvertex = std::vector<float>(*m_ph_zvertex);\
   o_m_ph_etap = std::vector<float>(*m_ph_etap);\
   o_m_ph_cl_E = std::vector<float>(*m_ph_cl_E);\
   o_m_ph_cl_pt = std::vector<float>(*m_ph_cl_pt);\
   o_m_ph_cl_eta = std::vector<float>(*m_ph_cl_eta);\
   o_m_ph_cl_phi = std::vector<float>(*m_ph_cl_phi);\
   o_m_ph_Es0 = std::vector<float>(*m_ph_Es0);\
   o_m_ph_etas0 = std::vector<float>(*m_ph_etas0);\
   o_m_ph_phis0 = std::vector<float>(*m_ph_phis0);\
   o_m_ph_Es1 = std::vector<float>(*m_ph_Es1);\
   o_m_ph_etas1 = std::vector<float>(*m_ph_etas1);\
   o_m_ph_phis1 = std::vector<float>(*m_ph_phis1);\
   o_m_ph_Es2 = std::vector<float>(*m_ph_Es2);\
   o_m_ph_etas2 = std::vector<float>(*m_ph_etas2);\
   o_m_ph_phis2 = std::vector<float>(*m_ph_phis2);\
   o_m_ph_Es3 = std::vector<float>(*m_ph_Es3);\
   o_m_ph_etas3 = std::vector<float>(*m_ph_etas3);\
   o_m_ph_phis3 = std::vector<float>(*m_ph_phis3);\
   o_m_ph_deltaEmax2 = std::vector<float>(*m_ph_deltaEmax2);\
   o_m_ph_isIso = std::vector<unsigned int>(*m_ph_isIso);\
   o_m_ph_mvaptcone20 = std::vector<float>(*m_ph_mvaptcone20);\
   o_m_ph_mvaptcone30 = std::vector<float>(*m_ph_mvaptcone30);\
   o_m_ph_mvaptcone40 = std::vector<float>(*m_ph_mvaptcone40);\
   o_m_ph_topoEtcone20 = std::vector<float>(*m_ph_topoEtcone20);\
   o_m_ph_topoEtcone40 = std::vector<float>(*m_ph_topoEtcone40);\
   o_m_ph_topoEtcone60 = std::vector<float>(*m_ph_topoEtcone60);\
   o_m_ph_topoEtcone20_corrected = std::vector<float>(*m_ph_topoEtcone20_corrected);\
   o_m_ph_topoEtcone30_corrected = std::vector<float>(*m_ph_topoEtcone30_corrected);\
   o_m_ph_topoEtcone40_corrected = std::vector<float>(*m_ph_topoEtcone40_corrected);\
   o_m_ph_Etcone40_ED_corrected = std::vector<float>(*m_ph_Etcone40_ED_corrected);\
   o_m_ph_Etcone40_corrected = std::vector<float>(*m_ph_Etcone40_corrected);\
   o_m_ph_ED_median = std::vector<float>(*m_ph_ED_median);\
   o_m_ph_ED_sigma = std::vector<float>(*m_ph_ED_sigma);\
   o_m_ph_ED_Njets = std::vector<float>(*m_ph_ED_Njets);\
   o_m_mu_staco_n = m_mu_staco_n;\
   o_m_mu_staco_E = std::vector<float>(*m_mu_staco_E);\
   o_m_mu_staco_pt = std::vector<float>(*m_mu_staco_pt);\
   o_m_mu_staco_m = std::vector<float>(*m_mu_staco_m);\
   o_m_mu_staco_eta = std::vector<float>(*m_mu_staco_eta);\
   o_m_mu_staco_phi = std::vector<float>(*m_mu_staco_phi);\
   o_m_mu_staco_px = std::vector<float>(*m_mu_staco_px);\
   o_m_mu_staco_py = std::vector<float>(*m_mu_staco_py);\
   o_m_mu_staco_pz = std::vector<float>(*m_mu_staco_pz);\
   o_m_mu_staco_charge = std::vector<float>(*m_mu_staco_charge);\
   o_m_mu_staco_allauthor = std::vector<unsigned short>(*m_mu_staco_allauthor);\
   o_m_mu_staco_author = std::vector<int>(*m_mu_staco_author);\
   o_m_mu_staco_beta = std::vector<float>(*m_mu_staco_beta);\
   o_m_mu_staco_isMuonLikelihood = std::vector<float>(*m_mu_staco_isMuonLikelihood);\
   o_m_mu_staco_etcone20 = std::vector<float>(*m_mu_staco_etcone20);\
   o_m_mu_staco_etcone30 = std::vector<float>(*m_mu_staco_etcone30);\
   o_m_mu_staco_etcone40 = std::vector<float>(*m_mu_staco_etcone40);\
   o_m_mu_staco_nucone20 = std::vector<float>(*m_mu_staco_nucone20);\
   o_m_mu_staco_nucone30 = std::vector<float>(*m_mu_staco_nucone30);\
   o_m_mu_staco_nucone40 = std::vector<float>(*m_mu_staco_nucone40);\
   o_m_mu_staco_ptcone20 = std::vector<float>(*m_mu_staco_ptcone20);\
   o_m_mu_staco_ptcone30 = std::vector<float>(*m_mu_staco_ptcone30);\
   o_m_mu_staco_ptcone40 = std::vector<float>(*m_mu_staco_ptcone40);\
   o_m_mu_staco_isStandAloneMuon = std::vector<int>(*m_mu_staco_isStandAloneMuon);\
   o_m_mu_staco_isCombinedMuon = std::vector<int>(*m_mu_staco_isCombinedMuon);\
   o_m_mu_staco_isCaloMuonId = std::vector<int>(*m_mu_staco_isCaloMuonId);\
   o_m_mu_staco_loose = std::vector<int>(*m_mu_staco_loose);\
   o_m_mu_staco_medium = std::vector<int>(*m_mu_staco_medium);\
   o_m_mu_staco_tight = std::vector<int>(*m_mu_staco_tight);\
   o_m_mu_staco_d0_exPV = std::vector<float>(*m_mu_staco_d0_exPV);\
   o_m_mu_staco_z0_exPV = std::vector<float>(*m_mu_staco_z0_exPV);\
   o_m_mu_staco_phi_exPV = std::vector<float>(*m_mu_staco_phi_exPV);\
   o_m_mu_staco_theta_exPV = std::vector<float>(*m_mu_staco_theta_exPV);\
   o_m_mu_staco_qoverp_exPV = std::vector<float>(*m_mu_staco_qoverp_exPV);\
   o_m_mu_staco_id_z0_exPV = std::vector<float>(*m_mu_staco_id_z0_exPV);\
   o_m_mu_staco_id_phi_exPV = std::vector<float>(*m_mu_staco_id_phi_exPV);\
   o_m_mu_staco_id_theta_exPV = std::vector<float>(*m_mu_staco_id_theta_exPV);\
   o_m_mu_staco_id_qoverp_exPV = std::vector<float>(*m_mu_staco_id_qoverp_exPV);\
   o_m_mu_staco_id_z0 = std::vector<float>(*m_mu_staco_id_z0);\
   o_m_mu_staco_id_phi = std::vector<float>(*m_mu_staco_id_phi);\
   o_m_mu_staco_id_theta = std::vector<float>(*m_mu_staco_id_theta);\
   o_m_mu_staco_id_qoverp = std::vector<float>(*m_mu_staco_id_qoverp);\
   o_m_mu_staco_nOutliersOnTrack = std::vector<int>(*m_mu_staco_nOutliersOnTrack);\
   o_m_mu_staco_nBLHits = std::vector<int>(*m_mu_staco_nBLHits);\
   o_m_mu_staco_nPixHits = std::vector<int>(*m_mu_staco_nPixHits);\
   o_m_mu_staco_nSCTHits = std::vector<int>(*m_mu_staco_nSCTHits);\
   o_m_mu_staco_nTRTHits = std::vector<int>(*m_mu_staco_nTRTHits);\
   o_m_mu_staco_nTRTHighTHits = std::vector<int>(*m_mu_staco_nTRTHighTHits);\
   o_m_mu_staco_nBLSharedHits = std::vector<int>(*m_mu_staco_nBLSharedHits);\
   o_m_mu_staco_nPixSharedHits = std::vector<int>(*m_mu_staco_nPixSharedHits);\
   o_m_mu_staco_nPixHoles = std::vector<int>(*m_mu_staco_nPixHoles);\
   o_m_mu_staco_nSCTSharedHits = std::vector<int>(*m_mu_staco_nSCTSharedHits);\
   o_m_mu_staco_nSCTHoles = std::vector<int>(*m_mu_staco_nSCTHoles);\
   o_m_mu_staco_nTRTOutliers = std::vector<int>(*m_mu_staco_nTRTOutliers);\
   o_m_mu_staco_nTRTHighTOutliers = std::vector<int>(*m_mu_staco_nTRTHighTOutliers);\
   o_m_mu_staco_expectBLayerHit = std::vector<int>(*m_mu_staco_expectBLayerHit);\
   o_m_mu_staco_trackd0 = std::vector<float>(*m_mu_staco_trackd0);\
   o_m_mu_staco_trackz0 = std::vector<float>(*m_mu_staco_trackz0);\
   o_m_mu_staco_trackphi = std::vector<float>(*m_mu_staco_trackphi);\
   o_m_mu_staco_tracktheta = std::vector<float>(*m_mu_staco_tracktheta);\
   o_m_mu_staco_trackqoverp = std::vector<float>(*m_mu_staco_trackqoverp);\
   o_m_mu_staco_trackd0beam = std::vector<float>(*m_mu_staco_trackd0beam);\
   o_m_mu_staco_trackz0beam = std::vector<float>(*m_mu_staco_trackz0beam);\
   o_m_mu_staco_tracksigd0beam = std::vector<float>(*m_mu_staco_tracksigd0beam);\
   o_m_mu_staco_tracksigz0beam = std::vector<float>(*m_mu_staco_tracksigz0beam);\
   o_m_mu_staco_trackd0pv = std::vector<float>(*m_mu_staco_trackd0pv);\
   o_m_mu_staco_trackz0pv = std::vector<float>(*m_mu_staco_trackz0pv);\
   o_m_mu_staco_tracksigd0pv = std::vector<float>(*m_mu_staco_tracksigd0pv);\
   o_m_mu_staco_tracksigz0pv = std::vector<float>(*m_mu_staco_tracksigz0pv);\
   o_m_mu_calo_n = m_mu_calo_n;\
   o_m_mu_calo_E = std::vector<float>(*m_mu_calo_E);\
   o_m_mu_calo_pt = std::vector<float>(*m_mu_calo_pt);\
   o_m_mu_calo_m = std::vector<float>(*m_mu_calo_m);\
   o_m_mu_calo_eta = std::vector<float>(*m_mu_calo_eta);\
   o_m_mu_calo_phi = std::vector<float>(*m_mu_calo_phi);\
   o_m_mu_calo_px = std::vector<float>(*m_mu_calo_px);\
   o_m_mu_calo_py = std::vector<float>(*m_mu_calo_py);\
   o_m_mu_calo_pz = std::vector<float>(*m_mu_calo_pz);\
   o_m_mu_calo_charge = std::vector<float>(*m_mu_calo_charge);\
   o_m_mu_calo_allauthor = std::vector<unsigned short>(*m_mu_calo_allauthor);\
   o_m_mu_calo_author = std::vector<int>(*m_mu_calo_author);\
   o_m_mu_calo_isMuonLikelihood = std::vector<float>(*m_mu_calo_isMuonLikelihood);\
   o_m_mu_calo_etcone20 = std::vector<float>(*m_mu_calo_etcone20);\
   o_m_mu_calo_etcone30 = std::vector<float>(*m_mu_calo_etcone30);\
   o_m_mu_calo_etcone40 = std::vector<float>(*m_mu_calo_etcone40);\
   o_m_mu_calo_nucone20 = std::vector<float>(*m_mu_calo_nucone20);\
   o_m_mu_calo_nucone30 = std::vector<float>(*m_mu_calo_nucone30);\
   o_m_mu_calo_nucone40 = std::vector<float>(*m_mu_calo_nucone40);\
   o_m_mu_calo_ptcone20 = std::vector<float>(*m_mu_calo_ptcone20);\
   o_m_mu_calo_ptcone30 = std::vector<float>(*m_mu_calo_ptcone30);\
   o_m_mu_calo_ptcone40 = std::vector<float>(*m_mu_calo_ptcone40);\
   o_m_mu_calo_scatteringCurvatureSignificance = std::vector<float>(*m_mu_calo_scatteringCurvatureSignificance);\
   o_m_mu_calo_scatteringNeighbourSignificance = std::vector<float>(*m_mu_calo_scatteringNeighbourSignificance);\
   o_m_mu_calo_momentumBalanceSignificance = std::vector<float>(*m_mu_calo_momentumBalanceSignificance);\
   o_m_mu_calo_energyLossPar = std::vector<float>(*m_mu_calo_energyLossPar);\
   o_m_mu_calo_energyLossErr = std::vector<float>(*m_mu_calo_energyLossErr);\
   o_m_mu_calo_etCore = std::vector<float>(*m_mu_calo_etCore);\
   o_m_mu_calo_energyLossType = std::vector<float>(*m_mu_calo_energyLossType);\
   o_m_mu_calo_caloMuonIdTag = std::vector<unsigned short>(*m_mu_calo_caloMuonIdTag);\
   o_m_mu_calo_caloLRLikelihood = std::vector<double>(*m_mu_calo_caloLRLikelihood);\
   o_m_mu_calo_loose = std::vector<int>(*m_mu_calo_loose);\
   o_m_mu_calo_medium = std::vector<int>(*m_mu_calo_medium);\
   o_m_mu_calo_tight = std::vector<int>(*m_mu_calo_tight);\
   o_m_mu_calo_nOutliersOnTrack = std::vector<int>(*m_mu_calo_nOutliersOnTrack);\
   o_m_mu_calo_nBLHits = std::vector<int>(*m_mu_calo_nBLHits);\
   o_m_mu_calo_nPixHits = std::vector<int>(*m_mu_calo_nPixHits);\
   o_m_mu_calo_nSCTHits = std::vector<int>(*m_mu_calo_nSCTHits);\
   o_m_mu_calo_nTRTHits = std::vector<int>(*m_mu_calo_nTRTHits);\
   o_m_mu_calo_nTRTHighTHits = std::vector<int>(*m_mu_calo_nTRTHighTHits);\
   o_m_mu_calo_nBLSharedHits = std::vector<int>(*m_mu_calo_nBLSharedHits);\
   o_m_mu_calo_nPixSharedHits = std::vector<int>(*m_mu_calo_nPixSharedHits);\
   o_m_mu_calo_nPixHoles = std::vector<int>(*m_mu_calo_nPixHoles);\
   o_m_mu_calo_nSCTSharedHits = std::vector<int>(*m_mu_calo_nSCTSharedHits);\
   o_m_mu_calo_nSCTHoles = std::vector<int>(*m_mu_calo_nSCTHoles);\
   o_m_mu_calo_nTRTOutliers = std::vector<int>(*m_mu_calo_nTRTOutliers);\
   o_m_mu_calo_nTRTHighTOutliers = std::vector<int>(*m_mu_calo_nTRTHighTOutliers);\
   o_m_mu_calo_nGangedPixels = std::vector<int>(*m_mu_calo_nGangedPixels);\
   o_m_mu_calo_nPixelDeadSensors = std::vector<int>(*m_mu_calo_nPixelDeadSensors);\
   o_m_mu_calo_nSCTDeadSensors = std::vector<int>(*m_mu_calo_nSCTDeadSensors);\
   o_m_mu_calo_nTRTDeadStraws = std::vector<int>(*m_mu_calo_nTRTDeadStraws);\
   o_m_mu_calo_expectBLayerHit = std::vector<int>(*m_mu_calo_expectBLayerHit);\
   o_m_mu_calo_nMDTHits = std::vector<int>(*m_mu_calo_nMDTHits);\
   o_m_mu_calo_nMDTHoles = std::vector<int>(*m_mu_calo_nMDTHoles);\
   o_m_mu_calo_nCSCEtaHits = std::vector<int>(*m_mu_calo_nCSCEtaHits);\
   o_m_mu_calo_nCSCEtaHoles = std::vector<int>(*m_mu_calo_nCSCEtaHoles);\
   o_m_mu_calo_nCSCUnspoiledEtaHits = std::vector<int>(*m_mu_calo_nCSCUnspoiledEtaHits);\
   o_m_mu_calo_nCSCPhiHits = std::vector<int>(*m_mu_calo_nCSCPhiHits);\
   o_m_mu_calo_nCSCPhiHoles = std::vector<int>(*m_mu_calo_nCSCPhiHoles);\
   o_m_mu_calo_nRPCEtaHits = std::vector<int>(*m_mu_calo_nRPCEtaHits);\
   o_m_mu_calo_nRPCEtaHoles = std::vector<int>(*m_mu_calo_nRPCEtaHoles);\
   o_m_mu_calo_nRPCPhiHits = std::vector<int>(*m_mu_calo_nRPCPhiHits);\
   o_m_mu_calo_nRPCPhiHoles = std::vector<int>(*m_mu_calo_nRPCPhiHoles);\
   o_m_mu_calo_nTGCEtaHits = std::vector<int>(*m_mu_calo_nTGCEtaHits);\
   o_m_mu_calo_nTGCEtaHoles = std::vector<int>(*m_mu_calo_nTGCEtaHoles);\
   o_m_mu_calo_nTGCPhiHits = std::vector<int>(*m_mu_calo_nTGCPhiHits);\
   o_m_mu_calo_nTGCPhiHoles = std::vector<int>(*m_mu_calo_nTGCPhiHoles);\
   o_m_mu_calo_hastrack = std::vector<int>(*m_mu_calo_hastrack);\
   o_m_jet_AntiKt4TopoEM_emscale_E = std::vector<float>(*m_jet_AntiKt4TopoEM_emscale_E);\
   o_m_jet_AntiKt4TopoEM_emscale_pt = std::vector<float>(*m_jet_AntiKt4TopoEM_emscale_pt);\
   o_m_jet_AntiKt4TopoEM_emscale_m = std::vector<float>(*m_jet_AntiKt4TopoEM_emscale_m);\
   o_m_jet_AntiKt4TopoEM_emscale_eta = std::vector<float>(*m_jet_AntiKt4TopoEM_emscale_eta);\
   o_m_jet_AntiKt4TopoEM_emscale_phi = std::vector<float>(*m_jet_AntiKt4TopoEM_emscale_phi);\
   o_m_jet_AntiKt4TopoEM_jvtx_x = std::vector<float>(*m_jet_AntiKt4TopoEM_jvtx_x);\
   o_m_jet_AntiKt4TopoEM_jvtx_y = std::vector<float>(*m_jet_AntiKt4TopoEM_jvtx_y);\
   o_m_jet_AntiKt4TopoEM_jvtx_z = std::vector<float>(*m_jet_AntiKt4TopoEM_jvtx_z);\
   o_m_jet_AntiKt4TopoEM_jvtxf = std::vector<float>(*m_jet_AntiKt4TopoEM_jvtxf);\
   o_m_jet_AntiKt4TopoEM_jvtxfFull = std::vector<std::vector<float> >(*m_jet_AntiKt4TopoEM_jvtxfFull);\
   o_m_MET_RefFinal_phi = m_MET_RefFinal_phi;\
   o_m_MET_RefFinal_et = m_MET_RefFinal_et;\
   o_m_MET_RefFinal_sumet = m_MET_RefFinal_sumet;\
   o_m_MET_RefFinal_etx_CentralReg = m_MET_RefFinal_etx_CentralReg;\
   o_m_MET_RefFinal_ety_CentralReg = m_MET_RefFinal_ety_CentralReg;\
   o_m_MET_RefFinal_sumet_CentralReg = m_MET_RefFinal_sumet_CentralReg;\
   o_m_MET_RefFinal_phi_CentralReg = m_MET_RefFinal_phi_CentralReg;\
   o_m_MET_RefFinal_etx_EndcapRegion = m_MET_RefFinal_etx_EndcapRegion;\
   o_m_MET_RefFinal_ety_EndcapRegion = m_MET_RefFinal_ety_EndcapRegion;\
   o_m_MET_RefFinal_sumet_EndcapRegion = m_MET_RefFinal_sumet_EndcapRegion;\
   o_m_MET_RefFinal_phi_EndcapRegion = m_MET_RefFinal_phi_EndcapRegion;\
   o_m_MET_RefFinal_etx_ForwardReg = m_MET_RefFinal_etx_ForwardReg;\
   o_m_MET_RefFinal_ety_ForwardReg = m_MET_RefFinal_ety_ForwardReg;\
   o_m_MET_RefFinal_sumet_ForwardReg = m_MET_RefFinal_sumet_ForwardReg;\
   o_m_MET_RefFinal_phi_ForwardReg = m_MET_RefFinal_phi_ForwardReg;\
   o_m_MET_RefMuon_Track_phi = m_MET_RefMuon_Track_phi;\
   o_m_MET_RefMuon_Track_et = m_MET_RefMuon_Track_et;\
   o_m_MET_RefMuon_Track_sumet = m_MET_RefMuon_Track_sumet;\
   o_m_MET_LocHadTopo_phi = m_MET_LocHadTopo_phi;\
   o_m_MET_LocHadTopo_et = m_MET_LocHadTopo_et;\
   o_m_MET_LocHadTopo_sumet = m_MET_LocHadTopo_sumet;\
   o_m_MET_MuonBoy_phi = m_MET_MuonBoy_phi;\
   o_m_MET_MuonBoy_et = m_MET_MuonBoy_et;\
   o_m_MET_MuonBoy_sumet = m_MET_MuonBoy_sumet;\
   o_m_vxp_n = m_vxp_n;\
   o_m_vxp_x = std::vector<float>(*m_vxp_x);\
   o_m_vxp_y = std::vector<float>(*m_vxp_y);\
   o_m_vxp_z = std::vector<float>(*m_vxp_z);\
   o_m_vxp_err_x = std::vector<float>(*m_vxp_err_x);\
   o_m_vxp_err_y = std::vector<float>(*m_vxp_err_y);\
   o_m_vxp_err_z = std::vector<float>(*m_vxp_err_z);\
   o_m_vxp_type = std::vector<int>(*m_vxp_type);\
   o_m_vxp_chi2 = std::vector<float>(*m_vxp_chi2);\
   o_m_vxp_ndof = std::vector<int>(*m_vxp_ndof);\
   o_m_vxp_px = std::vector<float>(*m_vxp_px);\
   o_m_vxp_py = std::vector<float>(*m_vxp_py);\
   o_m_vxp_pz = std::vector<float>(*m_vxp_pz);\
   o_m_vxp_E = std::vector<float>(*m_vxp_E);\
   o_m_vxp_m = std::vector<float>(*m_vxp_m);\
   o_m_vxp_nTracks = std::vector<int>(*m_vxp_nTracks);\
   o_m_vxp_sumPt = std::vector<float>(*m_vxp_sumPt);\
   o_m_vxp_trk_n = std::vector<int>(*m_vxp_trk_n);\
   o_m_vxp_trk_weight = std::vector<std::vector<float> >(*m_vxp_trk_weight);\
   o_m_vxp_trk_index = std::vector<std::vector<int> >(*m_vxp_trk_index);\
  }
#endif

//end definitions DEF_FILTER

//end macro definitions
