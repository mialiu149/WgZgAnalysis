////DukHep/bin/dukhep_create_filter.py DukHep/hzgskim_tiny_data11_el_B_I.txt
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
m_el_n(0),	\
m_el_E(0),	\
m_el_Et(0),	\
m_el_pt(0),	\
m_el_m(0),	\
m_el_eta(0),	\
m_el_phi(0),	\
m_el_px(0),	\
m_el_py(0),	\
m_el_pz(0),	\
m_el_charge(0),	\
m_el_author(0),	\
m_el_isEM(0),	\
m_el_OQ(0),	\
m_el_convFlag(0),	\
m_el_isConv(0),	\
m_el_nConv(0),	\
m_el_OQRecalc(0),	\
m_el_loosePP(0),	\
m_el_mediumPP(0),	\
m_el_tightPP(0),	\
m_el_goodOQ(0),	\
m_el_Ethad(0),	\
m_el_Ethad1(0),	\
m_el_f1(0),	\
m_el_f1core(0),	\
m_el_Emins1(0),	\
m_el_fside(0),	\
m_el_Emax2(0),	\
m_el_ws3(0),	\
m_el_wstot(0),	\
m_el_emaxs1(0),	\
m_el_deltaEs(0),	\
m_el_E233(0),	\
m_el_E237(0),	\
m_el_E277(0),	\
m_el_weta2(0),	\
m_el_f3(0),	\
m_el_f3core(0),	\
m_el_Etcone45(0),	\
m_el_Etcone15(0),	\
m_el_Etcone20(0),	\
m_el_Etcone25(0),	\
m_el_Etcone30(0),	\
m_el_Etcone35(0),	\
m_el_Etcone40(0),	\
m_el_ptcone20(0),	\
m_el_ptcone30(0),	\
m_el_ptcone40(0),	\
m_el_Etcone15_pt_corrected(0),	\
m_el_Etcone20_pt_corrected(0),	\
m_el_Etcone25_pt_corrected(0),	\
m_el_Etcone30_pt_corrected(0),	\
m_el_Etcone35_pt_corrected(0),	\
m_el_Etcone40_pt_corrected(0),	\
m_el_hasconv(0),	\
m_el_Rconv(0),	\
m_el_zconv(0),	\
m_el_convvtxchi2(0),	\
m_el_ptconv(0),	\
m_el_pzconv(0),	\
m_el_reta(0),	\
m_el_rphi(0),	\
m_el_zvertex(0),	\
m_el_etap(0),	\
m_el_Es0(0),	\
m_el_etas0(0),	\
m_el_phis0(0),	\
m_el_Es1(0),	\
m_el_etas1(0),	\
m_el_phis1(0),	\
m_el_Es2(0),	\
m_el_etas2(0),	\
m_el_phis2(0),	\
m_el_Es3(0),	\
m_el_etas3(0),	\
m_el_phis3(0),	\
m_el_cl_E(0),	\
m_el_cl_pt(0),	\
m_el_cl_eta(0),	\
m_el_cl_phi(0),	\
m_el_trackd0(0),	\
m_el_trackz0(0),	\
m_el_trackphi(0),	\
m_el_tracktheta(0),	\
m_el_trackqoverp(0),	\
m_el_trackpt(0),	\
m_el_tracketa(0),	\
m_el_nPixHits(0),	\
m_el_nSCTHits(0),	\
m_el_nTRTHits(0),	\
m_el_nTRTHighTHits(0),	\
m_el_nBLayerOutliers(0),	\
m_el_nPixelOutliers(0),	\
m_el_nSCTOutliers(0),	\
m_el_nTRTOutliers(0),	\
m_el_nTRTHighTOutliers(0),	\
m_el_nSiHits(0),	\
m_el_TRTHighTHitsRatio(0),	\
m_el_TRTHighTOutliersRatio(0),	\
m_el_vertweight(0),	\
m_el_vertx(0),	\
m_el_verty(0),	\
m_el_vertz(0),	\
m_el_trackd0beam(0),	\
m_el_trackz0beam(0),	\
m_el_tracksigd0beam(0),	\
m_el_tracksigz0beam(0),	\
m_el_trackd0pv(0),	\
m_el_trackz0pv(0),	\
m_el_tracksigd0pv(0),	\
m_el_tracksigz0pv(0),	\
m_el_deltaEmax2(0),	\
m_el_isIso(0),	\
m_el_mvaptcone20(0),	\
m_el_mvaptcone30(0),	\
m_el_mvaptcone40(0),	\
m_el_Etcone40_ED_corrected(0),	\
m_el_Etcone40_corrected(0),	\
m_EF_e20_medium(0),	\
m_EF_2e12_medium(0),	\
m_EF_mu18_MG(0),	\
m_EF_mu15_mu10_EFFS(0),	\
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
m_ph_OQRecalc(0),	\
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
m_ph_Etcone40_ED_corrected(0),	\
m_ph_Etcone40_corrected(0),	\
m_jet_AntiKt4TopoEM_n(0),	\
m_jet_AntiKt4TopoEM_E(0),	\
m_jet_AntiKt4TopoEM_pt(0),	\
m_jet_AntiKt4TopoEM_m(0),	\
m_jet_AntiKt4TopoEM_eta(0),	\
m_jet_AntiKt4TopoEM_phi(0),	\
m_jet_AntiKt4TopoEM_LArQuality(0),	\
m_jet_AntiKt4TopoEM_nTrk(0),	\
m_jet_AntiKt4TopoEM_sumPtTrk(0),	\
m_jet_AntiKt4TopoEM_NegativeE(0),	\
m_jet_AntiKt4TopoEM_AverageLArQF(0),	\
m_jet_AntiKt4TopoEM_BCH_CORR_CELL(0),	\
m_jet_AntiKt4TopoEM_BCH_CORR_DOTX(0),	\
m_jet_AntiKt4TopoEM_BCH_CORR_JET(0),	\
m_jet_AntiKt4TopoEM_BCH_CORR_JET_FORCELL(0),	\
m_jet_AntiKt4TopoEM_isUgly(0),	\
m_jet_AntiKt4TopoEM_isBadLoose(0),	\
m_jet_AntiKt4TopoEM_isBadMedium(0),	\
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
UInt_t m_EventNumber;	\
UInt_t m_lbn;	\
Float_t m_actualIntPerXing;	\
Float_t m_averageIntPerXing;	\
Int_t m_el_n;	\
std::vector<float>* m_el_E;	\
std::vector<float>* m_el_Et;	\
std::vector<float>* m_el_pt;	\
std::vector<float>* m_el_m;	\
std::vector<float>* m_el_eta;	\
std::vector<float>* m_el_phi;	\
std::vector<float>* m_el_px;	\
std::vector<float>* m_el_py;	\
std::vector<float>* m_el_pz;	\
std::vector<float>* m_el_charge;	\
std::vector<int>* m_el_author;	\
std::vector<unsigned int>* m_el_isEM;	\
std::vector<unsigned int>* m_el_OQ;	\
std::vector<int>* m_el_convFlag;	\
std::vector<int>* m_el_isConv;	\
std::vector<int>* m_el_nConv;	\
std::vector<unsigned int>* m_el_OQRecalc;	\
std::vector<int>* m_el_loosePP;	\
std::vector<int>* m_el_mediumPP;	\
std::vector<int>* m_el_tightPP;	\
std::vector<int>* m_el_goodOQ;	\
std::vector<float>* m_el_Ethad;	\
std::vector<float>* m_el_Ethad1;	\
std::vector<float>* m_el_f1;	\
std::vector<float>* m_el_f1core;	\
std::vector<float>* m_el_Emins1;	\
std::vector<float>* m_el_fside;	\
std::vector<float>* m_el_Emax2;	\
std::vector<float>* m_el_ws3;	\
std::vector<float>* m_el_wstot;	\
std::vector<float>* m_el_emaxs1;	\
std::vector<float>* m_el_deltaEs;	\
std::vector<float>* m_el_E233;	\
std::vector<float>* m_el_E237;	\
std::vector<float>* m_el_E277;	\
std::vector<float>* m_el_weta2;	\
std::vector<float>* m_el_f3;	\
std::vector<float>* m_el_f3core;	\
std::vector<float>* m_el_Etcone45;	\
std::vector<float>* m_el_Etcone15;	\
std::vector<float>* m_el_Etcone20;	\
std::vector<float>* m_el_Etcone25;	\
std::vector<float>* m_el_Etcone30;	\
std::vector<float>* m_el_Etcone35;	\
std::vector<float>* m_el_Etcone40;	\
std::vector<float>* m_el_ptcone20;	\
std::vector<float>* m_el_ptcone30;	\
std::vector<float>* m_el_ptcone40;	\
std::vector<float>* m_el_Etcone15_pt_corrected;	\
std::vector<float>* m_el_Etcone20_pt_corrected;	\
std::vector<float>* m_el_Etcone25_pt_corrected;	\
std::vector<float>* m_el_Etcone30_pt_corrected;	\
std::vector<float>* m_el_Etcone35_pt_corrected;	\
std::vector<float>* m_el_Etcone40_pt_corrected;	\
std::vector<int>* m_el_hasconv;	\
std::vector<float>* m_el_Rconv;	\
std::vector<float>* m_el_zconv;	\
std::vector<float>* m_el_convvtxchi2;	\
std::vector<float>* m_el_ptconv;	\
std::vector<float>* m_el_pzconv;	\
std::vector<float>* m_el_reta;	\
std::vector<float>* m_el_rphi;	\
std::vector<float>* m_el_zvertex;	\
std::vector<float>* m_el_etap;	\
std::vector<float>* m_el_Es0;	\
std::vector<float>* m_el_etas0;	\
std::vector<float>* m_el_phis0;	\
std::vector<float>* m_el_Es1;	\
std::vector<float>* m_el_etas1;	\
std::vector<float>* m_el_phis1;	\
std::vector<float>* m_el_Es2;	\
std::vector<float>* m_el_etas2;	\
std::vector<float>* m_el_phis2;	\
std::vector<float>* m_el_Es3;	\
std::vector<float>* m_el_etas3;	\
std::vector<float>* m_el_phis3;	\
std::vector<float>* m_el_cl_E;	\
std::vector<float>* m_el_cl_pt;	\
std::vector<float>* m_el_cl_eta;	\
std::vector<float>* m_el_cl_phi;	\
std::vector<float>* m_el_trackd0;	\
std::vector<float>* m_el_trackz0;	\
std::vector<float>* m_el_trackphi;	\
std::vector<float>* m_el_tracktheta;	\
std::vector<float>* m_el_trackqoverp;	\
std::vector<float>* m_el_trackpt;	\
std::vector<float>* m_el_tracketa;	\
std::vector<int>* m_el_nPixHits;	\
std::vector<int>* m_el_nSCTHits;	\
std::vector<int>* m_el_nTRTHits;	\
std::vector<int>* m_el_nTRTHighTHits;	\
std::vector<int>* m_el_nBLayerOutliers;	\
std::vector<int>* m_el_nPixelOutliers;	\
std::vector<int>* m_el_nSCTOutliers;	\
std::vector<int>* m_el_nTRTOutliers;	\
std::vector<int>* m_el_nTRTHighTOutliers;	\
std::vector<int>* m_el_nSiHits;	\
std::vector<float>* m_el_TRTHighTHitsRatio;	\
std::vector<float>* m_el_TRTHighTOutliersRatio;	\
std::vector<float>* m_el_vertweight;	\
std::vector<float>* m_el_vertx;	\
std::vector<float>* m_el_verty;	\
std::vector<float>* m_el_vertz;	\
std::vector<float>* m_el_trackd0beam;	\
std::vector<float>* m_el_trackz0beam;	\
std::vector<float>* m_el_tracksigd0beam;	\
std::vector<float>* m_el_tracksigz0beam;	\
std::vector<float>* m_el_trackd0pv;	\
std::vector<float>* m_el_trackz0pv;	\
std::vector<float>* m_el_tracksigd0pv;	\
std::vector<float>* m_el_tracksigz0pv;	\
std::vector<float>* m_el_deltaEmax2;	\
std::vector<unsigned int>* m_el_isIso;	\
std::vector<float>* m_el_mvaptcone20;	\
std::vector<float>* m_el_mvaptcone30;	\
std::vector<float>* m_el_mvaptcone40;	\
std::vector<float>* m_el_Etcone40_ED_corrected;	\
std::vector<float>* m_el_Etcone40_corrected;	\
Bool_t m_EF_e20_medium;	\
Bool_t m_EF_2e12_medium;	\
Bool_t m_EF_mu18_MG;	\
Bool_t m_EF_mu15_mu10_EFFS;	\
Int_t m_ph_n;	\
std::vector<float>* m_ph_E;	\
std::vector<float>* m_ph_Et;	\
std::vector<float>* m_ph_pt;	\
std::vector<float>* m_ph_m;	\
std::vector<float>* m_ph_eta;	\
std::vector<float>* m_ph_phi;	\
std::vector<float>* m_ph_px;	\
std::vector<float>* m_ph_py;	\
std::vector<float>* m_ph_pz;	\
std::vector<int>* m_ph_author;	\
std::vector<int>* m_ph_isRecovered;	\
std::vector<unsigned int>* m_ph_isEM;	\
std::vector<unsigned int>* m_ph_OQ;	\
std::vector<unsigned int>* m_ph_OQRecalc;	\
std::vector<int>* m_ph_convFlag;	\
std::vector<int>* m_ph_isConv;	\
std::vector<int>* m_ph_nConv;	\
std::vector<int>* m_ph_nSingleTrackConv;	\
std::vector<int>* m_ph_nDoubleTrackConv;	\
std::vector<int>* m_ph_loose;	\
std::vector<int>* m_ph_tight;	\
std::vector<int>* m_ph_looseAR;	\
std::vector<int>* m_ph_tightAR;	\
std::vector<int>* m_ph_goodOQ;	\
std::vector<float>* m_ph_Ethad;	\
std::vector<float>* m_ph_Ethad1;	\
std::vector<float>* m_ph_E033;	\
std::vector<float>* m_ph_f1;	\
std::vector<float>* m_ph_f1core;	\
std::vector<float>* m_ph_Emins1;	\
std::vector<float>* m_ph_fside;	\
std::vector<float>* m_ph_Emax2;	\
std::vector<float>* m_ph_ws3;	\
std::vector<float>* m_ph_wstot;	\
std::vector<float>* m_ph_E132;	\
std::vector<float>* m_ph_E1152;	\
std::vector<float>* m_ph_emaxs1;	\
std::vector<float>* m_ph_deltaEs;	\
std::vector<float>* m_ph_E233;	\
std::vector<float>* m_ph_E237;	\
std::vector<float>* m_ph_E277;	\
std::vector<float>* m_ph_weta2;	\
std::vector<float>* m_ph_f3;	\
std::vector<float>* m_ph_f3core;	\
std::vector<float>* m_ph_rphiallcalo;	\
std::vector<float>* m_ph_Etcone45;	\
std::vector<float>* m_ph_Etcone15;	\
std::vector<float>* m_ph_Etcone20;	\
std::vector<float>* m_ph_Etcone25;	\
std::vector<float>* m_ph_Etcone30;	\
std::vector<float>* m_ph_Etcone35;	\
std::vector<float>* m_ph_Etcone40;	\
std::vector<float>* m_ph_ptcone20;	\
std::vector<float>* m_ph_ptcone30;	\
std::vector<float>* m_ph_ptcone40;	\
std::vector<float>* m_ph_Etcone15_pt_corrected;	\
std::vector<float>* m_ph_Etcone20_pt_corrected;	\
std::vector<float>* m_ph_Etcone25_pt_corrected;	\
std::vector<float>* m_ph_Etcone30_pt_corrected;	\
std::vector<float>* m_ph_Etcone35_pt_corrected;	\
std::vector<float>* m_ph_Etcone40_pt_corrected;	\
std::vector<int>* m_ph_hasconv;	\
std::vector<float>* m_ph_Rconv;	\
std::vector<float>* m_ph_zconv;	\
std::vector<float>* m_ph_ptconv;	\
std::vector<float>* m_ph_pzconv;	\
std::vector<float>* m_ph_reta;	\
std::vector<float>* m_ph_rphi;	\
std::vector<double>* m_ph_photonweight;	\
std::vector<double>* m_ph_photonbgweight;	\
std::vector<double>* m_ph_neuralnet;	\
std::vector<float>* m_ph_zvertex;	\
std::vector<float>* m_ph_etap;	\
std::vector<float>* m_ph_cl_E;	\
std::vector<float>* m_ph_cl_pt;	\
std::vector<float>* m_ph_cl_eta;	\
std::vector<float>* m_ph_cl_phi;	\
std::vector<float>* m_ph_Es0;	\
std::vector<float>* m_ph_etas0;	\
std::vector<float>* m_ph_phis0;	\
std::vector<float>* m_ph_Es1;	\
std::vector<float>* m_ph_etas1;	\
std::vector<float>* m_ph_phis1;	\
std::vector<float>* m_ph_Es2;	\
std::vector<float>* m_ph_etas2;	\
std::vector<float>* m_ph_phis2;	\
std::vector<float>* m_ph_Es3;	\
std::vector<float>* m_ph_etas3;	\
std::vector<float>* m_ph_phis3;	\
std::vector<float>* m_ph_deltaEmax2;	\
std::vector<unsigned int>* m_ph_isIso;	\
std::vector<float>* m_ph_mvaptcone20;	\
std::vector<float>* m_ph_mvaptcone30;	\
std::vector<float>* m_ph_mvaptcone40;	\
std::vector<float>* m_ph_topoEtcone20;	\
std::vector<float>* m_ph_topoEtcone40;	\
std::vector<float>* m_ph_topoEtcone60;	\
std::vector<float>* m_ph_Etcone40_ED_corrected;	\
std::vector<float>* m_ph_Etcone40_corrected;	\
Int_t m_jet_AntiKt4TopoEM_n;	\
std::vector<float>* m_jet_AntiKt4TopoEM_E;	\
std::vector<float>* m_jet_AntiKt4TopoEM_pt;	\
std::vector<float>* m_jet_AntiKt4TopoEM_m;	\
std::vector<float>* m_jet_AntiKt4TopoEM_eta;	\
std::vector<float>* m_jet_AntiKt4TopoEM_phi;	\
std::vector<float>* m_jet_AntiKt4TopoEM_LArQuality;	\
std::vector<float>* m_jet_AntiKt4TopoEM_nTrk;	\
std::vector<float>* m_jet_AntiKt4TopoEM_sumPtTrk;	\
std::vector<float>* m_jet_AntiKt4TopoEM_NegativeE;	\
std::vector<float>* m_jet_AntiKt4TopoEM_AverageLArQF;	\
std::vector<float>* m_jet_AntiKt4TopoEM_BCH_CORR_CELL;	\
std::vector<float>* m_jet_AntiKt4TopoEM_BCH_CORR_DOTX;	\
std::vector<float>* m_jet_AntiKt4TopoEM_BCH_CORR_JET;	\
std::vector<float>* m_jet_AntiKt4TopoEM_BCH_CORR_JET_FORCELL;	\
std::vector<int>* m_jet_AntiKt4TopoEM_isUgly;	\
std::vector<int>* m_jet_AntiKt4TopoEM_isBadLoose;	\
std::vector<int>* m_jet_AntiKt4TopoEM_isBadMedium;	\
Float_t m_MET_RefFinal_phi;	\
Float_t m_MET_RefFinal_et;	\
Float_t m_MET_RefFinal_sumet;	\
Float_t m_MET_RefFinal_etx_CentralReg;	\
Float_t m_MET_RefFinal_ety_CentralReg;	\
Float_t m_MET_RefFinal_sumet_CentralReg;	\
Float_t m_MET_RefFinal_phi_CentralReg;	\
Float_t m_MET_RefFinal_etx_EndcapRegion;	\
Float_t m_MET_RefFinal_ety_EndcapRegion;	\
Float_t m_MET_RefFinal_sumet_EndcapRegion;	\
Float_t m_MET_RefFinal_phi_EndcapRegion;	\
Float_t m_MET_RefFinal_etx_ForwardReg;	\
Float_t m_MET_RefFinal_ety_ForwardReg;	\
Float_t m_MET_RefFinal_sumet_ForwardReg;	\
Float_t m_MET_RefFinal_phi_ForwardReg;	\
Float_t m_MET_RefMuon_Track_phi;	\
Float_t m_MET_RefMuon_Track_et;	\
Float_t m_MET_RefMuon_Track_sumet;	\
Float_t m_MET_LocHadTopo_phi;	\
Float_t m_MET_LocHadTopo_et;	\
Float_t m_MET_LocHadTopo_sumet;	\
Float_t m_MET_MuonBoy_phi;	\
Float_t m_MET_MuonBoy_et;	\
Float_t m_MET_MuonBoy_sumet;	\
Int_t m_vxp_n;	\
std::vector<float>* m_vxp_x;	\
std::vector<float>* m_vxp_y;	\
std::vector<float>* m_vxp_z;	\
std::vector<float>* m_vxp_err_x;	\
std::vector<float>* m_vxp_err_y;	\
std::vector<float>* m_vxp_err_z;	\
std::vector<int>* m_vxp_type;	\
std::vector<float>* m_vxp_chi2;	\
std::vector<int>* m_vxp_ndof;	\
std::vector<float>* m_vxp_px;	\
std::vector<float>* m_vxp_py;	\
std::vector<float>* m_vxp_pz;	\
std::vector<float>* m_vxp_E;	\
std::vector<float>* m_vxp_m;	\
std::vector<int>* m_vxp_nTracks;	\
std::vector<float>* m_vxp_sumPt;	\
std::vector<int>* m_vxp_trk_n;	\
std::vector<std::vector<float> >* m_vxp_trk_weight;	\
std::vector<std::vector<int> >* m_vxp_trk_index;
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define CONNECT( stringTREENAME )                      \
  {    ConnectVariable( (stringTREENAME), "RunNumber", m_RunNumber );	\
    ConnectVariable( (stringTREENAME), "EventNumber", m_EventNumber );	\
    ConnectVariable( (stringTREENAME), "lbn", m_lbn );	\
    ConnectVariable( (stringTREENAME), "actualIntPerXing", m_actualIntPerXing );	\
    ConnectVariable( (stringTREENAME), "averageIntPerXing", m_averageIntPerXing );	\
    ConnectVariable( (stringTREENAME), "el_n", m_el_n );	\
    ConnectVariable( (stringTREENAME), "el_E", m_el_E );	\
    ConnectVariable( (stringTREENAME), "el_Et", m_el_Et );	\
    ConnectVariable( (stringTREENAME), "el_pt", m_el_pt );	\
    ConnectVariable( (stringTREENAME), "el_m", m_el_m );	\
    ConnectVariable( (stringTREENAME), "el_eta", m_el_eta );	\
    ConnectVariable( (stringTREENAME), "el_phi", m_el_phi );	\
    ConnectVariable( (stringTREENAME), "el_px", m_el_px );	\
    ConnectVariable( (stringTREENAME), "el_py", m_el_py );	\
    ConnectVariable( (stringTREENAME), "el_pz", m_el_pz );	\
    ConnectVariable( (stringTREENAME), "el_charge", m_el_charge );	\
    ConnectVariable( (stringTREENAME), "el_author", m_el_author );	\
    ConnectVariable( (stringTREENAME), "el_isEM", m_el_isEM );	\
    ConnectVariable( (stringTREENAME), "el_OQ", m_el_OQ );	\
    ConnectVariable( (stringTREENAME), "el_convFlag", m_el_convFlag );	\
    ConnectVariable( (stringTREENAME), "el_isConv", m_el_isConv );	\
    ConnectVariable( (stringTREENAME), "el_nConv", m_el_nConv );	\
    ConnectVariable( (stringTREENAME), "el_OQRecalc", m_el_OQRecalc );	\
    ConnectVariable( (stringTREENAME), "el_loosePP", m_el_loosePP );	\
    ConnectVariable( (stringTREENAME), "el_mediumPP", m_el_mediumPP );	\
    ConnectVariable( (stringTREENAME), "el_tightPP", m_el_tightPP );	\
    ConnectVariable( (stringTREENAME), "el_goodOQ", m_el_goodOQ );	\
    ConnectVariable( (stringTREENAME), "el_Ethad", m_el_Ethad );	\
    ConnectVariable( (stringTREENAME), "el_Ethad1", m_el_Ethad1 );	\
    ConnectVariable( (stringTREENAME), "el_f1", m_el_f1 );	\
    ConnectVariable( (stringTREENAME), "el_f1core", m_el_f1core );	\
    ConnectVariable( (stringTREENAME), "el_Emins1", m_el_Emins1 );	\
    ConnectVariable( (stringTREENAME), "el_fside", m_el_fside );	\
    ConnectVariable( (stringTREENAME), "el_Emax2", m_el_Emax2 );	\
    ConnectVariable( (stringTREENAME), "el_ws3", m_el_ws3 );	\
    ConnectVariable( (stringTREENAME), "el_wstot", m_el_wstot );	\
    ConnectVariable( (stringTREENAME), "el_emaxs1", m_el_emaxs1 );	\
    ConnectVariable( (stringTREENAME), "el_deltaEs", m_el_deltaEs );	\
    ConnectVariable( (stringTREENAME), "el_E233", m_el_E233 );	\
    ConnectVariable( (stringTREENAME), "el_E237", m_el_E237 );	\
    ConnectVariable( (stringTREENAME), "el_E277", m_el_E277 );	\
    ConnectVariable( (stringTREENAME), "el_weta2", m_el_weta2 );	\
    ConnectVariable( (stringTREENAME), "el_f3", m_el_f3 );	\
    ConnectVariable( (stringTREENAME), "el_f3core", m_el_f3core );	\
    ConnectVariable( (stringTREENAME), "el_Etcone45", m_el_Etcone45 );	\
    ConnectVariable( (stringTREENAME), "el_Etcone15", m_el_Etcone15 );	\
    ConnectVariable( (stringTREENAME), "el_Etcone20", m_el_Etcone20 );	\
    ConnectVariable( (stringTREENAME), "el_Etcone25", m_el_Etcone25 );	\
    ConnectVariable( (stringTREENAME), "el_Etcone30", m_el_Etcone30 );	\
    ConnectVariable( (stringTREENAME), "el_Etcone35", m_el_Etcone35 );	\
    ConnectVariable( (stringTREENAME), "el_Etcone40", m_el_Etcone40 );	\
    ConnectVariable( (stringTREENAME), "el_ptcone20", m_el_ptcone20 );	\
    ConnectVariable( (stringTREENAME), "el_ptcone30", m_el_ptcone30 );	\
    ConnectVariable( (stringTREENAME), "el_ptcone40", m_el_ptcone40 );	\
    ConnectVariable( (stringTREENAME), "el_Etcone15_pt_corrected", m_el_Etcone15_pt_corrected );	\
    ConnectVariable( (stringTREENAME), "el_Etcone20_pt_corrected", m_el_Etcone20_pt_corrected );	\
    ConnectVariable( (stringTREENAME), "el_Etcone25_pt_corrected", m_el_Etcone25_pt_corrected );	\
    ConnectVariable( (stringTREENAME), "el_Etcone30_pt_corrected", m_el_Etcone30_pt_corrected );	\
    ConnectVariable( (stringTREENAME), "el_Etcone35_pt_corrected", m_el_Etcone35_pt_corrected );	\
    ConnectVariable( (stringTREENAME), "el_Etcone40_pt_corrected", m_el_Etcone40_pt_corrected );	\
    ConnectVariable( (stringTREENAME), "el_hasconv", m_el_hasconv );	\
    ConnectVariable( (stringTREENAME), "el_Rconv", m_el_Rconv );	\
    ConnectVariable( (stringTREENAME), "el_zconv", m_el_zconv );	\
    ConnectVariable( (stringTREENAME), "el_convvtxchi2", m_el_convvtxchi2 );	\
    ConnectVariable( (stringTREENAME), "el_ptconv", m_el_ptconv );	\
    ConnectVariable( (stringTREENAME), "el_pzconv", m_el_pzconv );	\
    ConnectVariable( (stringTREENAME), "el_reta", m_el_reta );	\
    ConnectVariable( (stringTREENAME), "el_rphi", m_el_rphi );	\
    ConnectVariable( (stringTREENAME), "el_zvertex", m_el_zvertex );	\
    ConnectVariable( (stringTREENAME), "el_etap", m_el_etap );	\
    ConnectVariable( (stringTREENAME), "el_Es0", m_el_Es0 );	\
    ConnectVariable( (stringTREENAME), "el_etas0", m_el_etas0 );	\
    ConnectVariable( (stringTREENAME), "el_phis0", m_el_phis0 );	\
    ConnectVariable( (stringTREENAME), "el_Es1", m_el_Es1 );	\
    ConnectVariable( (stringTREENAME), "el_etas1", m_el_etas1 );	\
    ConnectVariable( (stringTREENAME), "el_phis1", m_el_phis1 );	\
    ConnectVariable( (stringTREENAME), "el_Es2", m_el_Es2 );	\
    ConnectVariable( (stringTREENAME), "el_etas2", m_el_etas2 );	\
    ConnectVariable( (stringTREENAME), "el_phis2", m_el_phis2 );	\
    ConnectVariable( (stringTREENAME), "el_Es3", m_el_Es3 );	\
    ConnectVariable( (stringTREENAME), "el_etas3", m_el_etas3 );	\
    ConnectVariable( (stringTREENAME), "el_phis3", m_el_phis3 );	\
    ConnectVariable( (stringTREENAME), "el_cl_E", m_el_cl_E );	\
    ConnectVariable( (stringTREENAME), "el_cl_pt", m_el_cl_pt );	\
    ConnectVariable( (stringTREENAME), "el_cl_eta", m_el_cl_eta );	\
    ConnectVariable( (stringTREENAME), "el_cl_phi", m_el_cl_phi );	\
    ConnectVariable( (stringTREENAME), "el_trackd0", m_el_trackd0 );	\
    ConnectVariable( (stringTREENAME), "el_trackz0", m_el_trackz0 );	\
    ConnectVariable( (stringTREENAME), "el_trackphi", m_el_trackphi );	\
    ConnectVariable( (stringTREENAME), "el_tracktheta", m_el_tracktheta );	\
    ConnectVariable( (stringTREENAME), "el_trackqoverp", m_el_trackqoverp );	\
    ConnectVariable( (stringTREENAME), "el_trackpt", m_el_trackpt );	\
    ConnectVariable( (stringTREENAME), "el_tracketa", m_el_tracketa );	\
    ConnectVariable( (stringTREENAME), "el_nPixHits", m_el_nPixHits );	\
    ConnectVariable( (stringTREENAME), "el_nSCTHits", m_el_nSCTHits );	\
    ConnectVariable( (stringTREENAME), "el_nTRTHits", m_el_nTRTHits );	\
    ConnectVariable( (stringTREENAME), "el_nTRTHighTHits", m_el_nTRTHighTHits );	\
    ConnectVariable( (stringTREENAME), "el_nBLayerOutliers", m_el_nBLayerOutliers );	\
    ConnectVariable( (stringTREENAME), "el_nPixelOutliers", m_el_nPixelOutliers );	\
    ConnectVariable( (stringTREENAME), "el_nSCTOutliers", m_el_nSCTOutliers );	\
    ConnectVariable( (stringTREENAME), "el_nTRTOutliers", m_el_nTRTOutliers );	\
    ConnectVariable( (stringTREENAME), "el_nTRTHighTOutliers", m_el_nTRTHighTOutliers );	\
    ConnectVariable( (stringTREENAME), "el_nSiHits", m_el_nSiHits );	\
    ConnectVariable( (stringTREENAME), "el_TRTHighTHitsRatio", m_el_TRTHighTHitsRatio );	\
    ConnectVariable( (stringTREENAME), "el_TRTHighTOutliersRatio", m_el_TRTHighTOutliersRatio );	\
    ConnectVariable( (stringTREENAME), "el_vertweight", m_el_vertweight );	\
    ConnectVariable( (stringTREENAME), "el_vertx", m_el_vertx );	\
    ConnectVariable( (stringTREENAME), "el_verty", m_el_verty );	\
    ConnectVariable( (stringTREENAME), "el_vertz", m_el_vertz );	\
    ConnectVariable( (stringTREENAME), "el_trackd0beam", m_el_trackd0beam );	\
    ConnectVariable( (stringTREENAME), "el_trackz0beam", m_el_trackz0beam );	\
    ConnectVariable( (stringTREENAME), "el_tracksigd0beam", m_el_tracksigd0beam );	\
    ConnectVariable( (stringTREENAME), "el_tracksigz0beam", m_el_tracksigz0beam );	\
    ConnectVariable( (stringTREENAME), "el_trackd0pv", m_el_trackd0pv );	\
    ConnectVariable( (stringTREENAME), "el_trackz0pv", m_el_trackz0pv );	\
    ConnectVariable( (stringTREENAME), "el_tracksigd0pv", m_el_tracksigd0pv );	\
    ConnectVariable( (stringTREENAME), "el_tracksigz0pv", m_el_tracksigz0pv );	\
    ConnectVariable( (stringTREENAME), "el_deltaEmax2", m_el_deltaEmax2 );	\
    ConnectVariable( (stringTREENAME), "el_isIso", m_el_isIso );	\
    ConnectVariable( (stringTREENAME), "el_mvaptcone20", m_el_mvaptcone20 );	\
    ConnectVariable( (stringTREENAME), "el_mvaptcone30", m_el_mvaptcone30 );	\
    ConnectVariable( (stringTREENAME), "el_mvaptcone40", m_el_mvaptcone40 );	\
    ConnectVariable( (stringTREENAME), "el_Etcone40_ED_corrected", m_el_Etcone40_ED_corrected );	\
    ConnectVariable( (stringTREENAME), "el_Etcone40_corrected", m_el_Etcone40_corrected );	\
    ConnectVariable( (stringTREENAME), "EF_e20_medium", m_EF_e20_medium );	\
    ConnectVariable( (stringTREENAME), "EF_2e12_medium", m_EF_2e12_medium );	\
    ConnectVariable( (stringTREENAME), "EF_mu18_MG", m_EF_mu18_MG );	\
    ConnectVariable( (stringTREENAME), "EF_mu15_mu10_EFFS", m_EF_mu15_mu10_EFFS );	\
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
    ConnectVariable( (stringTREENAME), "ph_OQRecalc", m_ph_OQRecalc );	\
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
    ConnectVariable( (stringTREENAME), "ph_Etcone40_ED_corrected", m_ph_Etcone40_ED_corrected );	\
    ConnectVariable( (stringTREENAME), "ph_Etcone40_corrected", m_ph_Etcone40_corrected );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_n", m_jet_AntiKt4TopoEM_n );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_E", m_jet_AntiKt4TopoEM_E );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_pt", m_jet_AntiKt4TopoEM_pt );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_m", m_jet_AntiKt4TopoEM_m );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_eta", m_jet_AntiKt4TopoEM_eta );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_phi", m_jet_AntiKt4TopoEM_phi );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_LArQuality", m_jet_AntiKt4TopoEM_LArQuality );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_nTrk", m_jet_AntiKt4TopoEM_nTrk );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_sumPtTrk", m_jet_AntiKt4TopoEM_sumPtTrk );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_NegativeE", m_jet_AntiKt4TopoEM_NegativeE );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_AverageLArQF", m_jet_AntiKt4TopoEM_AverageLArQF );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_BCH_CORR_CELL", m_jet_AntiKt4TopoEM_BCH_CORR_CELL );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_BCH_CORR_DOTX", m_jet_AntiKt4TopoEM_BCH_CORR_DOTX );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_BCH_CORR_JET", m_jet_AntiKt4TopoEM_BCH_CORR_JET );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_BCH_CORR_JET_FORCELL", m_jet_AntiKt4TopoEM_BCH_CORR_JET_FORCELL );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_isUgly", m_jet_AntiKt4TopoEM_isUgly );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_isBadLoose", m_jet_AntiKt4TopoEM_isBadLoose );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_isBadMedium", m_jet_AntiKt4TopoEM_isBadMedium );	\
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
  {  }
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define RESETVAR                      \
  {  }
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define COPYVAR                      \
  {  }
#endif

//end definitions DEF_FILTER

//end macro definitions
