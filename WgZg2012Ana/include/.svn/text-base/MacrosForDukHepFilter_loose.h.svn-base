////DukHep/bin/dukhep_create_filter.py DukHep/hzgskim_loose.txt
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
m_timestamp(0),	\
m_timestamp_ns(0),	\
m_lbn(0),	\
m_bcid(0),	\
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
m_el_nSingleTrackConv(0),	\
m_el_nDoubleTrackConv(0),	\
m_el_OQRecalc(0),	\
m_el_loose(0),	\
m_el_looseIso(0),	\
m_el_medium(0),	\
m_el_mediumIso(0),	\
m_el_mediumWithoutTrack(0),	\
m_el_mediumIsoWithoutTrack(0),	\
m_el_tight(0),	\
m_el_tightIso(0),	\
m_el_tightWithoutTrack(0),	\
m_el_tightIsoWithoutTrack(0),	\
m_el_loosePP(0),	\
m_el_loosePPIso(0),	\
m_el_mediumPP(0),	\
m_el_mediumPPIso(0),	\
m_el_tightPP(0),	\
m_el_tightPPIso(0),	\
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
m_el_rphiallcalo(0),	\
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
m_el_nucone20(0),	\
m_el_nucone30(0),	\
m_el_nucone40(0),	\
m_el_Etcone15_pt_corrected(0),	\
m_el_Etcone20_pt_corrected(0),	\
m_el_Etcone25_pt_corrected(0),	\
m_el_Etcone30_pt_corrected(0),	\
m_el_Etcone35_pt_corrected(0),	\
m_el_Etcone40_pt_corrected(0),	\
m_el_convanglematch(0),	\
m_el_convtrackmatch(0),	\
m_el_hasconv(0),	\
m_el_convvtxx(0),	\
m_el_convvtxy(0),	\
m_el_convvtxz(0),	\
m_el_Rconv(0),	\
m_el_zconv(0),	\
m_el_convvtxchi2(0),	\
m_el_pt1conv(0),	\
m_el_convtrk1nBLHits(0),	\
m_el_convtrk1nPixHits(0),	\
m_el_convtrk1nSCTHits(0),	\
m_el_convtrk1nTRTHits(0),	\
m_el_pt2conv(0),	\
m_el_convtrk2nBLHits(0),	\
m_el_convtrk2nPixHits(0),	\
m_el_convtrk2nSCTHits(0),	\
m_el_convtrk2nTRTHits(0),	\
m_el_ptconv(0),	\
m_el_pzconv(0),	\
m_el_pos7(0),	\
m_el_etacorrmag(0),	\
m_el_deltaeta1(0),	\
m_el_deltaeta2(0),	\
m_el_deltaphi2(0),	\
m_el_deltaphiRescaled(0),	\
m_el_deltaPhiRot(0),	\
m_el_expectHitInBLayer(0),	\
m_el_trackd0_physics(0),	\
m_el_etaSampling1(0),	\
m_el_reta(0),	\
m_el_rphi(0),	\
m_el_EtringnoisedR03sig2(0),	\
m_el_EtringnoisedR03sig3(0),	\
m_el_EtringnoisedR03sig4(0),	\
m_el_isolationlikelihoodjets(0),	\
m_el_isolationlikelihoodhqelectrons(0),	\
m_el_electronweight(0),	\
m_el_electronbgweight(0),	\
m_el_softeweight(0),	\
m_el_softebgweight(0),	\
m_el_neuralnet(0),	\
m_el_Hmatrix(0),	\
m_el_Hmatrix5(0),	\
m_el_adaboost(0),	\
m_el_softeneuralnet(0),	\
m_el_zvertex(0),	\
m_el_errz(0),	\
m_el_etap(0),	\
m_el_depth(0),	\
m_el_refittedTrack_n(0),	\
m_el_refittedTrack_author(0),	\
m_el_refittedTrack_chi2(0),	\
m_el_refittedTrack_hasBrem(0),	\
m_el_refittedTrack_bremRadius(0),	\
m_el_refittedTrack_bremZ(0),	\
m_el_refittedTrack_bremRadiusErr(0),	\
m_el_refittedTrack_bremZErr(0),	\
m_el_refittedTrack_bremFitStatus(0),	\
m_el_refittedTrack_qoverp(0),	\
m_el_refittedTrack_d0(0),	\
m_el_refittedTrack_z0(0),	\
m_el_refittedTrack_theta(0),	\
m_el_refittedTrack_phi(0),	\
m_el_refittedTrack_LMqoverp(0),	\
m_el_refittedTrack_covd0(0),	\
m_el_refittedTrack_covz0(0),	\
m_el_refittedTrack_covphi(0),	\
m_el_refittedTrack_covtheta(0),	\
m_el_refittedTrack_covqoverp(0),	\
m_el_refittedTrack_covd0z0(0),	\
m_el_refittedTrack_covz0phi(0),	\
m_el_refittedTrack_covz0theta(0),	\
m_el_refittedTrack_covz0qoverp(0),	\
m_el_refittedTrack_covd0phi(0),	\
m_el_refittedTrack_covd0theta(0),	\
m_el_refittedTrack_covd0qoverp(0),	\
m_el_refittedTrack_covphitheta(0),	\
m_el_refittedTrack_covphiqoverp(0),	\
m_el_refittedTrack_covthetaqoverp(0),	\
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
m_el_E_PreSamplerB(0),	\
m_el_E_EMB1(0),	\
m_el_E_EMB2(0),	\
m_el_E_EMB3(0),	\
m_el_E_PreSamplerE(0),	\
m_el_E_EME1(0),	\
m_el_E_EME2(0),	\
m_el_E_EME3(0),	\
m_el_E_HEC0(0),	\
m_el_E_HEC1(0),	\
m_el_E_HEC2(0),	\
m_el_E_HEC3(0),	\
m_el_E_TileBar0(0),	\
m_el_E_TileBar1(0),	\
m_el_E_TileBar2(0),	\
m_el_E_TileGap1(0),	\
m_el_E_TileGap2(0),	\
m_el_E_TileGap3(0),	\
m_el_E_TileExt0(0),	\
m_el_E_TileExt1(0),	\
m_el_E_TileExt2(0),	\
m_el_E_FCAL0(0),	\
m_el_E_FCAL1(0),	\
m_el_E_FCAL2(0),	\
m_el_cl_E(0),	\
m_el_cl_pt(0),	\
m_el_cl_eta(0),	\
m_el_cl_phi(0),	\
m_el_firstEdens(0),	\
m_el_cellmaxfrac(0),	\
m_el_longitudinal(0),	\
m_el_secondlambda(0),	\
m_el_lateral(0),	\
m_el_secondR(0),	\
m_el_centerlambda(0),	\
m_el_trackd0(0),	\
m_el_trackz0(0),	\
m_el_trackphi(0),	\
m_el_tracktheta(0),	\
m_el_trackqoverp(0),	\
m_el_trackpt(0),	\
m_el_tracketa(0),	\
m_el_trackcov_d0(0),	\
m_el_trackcov_z0(0),	\
m_el_trackcov_phi(0),	\
m_el_trackcov_theta(0),	\
m_el_trackcov_qoverp(0),	\
m_el_trackcov_d0_z0(0),	\
m_el_trackcov_d0_phi(0),	\
m_el_trackcov_d0_theta(0),	\
m_el_trackcov_d0_qoverp(0),	\
m_el_trackcov_z0_phi(0),	\
m_el_trackcov_z0_theta(0),	\
m_el_trackcov_z0_qoverp(0),	\
m_el_trackcov_phi_theta(0),	\
m_el_trackcov_phi_qoverp(0),	\
m_el_trackcov_theta_qoverp(0),	\
m_el_trackfitchi2(0),	\
m_el_trackfitndof(0),	\
m_el_nBLHits(0),	\
m_el_nPixHits(0),	\
m_el_nSCTHits(0),	\
m_el_nTRTHits(0),	\
m_el_nTRTHighTHits(0),	\
m_el_nPixHoles(0),	\
m_el_nSCTHoles(0),	\
m_el_nTRTHoles(0),	\
m_el_nBLSharedHits(0),	\
m_el_nPixSharedHits(0),	\
m_el_nSCTSharedHits(0),	\
m_el_nBLayerOutliers(0),	\
m_el_nPixelOutliers(0),	\
m_el_nSCTOutliers(0),	\
m_el_nTRTOutliers(0),	\
m_el_nTRTHighTOutliers(0),	\
m_el_expectBLayerHit(0),	\
m_el_nSiHits(0),	\
m_el_TRTHighTHitsRatio(0),	\
m_el_TRTHighTOutliersRatio(0),	\
m_el_pixeldEdx(0),	\
m_el_nGoodHitsPixeldEdx(0),	\
m_el_massPixeldEdx(0),	\
m_el_likelihoodsPixeldEdx(0),	\
m_el_eProbabilityComb(0),	\
m_el_eProbabilityHT(0),	\
m_el_eProbabilityToT(0),	\
m_el_eProbabilityBrem(0),	\
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
m_el_trackIPEstimate_d0_biasedpvunbiased(0),	\
m_el_trackIPEstimate_z0_biasedpvunbiased(0),	\
m_el_trackIPEstimate_d0_unbiasedpvunbiased(0),	\
m_el_trackIPEstimate_z0_unbiasedpvunbiased(0),	\
m_el_trackIPEstimate_sigd0_biasedpvunbiased(0),	\
m_el_trackIPEstimate_sigz0_biasedpvunbiased(0),	\
m_el_trackIPEstimate_sigd0_unbiasedpvunbiased(0),	\
m_el_trackIPEstimate_sigz0_unbiasedpvunbiased(0),	\
m_el_hastrack(0),	\
m_el_deltaEmax2(0),	\
m_el_calibHitsShowerDepth(0),	\
m_el_isIso(0),	\
m_el_mvaptcone20(0),	\
m_el_mvaptcone30(0),	\
m_el_mvaptcone40(0),	\
m_el_jet_dr(0),	\
m_el_jet_E(0),	\
m_el_jet_pt(0),	\
m_el_jet_m(0),	\
m_el_jet_eta(0),	\
m_el_jet_phi(0),	\
m_el_jet_matched(0),	\
m_el_Etcone40_ED_corrected(0),	\
m_el_Etcone40_corrected(0),	\
m_el_EF_dr(0),	\
m_el_EF_index(0),	\
m_el_L2_dr(0),	\
m_el_L2_index(0),	\
m_el_L1_dr(0),	\
m_el_L1_index(0),	\
m_trig_EF_el_n(0),	\
m_trig_EF_el_pt(0),	\
m_trig_EF_el_eta(0),	\
m_trig_EF_el_phi(0),	\
m_EF_2e10_medium(0),	\
m_EF_2e10_medium_mu6(0),	\
m_EF_2e12Tvh_medium(0),	\
m_EF_2e12_medium(0),	\
m_EF_2e15vh_medium(0),	\
m_EF_2e5_tight(0),	\
m_EF_2e5_tight_Jpsi(0),	\
m_EF_2mu10(0),	\
m_EF_2mu10_empty(0),	\
m_EF_2mu10_loose(0),	\
m_EF_2mu10_loose_empty(0),	\
m_EF_2mu10_loose_noOvlpRm(0),	\
m_EF_2mu13_Zmumu_IDTrkNoCut(0),	\
m_EF_2mu4T(0),	\
m_EF_2mu4T_Bmumu(0),	\
m_EF_2mu4T_Bmumux(0),	\
m_EF_2mu4T_DiMu(0),	\
m_EF_2mu4T_DiMu_DY(0),	\
m_EF_2mu4T_DiMu_DY20(0),	\
m_EF_2mu4T_DiMu_DY_noVtx_noOS(0),	\
m_EF_2mu4T_DiMu_SiTrk(0),	\
m_EF_2mu4T_DiMu_noVtx_noOS(0),	\
m_EF_2mu4T_EFxe20_noMu(0),	\
m_EF_2mu4T_EFxe30_noMu(0),	\
m_EF_2mu4T_Jpsimumu(0),	\
m_EF_2mu4T_Jpsimumu_IDTrkNoCut(0),	\
m_EF_2mu4T_Upsimumu(0),	\
m_EF_2mu4T_xe30_noMu(0),	\
m_EF_2mu4T_xe40_noMu(0),	\
m_EF_2mu4Ti_DiMu_DY(0),	\
m_EF_2mu6(0),	\
m_EF_2mu6_Bmumux(0),	\
m_EF_2mu6_DiMu(0),	\
m_EF_2mu6_MSonly_g10_loose(0),	\
m_EF_2mu6_MSonly_g10_loose_nonfilled(0),	\
m_EF_e10_medium(0),	\
m_EF_e10_medium_2mu6(0),	\
m_EF_e10_medium_mu10(0),	\
m_EF_e10_medium_mu6(0),	\
m_EF_e10_medium_mu6_topo_medium(0),	\
m_EF_e11_etcut(0),	\
m_EF_e12Tvh_medium(0),	\
m_EF_e12Tvh_medium_2e6T_medium(0),	\
m_EF_e12Tvh_medium_mu6(0),	\
m_EF_e12Tvh_medium_mu6_topo_medium(0),	\
m_EF_e12_medium(0),	\
m_EF_e13_etcutTrk_xs45_noMu_dphi2j10xe20(0),	\
m_EF_e13_etcutTrk_xs60_noMu(0),	\
m_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe07(0),	\
m_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe20(0),	\
m_EF_e14_tight_e4_etcut_Jpsi(0),	\
m_EF_e15vh_loose1_e12Tvh_loose1_Zee(0),	\
m_EF_e15vh_medium(0),	\
m_EF_e15vh_medium_xe40_noMu(0),	\
m_EF_e15vh_medium_xe50_noMu(0),	\
m_EF_e20_etcutTrk_xe40_noMu_dphi2j10xe20(0),	\
m_EF_e20_etcutTrk_xs60_noMu_dphi2j10xe07(0),	\
m_EF_e20_tight_e15_NoCut_Zee(0),	\
m_EF_e22vh_loose(0),	\
m_EF_e22vh_loose1(0),	\
m_EF_e22vh_looseTrk(0),	\
m_EF_e22vh_loose_2j20_a4tc_EFFS(0),	\
m_EF_e22vh_loose_3j20_a4tc_EFFS(0),	\
m_EF_e22vh_loose_4j15_a4tc_EFFS(0),	\
m_EF_e22vh_medium(0),	\
m_EF_e22vh_medium1(0),	\
m_EF_e22vh_medium2(0),	\
m_EF_e22vh_medium_IDTrkNoCut(0),	\
m_EF_e22vh_medium_SiTrk(0),	\
m_EF_e22vh_medium_TRT(0),	\
m_EF_e40_medium(0),	\
m_EF_e45_medium(0),	\
m_EF_e45_medium1(0),	\
m_EF_e5_medium_mu6(0),	\
m_EF_e5_medium_mu6_topo_medium(0),	\
m_EF_e5_tight(0),	\
m_EF_e5_tight_e14_etcut_Jpsi(0),	\
m_EF_e5_tight_e4_etcut_Jpsi(0),	\
m_EF_e5_tight_e4_etcut_Jpsi_SiTrk(0),	\
m_EF_e5_tight_e4_etcut_Jpsi_TRT(0),	\
m_EF_e5_tight_e5_NoCut(0),	\
m_EF_e5_tight_e9_etcut_Jpsi(0),	\
m_EF_e60_loose(0),	\
m_EF_e6T_medium(0),	\
m_EF_e9_tight_e4_etcut_Jpsi(0),	\
m_EF_g100_loose(0),	\
m_EF_g10_NoCut_cosmic(0),	\
m_EF_g11_etcut(0),	\
m_EF_g11_etcut_larcalib(0),	\
m_EF_g150_etcut(0),	\
m_EF_g20_etcut(0),	\
m_EF_g20_loose(0),	\
m_EF_g20_loose_larcalib(0),	\
m_EF_g40_loose(0),	\
m_EF_g40_loose_EFxe40_noMu(0),	\
m_EF_g40_loose_larcalib(0),	\
m_EF_g40_loose_xe45_medium_noMu(0),	\
m_EF_g40_loose_xe55_medium_noMu(0),	\
m_EF_g40_tight_b10_medium(0),	\
m_EF_g5_NoCut_cosmic(0),	\
m_EF_g60_loose(0),	\
m_EF_g60_loose_larcalib(0),	\
m_EF_g80_loose(0),	\
m_EF_g80_loose_larcalib(0),	\
m_EF_mu10(0),	\
m_EF_mu10_Jpsimumu(0),	\
m_EF_mu10_Upsimumu_FS(0),	\
m_EF_mu10_Upsimumu_tight_FS(0),	\
m_EF_mu10_loose(0),	\
m_EF_mu10_muCombTag_NoEF(0),	\
m_EF_mu11_empty_NoAlg(0),	\
m_EF_mu13(0),	\
m_EF_mu13_MG(0),	\
m_EF_mu13_muCombTag_NoEF(0),	\
m_EF_mu15(0),	\
m_EF_mu15_2mu4_EFFS_medium(0),	\
m_EF_mu15_mu10_EFFS(0),	\
m_EF_mu15_mu10_EFFS_medium(0),	\
m_EF_mu15_mu10_EFFS_tight(0),	\
m_EF_mu15_xe30_noMu(0),	\
m_EF_mu15i(0),	\
m_EF_mu15i_medium(0),	\
m_EF_mu18(0),	\
m_EF_mu18_L1J10(0),	\
m_EF_mu18_MG(0),	\
m_EF_mu18_MG_L1J10(0),	\
m_EF_mu18_MG_medium(0),	\
m_EF_mu18_medium(0),	\
m_EF_mu18_medium_2j20_a4tc_EFFS(0),	\
m_EF_mu18_medium_3j20_a4tc_EFFS(0),	\
m_EF_mu18_medium_4j15_a4tc_EFFS(0),	\
m_EF_mu18_medium_4j20_a4tc_EFFS(0),	\
m_EF_mu18i3_medium(0),	\
m_EF_mu18i4_medium(0),	\
m_EF_mu20(0),	\
m_EF_mu20_IDTrkNoCut(0),	\
m_EF_mu20_IDTrkNoCut_ManyVx(0),	\
m_EF_mu20_MG(0),	\
m_EF_mu20_MG_medium(0),	\
m_EF_mu20_empty(0),	\
m_EF_mu20_medium(0),	\
m_EF_mu20_mu10_EFFS_tight(0),	\
m_EF_mu20_muCombTag_NoEF(0),	\
m_EF_mu20i(0),	\
m_EF_mu20i_medium(0),	\
m_EF_mu22(0),	\
m_EF_mu22_MG(0),	\
m_EF_mu22_MG_medium(0),	\
m_EF_mu22_j30_a4tc_EFFS(0),	\
m_EF_mu22_medium(0),	\
m_EF_mu22i1_medium(0),	\
m_EF_mu22i2_medium(0),	\
m_EF_mu22i3_medium(0),	\
m_EF_mu22i4_medium(0),	\
m_EF_mu24_MG_medium(0),	\
m_EF_mu24_MG_tight(0),	\
m_EF_mu24_medium(0),	\
m_EF_mu24_tight(0),	\
m_EF_mu30_MG_medium(0),	\
m_EF_mu30_MG_tight(0),	\
m_EF_mu30_medium(0),	\
m_EF_mu30_tight(0),	\
m_EF_mu40_MSonly_barrel(0),	\
m_EF_mu40_MSonly_barrel_medium(0),	\
m_EF_mu40_MSonly_empty(0),	\
m_EF_mu40_MSonly_tight(0),	\
m_EF_mu40_MSonly_tight_L1MU11(0),	\
m_EF_mu40_MSonly_tighter(0),	\
m_EF_mu40_slow(0),	\
m_EF_mu40_slow_empty(0),	\
m_EF_mu40_slow_medium(0),	\
m_EF_mu40_slow_outOfTime(0),	\
m_EF_mu40_slow_outOfTime_medium(0),	\
m_EF_mu4T(0),	\
m_EF_mu4T_DiMu(0),	\
m_EF_mu4T_DiMu_FS_noOS(0),	\
m_EF_mu4T_Jpsimumu(0),	\
m_EF_mu4T_Trk_Jpsi(0),	\
m_EF_mu4T_Trk_Upsi_FS(0),	\
m_EF_mu4T_Upsimumu_FS(0),	\
m_EF_mu4T_Upsimumu_SiTrk_FS(0),	\
m_EF_mu4T_Upsimumu_tight_FS(0),	\
m_EF_mu4T_j45_a4tc_EFFS_xe45_loose_noMu(0),	\
m_EF_mu4T_j45_a4tc_EFFS_xe55_noMu(0),	\
m_EF_mu4Timu6i_DiMu_DY(0),	\
m_EF_mu4Timu6i_DiMu_DY14_noVtx_noOS(0),	\
m_EF_mu4Tmu6_Bmumu(0),	\
m_EF_mu4Tmu6_Bmumux(0),	\
m_EF_mu4Tmu6_DiMu(0),	\
m_EF_mu4Tmu6_DiMu_DY20(0),	\
m_EF_mu4Tmu6_DiMu_noVtx_noOS(0),	\
m_EF_mu4Tmu6_Jpsimumu(0),	\
m_EF_mu4Tmu6_Jpsimumu_IDTrkNoCut(0),	\
m_EF_mu4Tmu6_Upsimumu(0),	\
m_EF_mu4_L1J10_matched(0),	\
m_EF_mu4_L1J15_matched(0),	\
m_EF_mu4_L1J20_matched(0),	\
m_EF_mu4_L1J30_matched(0),	\
m_EF_mu4_L1J50_matched(0),	\
m_EF_mu4_L1J75_matched(0),	\
m_EF_mu4_L1MU11_MSonly_cosmic(0),	\
m_EF_mu4_L1MU11_cosmic(0),	\
m_EF_mu4_cosmic(0),	\
m_EF_mu4_empty_NoAlg(0),	\
m_EF_mu4_firstempty_NoAlg(0),	\
m_EF_mu4_j10_a4tc_EFFS_matched(0),	\
m_EF_mu4_j135_a4tc_EFFS_L1matched(0),	\
m_EF_mu4_j180_a4tc_EFFS_L1matched(0),	\
m_EF_mu4_unpaired_iso_NoAlg(0),	\
m_EF_mu6(0),	\
m_EF_mu6_DiMu_noOS(0),	\
m_EF_mu6_Jpsimumu(0),	\
m_EF_mu6_Jpsimumu_SiTrk(0),	\
m_EF_mu6_Jpsimumu_tight(0),	\
m_EF_mu6_Trk_Jpsi_loose(0),	\
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
m_ph_looseIso(0),	\
m_ph_tight(0),	\
m_ph_tightIso(0),	\
m_ph_looseAR(0),	\
m_ph_looseARIso(0),	\
m_ph_tightAR(0),	\
m_ph_tightARIso(0),	\
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
m_ph_nucone20(0),	\
m_ph_nucone30(0),	\
m_ph_nucone40(0),	\
m_ph_Etcone15_pt_corrected(0),	\
m_ph_Etcone20_pt_corrected(0),	\
m_ph_Etcone25_pt_corrected(0),	\
m_ph_Etcone30_pt_corrected(0),	\
m_ph_Etcone35_pt_corrected(0),	\
m_ph_Etcone40_pt_corrected(0),	\
m_ph_convanglematch(0),	\
m_ph_convtrackmatch(0),	\
m_ph_hasconv(0),	\
m_ph_convvtxx(0),	\
m_ph_convvtxy(0),	\
m_ph_convvtxz(0),	\
m_ph_Rconv(0),	\
m_ph_zconv(0),	\
m_ph_convvtxchi2(0),	\
m_ph_pt1conv(0),	\
m_ph_convtrk1nBLHits(0),	\
m_ph_convtrk1nPixHits(0),	\
m_ph_convtrk1nSCTHits(0),	\
m_ph_convtrk1nTRTHits(0),	\
m_ph_pt2conv(0),	\
m_ph_convtrk2nBLHits(0),	\
m_ph_convtrk2nPixHits(0),	\
m_ph_convtrk2nSCTHits(0),	\
m_ph_convtrk2nTRTHits(0),	\
m_ph_ptconv(0),	\
m_ph_pzconv(0),	\
m_ph_reta(0),	\
m_ph_rphi(0),	\
m_ph_EtringnoisedR03sig2(0),	\
m_ph_EtringnoisedR03sig3(0),	\
m_ph_EtringnoisedR03sig4(0),	\
m_ph_isolationlikelihoodjets(0),	\
m_ph_isolationlikelihoodhqelectrons(0),	\
m_ph_loglikelihood(0),	\
m_ph_photonweight(0),	\
m_ph_photonbgweight(0),	\
m_ph_neuralnet(0),	\
m_ph_Hmatrix(0),	\
m_ph_Hmatrix5(0),	\
m_ph_adaboost(0),	\
m_ph_zvertex(0),	\
m_ph_errz(0),	\
m_ph_etap(0),	\
m_ph_depth(0),	\
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
m_ph_calibHitsShowerDepth(0),	\
m_ph_isIso(0),	\
m_ph_mvaptcone20(0),	\
m_ph_mvaptcone30(0),	\
m_ph_mvaptcone40(0),	\
m_ph_topoEtcone20(0),	\
m_ph_topoEtcone40(0),	\
m_ph_topoEtcone60(0),	\
m_ph_jet_dr(0),	\
m_ph_jet_E(0),	\
m_ph_jet_pt(0),	\
m_ph_jet_m(0),	\
m_ph_jet_eta(0),	\
m_ph_jet_phi(0),	\
m_ph_jet_matched(0),	\
m_ph_convIP(0),	\
m_ph_convIPRev(0),	\
m_ph_ptIsolationCone(0),	\
m_ph_ptIsolationConePhAngle(0),	\
m_ph_Etcone40_ED_corrected(0),	\
m_ph_Etcone40_corrected(0),	\
m_ph_topodr(0),	\
m_ph_topopt(0),	\
m_ph_topoeta(0),	\
m_ph_topophi(0),	\
m_ph_topomatched(0),	\
m_ph_topoEMdr(0),	\
m_ph_topoEMpt(0),	\
m_ph_topoEMeta(0),	\
m_ph_topoEMphi(0),	\
m_ph_topoEMmatched(0),	\
m_ph_EF_dr(0),	\
m_ph_EF_index(0),	\
m_ph_L2_dr(0),	\
m_ph_L2_index(0),	\
m_ph_L1_dr(0),	\
m_ph_L1_index(0),	\
m_ph_el_index(0),	\
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
m_mu_staco_matchchi2(0),	\
m_mu_staco_matchndof(0),	\
m_mu_staco_etcone20(0),	\
m_mu_staco_etcone30(0),	\
m_mu_staco_etcone40(0),	\
m_mu_staco_nucone20(0),	\
m_mu_staco_nucone30(0),	\
m_mu_staco_nucone40(0),	\
m_mu_staco_ptcone20(0),	\
m_mu_staco_ptcone30(0),	\
m_mu_staco_ptcone40(0),	\
m_mu_staco_energyLossPar(0),	\
m_mu_staco_energyLossErr(0),	\
m_mu_staco_etCore(0),	\
m_mu_staco_energyLossType(0),	\
m_mu_staco_caloMuonIdTag(0),	\
m_mu_staco_caloLRLikelihood(0),	\
m_mu_staco_bestMatch(0),	\
m_mu_staco_isStandAloneMuon(0),	\
m_mu_staco_isCombinedMuon(0),	\
m_mu_staco_isLowPtReconstructedMuon(0),	\
m_mu_staco_isSegmentTaggedMuon(0),	\
m_mu_staco_isCaloMuonId(0),	\
m_mu_staco_alsoFoundByLowPt(0),	\
m_mu_staco_alsoFoundByCaloMuonId(0),	\
m_mu_staco_loose(0),	\
m_mu_staco_medium(0),	\
m_mu_staco_tight(0),	\
m_mu_staco_d0_exPV(0),	\
m_mu_staco_z0_exPV(0),	\
m_mu_staco_phi_exPV(0),	\
m_mu_staco_theta_exPV(0),	\
m_mu_staco_qoverp_exPV(0),	\
m_mu_staco_cb_d0_exPV(0),	\
m_mu_staco_cb_z0_exPV(0),	\
m_mu_staco_cb_phi_exPV(0),	\
m_mu_staco_cb_theta_exPV(0),	\
m_mu_staco_cb_qoverp_exPV(0),	\
m_mu_staco_id_d0_exPV(0),	\
m_mu_staco_id_z0_exPV(0),	\
m_mu_staco_id_phi_exPV(0),	\
m_mu_staco_id_theta_exPV(0),	\
m_mu_staco_id_qoverp_exPV(0),	\
m_mu_staco_me_d0_exPV(0),	\
m_mu_staco_me_z0_exPV(0),	\
m_mu_staco_me_phi_exPV(0),	\
m_mu_staco_me_theta_exPV(0),	\
m_mu_staco_me_qoverp_exPV(0),	\
m_mu_staco_ie_d0_exPV(0),	\
m_mu_staco_ie_z0_exPV(0),	\
m_mu_staco_ie_phi_exPV(0),	\
m_mu_staco_ie_theta_exPV(0),	\
m_mu_staco_ie_qoverp_exPV(0),	\
m_mu_staco_SpaceTime_detID(0),	\
m_mu_staco_SpaceTime_t(0),	\
m_mu_staco_SpaceTime_tError(0),	\
m_mu_staco_SpaceTime_weight(0),	\
m_mu_staco_SpaceTime_x(0),	\
m_mu_staco_SpaceTime_y(0),	\
m_mu_staco_SpaceTime_z(0),	\
m_mu_staco_cov_d0_exPV(0),	\
m_mu_staco_cov_z0_exPV(0),	\
m_mu_staco_cov_phi_exPV(0),	\
m_mu_staco_cov_theta_exPV(0),	\
m_mu_staco_cov_qoverp_exPV(0),	\
m_mu_staco_cov_d0_z0_exPV(0),	\
m_mu_staco_cov_d0_phi_exPV(0),	\
m_mu_staco_cov_d0_theta_exPV(0),	\
m_mu_staco_cov_d0_qoverp_exPV(0),	\
m_mu_staco_cov_z0_phi_exPV(0),	\
m_mu_staco_cov_z0_theta_exPV(0),	\
m_mu_staco_cov_z0_qoverp_exPV(0),	\
m_mu_staco_cov_phi_theta_exPV(0),	\
m_mu_staco_cov_phi_qoverp_exPV(0),	\
m_mu_staco_cov_theta_qoverp_exPV(0),	\
m_mu_staco_id_cov_d0_exPV(0),	\
m_mu_staco_id_cov_z0_exPV(0),	\
m_mu_staco_id_cov_phi_exPV(0),	\
m_mu_staco_id_cov_theta_exPV(0),	\
m_mu_staco_id_cov_qoverp_exPV(0),	\
m_mu_staco_id_cov_d0_z0_exPV(0),	\
m_mu_staco_id_cov_d0_phi_exPV(0),	\
m_mu_staco_id_cov_d0_theta_exPV(0),	\
m_mu_staco_id_cov_d0_qoverp_exPV(0),	\
m_mu_staco_id_cov_z0_phi_exPV(0),	\
m_mu_staco_id_cov_z0_theta_exPV(0),	\
m_mu_staco_id_cov_z0_qoverp_exPV(0),	\
m_mu_staco_id_cov_phi_theta_exPV(0),	\
m_mu_staco_id_cov_phi_qoverp_exPV(0),	\
m_mu_staco_id_cov_theta_qoverp_exPV(0),	\
m_mu_staco_me_cov_d0_exPV(0),	\
m_mu_staco_me_cov_z0_exPV(0),	\
m_mu_staco_me_cov_phi_exPV(0),	\
m_mu_staco_me_cov_theta_exPV(0),	\
m_mu_staco_me_cov_qoverp_exPV(0),	\
m_mu_staco_me_cov_d0_z0_exPV(0),	\
m_mu_staco_me_cov_d0_phi_exPV(0),	\
m_mu_staco_me_cov_d0_theta_exPV(0),	\
m_mu_staco_me_cov_d0_qoverp_exPV(0),	\
m_mu_staco_me_cov_z0_phi_exPV(0),	\
m_mu_staco_me_cov_z0_theta_exPV(0),	\
m_mu_staco_me_cov_z0_qoverp_exPV(0),	\
m_mu_staco_me_cov_phi_theta_exPV(0),	\
m_mu_staco_me_cov_phi_qoverp_exPV(0),	\
m_mu_staco_me_cov_theta_qoverp_exPV(0),	\
m_mu_staco_ms_d0(0),	\
m_mu_staco_ms_z0(0),	\
m_mu_staco_ms_phi(0),	\
m_mu_staco_ms_theta(0),	\
m_mu_staco_ms_qoverp(0),	\
m_mu_staco_id_d0(0),	\
m_mu_staco_id_z0(0),	\
m_mu_staco_id_phi(0),	\
m_mu_staco_id_theta(0),	\
m_mu_staco_id_qoverp(0),	\
m_mu_staco_me_d0(0),	\
m_mu_staco_me_z0(0),	\
m_mu_staco_me_phi(0),	\
m_mu_staco_me_theta(0),	\
m_mu_staco_me_qoverp(0),	\
m_mu_staco_ie_d0(0),	\
m_mu_staco_ie_z0(0),	\
m_mu_staco_ie_phi(0),	\
m_mu_staco_ie_theta(0),	\
m_mu_staco_ie_qoverp(0),	\
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
m_mu_staco_nGangedPixels(0),	\
m_mu_staco_nPixelDeadSensors(0),	\
m_mu_staco_nSCTDeadSensors(0),	\
m_mu_staco_nTRTDeadStraws(0),	\
m_mu_staco_expectBLayerHit(0),	\
m_mu_staco_nMDTHits(0),	\
m_mu_staco_nMDTHoles(0),	\
m_mu_staco_nCSCEtaHits(0),	\
m_mu_staco_nCSCEtaHoles(0),	\
m_mu_staco_nCSCPhiHits(0),	\
m_mu_staco_nCSCPhiHoles(0),	\
m_mu_staco_nRPCEtaHits(0),	\
m_mu_staco_nRPCEtaHoles(0),	\
m_mu_staco_nRPCPhiHits(0),	\
m_mu_staco_nRPCPhiHoles(0),	\
m_mu_staco_nTGCEtaHits(0),	\
m_mu_staco_nTGCEtaHoles(0),	\
m_mu_staco_nTGCPhiHits(0),	\
m_mu_staco_nTGCPhiHoles(0),	\
m_mu_staco_nMDTBIHits(0),	\
m_mu_staco_nMDTBMHits(0),	\
m_mu_staco_nMDTBOHits(0),	\
m_mu_staco_nMDTBEEHits(0),	\
m_mu_staco_nMDTBIS78Hits(0),	\
m_mu_staco_nMDTEIHits(0),	\
m_mu_staco_nMDTEMHits(0),	\
m_mu_staco_nMDTEOHits(0),	\
m_mu_staco_nMDTEEHits(0),	\
m_mu_staco_nRPCLayer1EtaHits(0),	\
m_mu_staco_nRPCLayer2EtaHits(0),	\
m_mu_staco_nRPCLayer3EtaHits(0),	\
m_mu_staco_nRPCLayer1PhiHits(0),	\
m_mu_staco_nRPCLayer2PhiHits(0),	\
m_mu_staco_nRPCLayer3PhiHits(0),	\
m_mu_staco_nTGCLayer1EtaHits(0),	\
m_mu_staco_nTGCLayer2EtaHits(0),	\
m_mu_staco_nTGCLayer3EtaHits(0),	\
m_mu_staco_nTGCLayer4EtaHits(0),	\
m_mu_staco_nTGCLayer1PhiHits(0),	\
m_mu_staco_nTGCLayer2PhiHits(0),	\
m_mu_staco_nTGCLayer3PhiHits(0),	\
m_mu_staco_nTGCLayer4PhiHits(0),	\
m_mu_staco_barrelSectors(0),	\
m_mu_staco_endcapSectors(0),	\
m_mu_staco_trackd0(0),	\
m_mu_staco_trackz0(0),	\
m_mu_staco_trackphi(0),	\
m_mu_staco_tracktheta(0),	\
m_mu_staco_trackqoverp(0),	\
m_mu_staco_trackcov_d0(0),	\
m_mu_staco_trackcov_z0(0),	\
m_mu_staco_trackcov_phi(0),	\
m_mu_staco_trackcov_theta(0),	\
m_mu_staco_trackcov_qoverp(0),	\
m_mu_staco_trackcov_d0_z0(0),	\
m_mu_staco_trackcov_d0_phi(0),	\
m_mu_staco_trackcov_d0_theta(0),	\
m_mu_staco_trackcov_d0_qoverp(0),	\
m_mu_staco_trackcov_z0_phi(0),	\
m_mu_staco_trackcov_z0_theta(0),	\
m_mu_staco_trackcov_z0_qoverp(0),	\
m_mu_staco_trackcov_phi_theta(0),	\
m_mu_staco_trackcov_phi_qoverp(0),	\
m_mu_staco_trackcov_theta_qoverp(0),	\
m_mu_staco_trackfitchi2(0),	\
m_mu_staco_trackfitndof(0),	\
m_mu_staco_hastrack(0),	\
m_mu_staco_trackd0beam(0),	\
m_mu_staco_trackz0beam(0),	\
m_mu_staco_tracksigd0beam(0),	\
m_mu_staco_tracksigz0beam(0),	\
m_mu_staco_trackd0pv(0),	\
m_mu_staco_trackz0pv(0),	\
m_mu_staco_tracksigd0pv(0),	\
m_mu_staco_tracksigz0pv(0),	\
m_mu_staco_trackIPEstimate_d0_biasedpvunbiased(0),	\
m_mu_staco_trackIPEstimate_z0_biasedpvunbiased(0),	\
m_mu_staco_trackIPEstimate_d0_unbiasedpvunbiased(0),	\
m_mu_staco_trackIPEstimate_z0_unbiasedpvunbiased(0),	\
m_mu_staco_trackIPEstimate_sigd0_biasedpvunbiased(0),	\
m_mu_staco_trackIPEstimate_sigz0_biasedpvunbiased(0),	\
m_mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased(0),	\
m_mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased(0),	\
m_mu_staco_EFCB_dr(0),	\
m_mu_staco_EFCB_index(0),	\
m_mu_staco_EFMG_dr(0),	\
m_mu_staco_EFMG_index(0),	\
m_mu_staco_EFME_dr(0),	\
m_mu_staco_EFME_index(0),	\
m_mu_staco_L2CB_dr(0),	\
m_mu_staco_L2CB_index(0),	\
m_mu_staco_L1_dr(0),	\
m_mu_staco_L1_index(0),	\
m_jet_AntiKt4TopoEM_n(0),	\
m_jet_AntiKt4TopoEM_E(0),	\
m_jet_AntiKt4TopoEM_pt(0),	\
m_jet_AntiKt4TopoEM_m(0),	\
m_jet_AntiKt4TopoEM_eta(0),	\
m_jet_AntiKt4TopoEM_phi(0),	\
m_jet_AntiKt4TopoEM_EtaOrigin(0),	\
m_jet_AntiKt4TopoEM_PhiOrigin(0),	\
m_jet_AntiKt4TopoEM_MOrigin(0),	\
m_jet_AntiKt4TopoEM_EtaOriginEM(0),	\
m_jet_AntiKt4TopoEM_PhiOriginEM(0),	\
m_jet_AntiKt4TopoEM_MOriginEM(0),	\
m_jet_AntiKt4TopoEM_WIDTH(0),	\
m_jet_AntiKt4TopoEM_n90(0),	\
m_jet_AntiKt4TopoEM_Timing(0),	\
m_jet_AntiKt4TopoEM_LArQuality(0),	\
m_jet_AntiKt4TopoEM_nTrk(0),	\
m_jet_AntiKt4TopoEM_sumPtTrk(0),	\
m_jet_AntiKt4TopoEM_OriginIndex(0),	\
m_jet_AntiKt4TopoEM_HECQuality(0),	\
m_jet_AntiKt4TopoEM_NegativeE(0),	\
m_jet_AntiKt4TopoEM_AverageLArQF(0),	\
m_jet_AntiKt4TopoEM_YFlip12(0),	\
m_jet_AntiKt4TopoEM_YFlip23(0),	\
m_jet_AntiKt4TopoEM_BCH_CORR_CELL(0),	\
m_jet_AntiKt4TopoEM_BCH_CORR_DOTX(0),	\
m_jet_AntiKt4TopoEM_BCH_CORR_JET(0),	\
m_jet_AntiKt4TopoEM_BCH_CORR_JET_FORCELL(0),	\
m_jet_AntiKt4TopoEM_ENG_BAD_CELLS(0),	\
m_jet_AntiKt4TopoEM_N_BAD_CELLS(0),	\
m_jet_AntiKt4TopoEM_N_BAD_CELLS_CORR(0),	\
m_jet_AntiKt4TopoEM_BAD_CELLS_CORR_E(0),	\
m_jet_AntiKt4TopoEM_NumTowers(0),	\
m_jet_AntiKt4TopoEM_SamplingMax(0),	\
m_jet_AntiKt4TopoEM_fracSamplingMax(0),	\
m_jet_AntiKt4TopoEM_hecf(0),	\
m_jet_AntiKt4TopoEM_tgap3f(0),	\
m_jet_AntiKt4TopoEM_isUgly(0),	\
m_jet_AntiKt4TopoEM_isBadLoose(0),	\
m_jet_AntiKt4TopoEM_isBadMedium(0),	\
m_jet_AntiKt4TopoEM_isBadTight(0),	\
m_jet_AntiKt4TopoEM_emfrac(0),	\
m_jet_AntiKt4TopoEM_Offset(0),	\
m_jet_AntiKt4TopoEM_EMJES(0),	\
m_jet_AntiKt4TopoEM_EMJES_EtaCorr(0),	\
m_jet_AntiKt4TopoEM_EMJESnooffset(0),	\
m_jet_AntiKt4TopoEM_GCWJES(0),	\
m_jet_AntiKt4TopoEM_GCWJES_EtaCorr(0),	\
m_jet_AntiKt4TopoEM_CB(0),	\
m_jet_AntiKt4TopoEM_LCJES(0),	\
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
m_jet_AntiKt4TopoEM_GSCFactorF(0),	\
m_jet_AntiKt4TopoEM_WidthFraction(0),	\
m_jet_AntiKt4TopoEM_el_dr(0),	\
m_jet_AntiKt4TopoEM_el_matched(0),	\
m_jet_AntiKt4TopoEM_mu_dr(0),	\
m_jet_AntiKt4TopoEM_mu_matched(0),	\
m_jet_AntiKt4TopoEM_L1_dr(0),	\
m_jet_AntiKt4TopoEM_L1_matched(0),	\
m_jet_AntiKt4TopoEM_L2_dr(0),	\
m_jet_AntiKt4TopoEM_L2_matched(0),	\
m_jet_AntiKt4TopoEM_EF_dr(0),	\
m_jet_AntiKt4TopoEM_EF_matched(0),	\
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
UInt_t m_timestamp;	\
UInt_t o_m_timestamp;	\
UInt_t m_timestamp_ns;	\
UInt_t o_m_timestamp_ns;	\
UInt_t m_lbn;	\
UInt_t o_m_lbn;	\
UInt_t m_bcid;	\
UInt_t o_m_bcid;	\
Float_t m_actualIntPerXing;	\
Float_t o_m_actualIntPerXing;	\
Float_t m_averageIntPerXing;	\
Float_t o_m_averageIntPerXing;	\
Int_t m_el_n;	\
Int_t o_m_el_n;	\
std::vector<float>* m_el_E;	\
std::vector<float> o_m_el_E;	\
std::vector<float>* m_el_Et;	\
std::vector<float> o_m_el_Et;	\
std::vector<float>* m_el_pt;	\
std::vector<float> o_m_el_pt;	\
std::vector<float>* m_el_m;	\
std::vector<float> o_m_el_m;	\
std::vector<float>* m_el_eta;	\
std::vector<float> o_m_el_eta;	\
std::vector<float>* m_el_phi;	\
std::vector<float> o_m_el_phi;	\
std::vector<float>* m_el_px;	\
std::vector<float> o_m_el_px;	\
std::vector<float>* m_el_py;	\
std::vector<float> o_m_el_py;	\
std::vector<float>* m_el_pz;	\
std::vector<float> o_m_el_pz;	\
std::vector<float>* m_el_charge;	\
std::vector<float> o_m_el_charge;	\
std::vector<int>* m_el_author;	\
std::vector<int> o_m_el_author;	\
std::vector<unsigned int>* m_el_isEM;	\
std::vector<unsigned int> o_m_el_isEM;	\
std::vector<unsigned int>* m_el_OQ;	\
std::vector<unsigned int> o_m_el_OQ;	\
std::vector<int>* m_el_convFlag;	\
std::vector<int> o_m_el_convFlag;	\
std::vector<int>* m_el_isConv;	\
std::vector<int> o_m_el_isConv;	\
std::vector<int>* m_el_nConv;	\
std::vector<int> o_m_el_nConv;	\
std::vector<int>* m_el_nSingleTrackConv;	\
std::vector<int> o_m_el_nSingleTrackConv;	\
std::vector<int>* m_el_nDoubleTrackConv;	\
std::vector<int> o_m_el_nDoubleTrackConv;	\
std::vector<unsigned int>* m_el_OQRecalc;	\
std::vector<unsigned int> o_m_el_OQRecalc;	\
std::vector<int>* m_el_loose;	\
std::vector<int> o_m_el_loose;	\
std::vector<int>* m_el_looseIso;	\
std::vector<int> o_m_el_looseIso;	\
std::vector<int>* m_el_medium;	\
std::vector<int> o_m_el_medium;	\
std::vector<int>* m_el_mediumIso;	\
std::vector<int> o_m_el_mediumIso;	\
std::vector<int>* m_el_mediumWithoutTrack;	\
std::vector<int> o_m_el_mediumWithoutTrack;	\
std::vector<int>* m_el_mediumIsoWithoutTrack;	\
std::vector<int> o_m_el_mediumIsoWithoutTrack;	\
std::vector<int>* m_el_tight;	\
std::vector<int> o_m_el_tight;	\
std::vector<int>* m_el_tightIso;	\
std::vector<int> o_m_el_tightIso;	\
std::vector<int>* m_el_tightWithoutTrack;	\
std::vector<int> o_m_el_tightWithoutTrack;	\
std::vector<int>* m_el_tightIsoWithoutTrack;	\
std::vector<int> o_m_el_tightIsoWithoutTrack;	\
std::vector<int>* m_el_loosePP;	\
std::vector<int> o_m_el_loosePP;	\
std::vector<int>* m_el_loosePPIso;	\
std::vector<int> o_m_el_loosePPIso;	\
std::vector<int>* m_el_mediumPP;	\
std::vector<int> o_m_el_mediumPP;	\
std::vector<int>* m_el_mediumPPIso;	\
std::vector<int> o_m_el_mediumPPIso;	\
std::vector<int>* m_el_tightPP;	\
std::vector<int> o_m_el_tightPP;	\
std::vector<int>* m_el_tightPPIso;	\
std::vector<int> o_m_el_tightPPIso;	\
std::vector<int>* m_el_goodOQ;	\
std::vector<int> o_m_el_goodOQ;	\
std::vector<float>* m_el_Ethad;	\
std::vector<float> o_m_el_Ethad;	\
std::vector<float>* m_el_Ethad1;	\
std::vector<float> o_m_el_Ethad1;	\
std::vector<float>* m_el_f1;	\
std::vector<float> o_m_el_f1;	\
std::vector<float>* m_el_f1core;	\
std::vector<float> o_m_el_f1core;	\
std::vector<float>* m_el_Emins1;	\
std::vector<float> o_m_el_Emins1;	\
std::vector<float>* m_el_fside;	\
std::vector<float> o_m_el_fside;	\
std::vector<float>* m_el_Emax2;	\
std::vector<float> o_m_el_Emax2;	\
std::vector<float>* m_el_ws3;	\
std::vector<float> o_m_el_ws3;	\
std::vector<float>* m_el_wstot;	\
std::vector<float> o_m_el_wstot;	\
std::vector<float>* m_el_emaxs1;	\
std::vector<float> o_m_el_emaxs1;	\
std::vector<float>* m_el_deltaEs;	\
std::vector<float> o_m_el_deltaEs;	\
std::vector<float>* m_el_E233;	\
std::vector<float> o_m_el_E233;	\
std::vector<float>* m_el_E237;	\
std::vector<float> o_m_el_E237;	\
std::vector<float>* m_el_E277;	\
std::vector<float> o_m_el_E277;	\
std::vector<float>* m_el_weta2;	\
std::vector<float> o_m_el_weta2;	\
std::vector<float>* m_el_f3;	\
std::vector<float> o_m_el_f3;	\
std::vector<float>* m_el_f3core;	\
std::vector<float> o_m_el_f3core;	\
std::vector<float>* m_el_rphiallcalo;	\
std::vector<float> o_m_el_rphiallcalo;	\
std::vector<float>* m_el_Etcone45;	\
std::vector<float> o_m_el_Etcone45;	\
std::vector<float>* m_el_Etcone15;	\
std::vector<float> o_m_el_Etcone15;	\
std::vector<float>* m_el_Etcone20;	\
std::vector<float> o_m_el_Etcone20;	\
std::vector<float>* m_el_Etcone25;	\
std::vector<float> o_m_el_Etcone25;	\
std::vector<float>* m_el_Etcone30;	\
std::vector<float> o_m_el_Etcone30;	\
std::vector<float>* m_el_Etcone35;	\
std::vector<float> o_m_el_Etcone35;	\
std::vector<float>* m_el_Etcone40;	\
std::vector<float> o_m_el_Etcone40;	\
std::vector<float>* m_el_ptcone20;	\
std::vector<float> o_m_el_ptcone20;	\
std::vector<float>* m_el_ptcone30;	\
std::vector<float> o_m_el_ptcone30;	\
std::vector<float>* m_el_ptcone40;	\
std::vector<float> o_m_el_ptcone40;	\
std::vector<float>* m_el_nucone20;	\
std::vector<float> o_m_el_nucone20;	\
std::vector<float>* m_el_nucone30;	\
std::vector<float> o_m_el_nucone30;	\
std::vector<float>* m_el_nucone40;	\
std::vector<float> o_m_el_nucone40;	\
std::vector<float>* m_el_Etcone15_pt_corrected;	\
std::vector<float> o_m_el_Etcone15_pt_corrected;	\
std::vector<float>* m_el_Etcone20_pt_corrected;	\
std::vector<float> o_m_el_Etcone20_pt_corrected;	\
std::vector<float>* m_el_Etcone25_pt_corrected;	\
std::vector<float> o_m_el_Etcone25_pt_corrected;	\
std::vector<float>* m_el_Etcone30_pt_corrected;	\
std::vector<float> o_m_el_Etcone30_pt_corrected;	\
std::vector<float>* m_el_Etcone35_pt_corrected;	\
std::vector<float> o_m_el_Etcone35_pt_corrected;	\
std::vector<float>* m_el_Etcone40_pt_corrected;	\
std::vector<float> o_m_el_Etcone40_pt_corrected;	\
std::vector<float>* m_el_convanglematch;	\
std::vector<float> o_m_el_convanglematch;	\
std::vector<float>* m_el_convtrackmatch;	\
std::vector<float> o_m_el_convtrackmatch;	\
std::vector<int>* m_el_hasconv;	\
std::vector<int> o_m_el_hasconv;	\
std::vector<float>* m_el_convvtxx;	\
std::vector<float> o_m_el_convvtxx;	\
std::vector<float>* m_el_convvtxy;	\
std::vector<float> o_m_el_convvtxy;	\
std::vector<float>* m_el_convvtxz;	\
std::vector<float> o_m_el_convvtxz;	\
std::vector<float>* m_el_Rconv;	\
std::vector<float> o_m_el_Rconv;	\
std::vector<float>* m_el_zconv;	\
std::vector<float> o_m_el_zconv;	\
std::vector<float>* m_el_convvtxchi2;	\
std::vector<float> o_m_el_convvtxchi2;	\
std::vector<float>* m_el_pt1conv;	\
std::vector<float> o_m_el_pt1conv;	\
std::vector<int>* m_el_convtrk1nBLHits;	\
std::vector<int> o_m_el_convtrk1nBLHits;	\
std::vector<int>* m_el_convtrk1nPixHits;	\
std::vector<int> o_m_el_convtrk1nPixHits;	\
std::vector<int>* m_el_convtrk1nSCTHits;	\
std::vector<int> o_m_el_convtrk1nSCTHits;	\
std::vector<int>* m_el_convtrk1nTRTHits;	\
std::vector<int> o_m_el_convtrk1nTRTHits;	\
std::vector<float>* m_el_pt2conv;	\
std::vector<float> o_m_el_pt2conv;	\
std::vector<int>* m_el_convtrk2nBLHits;	\
std::vector<int> o_m_el_convtrk2nBLHits;	\
std::vector<int>* m_el_convtrk2nPixHits;	\
std::vector<int> o_m_el_convtrk2nPixHits;	\
std::vector<int>* m_el_convtrk2nSCTHits;	\
std::vector<int> o_m_el_convtrk2nSCTHits;	\
std::vector<int>* m_el_convtrk2nTRTHits;	\
std::vector<int> o_m_el_convtrk2nTRTHits;	\
std::vector<float>* m_el_ptconv;	\
std::vector<float> o_m_el_ptconv;	\
std::vector<float>* m_el_pzconv;	\
std::vector<float> o_m_el_pzconv;	\
std::vector<float>* m_el_pos7;	\
std::vector<float> o_m_el_pos7;	\
std::vector<float>* m_el_etacorrmag;	\
std::vector<float> o_m_el_etacorrmag;	\
std::vector<float>* m_el_deltaeta1;	\
std::vector<float> o_m_el_deltaeta1;	\
std::vector<float>* m_el_deltaeta2;	\
std::vector<float> o_m_el_deltaeta2;	\
std::vector<float>* m_el_deltaphi2;	\
std::vector<float> o_m_el_deltaphi2;	\
std::vector<float>* m_el_deltaphiRescaled;	\
std::vector<float> o_m_el_deltaphiRescaled;	\
std::vector<float>* m_el_deltaPhiRot;	\
std::vector<float> o_m_el_deltaPhiRot;	\
std::vector<float>* m_el_expectHitInBLayer;	\
std::vector<float> o_m_el_expectHitInBLayer;	\
std::vector<float>* m_el_trackd0_physics;	\
std::vector<float> o_m_el_trackd0_physics;	\
std::vector<float>* m_el_etaSampling1;	\
std::vector<float> o_m_el_etaSampling1;	\
std::vector<float>* m_el_reta;	\
std::vector<float> o_m_el_reta;	\
std::vector<float>* m_el_rphi;	\
std::vector<float> o_m_el_rphi;	\
std::vector<float>* m_el_EtringnoisedR03sig2;	\
std::vector<float> o_m_el_EtringnoisedR03sig2;	\
std::vector<float>* m_el_EtringnoisedR03sig3;	\
std::vector<float> o_m_el_EtringnoisedR03sig3;	\
std::vector<float>* m_el_EtringnoisedR03sig4;	\
std::vector<float> o_m_el_EtringnoisedR03sig4;	\
std::vector<double>* m_el_isolationlikelihoodjets;	\
std::vector<double> o_m_el_isolationlikelihoodjets;	\
std::vector<double>* m_el_isolationlikelihoodhqelectrons;	\
std::vector<double> o_m_el_isolationlikelihoodhqelectrons;	\
std::vector<double>* m_el_electronweight;	\
std::vector<double> o_m_el_electronweight;	\
std::vector<double>* m_el_electronbgweight;	\
std::vector<double> o_m_el_electronbgweight;	\
std::vector<double>* m_el_softeweight;	\
std::vector<double> o_m_el_softeweight;	\
std::vector<double>* m_el_softebgweight;	\
std::vector<double> o_m_el_softebgweight;	\
std::vector<double>* m_el_neuralnet;	\
std::vector<double> o_m_el_neuralnet;	\
std::vector<double>* m_el_Hmatrix;	\
std::vector<double> o_m_el_Hmatrix;	\
std::vector<double>* m_el_Hmatrix5;	\
std::vector<double> o_m_el_Hmatrix5;	\
std::vector<double>* m_el_adaboost;	\
std::vector<double> o_m_el_adaboost;	\
std::vector<double>* m_el_softeneuralnet;	\
std::vector<double> o_m_el_softeneuralnet;	\
std::vector<float>* m_el_zvertex;	\
std::vector<float> o_m_el_zvertex;	\
std::vector<float>* m_el_errz;	\
std::vector<float> o_m_el_errz;	\
std::vector<float>* m_el_etap;	\
std::vector<float> o_m_el_etap;	\
std::vector<float>* m_el_depth;	\
std::vector<float> o_m_el_depth;	\
std::vector<int>* m_el_refittedTrack_n;	\
std::vector<int> o_m_el_refittedTrack_n;	\
std::vector<std::vector<int> >* m_el_refittedTrack_author;	\
std::vector<std::vector<int> > o_m_el_refittedTrack_author;	\
std::vector<std::vector<float> >* m_el_refittedTrack_chi2;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_chi2;	\
std::vector<std::vector<int> >* m_el_refittedTrack_hasBrem;	\
std::vector<std::vector<int> > o_m_el_refittedTrack_hasBrem;	\
std::vector<std::vector<float> >* m_el_refittedTrack_bremRadius;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_bremRadius;	\
std::vector<std::vector<float> >* m_el_refittedTrack_bremZ;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_bremZ;	\
std::vector<std::vector<float> >* m_el_refittedTrack_bremRadiusErr;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_bremRadiusErr;	\
std::vector<std::vector<float> >* m_el_refittedTrack_bremZErr;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_bremZErr;	\
std::vector<std::vector<int> >* m_el_refittedTrack_bremFitStatus;	\
std::vector<std::vector<int> > o_m_el_refittedTrack_bremFitStatus;	\
std::vector<std::vector<float> >* m_el_refittedTrack_qoverp;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_qoverp;	\
std::vector<std::vector<float> >* m_el_refittedTrack_d0;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_d0;	\
std::vector<std::vector<float> >* m_el_refittedTrack_z0;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_z0;	\
std::vector<std::vector<float> >* m_el_refittedTrack_theta;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_theta;	\
std::vector<std::vector<float> >* m_el_refittedTrack_phi;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_phi;	\
std::vector<std::vector<float> >* m_el_refittedTrack_LMqoverp;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_LMqoverp;	\
std::vector<std::vector<float> >* m_el_refittedTrack_covd0;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_covd0;	\
std::vector<std::vector<float> >* m_el_refittedTrack_covz0;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_covz0;	\
std::vector<std::vector<float> >* m_el_refittedTrack_covphi;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_covphi;	\
std::vector<std::vector<float> >* m_el_refittedTrack_covtheta;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_covtheta;	\
std::vector<std::vector<float> >* m_el_refittedTrack_covqoverp;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_covqoverp;	\
std::vector<std::vector<float> >* m_el_refittedTrack_covd0z0;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_covd0z0;	\
std::vector<std::vector<float> >* m_el_refittedTrack_covz0phi;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_covz0phi;	\
std::vector<std::vector<float> >* m_el_refittedTrack_covz0theta;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_covz0theta;	\
std::vector<std::vector<float> >* m_el_refittedTrack_covz0qoverp;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_covz0qoverp;	\
std::vector<std::vector<float> >* m_el_refittedTrack_covd0phi;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_covd0phi;	\
std::vector<std::vector<float> >* m_el_refittedTrack_covd0theta;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_covd0theta;	\
std::vector<std::vector<float> >* m_el_refittedTrack_covd0qoverp;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_covd0qoverp;	\
std::vector<std::vector<float> >* m_el_refittedTrack_covphitheta;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_covphitheta;	\
std::vector<std::vector<float> >* m_el_refittedTrack_covphiqoverp;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_covphiqoverp;	\
std::vector<std::vector<float> >* m_el_refittedTrack_covthetaqoverp;	\
std::vector<std::vector<float> > o_m_el_refittedTrack_covthetaqoverp;	\
std::vector<float>* m_el_Es0;	\
std::vector<float> o_m_el_Es0;	\
std::vector<float>* m_el_etas0;	\
std::vector<float> o_m_el_etas0;	\
std::vector<float>* m_el_phis0;	\
std::vector<float> o_m_el_phis0;	\
std::vector<float>* m_el_Es1;	\
std::vector<float> o_m_el_Es1;	\
std::vector<float>* m_el_etas1;	\
std::vector<float> o_m_el_etas1;	\
std::vector<float>* m_el_phis1;	\
std::vector<float> o_m_el_phis1;	\
std::vector<float>* m_el_Es2;	\
std::vector<float> o_m_el_Es2;	\
std::vector<float>* m_el_etas2;	\
std::vector<float> o_m_el_etas2;	\
std::vector<float>* m_el_phis2;	\
std::vector<float> o_m_el_phis2;	\
std::vector<float>* m_el_Es3;	\
std::vector<float> o_m_el_Es3;	\
std::vector<float>* m_el_etas3;	\
std::vector<float> o_m_el_etas3;	\
std::vector<float>* m_el_phis3;	\
std::vector<float> o_m_el_phis3;	\
std::vector<float>* m_el_E_PreSamplerB;	\
std::vector<float> o_m_el_E_PreSamplerB;	\
std::vector<float>* m_el_E_EMB1;	\
std::vector<float> o_m_el_E_EMB1;	\
std::vector<float>* m_el_E_EMB2;	\
std::vector<float> o_m_el_E_EMB2;	\
std::vector<float>* m_el_E_EMB3;	\
std::vector<float> o_m_el_E_EMB3;	\
std::vector<float>* m_el_E_PreSamplerE;	\
std::vector<float> o_m_el_E_PreSamplerE;	\
std::vector<float>* m_el_E_EME1;	\
std::vector<float> o_m_el_E_EME1;	\
std::vector<float>* m_el_E_EME2;	\
std::vector<float> o_m_el_E_EME2;	\
std::vector<float>* m_el_E_EME3;	\
std::vector<float> o_m_el_E_EME3;	\
std::vector<float>* m_el_E_HEC0;	\
std::vector<float> o_m_el_E_HEC0;	\
std::vector<float>* m_el_E_HEC1;	\
std::vector<float> o_m_el_E_HEC1;	\
std::vector<float>* m_el_E_HEC2;	\
std::vector<float> o_m_el_E_HEC2;	\
std::vector<float>* m_el_E_HEC3;	\
std::vector<float> o_m_el_E_HEC3;	\
std::vector<float>* m_el_E_TileBar0;	\
std::vector<float> o_m_el_E_TileBar0;	\
std::vector<float>* m_el_E_TileBar1;	\
std::vector<float> o_m_el_E_TileBar1;	\
std::vector<float>* m_el_E_TileBar2;	\
std::vector<float> o_m_el_E_TileBar2;	\
std::vector<float>* m_el_E_TileGap1;	\
std::vector<float> o_m_el_E_TileGap1;	\
std::vector<float>* m_el_E_TileGap2;	\
std::vector<float> o_m_el_E_TileGap2;	\
std::vector<float>* m_el_E_TileGap3;	\
std::vector<float> o_m_el_E_TileGap3;	\
std::vector<float>* m_el_E_TileExt0;	\
std::vector<float> o_m_el_E_TileExt0;	\
std::vector<float>* m_el_E_TileExt1;	\
std::vector<float> o_m_el_E_TileExt1;	\
std::vector<float>* m_el_E_TileExt2;	\
std::vector<float> o_m_el_E_TileExt2;	\
std::vector<float>* m_el_E_FCAL0;	\
std::vector<float> o_m_el_E_FCAL0;	\
std::vector<float>* m_el_E_FCAL1;	\
std::vector<float> o_m_el_E_FCAL1;	\
std::vector<float>* m_el_E_FCAL2;	\
std::vector<float> o_m_el_E_FCAL2;	\
std::vector<float>* m_el_cl_E;	\
std::vector<float> o_m_el_cl_E;	\
std::vector<float>* m_el_cl_pt;	\
std::vector<float> o_m_el_cl_pt;	\
std::vector<float>* m_el_cl_eta;	\
std::vector<float> o_m_el_cl_eta;	\
std::vector<float>* m_el_cl_phi;	\
std::vector<float> o_m_el_cl_phi;	\
std::vector<float>* m_el_firstEdens;	\
std::vector<float> o_m_el_firstEdens;	\
std::vector<float>* m_el_cellmaxfrac;	\
std::vector<float> o_m_el_cellmaxfrac;	\
std::vector<float>* m_el_longitudinal;	\
std::vector<float> o_m_el_longitudinal;	\
std::vector<float>* m_el_secondlambda;	\
std::vector<float> o_m_el_secondlambda;	\
std::vector<float>* m_el_lateral;	\
std::vector<float> o_m_el_lateral;	\
std::vector<float>* m_el_secondR;	\
std::vector<float> o_m_el_secondR;	\
std::vector<float>* m_el_centerlambda;	\
std::vector<float> o_m_el_centerlambda;	\
std::vector<float>* m_el_trackd0;	\
std::vector<float> o_m_el_trackd0;	\
std::vector<float>* m_el_trackz0;	\
std::vector<float> o_m_el_trackz0;	\
std::vector<float>* m_el_trackphi;	\
std::vector<float> o_m_el_trackphi;	\
std::vector<float>* m_el_tracktheta;	\
std::vector<float> o_m_el_tracktheta;	\
std::vector<float>* m_el_trackqoverp;	\
std::vector<float> o_m_el_trackqoverp;	\
std::vector<float>* m_el_trackpt;	\
std::vector<float> o_m_el_trackpt;	\
std::vector<float>* m_el_tracketa;	\
std::vector<float> o_m_el_tracketa;	\
std::vector<float>* m_el_trackcov_d0;	\
std::vector<float> o_m_el_trackcov_d0;	\
std::vector<float>* m_el_trackcov_z0;	\
std::vector<float> o_m_el_trackcov_z0;	\
std::vector<float>* m_el_trackcov_phi;	\
std::vector<float> o_m_el_trackcov_phi;	\
std::vector<float>* m_el_trackcov_theta;	\
std::vector<float> o_m_el_trackcov_theta;	\
std::vector<float>* m_el_trackcov_qoverp;	\
std::vector<float> o_m_el_trackcov_qoverp;	\
std::vector<float>* m_el_trackcov_d0_z0;	\
std::vector<float> o_m_el_trackcov_d0_z0;	\
std::vector<float>* m_el_trackcov_d0_phi;	\
std::vector<float> o_m_el_trackcov_d0_phi;	\
std::vector<float>* m_el_trackcov_d0_theta;	\
std::vector<float> o_m_el_trackcov_d0_theta;	\
std::vector<float>* m_el_trackcov_d0_qoverp;	\
std::vector<float> o_m_el_trackcov_d0_qoverp;	\
std::vector<float>* m_el_trackcov_z0_phi;	\
std::vector<float> o_m_el_trackcov_z0_phi;	\
std::vector<float>* m_el_trackcov_z0_theta;	\
std::vector<float> o_m_el_trackcov_z0_theta;	\
std::vector<float>* m_el_trackcov_z0_qoverp;	\
std::vector<float> o_m_el_trackcov_z0_qoverp;	\
std::vector<float>* m_el_trackcov_phi_theta;	\
std::vector<float> o_m_el_trackcov_phi_theta;	\
std::vector<float>* m_el_trackcov_phi_qoverp;	\
std::vector<float> o_m_el_trackcov_phi_qoverp;	\
std::vector<float>* m_el_trackcov_theta_qoverp;	\
std::vector<float> o_m_el_trackcov_theta_qoverp;	\
std::vector<float>* m_el_trackfitchi2;	\
std::vector<float> o_m_el_trackfitchi2;	\
std::vector<int>* m_el_trackfitndof;	\
std::vector<int> o_m_el_trackfitndof;	\
std::vector<int>* m_el_nBLHits;	\
std::vector<int> o_m_el_nBLHits;	\
std::vector<int>* m_el_nPixHits;	\
std::vector<int> o_m_el_nPixHits;	\
std::vector<int>* m_el_nSCTHits;	\
std::vector<int> o_m_el_nSCTHits;	\
std::vector<int>* m_el_nTRTHits;	\
std::vector<int> o_m_el_nTRTHits;	\
std::vector<int>* m_el_nTRTHighTHits;	\
std::vector<int> o_m_el_nTRTHighTHits;	\
std::vector<int>* m_el_nPixHoles;	\
std::vector<int> o_m_el_nPixHoles;	\
std::vector<int>* m_el_nSCTHoles;	\
std::vector<int> o_m_el_nSCTHoles;	\
std::vector<int>* m_el_nTRTHoles;	\
std::vector<int> o_m_el_nTRTHoles;	\
std::vector<int>* m_el_nBLSharedHits;	\
std::vector<int> o_m_el_nBLSharedHits;	\
std::vector<int>* m_el_nPixSharedHits;	\
std::vector<int> o_m_el_nPixSharedHits;	\
std::vector<int>* m_el_nSCTSharedHits;	\
std::vector<int> o_m_el_nSCTSharedHits;	\
std::vector<int>* m_el_nBLayerOutliers;	\
std::vector<int> o_m_el_nBLayerOutliers;	\
std::vector<int>* m_el_nPixelOutliers;	\
std::vector<int> o_m_el_nPixelOutliers;	\
std::vector<int>* m_el_nSCTOutliers;	\
std::vector<int> o_m_el_nSCTOutliers;	\
std::vector<int>* m_el_nTRTOutliers;	\
std::vector<int> o_m_el_nTRTOutliers;	\
std::vector<int>* m_el_nTRTHighTOutliers;	\
std::vector<int> o_m_el_nTRTHighTOutliers;	\
std::vector<int>* m_el_expectBLayerHit;	\
std::vector<int> o_m_el_expectBLayerHit;	\
std::vector<int>* m_el_nSiHits;	\
std::vector<int> o_m_el_nSiHits;	\
std::vector<float>* m_el_TRTHighTHitsRatio;	\
std::vector<float> o_m_el_TRTHighTHitsRatio;	\
std::vector<float>* m_el_TRTHighTOutliersRatio;	\
std::vector<float> o_m_el_TRTHighTOutliersRatio;	\
std::vector<float>* m_el_pixeldEdx;	\
std::vector<float> o_m_el_pixeldEdx;	\
std::vector<int>* m_el_nGoodHitsPixeldEdx;	\
std::vector<int> o_m_el_nGoodHitsPixeldEdx;	\
std::vector<float>* m_el_massPixeldEdx;	\
std::vector<float> o_m_el_massPixeldEdx;	\
std::vector<std::vector<float> >* m_el_likelihoodsPixeldEdx;	\
std::vector<std::vector<float> > o_m_el_likelihoodsPixeldEdx;	\
std::vector<float>* m_el_eProbabilityComb;	\
std::vector<float> o_m_el_eProbabilityComb;	\
std::vector<float>* m_el_eProbabilityHT;	\
std::vector<float> o_m_el_eProbabilityHT;	\
std::vector<float>* m_el_eProbabilityToT;	\
std::vector<float> o_m_el_eProbabilityToT;	\
std::vector<float>* m_el_eProbabilityBrem;	\
std::vector<float> o_m_el_eProbabilityBrem;	\
std::vector<float>* m_el_vertweight;	\
std::vector<float> o_m_el_vertweight;	\
std::vector<float>* m_el_vertx;	\
std::vector<float> o_m_el_vertx;	\
std::vector<float>* m_el_verty;	\
std::vector<float> o_m_el_verty;	\
std::vector<float>* m_el_vertz;	\
std::vector<float> o_m_el_vertz;	\
std::vector<float>* m_el_trackd0beam;	\
std::vector<float> o_m_el_trackd0beam;	\
std::vector<float>* m_el_trackz0beam;	\
std::vector<float> o_m_el_trackz0beam;	\
std::vector<float>* m_el_tracksigd0beam;	\
std::vector<float> o_m_el_tracksigd0beam;	\
std::vector<float>* m_el_tracksigz0beam;	\
std::vector<float> o_m_el_tracksigz0beam;	\
std::vector<float>* m_el_trackd0pv;	\
std::vector<float> o_m_el_trackd0pv;	\
std::vector<float>* m_el_trackz0pv;	\
std::vector<float> o_m_el_trackz0pv;	\
std::vector<float>* m_el_tracksigd0pv;	\
std::vector<float> o_m_el_tracksigd0pv;	\
std::vector<float>* m_el_tracksigz0pv;	\
std::vector<float> o_m_el_tracksigz0pv;	\
std::vector<float>* m_el_trackIPEstimate_d0_biasedpvunbiased;	\
std::vector<float> o_m_el_trackIPEstimate_d0_biasedpvunbiased;	\
std::vector<float>* m_el_trackIPEstimate_z0_biasedpvunbiased;	\
std::vector<float> o_m_el_trackIPEstimate_z0_biasedpvunbiased;	\
std::vector<float>* m_el_trackIPEstimate_d0_unbiasedpvunbiased;	\
std::vector<float> o_m_el_trackIPEstimate_d0_unbiasedpvunbiased;	\
std::vector<float>* m_el_trackIPEstimate_z0_unbiasedpvunbiased;	\
std::vector<float> o_m_el_trackIPEstimate_z0_unbiasedpvunbiased;	\
std::vector<float>* m_el_trackIPEstimate_sigd0_biasedpvunbiased;	\
std::vector<float> o_m_el_trackIPEstimate_sigd0_biasedpvunbiased;	\
std::vector<float>* m_el_trackIPEstimate_sigz0_biasedpvunbiased;	\
std::vector<float> o_m_el_trackIPEstimate_sigz0_biasedpvunbiased;	\
std::vector<float>* m_el_trackIPEstimate_sigd0_unbiasedpvunbiased;	\
std::vector<float> o_m_el_trackIPEstimate_sigd0_unbiasedpvunbiased;	\
std::vector<float>* m_el_trackIPEstimate_sigz0_unbiasedpvunbiased;	\
std::vector<float> o_m_el_trackIPEstimate_sigz0_unbiasedpvunbiased;	\
std::vector<int>* m_el_hastrack;	\
std::vector<int> o_m_el_hastrack;	\
std::vector<float>* m_el_deltaEmax2;	\
std::vector<float> o_m_el_deltaEmax2;	\
std::vector<float>* m_el_calibHitsShowerDepth;	\
std::vector<float> o_m_el_calibHitsShowerDepth;	\
std::vector<unsigned int>* m_el_isIso;	\
std::vector<unsigned int> o_m_el_isIso;	\
std::vector<float>* m_el_mvaptcone20;	\
std::vector<float> o_m_el_mvaptcone20;	\
std::vector<float>* m_el_mvaptcone30;	\
std::vector<float> o_m_el_mvaptcone30;	\
std::vector<float>* m_el_mvaptcone40;	\
std::vector<float> o_m_el_mvaptcone40;	\
std::vector<float>* m_el_jet_dr;	\
std::vector<float> o_m_el_jet_dr;	\
std::vector<float>* m_el_jet_E;	\
std::vector<float> o_m_el_jet_E;	\
std::vector<float>* m_el_jet_pt;	\
std::vector<float> o_m_el_jet_pt;	\
std::vector<float>* m_el_jet_m;	\
std::vector<float> o_m_el_jet_m;	\
std::vector<float>* m_el_jet_eta;	\
std::vector<float> o_m_el_jet_eta;	\
std::vector<float>* m_el_jet_phi;	\
std::vector<float> o_m_el_jet_phi;	\
std::vector<int>* m_el_jet_matched;	\
std::vector<int> o_m_el_jet_matched;	\
std::vector<float>* m_el_Etcone40_ED_corrected;	\
std::vector<float> o_m_el_Etcone40_ED_corrected;	\
std::vector<float>* m_el_Etcone40_corrected;	\
std::vector<float> o_m_el_Etcone40_corrected;	\
std::vector<float>* m_el_EF_dr;	\
std::vector<float> o_m_el_EF_dr;	\
std::vector<int>* m_el_EF_index;	\
std::vector<int> o_m_el_EF_index;	\
std::vector<float>* m_el_L2_dr;	\
std::vector<float> o_m_el_L2_dr;	\
std::vector<int>* m_el_L2_index;	\
std::vector<int> o_m_el_L2_index;	\
std::vector<float>* m_el_L1_dr;	\
std::vector<float> o_m_el_L1_dr;	\
std::vector<int>* m_el_L1_index;	\
std::vector<int> o_m_el_L1_index;	\
Int_t m_trig_EF_el_n;	\
Int_t o_m_trig_EF_el_n;	\
std::vector<float>* m_trig_EF_el_pt;	\
std::vector<float> o_m_trig_EF_el_pt;	\
std::vector<float>* m_trig_EF_el_eta;	\
std::vector<float> o_m_trig_EF_el_eta;	\
std::vector<float>* m_trig_EF_el_phi;	\
std::vector<float> o_m_trig_EF_el_phi;	\
Bool_t m_EF_2e10_medium;	\
Bool_t o_m_EF_2e10_medium;	\
Bool_t m_EF_2e10_medium_mu6;	\
Bool_t o_m_EF_2e10_medium_mu6;	\
Bool_t m_EF_2e12Tvh_medium;	\
Bool_t o_m_EF_2e12Tvh_medium;	\
Bool_t m_EF_2e12_medium;	\
Bool_t o_m_EF_2e12_medium;	\
Bool_t m_EF_2e15vh_medium;	\
Bool_t o_m_EF_2e15vh_medium;	\
Bool_t m_EF_2e5_tight;	\
Bool_t o_m_EF_2e5_tight;	\
Bool_t m_EF_2e5_tight_Jpsi;	\
Bool_t o_m_EF_2e5_tight_Jpsi;	\
Bool_t m_EF_2mu10;	\
Bool_t o_m_EF_2mu10;	\
Bool_t m_EF_2mu10_empty;	\
Bool_t o_m_EF_2mu10_empty;	\
Bool_t m_EF_2mu10_loose;	\
Bool_t o_m_EF_2mu10_loose;	\
Bool_t m_EF_2mu10_loose_empty;	\
Bool_t o_m_EF_2mu10_loose_empty;	\
Bool_t m_EF_2mu10_loose_noOvlpRm;	\
Bool_t o_m_EF_2mu10_loose_noOvlpRm;	\
Bool_t m_EF_2mu13_Zmumu_IDTrkNoCut;	\
Bool_t o_m_EF_2mu13_Zmumu_IDTrkNoCut;	\
Bool_t m_EF_2mu4T;	\
Bool_t o_m_EF_2mu4T;	\
Bool_t m_EF_2mu4T_Bmumu;	\
Bool_t o_m_EF_2mu4T_Bmumu;	\
Bool_t m_EF_2mu4T_Bmumux;	\
Bool_t o_m_EF_2mu4T_Bmumux;	\
Bool_t m_EF_2mu4T_DiMu;	\
Bool_t o_m_EF_2mu4T_DiMu;	\
Bool_t m_EF_2mu4T_DiMu_DY;	\
Bool_t o_m_EF_2mu4T_DiMu_DY;	\
Bool_t m_EF_2mu4T_DiMu_DY20;	\
Bool_t o_m_EF_2mu4T_DiMu_DY20;	\
Bool_t m_EF_2mu4T_DiMu_DY_noVtx_noOS;	\
Bool_t o_m_EF_2mu4T_DiMu_DY_noVtx_noOS;	\
Bool_t m_EF_2mu4T_DiMu_SiTrk;	\
Bool_t o_m_EF_2mu4T_DiMu_SiTrk;	\
Bool_t m_EF_2mu4T_DiMu_noVtx_noOS;	\
Bool_t o_m_EF_2mu4T_DiMu_noVtx_noOS;	\
Bool_t m_EF_2mu4T_EFxe20_noMu;	\
Bool_t o_m_EF_2mu4T_EFxe20_noMu;	\
Bool_t m_EF_2mu4T_EFxe30_noMu;	\
Bool_t o_m_EF_2mu4T_EFxe30_noMu;	\
Bool_t m_EF_2mu4T_Jpsimumu;	\
Bool_t o_m_EF_2mu4T_Jpsimumu;	\
Bool_t m_EF_2mu4T_Jpsimumu_IDTrkNoCut;	\
Bool_t o_m_EF_2mu4T_Jpsimumu_IDTrkNoCut;	\
Bool_t m_EF_2mu4T_Upsimumu;	\
Bool_t o_m_EF_2mu4T_Upsimumu;	\
Bool_t m_EF_2mu4T_xe30_noMu;	\
Bool_t o_m_EF_2mu4T_xe30_noMu;	\
Bool_t m_EF_2mu4T_xe40_noMu;	\
Bool_t o_m_EF_2mu4T_xe40_noMu;	\
Bool_t m_EF_2mu4Ti_DiMu_DY;	\
Bool_t o_m_EF_2mu4Ti_DiMu_DY;	\
Bool_t m_EF_2mu6;	\
Bool_t o_m_EF_2mu6;	\
Bool_t m_EF_2mu6_Bmumux;	\
Bool_t o_m_EF_2mu6_Bmumux;	\
Bool_t m_EF_2mu6_DiMu;	\
Bool_t o_m_EF_2mu6_DiMu;	\
Bool_t m_EF_2mu6_MSonly_g10_loose;	\
Bool_t o_m_EF_2mu6_MSonly_g10_loose;	\
Bool_t m_EF_2mu6_MSonly_g10_loose_nonfilled;	\
Bool_t o_m_EF_2mu6_MSonly_g10_loose_nonfilled;	\
Bool_t m_EF_e10_medium;	\
Bool_t o_m_EF_e10_medium;	\
Bool_t m_EF_e10_medium_2mu6;	\
Bool_t o_m_EF_e10_medium_2mu6;	\
Bool_t m_EF_e10_medium_mu10;	\
Bool_t o_m_EF_e10_medium_mu10;	\
Bool_t m_EF_e10_medium_mu6;	\
Bool_t o_m_EF_e10_medium_mu6;	\
Bool_t m_EF_e10_medium_mu6_topo_medium;	\
Bool_t o_m_EF_e10_medium_mu6_topo_medium;	\
Bool_t m_EF_e11_etcut;	\
Bool_t o_m_EF_e11_etcut;	\
Bool_t m_EF_e12Tvh_medium;	\
Bool_t o_m_EF_e12Tvh_medium;	\
Bool_t m_EF_e12Tvh_medium_2e6T_medium;	\
Bool_t o_m_EF_e12Tvh_medium_2e6T_medium;	\
Bool_t m_EF_e12Tvh_medium_mu6;	\
Bool_t o_m_EF_e12Tvh_medium_mu6;	\
Bool_t m_EF_e12Tvh_medium_mu6_topo_medium;	\
Bool_t o_m_EF_e12Tvh_medium_mu6_topo_medium;	\
Bool_t m_EF_e12_medium;	\
Bool_t o_m_EF_e12_medium;	\
Bool_t m_EF_e13_etcutTrk_xs45_noMu_dphi2j10xe20;	\
Bool_t o_m_EF_e13_etcutTrk_xs45_noMu_dphi2j10xe20;	\
Bool_t m_EF_e13_etcutTrk_xs60_noMu;	\
Bool_t o_m_EF_e13_etcutTrk_xs60_noMu;	\
Bool_t m_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe07;	\
Bool_t o_m_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe07;	\
Bool_t m_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe20;	\
Bool_t o_m_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe20;	\
Bool_t m_EF_e14_tight_e4_etcut_Jpsi;	\
Bool_t o_m_EF_e14_tight_e4_etcut_Jpsi;	\
Bool_t m_EF_e15vh_loose1_e12Tvh_loose1_Zee;	\
Bool_t o_m_EF_e15vh_loose1_e12Tvh_loose1_Zee;	\
Bool_t m_EF_e15vh_medium;	\
Bool_t o_m_EF_e15vh_medium;	\
Bool_t m_EF_e15vh_medium_xe40_noMu;	\
Bool_t o_m_EF_e15vh_medium_xe40_noMu;	\
Bool_t m_EF_e15vh_medium_xe50_noMu;	\
Bool_t o_m_EF_e15vh_medium_xe50_noMu;	\
Bool_t m_EF_e20_etcutTrk_xe40_noMu_dphi2j10xe20;	\
Bool_t o_m_EF_e20_etcutTrk_xe40_noMu_dphi2j10xe20;	\
Bool_t m_EF_e20_etcutTrk_xs60_noMu_dphi2j10xe07;	\
Bool_t o_m_EF_e20_etcutTrk_xs60_noMu_dphi2j10xe07;	\
Bool_t m_EF_e20_tight_e15_NoCut_Zee;	\
Bool_t o_m_EF_e20_tight_e15_NoCut_Zee;	\
Bool_t m_EF_e22vh_loose;	\
Bool_t o_m_EF_e22vh_loose;	\
Bool_t m_EF_e22vh_loose1;	\
Bool_t o_m_EF_e22vh_loose1;	\
Bool_t m_EF_e22vh_looseTrk;	\
Bool_t o_m_EF_e22vh_looseTrk;	\
Bool_t m_EF_e22vh_loose_2j20_a4tc_EFFS;	\
Bool_t o_m_EF_e22vh_loose_2j20_a4tc_EFFS;	\
Bool_t m_EF_e22vh_loose_3j20_a4tc_EFFS;	\
Bool_t o_m_EF_e22vh_loose_3j20_a4tc_EFFS;	\
Bool_t m_EF_e22vh_loose_4j15_a4tc_EFFS;	\
Bool_t o_m_EF_e22vh_loose_4j15_a4tc_EFFS;	\
Bool_t m_EF_e22vh_medium;	\
Bool_t o_m_EF_e22vh_medium;	\
Bool_t m_EF_e22vh_medium1;	\
Bool_t o_m_EF_e22vh_medium1;	\
Bool_t m_EF_e22vh_medium2;	\
Bool_t o_m_EF_e22vh_medium2;	\
Bool_t m_EF_e22vh_medium_IDTrkNoCut;	\
Bool_t o_m_EF_e22vh_medium_IDTrkNoCut;	\
Bool_t m_EF_e22vh_medium_SiTrk;	\
Bool_t o_m_EF_e22vh_medium_SiTrk;	\
Bool_t m_EF_e22vh_medium_TRT;	\
Bool_t o_m_EF_e22vh_medium_TRT;	\
Bool_t m_EF_e40_medium;	\
Bool_t o_m_EF_e40_medium;	\
Bool_t m_EF_e45_medium;	\
Bool_t o_m_EF_e45_medium;	\
Bool_t m_EF_e45_medium1;	\
Bool_t o_m_EF_e45_medium1;	\
Bool_t m_EF_e5_medium_mu6;	\
Bool_t o_m_EF_e5_medium_mu6;	\
Bool_t m_EF_e5_medium_mu6_topo_medium;	\
Bool_t o_m_EF_e5_medium_mu6_topo_medium;	\
Bool_t m_EF_e5_tight;	\
Bool_t o_m_EF_e5_tight;	\
Bool_t m_EF_e5_tight_e14_etcut_Jpsi;	\
Bool_t o_m_EF_e5_tight_e14_etcut_Jpsi;	\
Bool_t m_EF_e5_tight_e4_etcut_Jpsi;	\
Bool_t o_m_EF_e5_tight_e4_etcut_Jpsi;	\
Bool_t m_EF_e5_tight_e4_etcut_Jpsi_SiTrk;	\
Bool_t o_m_EF_e5_tight_e4_etcut_Jpsi_SiTrk;	\
Bool_t m_EF_e5_tight_e4_etcut_Jpsi_TRT;	\
Bool_t o_m_EF_e5_tight_e4_etcut_Jpsi_TRT;	\
Bool_t m_EF_e5_tight_e5_NoCut;	\
Bool_t o_m_EF_e5_tight_e5_NoCut;	\
Bool_t m_EF_e5_tight_e9_etcut_Jpsi;	\
Bool_t o_m_EF_e5_tight_e9_etcut_Jpsi;	\
Bool_t m_EF_e60_loose;	\
Bool_t o_m_EF_e60_loose;	\
Bool_t m_EF_e6T_medium;	\
Bool_t o_m_EF_e6T_medium;	\
Bool_t m_EF_e9_tight_e4_etcut_Jpsi;	\
Bool_t o_m_EF_e9_tight_e4_etcut_Jpsi;	\
Bool_t m_EF_g100_loose;	\
Bool_t o_m_EF_g100_loose;	\
Bool_t m_EF_g10_NoCut_cosmic;	\
Bool_t o_m_EF_g10_NoCut_cosmic;	\
Bool_t m_EF_g11_etcut;	\
Bool_t o_m_EF_g11_etcut;	\
Bool_t m_EF_g11_etcut_larcalib;	\
Bool_t o_m_EF_g11_etcut_larcalib;	\
Bool_t m_EF_g150_etcut;	\
Bool_t o_m_EF_g150_etcut;	\
Bool_t m_EF_g20_etcut;	\
Bool_t o_m_EF_g20_etcut;	\
Bool_t m_EF_g20_loose;	\
Bool_t o_m_EF_g20_loose;	\
Bool_t m_EF_g20_loose_larcalib;	\
Bool_t o_m_EF_g20_loose_larcalib;	\
Bool_t m_EF_g40_loose;	\
Bool_t o_m_EF_g40_loose;	\
Bool_t m_EF_g40_loose_EFxe40_noMu;	\
Bool_t o_m_EF_g40_loose_EFxe40_noMu;	\
Bool_t m_EF_g40_loose_larcalib;	\
Bool_t o_m_EF_g40_loose_larcalib;	\
Bool_t m_EF_g40_loose_xe45_medium_noMu;	\
Bool_t o_m_EF_g40_loose_xe45_medium_noMu;	\
Bool_t m_EF_g40_loose_xe55_medium_noMu;	\
Bool_t o_m_EF_g40_loose_xe55_medium_noMu;	\
Bool_t m_EF_g40_tight_b10_medium;	\
Bool_t o_m_EF_g40_tight_b10_medium;	\
Bool_t m_EF_g5_NoCut_cosmic;	\
Bool_t o_m_EF_g5_NoCut_cosmic;	\
Bool_t m_EF_g60_loose;	\
Bool_t o_m_EF_g60_loose;	\
Bool_t m_EF_g60_loose_larcalib;	\
Bool_t o_m_EF_g60_loose_larcalib;	\
Bool_t m_EF_g80_loose;	\
Bool_t o_m_EF_g80_loose;	\
Bool_t m_EF_g80_loose_larcalib;	\
Bool_t o_m_EF_g80_loose_larcalib;	\
Bool_t m_EF_mu10;	\
Bool_t o_m_EF_mu10;	\
Bool_t m_EF_mu10_Jpsimumu;	\
Bool_t o_m_EF_mu10_Jpsimumu;	\
Bool_t m_EF_mu10_Upsimumu_FS;	\
Bool_t o_m_EF_mu10_Upsimumu_FS;	\
Bool_t m_EF_mu10_Upsimumu_tight_FS;	\
Bool_t o_m_EF_mu10_Upsimumu_tight_FS;	\
Bool_t m_EF_mu10_loose;	\
Bool_t o_m_EF_mu10_loose;	\
Bool_t m_EF_mu10_muCombTag_NoEF;	\
Bool_t o_m_EF_mu10_muCombTag_NoEF;	\
Bool_t m_EF_mu11_empty_NoAlg;	\
Bool_t o_m_EF_mu11_empty_NoAlg;	\
Bool_t m_EF_mu13;	\
Bool_t o_m_EF_mu13;	\
Bool_t m_EF_mu13_MG;	\
Bool_t o_m_EF_mu13_MG;	\
Bool_t m_EF_mu13_muCombTag_NoEF;	\
Bool_t o_m_EF_mu13_muCombTag_NoEF;	\
Bool_t m_EF_mu15;	\
Bool_t o_m_EF_mu15;	\
Bool_t m_EF_mu15_2mu4_EFFS_medium;	\
Bool_t o_m_EF_mu15_2mu4_EFFS_medium;	\
Bool_t m_EF_mu15_mu10_EFFS;	\
Bool_t o_m_EF_mu15_mu10_EFFS;	\
Bool_t m_EF_mu15_mu10_EFFS_medium;	\
Bool_t o_m_EF_mu15_mu10_EFFS_medium;	\
Bool_t m_EF_mu15_mu10_EFFS_tight;	\
Bool_t o_m_EF_mu15_mu10_EFFS_tight;	\
Bool_t m_EF_mu15_xe30_noMu;	\
Bool_t o_m_EF_mu15_xe30_noMu;	\
Bool_t m_EF_mu15i;	\
Bool_t o_m_EF_mu15i;	\
Bool_t m_EF_mu15i_medium;	\
Bool_t o_m_EF_mu15i_medium;	\
Bool_t m_EF_mu18;	\
Bool_t o_m_EF_mu18;	\
Bool_t m_EF_mu18_L1J10;	\
Bool_t o_m_EF_mu18_L1J10;	\
Bool_t m_EF_mu18_MG;	\
Bool_t o_m_EF_mu18_MG;	\
Bool_t m_EF_mu18_MG_L1J10;	\
Bool_t o_m_EF_mu18_MG_L1J10;	\
Bool_t m_EF_mu18_MG_medium;	\
Bool_t o_m_EF_mu18_MG_medium;	\
Bool_t m_EF_mu18_medium;	\
Bool_t o_m_EF_mu18_medium;	\
Bool_t m_EF_mu18_medium_2j20_a4tc_EFFS;	\
Bool_t o_m_EF_mu18_medium_2j20_a4tc_EFFS;	\
Bool_t m_EF_mu18_medium_3j20_a4tc_EFFS;	\
Bool_t o_m_EF_mu18_medium_3j20_a4tc_EFFS;	\
Bool_t m_EF_mu18_medium_4j15_a4tc_EFFS;	\
Bool_t o_m_EF_mu18_medium_4j15_a4tc_EFFS;	\
Bool_t m_EF_mu18_medium_4j20_a4tc_EFFS;	\
Bool_t o_m_EF_mu18_medium_4j20_a4tc_EFFS;	\
Bool_t m_EF_mu18i3_medium;	\
Bool_t o_m_EF_mu18i3_medium;	\
Bool_t m_EF_mu18i4_medium;	\
Bool_t o_m_EF_mu18i4_medium;	\
Bool_t m_EF_mu20;	\
Bool_t o_m_EF_mu20;	\
Bool_t m_EF_mu20_IDTrkNoCut;	\
Bool_t o_m_EF_mu20_IDTrkNoCut;	\
Bool_t m_EF_mu20_IDTrkNoCut_ManyVx;	\
Bool_t o_m_EF_mu20_IDTrkNoCut_ManyVx;	\
Bool_t m_EF_mu20_MG;	\
Bool_t o_m_EF_mu20_MG;	\
Bool_t m_EF_mu20_MG_medium;	\
Bool_t o_m_EF_mu20_MG_medium;	\
Bool_t m_EF_mu20_empty;	\
Bool_t o_m_EF_mu20_empty;	\
Bool_t m_EF_mu20_medium;	\
Bool_t o_m_EF_mu20_medium;	\
Bool_t m_EF_mu20_mu10_EFFS_tight;	\
Bool_t o_m_EF_mu20_mu10_EFFS_tight;	\
Bool_t m_EF_mu20_muCombTag_NoEF;	\
Bool_t o_m_EF_mu20_muCombTag_NoEF;	\
Bool_t m_EF_mu20i;	\
Bool_t o_m_EF_mu20i;	\
Bool_t m_EF_mu20i_medium;	\
Bool_t o_m_EF_mu20i_medium;	\
Bool_t m_EF_mu22;	\
Bool_t o_m_EF_mu22;	\
Bool_t m_EF_mu22_MG;	\
Bool_t o_m_EF_mu22_MG;	\
Bool_t m_EF_mu22_MG_medium;	\
Bool_t o_m_EF_mu22_MG_medium;	\
Bool_t m_EF_mu22_j30_a4tc_EFFS;	\
Bool_t o_m_EF_mu22_j30_a4tc_EFFS;	\
Bool_t m_EF_mu22_medium;	\
Bool_t o_m_EF_mu22_medium;	\
Bool_t m_EF_mu22i1_medium;	\
Bool_t o_m_EF_mu22i1_medium;	\
Bool_t m_EF_mu22i2_medium;	\
Bool_t o_m_EF_mu22i2_medium;	\
Bool_t m_EF_mu22i3_medium;	\
Bool_t o_m_EF_mu22i3_medium;	\
Bool_t m_EF_mu22i4_medium;	\
Bool_t o_m_EF_mu22i4_medium;	\
Bool_t m_EF_mu24_MG_medium;	\
Bool_t o_m_EF_mu24_MG_medium;	\
Bool_t m_EF_mu24_MG_tight;	\
Bool_t o_m_EF_mu24_MG_tight;	\
Bool_t m_EF_mu24_medium;	\
Bool_t o_m_EF_mu24_medium;	\
Bool_t m_EF_mu24_tight;	\
Bool_t o_m_EF_mu24_tight;	\
Bool_t m_EF_mu30_MG_medium;	\
Bool_t o_m_EF_mu30_MG_medium;	\
Bool_t m_EF_mu30_MG_tight;	\
Bool_t o_m_EF_mu30_MG_tight;	\
Bool_t m_EF_mu30_medium;	\
Bool_t o_m_EF_mu30_medium;	\
Bool_t m_EF_mu30_tight;	\
Bool_t o_m_EF_mu30_tight;	\
Bool_t m_EF_mu40_MSonly_barrel;	\
Bool_t o_m_EF_mu40_MSonly_barrel;	\
Bool_t m_EF_mu40_MSonly_barrel_medium;	\
Bool_t o_m_EF_mu40_MSonly_barrel_medium;	\
Bool_t m_EF_mu40_MSonly_empty;	\
Bool_t o_m_EF_mu40_MSonly_empty;	\
Bool_t m_EF_mu40_MSonly_tight;	\
Bool_t o_m_EF_mu40_MSonly_tight;	\
Bool_t m_EF_mu40_MSonly_tight_L1MU11;	\
Bool_t o_m_EF_mu40_MSonly_tight_L1MU11;	\
Bool_t m_EF_mu40_MSonly_tighter;	\
Bool_t o_m_EF_mu40_MSonly_tighter;	\
Bool_t m_EF_mu40_slow;	\
Bool_t o_m_EF_mu40_slow;	\
Bool_t m_EF_mu40_slow_empty;	\
Bool_t o_m_EF_mu40_slow_empty;	\
Bool_t m_EF_mu40_slow_medium;	\
Bool_t o_m_EF_mu40_slow_medium;	\
Bool_t m_EF_mu40_slow_outOfTime;	\
Bool_t o_m_EF_mu40_slow_outOfTime;	\
Bool_t m_EF_mu40_slow_outOfTime_medium;	\
Bool_t o_m_EF_mu40_slow_outOfTime_medium;	\
Bool_t m_EF_mu4T;	\
Bool_t o_m_EF_mu4T;	\
Bool_t m_EF_mu4T_DiMu;	\
Bool_t o_m_EF_mu4T_DiMu;	\
Bool_t m_EF_mu4T_DiMu_FS_noOS;	\
Bool_t o_m_EF_mu4T_DiMu_FS_noOS;	\
Bool_t m_EF_mu4T_Jpsimumu;	\
Bool_t o_m_EF_mu4T_Jpsimumu;	\
Bool_t m_EF_mu4T_Trk_Jpsi;	\
Bool_t o_m_EF_mu4T_Trk_Jpsi;	\
Bool_t m_EF_mu4T_Trk_Upsi_FS;	\
Bool_t o_m_EF_mu4T_Trk_Upsi_FS;	\
Bool_t m_EF_mu4T_Upsimumu_FS;	\
Bool_t o_m_EF_mu4T_Upsimumu_FS;	\
Bool_t m_EF_mu4T_Upsimumu_SiTrk_FS;	\
Bool_t o_m_EF_mu4T_Upsimumu_SiTrk_FS;	\
Bool_t m_EF_mu4T_Upsimumu_tight_FS;	\
Bool_t o_m_EF_mu4T_Upsimumu_tight_FS;	\
Bool_t m_EF_mu4T_j45_a4tc_EFFS_xe45_loose_noMu;	\
Bool_t o_m_EF_mu4T_j45_a4tc_EFFS_xe45_loose_noMu;	\
Bool_t m_EF_mu4T_j45_a4tc_EFFS_xe55_noMu;	\
Bool_t o_m_EF_mu4T_j45_a4tc_EFFS_xe55_noMu;	\
Bool_t m_EF_mu4Timu6i_DiMu_DY;	\
Bool_t o_m_EF_mu4Timu6i_DiMu_DY;	\
Bool_t m_EF_mu4Timu6i_DiMu_DY14_noVtx_noOS;	\
Bool_t o_m_EF_mu4Timu6i_DiMu_DY14_noVtx_noOS;	\
Bool_t m_EF_mu4Tmu6_Bmumu;	\
Bool_t o_m_EF_mu4Tmu6_Bmumu;	\
Bool_t m_EF_mu4Tmu6_Bmumux;	\
Bool_t o_m_EF_mu4Tmu6_Bmumux;	\
Bool_t m_EF_mu4Tmu6_DiMu;	\
Bool_t o_m_EF_mu4Tmu6_DiMu;	\
Bool_t m_EF_mu4Tmu6_DiMu_DY20;	\
Bool_t o_m_EF_mu4Tmu6_DiMu_DY20;	\
Bool_t m_EF_mu4Tmu6_DiMu_noVtx_noOS;	\
Bool_t o_m_EF_mu4Tmu6_DiMu_noVtx_noOS;	\
Bool_t m_EF_mu4Tmu6_Jpsimumu;	\
Bool_t o_m_EF_mu4Tmu6_Jpsimumu;	\
Bool_t m_EF_mu4Tmu6_Jpsimumu_IDTrkNoCut;	\
Bool_t o_m_EF_mu4Tmu6_Jpsimumu_IDTrkNoCut;	\
Bool_t m_EF_mu4Tmu6_Upsimumu;	\
Bool_t o_m_EF_mu4Tmu6_Upsimumu;	\
Bool_t m_EF_mu4_L1J10_matched;	\
Bool_t o_m_EF_mu4_L1J10_matched;	\
Bool_t m_EF_mu4_L1J15_matched;	\
Bool_t o_m_EF_mu4_L1J15_matched;	\
Bool_t m_EF_mu4_L1J20_matched;	\
Bool_t o_m_EF_mu4_L1J20_matched;	\
Bool_t m_EF_mu4_L1J30_matched;	\
Bool_t o_m_EF_mu4_L1J30_matched;	\
Bool_t m_EF_mu4_L1J50_matched;	\
Bool_t o_m_EF_mu4_L1J50_matched;	\
Bool_t m_EF_mu4_L1J75_matched;	\
Bool_t o_m_EF_mu4_L1J75_matched;	\
Bool_t m_EF_mu4_L1MU11_MSonly_cosmic;	\
Bool_t o_m_EF_mu4_L1MU11_MSonly_cosmic;	\
Bool_t m_EF_mu4_L1MU11_cosmic;	\
Bool_t o_m_EF_mu4_L1MU11_cosmic;	\
Bool_t m_EF_mu4_cosmic;	\
Bool_t o_m_EF_mu4_cosmic;	\
Bool_t m_EF_mu4_empty_NoAlg;	\
Bool_t o_m_EF_mu4_empty_NoAlg;	\
Bool_t m_EF_mu4_firstempty_NoAlg;	\
Bool_t o_m_EF_mu4_firstempty_NoAlg;	\
Bool_t m_EF_mu4_j10_a4tc_EFFS_matched;	\
Bool_t o_m_EF_mu4_j10_a4tc_EFFS_matched;	\
Bool_t m_EF_mu4_j135_a4tc_EFFS_L1matched;	\
Bool_t o_m_EF_mu4_j135_a4tc_EFFS_L1matched;	\
Bool_t m_EF_mu4_j180_a4tc_EFFS_L1matched;	\
Bool_t o_m_EF_mu4_j180_a4tc_EFFS_L1matched;	\
Bool_t m_EF_mu4_unpaired_iso_NoAlg;	\
Bool_t o_m_EF_mu4_unpaired_iso_NoAlg;	\
Bool_t m_EF_mu6;	\
Bool_t o_m_EF_mu6;	\
Bool_t m_EF_mu6_DiMu_noOS;	\
Bool_t o_m_EF_mu6_DiMu_noOS;	\
Bool_t m_EF_mu6_Jpsimumu;	\
Bool_t o_m_EF_mu6_Jpsimumu;	\
Bool_t m_EF_mu6_Jpsimumu_SiTrk;	\
Bool_t o_m_EF_mu6_Jpsimumu_SiTrk;	\
Bool_t m_EF_mu6_Jpsimumu_tight;	\
Bool_t o_m_EF_mu6_Jpsimumu_tight;	\
Bool_t m_EF_mu6_Trk_Jpsi_loose;	\
Bool_t o_m_EF_mu6_Trk_Jpsi_loose;	\
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
std::vector<unsigned int>* m_ph_OQRecalc;	\
std::vector<unsigned int> o_m_ph_OQRecalc;	\
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
std::vector<int>* m_ph_looseIso;	\
std::vector<int> o_m_ph_looseIso;	\
std::vector<int>* m_ph_tight;	\
std::vector<int> o_m_ph_tight;	\
std::vector<int>* m_ph_tightIso;	\
std::vector<int> o_m_ph_tightIso;	\
std::vector<int>* m_ph_looseAR;	\
std::vector<int> o_m_ph_looseAR;	\
std::vector<int>* m_ph_looseARIso;	\
std::vector<int> o_m_ph_looseARIso;	\
std::vector<int>* m_ph_tightAR;	\
std::vector<int> o_m_ph_tightAR;	\
std::vector<int>* m_ph_tightARIso;	\
std::vector<int> o_m_ph_tightARIso;	\
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
std::vector<float>* m_ph_nucone20;	\
std::vector<float> o_m_ph_nucone20;	\
std::vector<float>* m_ph_nucone30;	\
std::vector<float> o_m_ph_nucone30;	\
std::vector<float>* m_ph_nucone40;	\
std::vector<float> o_m_ph_nucone40;	\
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
std::vector<float>* m_ph_convanglematch;	\
std::vector<float> o_m_ph_convanglematch;	\
std::vector<float>* m_ph_convtrackmatch;	\
std::vector<float> o_m_ph_convtrackmatch;	\
std::vector<int>* m_ph_hasconv;	\
std::vector<int> o_m_ph_hasconv;	\
std::vector<float>* m_ph_convvtxx;	\
std::vector<float> o_m_ph_convvtxx;	\
std::vector<float>* m_ph_convvtxy;	\
std::vector<float> o_m_ph_convvtxy;	\
std::vector<float>* m_ph_convvtxz;	\
std::vector<float> o_m_ph_convvtxz;	\
std::vector<float>* m_ph_Rconv;	\
std::vector<float> o_m_ph_Rconv;	\
std::vector<float>* m_ph_zconv;	\
std::vector<float> o_m_ph_zconv;	\
std::vector<float>* m_ph_convvtxchi2;	\
std::vector<float> o_m_ph_convvtxchi2;	\
std::vector<float>* m_ph_pt1conv;	\
std::vector<float> o_m_ph_pt1conv;	\
std::vector<int>* m_ph_convtrk1nBLHits;	\
std::vector<int> o_m_ph_convtrk1nBLHits;	\
std::vector<int>* m_ph_convtrk1nPixHits;	\
std::vector<int> o_m_ph_convtrk1nPixHits;	\
std::vector<int>* m_ph_convtrk1nSCTHits;	\
std::vector<int> o_m_ph_convtrk1nSCTHits;	\
std::vector<int>* m_ph_convtrk1nTRTHits;	\
std::vector<int> o_m_ph_convtrk1nTRTHits;	\
std::vector<float>* m_ph_pt2conv;	\
std::vector<float> o_m_ph_pt2conv;	\
std::vector<int>* m_ph_convtrk2nBLHits;	\
std::vector<int> o_m_ph_convtrk2nBLHits;	\
std::vector<int>* m_ph_convtrk2nPixHits;	\
std::vector<int> o_m_ph_convtrk2nPixHits;	\
std::vector<int>* m_ph_convtrk2nSCTHits;	\
std::vector<int> o_m_ph_convtrk2nSCTHits;	\
std::vector<int>* m_ph_convtrk2nTRTHits;	\
std::vector<int> o_m_ph_convtrk2nTRTHits;	\
std::vector<float>* m_ph_ptconv;	\
std::vector<float> o_m_ph_ptconv;	\
std::vector<float>* m_ph_pzconv;	\
std::vector<float> o_m_ph_pzconv;	\
std::vector<float>* m_ph_reta;	\
std::vector<float> o_m_ph_reta;	\
std::vector<float>* m_ph_rphi;	\
std::vector<float> o_m_ph_rphi;	\
std::vector<float>* m_ph_EtringnoisedR03sig2;	\
std::vector<float> o_m_ph_EtringnoisedR03sig2;	\
std::vector<float>* m_ph_EtringnoisedR03sig3;	\
std::vector<float> o_m_ph_EtringnoisedR03sig3;	\
std::vector<float>* m_ph_EtringnoisedR03sig4;	\
std::vector<float> o_m_ph_EtringnoisedR03sig4;	\
std::vector<double>* m_ph_isolationlikelihoodjets;	\
std::vector<double> o_m_ph_isolationlikelihoodjets;	\
std::vector<double>* m_ph_isolationlikelihoodhqelectrons;	\
std::vector<double> o_m_ph_isolationlikelihoodhqelectrons;	\
std::vector<double>* m_ph_loglikelihood;	\
std::vector<double> o_m_ph_loglikelihood;	\
std::vector<double>* m_ph_photonweight;	\
std::vector<double> o_m_ph_photonweight;	\
std::vector<double>* m_ph_photonbgweight;	\
std::vector<double> o_m_ph_photonbgweight;	\
std::vector<double>* m_ph_neuralnet;	\
std::vector<double> o_m_ph_neuralnet;	\
std::vector<double>* m_ph_Hmatrix;	\
std::vector<double> o_m_ph_Hmatrix;	\
std::vector<double>* m_ph_Hmatrix5;	\
std::vector<double> o_m_ph_Hmatrix5;	\
std::vector<double>* m_ph_adaboost;	\
std::vector<double> o_m_ph_adaboost;	\
std::vector<float>* m_ph_zvertex;	\
std::vector<float> o_m_ph_zvertex;	\
std::vector<float>* m_ph_errz;	\
std::vector<float> o_m_ph_errz;	\
std::vector<float>* m_ph_etap;	\
std::vector<float> o_m_ph_etap;	\
std::vector<float>* m_ph_depth;	\
std::vector<float> o_m_ph_depth;	\
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
std::vector<float>* m_ph_calibHitsShowerDepth;	\
std::vector<float> o_m_ph_calibHitsShowerDepth;	\
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
std::vector<float>* m_ph_jet_dr;	\
std::vector<float> o_m_ph_jet_dr;	\
std::vector<float>* m_ph_jet_E;	\
std::vector<float> o_m_ph_jet_E;	\
std::vector<float>* m_ph_jet_pt;	\
std::vector<float> o_m_ph_jet_pt;	\
std::vector<float>* m_ph_jet_m;	\
std::vector<float> o_m_ph_jet_m;	\
std::vector<float>* m_ph_jet_eta;	\
std::vector<float> o_m_ph_jet_eta;	\
std::vector<float>* m_ph_jet_phi;	\
std::vector<float> o_m_ph_jet_phi;	\
std::vector<int>* m_ph_jet_matched;	\
std::vector<int> o_m_ph_jet_matched;	\
std::vector<float>* m_ph_convIP;	\
std::vector<float> o_m_ph_convIP;	\
std::vector<float>* m_ph_convIPRev;	\
std::vector<float> o_m_ph_convIPRev;	\
std::vector<float>* m_ph_ptIsolationCone;	\
std::vector<float> o_m_ph_ptIsolationCone;	\
std::vector<float>* m_ph_ptIsolationConePhAngle;	\
std::vector<float> o_m_ph_ptIsolationConePhAngle;	\
std::vector<float>* m_ph_Etcone40_ED_corrected;	\
std::vector<float> o_m_ph_Etcone40_ED_corrected;	\
std::vector<float>* m_ph_Etcone40_corrected;	\
std::vector<float> o_m_ph_Etcone40_corrected;	\
std::vector<float>* m_ph_topodr;	\
std::vector<float> o_m_ph_topodr;	\
std::vector<float>* m_ph_topopt;	\
std::vector<float> o_m_ph_topopt;	\
std::vector<float>* m_ph_topoeta;	\
std::vector<float> o_m_ph_topoeta;	\
std::vector<float>* m_ph_topophi;	\
std::vector<float> o_m_ph_topophi;	\
std::vector<int>* m_ph_topomatched;	\
std::vector<int> o_m_ph_topomatched;	\
std::vector<float>* m_ph_topoEMdr;	\
std::vector<float> o_m_ph_topoEMdr;	\
std::vector<float>* m_ph_topoEMpt;	\
std::vector<float> o_m_ph_topoEMpt;	\
std::vector<float>* m_ph_topoEMeta;	\
std::vector<float> o_m_ph_topoEMeta;	\
std::vector<float>* m_ph_topoEMphi;	\
std::vector<float> o_m_ph_topoEMphi;	\
std::vector<int>* m_ph_topoEMmatched;	\
std::vector<int> o_m_ph_topoEMmatched;	\
std::vector<float>* m_ph_EF_dr;	\
std::vector<float> o_m_ph_EF_dr;	\
std::vector<int>* m_ph_EF_index;	\
std::vector<int> o_m_ph_EF_index;	\
std::vector<float>* m_ph_L2_dr;	\
std::vector<float> o_m_ph_L2_dr;	\
std::vector<int>* m_ph_L2_index;	\
std::vector<int> o_m_ph_L2_index;	\
std::vector<float>* m_ph_L1_dr;	\
std::vector<float> o_m_ph_L1_dr;	\
std::vector<int>* m_ph_L1_index;	\
std::vector<int> o_m_ph_L1_index;	\
std::vector<int>* m_ph_el_index;	\
std::vector<int> o_m_ph_el_index;	\
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
std::vector<float>* m_mu_staco_matchchi2;	\
std::vector<float> o_m_mu_staco_matchchi2;	\
std::vector<int>* m_mu_staco_matchndof;	\
std::vector<int> o_m_mu_staco_matchndof;	\
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
std::vector<float>* m_mu_staco_energyLossPar;	\
std::vector<float> o_m_mu_staco_energyLossPar;	\
std::vector<float>* m_mu_staco_energyLossErr;	\
std::vector<float> o_m_mu_staco_energyLossErr;	\
std::vector<float>* m_mu_staco_etCore;	\
std::vector<float> o_m_mu_staco_etCore;	\
std::vector<float>* m_mu_staco_energyLossType;	\
std::vector<float> o_m_mu_staco_energyLossType;	\
std::vector<unsigned short>* m_mu_staco_caloMuonIdTag;	\
std::vector<unsigned short> o_m_mu_staco_caloMuonIdTag;	\
std::vector<double>* m_mu_staco_caloLRLikelihood;	\
std::vector<double> o_m_mu_staco_caloLRLikelihood;	\
std::vector<int>* m_mu_staco_bestMatch;	\
std::vector<int> o_m_mu_staco_bestMatch;	\
std::vector<int>* m_mu_staco_isStandAloneMuon;	\
std::vector<int> o_m_mu_staco_isStandAloneMuon;	\
std::vector<int>* m_mu_staco_isCombinedMuon;	\
std::vector<int> o_m_mu_staco_isCombinedMuon;	\
std::vector<int>* m_mu_staco_isLowPtReconstructedMuon;	\
std::vector<int> o_m_mu_staco_isLowPtReconstructedMuon;	\
std::vector<int>* m_mu_staco_isSegmentTaggedMuon;	\
std::vector<int> o_m_mu_staco_isSegmentTaggedMuon;	\
std::vector<int>* m_mu_staco_isCaloMuonId;	\
std::vector<int> o_m_mu_staco_isCaloMuonId;	\
std::vector<int>* m_mu_staco_alsoFoundByLowPt;	\
std::vector<int> o_m_mu_staco_alsoFoundByLowPt;	\
std::vector<int>* m_mu_staco_alsoFoundByCaloMuonId;	\
std::vector<int> o_m_mu_staco_alsoFoundByCaloMuonId;	\
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
std::vector<float>* m_mu_staco_cb_d0_exPV;	\
std::vector<float> o_m_mu_staco_cb_d0_exPV;	\
std::vector<float>* m_mu_staco_cb_z0_exPV;	\
std::vector<float> o_m_mu_staco_cb_z0_exPV;	\
std::vector<float>* m_mu_staco_cb_phi_exPV;	\
std::vector<float> o_m_mu_staco_cb_phi_exPV;	\
std::vector<float>* m_mu_staco_cb_theta_exPV;	\
std::vector<float> o_m_mu_staco_cb_theta_exPV;	\
std::vector<float>* m_mu_staco_cb_qoverp_exPV;	\
std::vector<float> o_m_mu_staco_cb_qoverp_exPV;	\
std::vector<float>* m_mu_staco_id_d0_exPV;	\
std::vector<float> o_m_mu_staco_id_d0_exPV;	\
std::vector<float>* m_mu_staco_id_z0_exPV;	\
std::vector<float> o_m_mu_staco_id_z0_exPV;	\
std::vector<float>* m_mu_staco_id_phi_exPV;	\
std::vector<float> o_m_mu_staco_id_phi_exPV;	\
std::vector<float>* m_mu_staco_id_theta_exPV;	\
std::vector<float> o_m_mu_staco_id_theta_exPV;	\
std::vector<float>* m_mu_staco_id_qoverp_exPV;	\
std::vector<float> o_m_mu_staco_id_qoverp_exPV;	\
std::vector<float>* m_mu_staco_me_d0_exPV;	\
std::vector<float> o_m_mu_staco_me_d0_exPV;	\
std::vector<float>* m_mu_staco_me_z0_exPV;	\
std::vector<float> o_m_mu_staco_me_z0_exPV;	\
std::vector<float>* m_mu_staco_me_phi_exPV;	\
std::vector<float> o_m_mu_staco_me_phi_exPV;	\
std::vector<float>* m_mu_staco_me_theta_exPV;	\
std::vector<float> o_m_mu_staco_me_theta_exPV;	\
std::vector<float>* m_mu_staco_me_qoverp_exPV;	\
std::vector<float> o_m_mu_staco_me_qoverp_exPV;	\
std::vector<float>* m_mu_staco_ie_d0_exPV;	\
std::vector<float> o_m_mu_staco_ie_d0_exPV;	\
std::vector<float>* m_mu_staco_ie_z0_exPV;	\
std::vector<float> o_m_mu_staco_ie_z0_exPV;	\
std::vector<float>* m_mu_staco_ie_phi_exPV;	\
std::vector<float> o_m_mu_staco_ie_phi_exPV;	\
std::vector<float>* m_mu_staco_ie_theta_exPV;	\
std::vector<float> o_m_mu_staco_ie_theta_exPV;	\
std::vector<float>* m_mu_staco_ie_qoverp_exPV;	\
std::vector<float> o_m_mu_staco_ie_qoverp_exPV;	\
std::vector<std::vector<int> >* m_mu_staco_SpaceTime_detID;	\
std::vector<std::vector<int> > o_m_mu_staco_SpaceTime_detID;	\
std::vector<std::vector<float> >* m_mu_staco_SpaceTime_t;	\
std::vector<std::vector<float> > o_m_mu_staco_SpaceTime_t;	\
std::vector<std::vector<float> >* m_mu_staco_SpaceTime_tError;	\
std::vector<std::vector<float> > o_m_mu_staco_SpaceTime_tError;	\
std::vector<std::vector<float> >* m_mu_staco_SpaceTime_weight;	\
std::vector<std::vector<float> > o_m_mu_staco_SpaceTime_weight;	\
std::vector<std::vector<float> >* m_mu_staco_SpaceTime_x;	\
std::vector<std::vector<float> > o_m_mu_staco_SpaceTime_x;	\
std::vector<std::vector<float> >* m_mu_staco_SpaceTime_y;	\
std::vector<std::vector<float> > o_m_mu_staco_SpaceTime_y;	\
std::vector<std::vector<float> >* m_mu_staco_SpaceTime_z;	\
std::vector<std::vector<float> > o_m_mu_staco_SpaceTime_z;	\
std::vector<float>* m_mu_staco_cov_d0_exPV;	\
std::vector<float> o_m_mu_staco_cov_d0_exPV;	\
std::vector<float>* m_mu_staco_cov_z0_exPV;	\
std::vector<float> o_m_mu_staco_cov_z0_exPV;	\
std::vector<float>* m_mu_staco_cov_phi_exPV;	\
std::vector<float> o_m_mu_staco_cov_phi_exPV;	\
std::vector<float>* m_mu_staco_cov_theta_exPV;	\
std::vector<float> o_m_mu_staco_cov_theta_exPV;	\
std::vector<float>* m_mu_staco_cov_qoverp_exPV;	\
std::vector<float> o_m_mu_staco_cov_qoverp_exPV;	\
std::vector<float>* m_mu_staco_cov_d0_z0_exPV;	\
std::vector<float> o_m_mu_staco_cov_d0_z0_exPV;	\
std::vector<float>* m_mu_staco_cov_d0_phi_exPV;	\
std::vector<float> o_m_mu_staco_cov_d0_phi_exPV;	\
std::vector<float>* m_mu_staco_cov_d0_theta_exPV;	\
std::vector<float> o_m_mu_staco_cov_d0_theta_exPV;	\
std::vector<float>* m_mu_staco_cov_d0_qoverp_exPV;	\
std::vector<float> o_m_mu_staco_cov_d0_qoverp_exPV;	\
std::vector<float>* m_mu_staco_cov_z0_phi_exPV;	\
std::vector<float> o_m_mu_staco_cov_z0_phi_exPV;	\
std::vector<float>* m_mu_staco_cov_z0_theta_exPV;	\
std::vector<float> o_m_mu_staco_cov_z0_theta_exPV;	\
std::vector<float>* m_mu_staco_cov_z0_qoverp_exPV;	\
std::vector<float> o_m_mu_staco_cov_z0_qoverp_exPV;	\
std::vector<float>* m_mu_staco_cov_phi_theta_exPV;	\
std::vector<float> o_m_mu_staco_cov_phi_theta_exPV;	\
std::vector<float>* m_mu_staco_cov_phi_qoverp_exPV;	\
std::vector<float> o_m_mu_staco_cov_phi_qoverp_exPV;	\
std::vector<float>* m_mu_staco_cov_theta_qoverp_exPV;	\
std::vector<float> o_m_mu_staco_cov_theta_qoverp_exPV;	\
std::vector<float>* m_mu_staco_id_cov_d0_exPV;	\
std::vector<float> o_m_mu_staco_id_cov_d0_exPV;	\
std::vector<float>* m_mu_staco_id_cov_z0_exPV;	\
std::vector<float> o_m_mu_staco_id_cov_z0_exPV;	\
std::vector<float>* m_mu_staco_id_cov_phi_exPV;	\
std::vector<float> o_m_mu_staco_id_cov_phi_exPV;	\
std::vector<float>* m_mu_staco_id_cov_theta_exPV;	\
std::vector<float> o_m_mu_staco_id_cov_theta_exPV;	\
std::vector<float>* m_mu_staco_id_cov_qoverp_exPV;	\
std::vector<float> o_m_mu_staco_id_cov_qoverp_exPV;	\
std::vector<float>* m_mu_staco_id_cov_d0_z0_exPV;	\
std::vector<float> o_m_mu_staco_id_cov_d0_z0_exPV;	\
std::vector<float>* m_mu_staco_id_cov_d0_phi_exPV;	\
std::vector<float> o_m_mu_staco_id_cov_d0_phi_exPV;	\
std::vector<float>* m_mu_staco_id_cov_d0_theta_exPV;	\
std::vector<float> o_m_mu_staco_id_cov_d0_theta_exPV;	\
std::vector<float>* m_mu_staco_id_cov_d0_qoverp_exPV;	\
std::vector<float> o_m_mu_staco_id_cov_d0_qoverp_exPV;	\
std::vector<float>* m_mu_staco_id_cov_z0_phi_exPV;	\
std::vector<float> o_m_mu_staco_id_cov_z0_phi_exPV;	\
std::vector<float>* m_mu_staco_id_cov_z0_theta_exPV;	\
std::vector<float> o_m_mu_staco_id_cov_z0_theta_exPV;	\
std::vector<float>* m_mu_staco_id_cov_z0_qoverp_exPV;	\
std::vector<float> o_m_mu_staco_id_cov_z0_qoverp_exPV;	\
std::vector<float>* m_mu_staco_id_cov_phi_theta_exPV;	\
std::vector<float> o_m_mu_staco_id_cov_phi_theta_exPV;	\
std::vector<float>* m_mu_staco_id_cov_phi_qoverp_exPV;	\
std::vector<float> o_m_mu_staco_id_cov_phi_qoverp_exPV;	\
std::vector<float>* m_mu_staco_id_cov_theta_qoverp_exPV;	\
std::vector<float> o_m_mu_staco_id_cov_theta_qoverp_exPV;	\
std::vector<float>* m_mu_staco_me_cov_d0_exPV;	\
std::vector<float> o_m_mu_staco_me_cov_d0_exPV;	\
std::vector<float>* m_mu_staco_me_cov_z0_exPV;	\
std::vector<float> o_m_mu_staco_me_cov_z0_exPV;	\
std::vector<float>* m_mu_staco_me_cov_phi_exPV;	\
std::vector<float> o_m_mu_staco_me_cov_phi_exPV;	\
std::vector<float>* m_mu_staco_me_cov_theta_exPV;	\
std::vector<float> o_m_mu_staco_me_cov_theta_exPV;	\
std::vector<float>* m_mu_staco_me_cov_qoverp_exPV;	\
std::vector<float> o_m_mu_staco_me_cov_qoverp_exPV;	\
std::vector<float>* m_mu_staco_me_cov_d0_z0_exPV;	\
std::vector<float> o_m_mu_staco_me_cov_d0_z0_exPV;	\
std::vector<float>* m_mu_staco_me_cov_d0_phi_exPV;	\
std::vector<float> o_m_mu_staco_me_cov_d0_phi_exPV;	\
std::vector<float>* m_mu_staco_me_cov_d0_theta_exPV;	\
std::vector<float> o_m_mu_staco_me_cov_d0_theta_exPV;	\
std::vector<float>* m_mu_staco_me_cov_d0_qoverp_exPV;	\
std::vector<float> o_m_mu_staco_me_cov_d0_qoverp_exPV;	\
std::vector<float>* m_mu_staco_me_cov_z0_phi_exPV;	\
std::vector<float> o_m_mu_staco_me_cov_z0_phi_exPV;	\
std::vector<float>* m_mu_staco_me_cov_z0_theta_exPV;	\
std::vector<float> o_m_mu_staco_me_cov_z0_theta_exPV;	\
std::vector<float>* m_mu_staco_me_cov_z0_qoverp_exPV;	\
std::vector<float> o_m_mu_staco_me_cov_z0_qoverp_exPV;	\
std::vector<float>* m_mu_staco_me_cov_phi_theta_exPV;	\
std::vector<float> o_m_mu_staco_me_cov_phi_theta_exPV;	\
std::vector<float>* m_mu_staco_me_cov_phi_qoverp_exPV;	\
std::vector<float> o_m_mu_staco_me_cov_phi_qoverp_exPV;	\
std::vector<float>* m_mu_staco_me_cov_theta_qoverp_exPV;	\
std::vector<float> o_m_mu_staco_me_cov_theta_qoverp_exPV;	\
std::vector<float>* m_mu_staco_ms_d0;	\
std::vector<float> o_m_mu_staco_ms_d0;	\
std::vector<float>* m_mu_staco_ms_z0;	\
std::vector<float> o_m_mu_staco_ms_z0;	\
std::vector<float>* m_mu_staco_ms_phi;	\
std::vector<float> o_m_mu_staco_ms_phi;	\
std::vector<float>* m_mu_staco_ms_theta;	\
std::vector<float> o_m_mu_staco_ms_theta;	\
std::vector<float>* m_mu_staco_ms_qoverp;	\
std::vector<float> o_m_mu_staco_ms_qoverp;	\
std::vector<float>* m_mu_staco_id_d0;	\
std::vector<float> o_m_mu_staco_id_d0;	\
std::vector<float>* m_mu_staco_id_z0;	\
std::vector<float> o_m_mu_staco_id_z0;	\
std::vector<float>* m_mu_staco_id_phi;	\
std::vector<float> o_m_mu_staco_id_phi;	\
std::vector<float>* m_mu_staco_id_theta;	\
std::vector<float> o_m_mu_staco_id_theta;	\
std::vector<float>* m_mu_staco_id_qoverp;	\
std::vector<float> o_m_mu_staco_id_qoverp;	\
std::vector<float>* m_mu_staco_me_d0;	\
std::vector<float> o_m_mu_staco_me_d0;	\
std::vector<float>* m_mu_staco_me_z0;	\
std::vector<float> o_m_mu_staco_me_z0;	\
std::vector<float>* m_mu_staco_me_phi;	\
std::vector<float> o_m_mu_staco_me_phi;	\
std::vector<float>* m_mu_staco_me_theta;	\
std::vector<float> o_m_mu_staco_me_theta;	\
std::vector<float>* m_mu_staco_me_qoverp;	\
std::vector<float> o_m_mu_staco_me_qoverp;	\
std::vector<float>* m_mu_staco_ie_d0;	\
std::vector<float> o_m_mu_staco_ie_d0;	\
std::vector<float>* m_mu_staco_ie_z0;	\
std::vector<float> o_m_mu_staco_ie_z0;	\
std::vector<float>* m_mu_staco_ie_phi;	\
std::vector<float> o_m_mu_staco_ie_phi;	\
std::vector<float>* m_mu_staco_ie_theta;	\
std::vector<float> o_m_mu_staco_ie_theta;	\
std::vector<float>* m_mu_staco_ie_qoverp;	\
std::vector<float> o_m_mu_staco_ie_qoverp;	\
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
std::vector<int>* m_mu_staco_nGangedPixels;	\
std::vector<int> o_m_mu_staco_nGangedPixels;	\
std::vector<int>* m_mu_staco_nPixelDeadSensors;	\
std::vector<int> o_m_mu_staco_nPixelDeadSensors;	\
std::vector<int>* m_mu_staco_nSCTDeadSensors;	\
std::vector<int> o_m_mu_staco_nSCTDeadSensors;	\
std::vector<int>* m_mu_staco_nTRTDeadStraws;	\
std::vector<int> o_m_mu_staco_nTRTDeadStraws;	\
std::vector<int>* m_mu_staco_expectBLayerHit;	\
std::vector<int> o_m_mu_staco_expectBLayerHit;	\
std::vector<int>* m_mu_staco_nMDTHits;	\
std::vector<int> o_m_mu_staco_nMDTHits;	\
std::vector<int>* m_mu_staco_nMDTHoles;	\
std::vector<int> o_m_mu_staco_nMDTHoles;	\
std::vector<int>* m_mu_staco_nCSCEtaHits;	\
std::vector<int> o_m_mu_staco_nCSCEtaHits;	\
std::vector<int>* m_mu_staco_nCSCEtaHoles;	\
std::vector<int> o_m_mu_staco_nCSCEtaHoles;	\
std::vector<int>* m_mu_staco_nCSCPhiHits;	\
std::vector<int> o_m_mu_staco_nCSCPhiHits;	\
std::vector<int>* m_mu_staco_nCSCPhiHoles;	\
std::vector<int> o_m_mu_staco_nCSCPhiHoles;	\
std::vector<int>* m_mu_staco_nRPCEtaHits;	\
std::vector<int> o_m_mu_staco_nRPCEtaHits;	\
std::vector<int>* m_mu_staco_nRPCEtaHoles;	\
std::vector<int> o_m_mu_staco_nRPCEtaHoles;	\
std::vector<int>* m_mu_staco_nRPCPhiHits;	\
std::vector<int> o_m_mu_staco_nRPCPhiHits;	\
std::vector<int>* m_mu_staco_nRPCPhiHoles;	\
std::vector<int> o_m_mu_staco_nRPCPhiHoles;	\
std::vector<int>* m_mu_staco_nTGCEtaHits;	\
std::vector<int> o_m_mu_staco_nTGCEtaHits;	\
std::vector<int>* m_mu_staco_nTGCEtaHoles;	\
std::vector<int> o_m_mu_staco_nTGCEtaHoles;	\
std::vector<int>* m_mu_staco_nTGCPhiHits;	\
std::vector<int> o_m_mu_staco_nTGCPhiHits;	\
std::vector<int>* m_mu_staco_nTGCPhiHoles;	\
std::vector<int> o_m_mu_staco_nTGCPhiHoles;	\
std::vector<int>* m_mu_staco_nMDTBIHits;	\
std::vector<int> o_m_mu_staco_nMDTBIHits;	\
std::vector<int>* m_mu_staco_nMDTBMHits;	\
std::vector<int> o_m_mu_staco_nMDTBMHits;	\
std::vector<int>* m_mu_staco_nMDTBOHits;	\
std::vector<int> o_m_mu_staco_nMDTBOHits;	\
std::vector<int>* m_mu_staco_nMDTBEEHits;	\
std::vector<int> o_m_mu_staco_nMDTBEEHits;	\
std::vector<int>* m_mu_staco_nMDTBIS78Hits;	\
std::vector<int> o_m_mu_staco_nMDTBIS78Hits;	\
std::vector<int>* m_mu_staco_nMDTEIHits;	\
std::vector<int> o_m_mu_staco_nMDTEIHits;	\
std::vector<int>* m_mu_staco_nMDTEMHits;	\
std::vector<int> o_m_mu_staco_nMDTEMHits;	\
std::vector<int>* m_mu_staco_nMDTEOHits;	\
std::vector<int> o_m_mu_staco_nMDTEOHits;	\
std::vector<int>* m_mu_staco_nMDTEEHits;	\
std::vector<int> o_m_mu_staco_nMDTEEHits;	\
std::vector<int>* m_mu_staco_nRPCLayer1EtaHits;	\
std::vector<int> o_m_mu_staco_nRPCLayer1EtaHits;	\
std::vector<int>* m_mu_staco_nRPCLayer2EtaHits;	\
std::vector<int> o_m_mu_staco_nRPCLayer2EtaHits;	\
std::vector<int>* m_mu_staco_nRPCLayer3EtaHits;	\
std::vector<int> o_m_mu_staco_nRPCLayer3EtaHits;	\
std::vector<int>* m_mu_staco_nRPCLayer1PhiHits;	\
std::vector<int> o_m_mu_staco_nRPCLayer1PhiHits;	\
std::vector<int>* m_mu_staco_nRPCLayer2PhiHits;	\
std::vector<int> o_m_mu_staco_nRPCLayer2PhiHits;	\
std::vector<int>* m_mu_staco_nRPCLayer3PhiHits;	\
std::vector<int> o_m_mu_staco_nRPCLayer3PhiHits;	\
std::vector<int>* m_mu_staco_nTGCLayer1EtaHits;	\
std::vector<int> o_m_mu_staco_nTGCLayer1EtaHits;	\
std::vector<int>* m_mu_staco_nTGCLayer2EtaHits;	\
std::vector<int> o_m_mu_staco_nTGCLayer2EtaHits;	\
std::vector<int>* m_mu_staco_nTGCLayer3EtaHits;	\
std::vector<int> o_m_mu_staco_nTGCLayer3EtaHits;	\
std::vector<int>* m_mu_staco_nTGCLayer4EtaHits;	\
std::vector<int> o_m_mu_staco_nTGCLayer4EtaHits;	\
std::vector<int>* m_mu_staco_nTGCLayer1PhiHits;	\
std::vector<int> o_m_mu_staco_nTGCLayer1PhiHits;	\
std::vector<int>* m_mu_staco_nTGCLayer2PhiHits;	\
std::vector<int> o_m_mu_staco_nTGCLayer2PhiHits;	\
std::vector<int>* m_mu_staco_nTGCLayer3PhiHits;	\
std::vector<int> o_m_mu_staco_nTGCLayer3PhiHits;	\
std::vector<int>* m_mu_staco_nTGCLayer4PhiHits;	\
std::vector<int> o_m_mu_staco_nTGCLayer4PhiHits;	\
std::vector<int>* m_mu_staco_barrelSectors;	\
std::vector<int> o_m_mu_staco_barrelSectors;	\
std::vector<int>* m_mu_staco_endcapSectors;	\
std::vector<int> o_m_mu_staco_endcapSectors;	\
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
std::vector<float>* m_mu_staco_trackcov_d0;	\
std::vector<float> o_m_mu_staco_trackcov_d0;	\
std::vector<float>* m_mu_staco_trackcov_z0;	\
std::vector<float> o_m_mu_staco_trackcov_z0;	\
std::vector<float>* m_mu_staco_trackcov_phi;	\
std::vector<float> o_m_mu_staco_trackcov_phi;	\
std::vector<float>* m_mu_staco_trackcov_theta;	\
std::vector<float> o_m_mu_staco_trackcov_theta;	\
std::vector<float>* m_mu_staco_trackcov_qoverp;	\
std::vector<float> o_m_mu_staco_trackcov_qoverp;	\
std::vector<float>* m_mu_staco_trackcov_d0_z0;	\
std::vector<float> o_m_mu_staco_trackcov_d0_z0;	\
std::vector<float>* m_mu_staco_trackcov_d0_phi;	\
std::vector<float> o_m_mu_staco_trackcov_d0_phi;	\
std::vector<float>* m_mu_staco_trackcov_d0_theta;	\
std::vector<float> o_m_mu_staco_trackcov_d0_theta;	\
std::vector<float>* m_mu_staco_trackcov_d0_qoverp;	\
std::vector<float> o_m_mu_staco_trackcov_d0_qoverp;	\
std::vector<float>* m_mu_staco_trackcov_z0_phi;	\
std::vector<float> o_m_mu_staco_trackcov_z0_phi;	\
std::vector<float>* m_mu_staco_trackcov_z0_theta;	\
std::vector<float> o_m_mu_staco_trackcov_z0_theta;	\
std::vector<float>* m_mu_staco_trackcov_z0_qoverp;	\
std::vector<float> o_m_mu_staco_trackcov_z0_qoverp;	\
std::vector<float>* m_mu_staco_trackcov_phi_theta;	\
std::vector<float> o_m_mu_staco_trackcov_phi_theta;	\
std::vector<float>* m_mu_staco_trackcov_phi_qoverp;	\
std::vector<float> o_m_mu_staco_trackcov_phi_qoverp;	\
std::vector<float>* m_mu_staco_trackcov_theta_qoverp;	\
std::vector<float> o_m_mu_staco_trackcov_theta_qoverp;	\
std::vector<float>* m_mu_staco_trackfitchi2;	\
std::vector<float> o_m_mu_staco_trackfitchi2;	\
std::vector<int>* m_mu_staco_trackfitndof;	\
std::vector<int> o_m_mu_staco_trackfitndof;	\
std::vector<int>* m_mu_staco_hastrack;	\
std::vector<int> o_m_mu_staco_hastrack;	\
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
std::vector<float>* m_mu_staco_trackIPEstimate_d0_biasedpvunbiased;	\
std::vector<float> o_m_mu_staco_trackIPEstimate_d0_biasedpvunbiased;	\
std::vector<float>* m_mu_staco_trackIPEstimate_z0_biasedpvunbiased;	\
std::vector<float> o_m_mu_staco_trackIPEstimate_z0_biasedpvunbiased;	\
std::vector<float>* m_mu_staco_trackIPEstimate_d0_unbiasedpvunbiased;	\
std::vector<float> o_m_mu_staco_trackIPEstimate_d0_unbiasedpvunbiased;	\
std::vector<float>* m_mu_staco_trackIPEstimate_z0_unbiasedpvunbiased;	\
std::vector<float> o_m_mu_staco_trackIPEstimate_z0_unbiasedpvunbiased;	\
std::vector<float>* m_mu_staco_trackIPEstimate_sigd0_biasedpvunbiased;	\
std::vector<float> o_m_mu_staco_trackIPEstimate_sigd0_biasedpvunbiased;	\
std::vector<float>* m_mu_staco_trackIPEstimate_sigz0_biasedpvunbiased;	\
std::vector<float> o_m_mu_staco_trackIPEstimate_sigz0_biasedpvunbiased;	\
std::vector<float>* m_mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased;	\
std::vector<float> o_m_mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased;	\
std::vector<float>* m_mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased;	\
std::vector<float> o_m_mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased;	\
std::vector<float>* m_mu_staco_EFCB_dr;	\
std::vector<float> o_m_mu_staco_EFCB_dr;	\
std::vector<int>* m_mu_staco_EFCB_index;	\
std::vector<int> o_m_mu_staco_EFCB_index;	\
std::vector<float>* m_mu_staco_EFMG_dr;	\
std::vector<float> o_m_mu_staco_EFMG_dr;	\
std::vector<int>* m_mu_staco_EFMG_index;	\
std::vector<int> o_m_mu_staco_EFMG_index;	\
std::vector<float>* m_mu_staco_EFME_dr;	\
std::vector<float> o_m_mu_staco_EFME_dr;	\
std::vector<int>* m_mu_staco_EFME_index;	\
std::vector<int> o_m_mu_staco_EFME_index;	\
std::vector<float>* m_mu_staco_L2CB_dr;	\
std::vector<float> o_m_mu_staco_L2CB_dr;	\
std::vector<int>* m_mu_staco_L2CB_index;	\
std::vector<int> o_m_mu_staco_L2CB_index;	\
std::vector<float>* m_mu_staco_L1_dr;	\
std::vector<float> o_m_mu_staco_L1_dr;	\
std::vector<int>* m_mu_staco_L1_index;	\
std::vector<int> o_m_mu_staco_L1_index;	\
Int_t m_jet_AntiKt4TopoEM_n;	\
Int_t o_m_jet_AntiKt4TopoEM_n;	\
std::vector<float>* m_jet_AntiKt4TopoEM_E;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_E;	\
std::vector<float>* m_jet_AntiKt4TopoEM_pt;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_pt;	\
std::vector<float>* m_jet_AntiKt4TopoEM_m;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_m;	\
std::vector<float>* m_jet_AntiKt4TopoEM_eta;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_eta;	\
std::vector<float>* m_jet_AntiKt4TopoEM_phi;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_phi;	\
std::vector<float>* m_jet_AntiKt4TopoEM_EtaOrigin;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_EtaOrigin;	\
std::vector<float>* m_jet_AntiKt4TopoEM_PhiOrigin;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_PhiOrigin;	\
std::vector<float>* m_jet_AntiKt4TopoEM_MOrigin;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_MOrigin;	\
std::vector<float>* m_jet_AntiKt4TopoEM_EtaOriginEM;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_EtaOriginEM;	\
std::vector<float>* m_jet_AntiKt4TopoEM_PhiOriginEM;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_PhiOriginEM;	\
std::vector<float>* m_jet_AntiKt4TopoEM_MOriginEM;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_MOriginEM;	\
std::vector<float>* m_jet_AntiKt4TopoEM_WIDTH;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_WIDTH;	\
std::vector<float>* m_jet_AntiKt4TopoEM_n90;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_n90;	\
std::vector<float>* m_jet_AntiKt4TopoEM_Timing;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_Timing;	\
std::vector<float>* m_jet_AntiKt4TopoEM_LArQuality;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_LArQuality;	\
std::vector<float>* m_jet_AntiKt4TopoEM_nTrk;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_nTrk;	\
std::vector<float>* m_jet_AntiKt4TopoEM_sumPtTrk;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_sumPtTrk;	\
std::vector<float>* m_jet_AntiKt4TopoEM_OriginIndex;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_OriginIndex;	\
std::vector<float>* m_jet_AntiKt4TopoEM_HECQuality;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_HECQuality;	\
std::vector<float>* m_jet_AntiKt4TopoEM_NegativeE;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_NegativeE;	\
std::vector<float>* m_jet_AntiKt4TopoEM_AverageLArQF;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_AverageLArQF;	\
std::vector<float>* m_jet_AntiKt4TopoEM_YFlip12;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_YFlip12;	\
std::vector<float>* m_jet_AntiKt4TopoEM_YFlip23;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_YFlip23;	\
std::vector<float>* m_jet_AntiKt4TopoEM_BCH_CORR_CELL;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_BCH_CORR_CELL;	\
std::vector<float>* m_jet_AntiKt4TopoEM_BCH_CORR_DOTX;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_BCH_CORR_DOTX;	\
std::vector<float>* m_jet_AntiKt4TopoEM_BCH_CORR_JET;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_BCH_CORR_JET;	\
std::vector<float>* m_jet_AntiKt4TopoEM_BCH_CORR_JET_FORCELL;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_BCH_CORR_JET_FORCELL;	\
std::vector<float>* m_jet_AntiKt4TopoEM_ENG_BAD_CELLS;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_ENG_BAD_CELLS;	\
std::vector<float>* m_jet_AntiKt4TopoEM_N_BAD_CELLS;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_N_BAD_CELLS;	\
std::vector<float>* m_jet_AntiKt4TopoEM_N_BAD_CELLS_CORR;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_N_BAD_CELLS_CORR;	\
std::vector<float>* m_jet_AntiKt4TopoEM_BAD_CELLS_CORR_E;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_BAD_CELLS_CORR_E;	\
std::vector<float>* m_jet_AntiKt4TopoEM_NumTowers;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_NumTowers;	\
std::vector<int>* m_jet_AntiKt4TopoEM_SamplingMax;	\
std::vector<int> o_m_jet_AntiKt4TopoEM_SamplingMax;	\
std::vector<float>* m_jet_AntiKt4TopoEM_fracSamplingMax;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_fracSamplingMax;	\
std::vector<float>* m_jet_AntiKt4TopoEM_hecf;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_hecf;	\
std::vector<float>* m_jet_AntiKt4TopoEM_tgap3f;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_tgap3f;	\
std::vector<int>* m_jet_AntiKt4TopoEM_isUgly;	\
std::vector<int> o_m_jet_AntiKt4TopoEM_isUgly;	\
std::vector<int>* m_jet_AntiKt4TopoEM_isBadLoose;	\
std::vector<int> o_m_jet_AntiKt4TopoEM_isBadLoose;	\
std::vector<int>* m_jet_AntiKt4TopoEM_isBadMedium;	\
std::vector<int> o_m_jet_AntiKt4TopoEM_isBadMedium;	\
std::vector<int>* m_jet_AntiKt4TopoEM_isBadTight;	\
std::vector<int> o_m_jet_AntiKt4TopoEM_isBadTight;	\
std::vector<float>* m_jet_AntiKt4TopoEM_emfrac;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_emfrac;	\
std::vector<float>* m_jet_AntiKt4TopoEM_Offset;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_Offset;	\
std::vector<float>* m_jet_AntiKt4TopoEM_EMJES;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_EMJES;	\
std::vector<float>* m_jet_AntiKt4TopoEM_EMJES_EtaCorr;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_EMJES_EtaCorr;	\
std::vector<float>* m_jet_AntiKt4TopoEM_EMJESnooffset;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_EMJESnooffset;	\
std::vector<float>* m_jet_AntiKt4TopoEM_GCWJES;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_GCWJES;	\
std::vector<float>* m_jet_AntiKt4TopoEM_GCWJES_EtaCorr;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_GCWJES_EtaCorr;	\
std::vector<float>* m_jet_AntiKt4TopoEM_CB;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_CB;	\
std::vector<float>* m_jet_AntiKt4TopoEM_LCJES;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_LCJES;	\
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
std::vector<float>* m_jet_AntiKt4TopoEM_GSCFactorF;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_GSCFactorF;	\
std::vector<float>* m_jet_AntiKt4TopoEM_WidthFraction;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_WidthFraction;	\
std::vector<float>* m_jet_AntiKt4TopoEM_el_dr;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_el_dr;	\
std::vector<int>* m_jet_AntiKt4TopoEM_el_matched;	\
std::vector<int> o_m_jet_AntiKt4TopoEM_el_matched;	\
std::vector<float>* m_jet_AntiKt4TopoEM_mu_dr;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_mu_dr;	\
std::vector<int>* m_jet_AntiKt4TopoEM_mu_matched;	\
std::vector<int> o_m_jet_AntiKt4TopoEM_mu_matched;	\
std::vector<float>* m_jet_AntiKt4TopoEM_L1_dr;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_L1_dr;	\
std::vector<int>* m_jet_AntiKt4TopoEM_L1_matched;	\
std::vector<int> o_m_jet_AntiKt4TopoEM_L1_matched;	\
std::vector<float>* m_jet_AntiKt4TopoEM_L2_dr;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_L2_dr;	\
std::vector<int>* m_jet_AntiKt4TopoEM_L2_matched;	\
std::vector<int> o_m_jet_AntiKt4TopoEM_L2_matched;	\
std::vector<float>* m_jet_AntiKt4TopoEM_EF_dr;	\
std::vector<float> o_m_jet_AntiKt4TopoEM_EF_dr;	\
std::vector<int>* m_jet_AntiKt4TopoEM_EF_matched;	\
std::vector<int> o_m_jet_AntiKt4TopoEM_EF_matched;	\
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
    ConnectVariable( (stringTREENAME), "timestamp", m_timestamp );	\
    ConnectVariable( (stringTREENAME), "timestamp_ns", m_timestamp_ns );	\
    ConnectVariable( (stringTREENAME), "lbn", m_lbn );	\
    ConnectVariable( (stringTREENAME), "bcid", m_bcid );	\
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
    ConnectVariable( (stringTREENAME), "el_nSingleTrackConv", m_el_nSingleTrackConv );	\
    ConnectVariable( (stringTREENAME), "el_nDoubleTrackConv", m_el_nDoubleTrackConv );	\
    ConnectVariable( (stringTREENAME), "el_OQRecalc", m_el_OQRecalc );	\
    ConnectVariable( (stringTREENAME), "el_loose", m_el_loose );	\
    ConnectVariable( (stringTREENAME), "el_looseIso", m_el_looseIso );	\
    ConnectVariable( (stringTREENAME), "el_medium", m_el_medium );	\
    ConnectVariable( (stringTREENAME), "el_mediumIso", m_el_mediumIso );	\
    ConnectVariable( (stringTREENAME), "el_mediumWithoutTrack", m_el_mediumWithoutTrack );	\
    ConnectVariable( (stringTREENAME), "el_mediumIsoWithoutTrack", m_el_mediumIsoWithoutTrack );	\
    ConnectVariable( (stringTREENAME), "el_tight", m_el_tight );	\
    ConnectVariable( (stringTREENAME), "el_tightIso", m_el_tightIso );	\
    ConnectVariable( (stringTREENAME), "el_tightWithoutTrack", m_el_tightWithoutTrack );	\
    ConnectVariable( (stringTREENAME), "el_tightIsoWithoutTrack", m_el_tightIsoWithoutTrack );	\
    ConnectVariable( (stringTREENAME), "el_loosePP", m_el_loosePP );	\
    ConnectVariable( (stringTREENAME), "el_loosePPIso", m_el_loosePPIso );	\
    ConnectVariable( (stringTREENAME), "el_mediumPP", m_el_mediumPP );	\
    ConnectVariable( (stringTREENAME), "el_mediumPPIso", m_el_mediumPPIso );	\
    ConnectVariable( (stringTREENAME), "el_tightPP", m_el_tightPP );	\
    ConnectVariable( (stringTREENAME), "el_tightPPIso", m_el_tightPPIso );	\
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
    ConnectVariable( (stringTREENAME), "el_rphiallcalo", m_el_rphiallcalo );	\
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
    ConnectVariable( (stringTREENAME), "el_nucone20", m_el_nucone20 );	\
    ConnectVariable( (stringTREENAME), "el_nucone30", m_el_nucone30 );	\
    ConnectVariable( (stringTREENAME), "el_nucone40", m_el_nucone40 );	\
    ConnectVariable( (stringTREENAME), "el_Etcone15_pt_corrected", m_el_Etcone15_pt_corrected );	\
    ConnectVariable( (stringTREENAME), "el_Etcone20_pt_corrected", m_el_Etcone20_pt_corrected );	\
    ConnectVariable( (stringTREENAME), "el_Etcone25_pt_corrected", m_el_Etcone25_pt_corrected );	\
    ConnectVariable( (stringTREENAME), "el_Etcone30_pt_corrected", m_el_Etcone30_pt_corrected );	\
    ConnectVariable( (stringTREENAME), "el_Etcone35_pt_corrected", m_el_Etcone35_pt_corrected );	\
    ConnectVariable( (stringTREENAME), "el_Etcone40_pt_corrected", m_el_Etcone40_pt_corrected );	\
    ConnectVariable( (stringTREENAME), "el_convanglematch", m_el_convanglematch );	\
    ConnectVariable( (stringTREENAME), "el_convtrackmatch", m_el_convtrackmatch );	\
    ConnectVariable( (stringTREENAME), "el_hasconv", m_el_hasconv );	\
    ConnectVariable( (stringTREENAME), "el_convvtxx", m_el_convvtxx );	\
    ConnectVariable( (stringTREENAME), "el_convvtxy", m_el_convvtxy );	\
    ConnectVariable( (stringTREENAME), "el_convvtxz", m_el_convvtxz );	\
    ConnectVariable( (stringTREENAME), "el_Rconv", m_el_Rconv );	\
    ConnectVariable( (stringTREENAME), "el_zconv", m_el_zconv );	\
    ConnectVariable( (stringTREENAME), "el_convvtxchi2", m_el_convvtxchi2 );	\
    ConnectVariable( (stringTREENAME), "el_pt1conv", m_el_pt1conv );	\
    ConnectVariable( (stringTREENAME), "el_convtrk1nBLHits", m_el_convtrk1nBLHits );	\
    ConnectVariable( (stringTREENAME), "el_convtrk1nPixHits", m_el_convtrk1nPixHits );	\
    ConnectVariable( (stringTREENAME), "el_convtrk1nSCTHits", m_el_convtrk1nSCTHits );	\
    ConnectVariable( (stringTREENAME), "el_convtrk1nTRTHits", m_el_convtrk1nTRTHits );	\
    ConnectVariable( (stringTREENAME), "el_pt2conv", m_el_pt2conv );	\
    ConnectVariable( (stringTREENAME), "el_convtrk2nBLHits", m_el_convtrk2nBLHits );	\
    ConnectVariable( (stringTREENAME), "el_convtrk2nPixHits", m_el_convtrk2nPixHits );	\
    ConnectVariable( (stringTREENAME), "el_convtrk2nSCTHits", m_el_convtrk2nSCTHits );	\
    ConnectVariable( (stringTREENAME), "el_convtrk2nTRTHits", m_el_convtrk2nTRTHits );	\
    ConnectVariable( (stringTREENAME), "el_ptconv", m_el_ptconv );	\
    ConnectVariable( (stringTREENAME), "el_pzconv", m_el_pzconv );	\
    ConnectVariable( (stringTREENAME), "el_pos7", m_el_pos7 );	\
    ConnectVariable( (stringTREENAME), "el_etacorrmag", m_el_etacorrmag );	\
    ConnectVariable( (stringTREENAME), "el_deltaeta1", m_el_deltaeta1 );	\
    ConnectVariable( (stringTREENAME), "el_deltaeta2", m_el_deltaeta2 );	\
    ConnectVariable( (stringTREENAME), "el_deltaphi2", m_el_deltaphi2 );	\
    ConnectVariable( (stringTREENAME), "el_deltaphiRescaled", m_el_deltaphiRescaled );	\
    ConnectVariable( (stringTREENAME), "el_deltaPhiRot", m_el_deltaPhiRot );	\
    ConnectVariable( (stringTREENAME), "el_expectHitInBLayer", m_el_expectHitInBLayer );	\
    ConnectVariable( (stringTREENAME), "el_trackd0_physics", m_el_trackd0_physics );	\
    ConnectVariable( (stringTREENAME), "el_etaSampling1", m_el_etaSampling1 );	\
    ConnectVariable( (stringTREENAME), "el_reta", m_el_reta );	\
    ConnectVariable( (stringTREENAME), "el_rphi", m_el_rphi );	\
    ConnectVariable( (stringTREENAME), "el_EtringnoisedR03sig2", m_el_EtringnoisedR03sig2 );	\
    ConnectVariable( (stringTREENAME), "el_EtringnoisedR03sig3", m_el_EtringnoisedR03sig3 );	\
    ConnectVariable( (stringTREENAME), "el_EtringnoisedR03sig4", m_el_EtringnoisedR03sig4 );	\
    ConnectVariable( (stringTREENAME), "el_isolationlikelihoodjets", m_el_isolationlikelihoodjets );	\
    ConnectVariable( (stringTREENAME), "el_isolationlikelihoodhqelectrons", m_el_isolationlikelihoodhqelectrons );	\
    ConnectVariable( (stringTREENAME), "el_electronweight", m_el_electronweight );	\
    ConnectVariable( (stringTREENAME), "el_electronbgweight", m_el_electronbgweight );	\
    ConnectVariable( (stringTREENAME), "el_softeweight", m_el_softeweight );	\
    ConnectVariable( (stringTREENAME), "el_softebgweight", m_el_softebgweight );	\
    ConnectVariable( (stringTREENAME), "el_neuralnet", m_el_neuralnet );	\
    ConnectVariable( (stringTREENAME), "el_Hmatrix", m_el_Hmatrix );	\
    ConnectVariable( (stringTREENAME), "el_Hmatrix5", m_el_Hmatrix5 );	\
    ConnectVariable( (stringTREENAME), "el_adaboost", m_el_adaboost );	\
    ConnectVariable( (stringTREENAME), "el_softeneuralnet", m_el_softeneuralnet );	\
    ConnectVariable( (stringTREENAME), "el_zvertex", m_el_zvertex );	\
    ConnectVariable( (stringTREENAME), "el_errz", m_el_errz );	\
    ConnectVariable( (stringTREENAME), "el_etap", m_el_etap );	\
    ConnectVariable( (stringTREENAME), "el_depth", m_el_depth );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_n", m_el_refittedTrack_n );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_author", m_el_refittedTrack_author );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_chi2", m_el_refittedTrack_chi2 );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_hasBrem", m_el_refittedTrack_hasBrem );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_bremRadius", m_el_refittedTrack_bremRadius );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_bremZ", m_el_refittedTrack_bremZ );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_bremRadiusErr", m_el_refittedTrack_bremRadiusErr );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_bremZErr", m_el_refittedTrack_bremZErr );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_bremFitStatus", m_el_refittedTrack_bremFitStatus );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_qoverp", m_el_refittedTrack_qoverp );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_d0", m_el_refittedTrack_d0 );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_z0", m_el_refittedTrack_z0 );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_theta", m_el_refittedTrack_theta );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_phi", m_el_refittedTrack_phi );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_LMqoverp", m_el_refittedTrack_LMqoverp );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_covd0", m_el_refittedTrack_covd0 );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_covz0", m_el_refittedTrack_covz0 );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_covphi", m_el_refittedTrack_covphi );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_covtheta", m_el_refittedTrack_covtheta );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_covqoverp", m_el_refittedTrack_covqoverp );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_covd0z0", m_el_refittedTrack_covd0z0 );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_covz0phi", m_el_refittedTrack_covz0phi );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_covz0theta", m_el_refittedTrack_covz0theta );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_covz0qoverp", m_el_refittedTrack_covz0qoverp );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_covd0phi", m_el_refittedTrack_covd0phi );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_covd0theta", m_el_refittedTrack_covd0theta );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_covd0qoverp", m_el_refittedTrack_covd0qoverp );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_covphitheta", m_el_refittedTrack_covphitheta );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_covphiqoverp", m_el_refittedTrack_covphiqoverp );	\
    ConnectVariable( (stringTREENAME), "el_refittedTrack_covthetaqoverp", m_el_refittedTrack_covthetaqoverp );	\
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
    ConnectVariable( (stringTREENAME), "el_E_PreSamplerB", m_el_E_PreSamplerB );	\
    ConnectVariable( (stringTREENAME), "el_E_EMB1", m_el_E_EMB1 );	\
    ConnectVariable( (stringTREENAME), "el_E_EMB2", m_el_E_EMB2 );	\
    ConnectVariable( (stringTREENAME), "el_E_EMB3", m_el_E_EMB3 );	\
    ConnectVariable( (stringTREENAME), "el_E_PreSamplerE", m_el_E_PreSamplerE );	\
    ConnectVariable( (stringTREENAME), "el_E_EME1", m_el_E_EME1 );	\
    ConnectVariable( (stringTREENAME), "el_E_EME2", m_el_E_EME2 );	\
    ConnectVariable( (stringTREENAME), "el_E_EME3", m_el_E_EME3 );	\
    ConnectVariable( (stringTREENAME), "el_E_HEC0", m_el_E_HEC0 );	\
    ConnectVariable( (stringTREENAME), "el_E_HEC1", m_el_E_HEC1 );	\
    ConnectVariable( (stringTREENAME), "el_E_HEC2", m_el_E_HEC2 );	\
    ConnectVariable( (stringTREENAME), "el_E_HEC3", m_el_E_HEC3 );	\
    ConnectVariable( (stringTREENAME), "el_E_TileBar0", m_el_E_TileBar0 );	\
    ConnectVariable( (stringTREENAME), "el_E_TileBar1", m_el_E_TileBar1 );	\
    ConnectVariable( (stringTREENAME), "el_E_TileBar2", m_el_E_TileBar2 );	\
    ConnectVariable( (stringTREENAME), "el_E_TileGap1", m_el_E_TileGap1 );	\
    ConnectVariable( (stringTREENAME), "el_E_TileGap2", m_el_E_TileGap2 );	\
    ConnectVariable( (stringTREENAME), "el_E_TileGap3", m_el_E_TileGap3 );	\
    ConnectVariable( (stringTREENAME), "el_E_TileExt0", m_el_E_TileExt0 );	\
    ConnectVariable( (stringTREENAME), "el_E_TileExt1", m_el_E_TileExt1 );	\
    ConnectVariable( (stringTREENAME), "el_E_TileExt2", m_el_E_TileExt2 );	\
    ConnectVariable( (stringTREENAME), "el_E_FCAL0", m_el_E_FCAL0 );	\
    ConnectVariable( (stringTREENAME), "el_E_FCAL1", m_el_E_FCAL1 );	\
    ConnectVariable( (stringTREENAME), "el_E_FCAL2", m_el_E_FCAL2 );	\
    ConnectVariable( (stringTREENAME), "el_cl_E", m_el_cl_E );	\
    ConnectVariable( (stringTREENAME), "el_cl_pt", m_el_cl_pt );	\
    ConnectVariable( (stringTREENAME), "el_cl_eta", m_el_cl_eta );	\
    ConnectVariable( (stringTREENAME), "el_cl_phi", m_el_cl_phi );	\
    ConnectVariable( (stringTREENAME), "el_firstEdens", m_el_firstEdens );	\
    ConnectVariable( (stringTREENAME), "el_cellmaxfrac", m_el_cellmaxfrac );	\
    ConnectVariable( (stringTREENAME), "el_longitudinal", m_el_longitudinal );	\
    ConnectVariable( (stringTREENAME), "el_secondlambda", m_el_secondlambda );	\
    ConnectVariable( (stringTREENAME), "el_lateral", m_el_lateral );	\
    ConnectVariable( (stringTREENAME), "el_secondR", m_el_secondR );	\
    ConnectVariable( (stringTREENAME), "el_centerlambda", m_el_centerlambda );	\
    ConnectVariable( (stringTREENAME), "el_trackd0", m_el_trackd0 );	\
    ConnectVariable( (stringTREENAME), "el_trackz0", m_el_trackz0 );	\
    ConnectVariable( (stringTREENAME), "el_trackphi", m_el_trackphi );	\
    ConnectVariable( (stringTREENAME), "el_tracktheta", m_el_tracktheta );	\
    ConnectVariable( (stringTREENAME), "el_trackqoverp", m_el_trackqoverp );	\
    ConnectVariable( (stringTREENAME), "el_trackpt", m_el_trackpt );	\
    ConnectVariable( (stringTREENAME), "el_tracketa", m_el_tracketa );	\
    ConnectVariable( (stringTREENAME), "el_trackcov_d0", m_el_trackcov_d0 );	\
    ConnectVariable( (stringTREENAME), "el_trackcov_z0", m_el_trackcov_z0 );	\
    ConnectVariable( (stringTREENAME), "el_trackcov_phi", m_el_trackcov_phi );	\
    ConnectVariable( (stringTREENAME), "el_trackcov_theta", m_el_trackcov_theta );	\
    ConnectVariable( (stringTREENAME), "el_trackcov_qoverp", m_el_trackcov_qoverp );	\
    ConnectVariable( (stringTREENAME), "el_trackcov_d0_z0", m_el_trackcov_d0_z0 );	\
    ConnectVariable( (stringTREENAME), "el_trackcov_d0_phi", m_el_trackcov_d0_phi );	\
    ConnectVariable( (stringTREENAME), "el_trackcov_d0_theta", m_el_trackcov_d0_theta );	\
    ConnectVariable( (stringTREENAME), "el_trackcov_d0_qoverp", m_el_trackcov_d0_qoverp );	\
    ConnectVariable( (stringTREENAME), "el_trackcov_z0_phi", m_el_trackcov_z0_phi );	\
    ConnectVariable( (stringTREENAME), "el_trackcov_z0_theta", m_el_trackcov_z0_theta );	\
    ConnectVariable( (stringTREENAME), "el_trackcov_z0_qoverp", m_el_trackcov_z0_qoverp );	\
    ConnectVariable( (stringTREENAME), "el_trackcov_phi_theta", m_el_trackcov_phi_theta );	\
    ConnectVariable( (stringTREENAME), "el_trackcov_phi_qoverp", m_el_trackcov_phi_qoverp );	\
    ConnectVariable( (stringTREENAME), "el_trackcov_theta_qoverp", m_el_trackcov_theta_qoverp );	\
    ConnectVariable( (stringTREENAME), "el_trackfitchi2", m_el_trackfitchi2 );	\
    ConnectVariable( (stringTREENAME), "el_trackfitndof", m_el_trackfitndof );	\
    ConnectVariable( (stringTREENAME), "el_nBLHits", m_el_nBLHits );	\
    ConnectVariable( (stringTREENAME), "el_nPixHits", m_el_nPixHits );	\
    ConnectVariable( (stringTREENAME), "el_nSCTHits", m_el_nSCTHits );	\
    ConnectVariable( (stringTREENAME), "el_nTRTHits", m_el_nTRTHits );	\
    ConnectVariable( (stringTREENAME), "el_nTRTHighTHits", m_el_nTRTHighTHits );	\
    ConnectVariable( (stringTREENAME), "el_nPixHoles", m_el_nPixHoles );	\
    ConnectVariable( (stringTREENAME), "el_nSCTHoles", m_el_nSCTHoles );	\
    ConnectVariable( (stringTREENAME), "el_nTRTHoles", m_el_nTRTHoles );	\
    ConnectVariable( (stringTREENAME), "el_nBLSharedHits", m_el_nBLSharedHits );	\
    ConnectVariable( (stringTREENAME), "el_nPixSharedHits", m_el_nPixSharedHits );	\
    ConnectVariable( (stringTREENAME), "el_nSCTSharedHits", m_el_nSCTSharedHits );	\
    ConnectVariable( (stringTREENAME), "el_nBLayerOutliers", m_el_nBLayerOutliers );	\
    ConnectVariable( (stringTREENAME), "el_nPixelOutliers", m_el_nPixelOutliers );	\
    ConnectVariable( (stringTREENAME), "el_nSCTOutliers", m_el_nSCTOutliers );	\
    ConnectVariable( (stringTREENAME), "el_nTRTOutliers", m_el_nTRTOutliers );	\
    ConnectVariable( (stringTREENAME), "el_nTRTHighTOutliers", m_el_nTRTHighTOutliers );	\
    ConnectVariable( (stringTREENAME), "el_expectBLayerHit", m_el_expectBLayerHit );	\
    ConnectVariable( (stringTREENAME), "el_nSiHits", m_el_nSiHits );	\
    ConnectVariable( (stringTREENAME), "el_TRTHighTHitsRatio", m_el_TRTHighTHitsRatio );	\
    ConnectVariable( (stringTREENAME), "el_TRTHighTOutliersRatio", m_el_TRTHighTOutliersRatio );	\
    ConnectVariable( (stringTREENAME), "el_pixeldEdx", m_el_pixeldEdx );	\
    ConnectVariable( (stringTREENAME), "el_nGoodHitsPixeldEdx", m_el_nGoodHitsPixeldEdx );	\
    ConnectVariable( (stringTREENAME), "el_massPixeldEdx", m_el_massPixeldEdx );	\
    ConnectVariable( (stringTREENAME), "el_likelihoodsPixeldEdx", m_el_likelihoodsPixeldEdx );	\
    ConnectVariable( (stringTREENAME), "el_eProbabilityComb", m_el_eProbabilityComb );	\
    ConnectVariable( (stringTREENAME), "el_eProbabilityHT", m_el_eProbabilityHT );	\
    ConnectVariable( (stringTREENAME), "el_eProbabilityToT", m_el_eProbabilityToT );	\
    ConnectVariable( (stringTREENAME), "el_eProbabilityBrem", m_el_eProbabilityBrem );	\
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
    ConnectVariable( (stringTREENAME), "el_trackIPEstimate_d0_biasedpvunbiased", m_el_trackIPEstimate_d0_biasedpvunbiased );	\
    ConnectVariable( (stringTREENAME), "el_trackIPEstimate_z0_biasedpvunbiased", m_el_trackIPEstimate_z0_biasedpvunbiased );	\
    ConnectVariable( (stringTREENAME), "el_trackIPEstimate_d0_unbiasedpvunbiased", m_el_trackIPEstimate_d0_unbiasedpvunbiased );	\
    ConnectVariable( (stringTREENAME), "el_trackIPEstimate_z0_unbiasedpvunbiased", m_el_trackIPEstimate_z0_unbiasedpvunbiased );	\
    ConnectVariable( (stringTREENAME), "el_trackIPEstimate_sigd0_biasedpvunbiased", m_el_trackIPEstimate_sigd0_biasedpvunbiased );	\
    ConnectVariable( (stringTREENAME), "el_trackIPEstimate_sigz0_biasedpvunbiased", m_el_trackIPEstimate_sigz0_biasedpvunbiased );	\
    ConnectVariable( (stringTREENAME), "el_trackIPEstimate_sigd0_unbiasedpvunbiased", m_el_trackIPEstimate_sigd0_unbiasedpvunbiased );	\
    ConnectVariable( (stringTREENAME), "el_trackIPEstimate_sigz0_unbiasedpvunbiased", m_el_trackIPEstimate_sigz0_unbiasedpvunbiased );	\
    ConnectVariable( (stringTREENAME), "el_hastrack", m_el_hastrack );	\
    ConnectVariable( (stringTREENAME), "el_deltaEmax2", m_el_deltaEmax2 );	\
    ConnectVariable( (stringTREENAME), "el_calibHitsShowerDepth", m_el_calibHitsShowerDepth );	\
    ConnectVariable( (stringTREENAME), "el_isIso", m_el_isIso );	\
    ConnectVariable( (stringTREENAME), "el_mvaptcone20", m_el_mvaptcone20 );	\
    ConnectVariable( (stringTREENAME), "el_mvaptcone30", m_el_mvaptcone30 );	\
    ConnectVariable( (stringTREENAME), "el_mvaptcone40", m_el_mvaptcone40 );	\
    ConnectVariable( (stringTREENAME), "el_jet_dr", m_el_jet_dr );	\
    ConnectVariable( (stringTREENAME), "el_jet_E", m_el_jet_E );	\
    ConnectVariable( (stringTREENAME), "el_jet_pt", m_el_jet_pt );	\
    ConnectVariable( (stringTREENAME), "el_jet_m", m_el_jet_m );	\
    ConnectVariable( (stringTREENAME), "el_jet_eta", m_el_jet_eta );	\
    ConnectVariable( (stringTREENAME), "el_jet_phi", m_el_jet_phi );	\
    ConnectVariable( (stringTREENAME), "el_jet_matched", m_el_jet_matched );	\
    ConnectVariable( (stringTREENAME), "el_Etcone40_ED_corrected", m_el_Etcone40_ED_corrected );	\
    ConnectVariable( (stringTREENAME), "el_Etcone40_corrected", m_el_Etcone40_corrected );	\
    ConnectVariable( (stringTREENAME), "el_EF_dr", m_el_EF_dr );	\
    ConnectVariable( (stringTREENAME), "el_EF_index", m_el_EF_index );	\
    ConnectVariable( (stringTREENAME), "el_L2_dr", m_el_L2_dr );	\
    ConnectVariable( (stringTREENAME), "el_L2_index", m_el_L2_index );	\
    ConnectVariable( (stringTREENAME), "el_L1_dr", m_el_L1_dr );	\
    ConnectVariable( (stringTREENAME), "el_L1_index", m_el_L1_index );	\
    ConnectVariable( (stringTREENAME), "trig_EF_el_n", m_trig_EF_el_n );	\
    ConnectVariable( (stringTREENAME), "trig_EF_el_pt", m_trig_EF_el_pt );	\
    ConnectVariable( (stringTREENAME), "trig_EF_el_eta", m_trig_EF_el_eta );	\
    ConnectVariable( (stringTREENAME), "trig_EF_el_phi", m_trig_EF_el_phi );	\
    ConnectVariable( (stringTREENAME), "EF_2e10_medium", m_EF_2e10_medium );	\
    ConnectVariable( (stringTREENAME), "EF_2e10_medium_mu6", m_EF_2e10_medium_mu6 );	\
    ConnectVariable( (stringTREENAME), "EF_2e12Tvh_medium", m_EF_2e12Tvh_medium );	\
    ConnectVariable( (stringTREENAME), "EF_2e12_medium", m_EF_2e12_medium );	\
    ConnectVariable( (stringTREENAME), "EF_2e15vh_medium", m_EF_2e15vh_medium );	\
    ConnectVariable( (stringTREENAME), "EF_2e5_tight", m_EF_2e5_tight );	\
    ConnectVariable( (stringTREENAME), "EF_2e5_tight_Jpsi", m_EF_2e5_tight_Jpsi );	\
    ConnectVariable( (stringTREENAME), "EF_2mu10", m_EF_2mu10 );	\
    ConnectVariable( (stringTREENAME), "EF_2mu10_empty", m_EF_2mu10_empty );	\
    ConnectVariable( (stringTREENAME), "EF_2mu10_loose", m_EF_2mu10_loose );	\
    ConnectVariable( (stringTREENAME), "EF_2mu10_loose_empty", m_EF_2mu10_loose_empty );	\
    ConnectVariable( (stringTREENAME), "EF_2mu10_loose_noOvlpRm", m_EF_2mu10_loose_noOvlpRm );	\
    ConnectVariable( (stringTREENAME), "EF_2mu13_Zmumu_IDTrkNoCut", m_EF_2mu13_Zmumu_IDTrkNoCut );	\
    ConnectVariable( (stringTREENAME), "EF_2mu4T", m_EF_2mu4T );	\
    ConnectVariable( (stringTREENAME), "EF_2mu4T_Bmumu", m_EF_2mu4T_Bmumu );	\
    ConnectVariable( (stringTREENAME), "EF_2mu4T_Bmumux", m_EF_2mu4T_Bmumux );	\
    ConnectVariable( (stringTREENAME), "EF_2mu4T_DiMu", m_EF_2mu4T_DiMu );	\
    ConnectVariable( (stringTREENAME), "EF_2mu4T_DiMu_DY", m_EF_2mu4T_DiMu_DY );	\
    ConnectVariable( (stringTREENAME), "EF_2mu4T_DiMu_DY20", m_EF_2mu4T_DiMu_DY20 );	\
    ConnectVariable( (stringTREENAME), "EF_2mu4T_DiMu_DY_noVtx_noOS", m_EF_2mu4T_DiMu_DY_noVtx_noOS );	\
    ConnectVariable( (stringTREENAME), "EF_2mu4T_DiMu_SiTrk", m_EF_2mu4T_DiMu_SiTrk );	\
    ConnectVariable( (stringTREENAME), "EF_2mu4T_DiMu_noVtx_noOS", m_EF_2mu4T_DiMu_noVtx_noOS );	\
    ConnectVariable( (stringTREENAME), "EF_2mu4T_EFxe20_noMu", m_EF_2mu4T_EFxe20_noMu );	\
    ConnectVariable( (stringTREENAME), "EF_2mu4T_EFxe30_noMu", m_EF_2mu4T_EFxe30_noMu );	\
    ConnectVariable( (stringTREENAME), "EF_2mu4T_Jpsimumu", m_EF_2mu4T_Jpsimumu );	\
    ConnectVariable( (stringTREENAME), "EF_2mu4T_Jpsimumu_IDTrkNoCut", m_EF_2mu4T_Jpsimumu_IDTrkNoCut );	\
    ConnectVariable( (stringTREENAME), "EF_2mu4T_Upsimumu", m_EF_2mu4T_Upsimumu );	\
    ConnectVariable( (stringTREENAME), "EF_2mu4T_xe30_noMu", m_EF_2mu4T_xe30_noMu );	\
    ConnectVariable( (stringTREENAME), "EF_2mu4T_xe40_noMu", m_EF_2mu4T_xe40_noMu );	\
    ConnectVariable( (stringTREENAME), "EF_2mu4Ti_DiMu_DY", m_EF_2mu4Ti_DiMu_DY );	\
    ConnectVariable( (stringTREENAME), "EF_2mu6", m_EF_2mu6 );	\
    ConnectVariable( (stringTREENAME), "EF_2mu6_Bmumux", m_EF_2mu6_Bmumux );	\
    ConnectVariable( (stringTREENAME), "EF_2mu6_DiMu", m_EF_2mu6_DiMu );	\
    ConnectVariable( (stringTREENAME), "EF_2mu6_MSonly_g10_loose", m_EF_2mu6_MSonly_g10_loose );	\
    ConnectVariable( (stringTREENAME), "EF_2mu6_MSonly_g10_loose_nonfilled", m_EF_2mu6_MSonly_g10_loose_nonfilled );	\
    ConnectVariable( (stringTREENAME), "EF_e10_medium", m_EF_e10_medium );	\
    ConnectVariable( (stringTREENAME), "EF_e10_medium_2mu6", m_EF_e10_medium_2mu6 );	\
    ConnectVariable( (stringTREENAME), "EF_e10_medium_mu10", m_EF_e10_medium_mu10 );	\
    ConnectVariable( (stringTREENAME), "EF_e10_medium_mu6", m_EF_e10_medium_mu6 );	\
    ConnectVariable( (stringTREENAME), "EF_e10_medium_mu6_topo_medium", m_EF_e10_medium_mu6_topo_medium );	\
    ConnectVariable( (stringTREENAME), "EF_e11_etcut", m_EF_e11_etcut );	\
    ConnectVariable( (stringTREENAME), "EF_e12Tvh_medium", m_EF_e12Tvh_medium );	\
    ConnectVariable( (stringTREENAME), "EF_e12Tvh_medium_2e6T_medium", m_EF_e12Tvh_medium_2e6T_medium );	\
    ConnectVariable( (stringTREENAME), "EF_e12Tvh_medium_mu6", m_EF_e12Tvh_medium_mu6 );	\
    ConnectVariable( (stringTREENAME), "EF_e12Tvh_medium_mu6_topo_medium", m_EF_e12Tvh_medium_mu6_topo_medium );	\
    ConnectVariable( (stringTREENAME), "EF_e12_medium", m_EF_e12_medium );	\
    ConnectVariable( (stringTREENAME), "EF_e13_etcutTrk_xs45_noMu_dphi2j10xe20", m_EF_e13_etcutTrk_xs45_noMu_dphi2j10xe20 );	\
    ConnectVariable( (stringTREENAME), "EF_e13_etcutTrk_xs60_noMu", m_EF_e13_etcutTrk_xs60_noMu );	\
    ConnectVariable( (stringTREENAME), "EF_e13_etcutTrk_xs60_noMu_dphi2j10xe07", m_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe07 );	\
    ConnectVariable( (stringTREENAME), "EF_e13_etcutTrk_xs60_noMu_dphi2j10xe20", m_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe20 );	\
    ConnectVariable( (stringTREENAME), "EF_e14_tight_e4_etcut_Jpsi", m_EF_e14_tight_e4_etcut_Jpsi );	\
    ConnectVariable( (stringTREENAME), "EF_e15vh_loose1_e12Tvh_loose1_Zee", m_EF_e15vh_loose1_e12Tvh_loose1_Zee );	\
    ConnectVariable( (stringTREENAME), "EF_e15vh_medium", m_EF_e15vh_medium );	\
    ConnectVariable( (stringTREENAME), "EF_e15vh_medium_xe40_noMu", m_EF_e15vh_medium_xe40_noMu );	\
    ConnectVariable( (stringTREENAME), "EF_e15vh_medium_xe50_noMu", m_EF_e15vh_medium_xe50_noMu );	\
    ConnectVariable( (stringTREENAME), "EF_e20_etcutTrk_xe40_noMu_dphi2j10xe20", m_EF_e20_etcutTrk_xe40_noMu_dphi2j10xe20 );	\
    ConnectVariable( (stringTREENAME), "EF_e20_etcutTrk_xs60_noMu_dphi2j10xe07", m_EF_e20_etcutTrk_xs60_noMu_dphi2j10xe07 );	\
    ConnectVariable( (stringTREENAME), "EF_e20_tight_e15_NoCut_Zee", m_EF_e20_tight_e15_NoCut_Zee );	\
    ConnectVariable( (stringTREENAME), "EF_e22vh_loose", m_EF_e22vh_loose );	\
    ConnectVariable( (stringTREENAME), "EF_e22vh_loose1", m_EF_e22vh_loose1 );	\
    ConnectVariable( (stringTREENAME), "EF_e22vh_looseTrk", m_EF_e22vh_looseTrk );	\
    ConnectVariable( (stringTREENAME), "EF_e22vh_loose_2j20_a4tc_EFFS", m_EF_e22vh_loose_2j20_a4tc_EFFS );	\
    ConnectVariable( (stringTREENAME), "EF_e22vh_loose_3j20_a4tc_EFFS", m_EF_e22vh_loose_3j20_a4tc_EFFS );	\
    ConnectVariable( (stringTREENAME), "EF_e22vh_loose_4j15_a4tc_EFFS", m_EF_e22vh_loose_4j15_a4tc_EFFS );	\
    ConnectVariable( (stringTREENAME), "EF_e22vh_medium", m_EF_e22vh_medium );	\
    ConnectVariable( (stringTREENAME), "EF_e22vh_medium1", m_EF_e22vh_medium1 );	\
    ConnectVariable( (stringTREENAME), "EF_e22vh_medium2", m_EF_e22vh_medium2 );	\
    ConnectVariable( (stringTREENAME), "EF_e22vh_medium_IDTrkNoCut", m_EF_e22vh_medium_IDTrkNoCut );	\
    ConnectVariable( (stringTREENAME), "EF_e22vh_medium_SiTrk", m_EF_e22vh_medium_SiTrk );	\
    ConnectVariable( (stringTREENAME), "EF_e22vh_medium_TRT", m_EF_e22vh_medium_TRT );	\
    ConnectVariable( (stringTREENAME), "EF_e40_medium", m_EF_e40_medium );	\
    ConnectVariable( (stringTREENAME), "EF_e45_medium", m_EF_e45_medium );	\
    ConnectVariable( (stringTREENAME), "EF_e45_medium1", m_EF_e45_medium1 );	\
    ConnectVariable( (stringTREENAME), "EF_e5_medium_mu6", m_EF_e5_medium_mu6 );	\
    ConnectVariable( (stringTREENAME), "EF_e5_medium_mu6_topo_medium", m_EF_e5_medium_mu6_topo_medium );	\
    ConnectVariable( (stringTREENAME), "EF_e5_tight", m_EF_e5_tight );	\
    ConnectVariable( (stringTREENAME), "EF_e5_tight_e14_etcut_Jpsi", m_EF_e5_tight_e14_etcut_Jpsi );	\
    ConnectVariable( (stringTREENAME), "EF_e5_tight_e4_etcut_Jpsi", m_EF_e5_tight_e4_etcut_Jpsi );	\
    ConnectVariable( (stringTREENAME), "EF_e5_tight_e4_etcut_Jpsi_SiTrk", m_EF_e5_tight_e4_etcut_Jpsi_SiTrk );	\
    ConnectVariable( (stringTREENAME), "EF_e5_tight_e4_etcut_Jpsi_TRT", m_EF_e5_tight_e4_etcut_Jpsi_TRT );	\
    ConnectVariable( (stringTREENAME), "EF_e5_tight_e5_NoCut", m_EF_e5_tight_e5_NoCut );	\
    ConnectVariable( (stringTREENAME), "EF_e5_tight_e9_etcut_Jpsi", m_EF_e5_tight_e9_etcut_Jpsi );	\
    ConnectVariable( (stringTREENAME), "EF_e60_loose", m_EF_e60_loose );	\
    ConnectVariable( (stringTREENAME), "EF_e6T_medium", m_EF_e6T_medium );	\
    ConnectVariable( (stringTREENAME), "EF_e9_tight_e4_etcut_Jpsi", m_EF_e9_tight_e4_etcut_Jpsi );	\
    ConnectVariable( (stringTREENAME), "EF_g100_loose", m_EF_g100_loose );	\
    ConnectVariable( (stringTREENAME), "EF_g10_NoCut_cosmic", m_EF_g10_NoCut_cosmic );	\
    ConnectVariable( (stringTREENAME), "EF_g11_etcut", m_EF_g11_etcut );	\
    ConnectVariable( (stringTREENAME), "EF_g11_etcut_larcalib", m_EF_g11_etcut_larcalib );	\
    ConnectVariable( (stringTREENAME), "EF_g150_etcut", m_EF_g150_etcut );	\
    ConnectVariable( (stringTREENAME), "EF_g20_etcut", m_EF_g20_etcut );	\
    ConnectVariable( (stringTREENAME), "EF_g20_loose", m_EF_g20_loose );	\
    ConnectVariable( (stringTREENAME), "EF_g20_loose_larcalib", m_EF_g20_loose_larcalib );	\
    ConnectVariable( (stringTREENAME), "EF_g40_loose", m_EF_g40_loose );	\
    ConnectVariable( (stringTREENAME), "EF_g40_loose_EFxe40_noMu", m_EF_g40_loose_EFxe40_noMu );	\
    ConnectVariable( (stringTREENAME), "EF_g40_loose_larcalib", m_EF_g40_loose_larcalib );	\
    ConnectVariable( (stringTREENAME), "EF_g40_loose_xe45_medium_noMu", m_EF_g40_loose_xe45_medium_noMu );	\
    ConnectVariable( (stringTREENAME), "EF_g40_loose_xe55_medium_noMu", m_EF_g40_loose_xe55_medium_noMu );	\
    ConnectVariable( (stringTREENAME), "EF_g40_tight_b10_medium", m_EF_g40_tight_b10_medium );	\
    ConnectVariable( (stringTREENAME), "EF_g5_NoCut_cosmic", m_EF_g5_NoCut_cosmic );	\
    ConnectVariable( (stringTREENAME), "EF_g60_loose", m_EF_g60_loose );	\
    ConnectVariable( (stringTREENAME), "EF_g60_loose_larcalib", m_EF_g60_loose_larcalib );	\
    ConnectVariable( (stringTREENAME), "EF_g80_loose", m_EF_g80_loose );	\
    ConnectVariable( (stringTREENAME), "EF_g80_loose_larcalib", m_EF_g80_loose_larcalib );	\
    ConnectVariable( (stringTREENAME), "EF_mu10", m_EF_mu10 );	\
    ConnectVariable( (stringTREENAME), "EF_mu10_Jpsimumu", m_EF_mu10_Jpsimumu );	\
    ConnectVariable( (stringTREENAME), "EF_mu10_Upsimumu_FS", m_EF_mu10_Upsimumu_FS );	\
    ConnectVariable( (stringTREENAME), "EF_mu10_Upsimumu_tight_FS", m_EF_mu10_Upsimumu_tight_FS );	\
    ConnectVariable( (stringTREENAME), "EF_mu10_loose", m_EF_mu10_loose );	\
    ConnectVariable( (stringTREENAME), "EF_mu10_muCombTag_NoEF", m_EF_mu10_muCombTag_NoEF );	\
    ConnectVariable( (stringTREENAME), "EF_mu11_empty_NoAlg", m_EF_mu11_empty_NoAlg );	\
    ConnectVariable( (stringTREENAME), "EF_mu13", m_EF_mu13 );	\
    ConnectVariable( (stringTREENAME), "EF_mu13_MG", m_EF_mu13_MG );	\
    ConnectVariable( (stringTREENAME), "EF_mu13_muCombTag_NoEF", m_EF_mu13_muCombTag_NoEF );	\
    ConnectVariable( (stringTREENAME), "EF_mu15", m_EF_mu15 );	\
    ConnectVariable( (stringTREENAME), "EF_mu15_2mu4_EFFS_medium", m_EF_mu15_2mu4_EFFS_medium );	\
    ConnectVariable( (stringTREENAME), "EF_mu15_mu10_EFFS", m_EF_mu15_mu10_EFFS );	\
    ConnectVariable( (stringTREENAME), "EF_mu15_mu10_EFFS_medium", m_EF_mu15_mu10_EFFS_medium );	\
    ConnectVariable( (stringTREENAME), "EF_mu15_mu10_EFFS_tight", m_EF_mu15_mu10_EFFS_tight );	\
    ConnectVariable( (stringTREENAME), "EF_mu15_xe30_noMu", m_EF_mu15_xe30_noMu );	\
    ConnectVariable( (stringTREENAME), "EF_mu15i", m_EF_mu15i );	\
    ConnectVariable( (stringTREENAME), "EF_mu15i_medium", m_EF_mu15i_medium );	\
    ConnectVariable( (stringTREENAME), "EF_mu18", m_EF_mu18 );	\
    ConnectVariable( (stringTREENAME), "EF_mu18_L1J10", m_EF_mu18_L1J10 );	\
    ConnectVariable( (stringTREENAME), "EF_mu18_MG", m_EF_mu18_MG );	\
    ConnectVariable( (stringTREENAME), "EF_mu18_MG_L1J10", m_EF_mu18_MG_L1J10 );	\
    ConnectVariable( (stringTREENAME), "EF_mu18_MG_medium", m_EF_mu18_MG_medium );	\
    ConnectVariable( (stringTREENAME), "EF_mu18_medium", m_EF_mu18_medium );	\
    ConnectVariable( (stringTREENAME), "EF_mu18_medium_2j20_a4tc_EFFS", m_EF_mu18_medium_2j20_a4tc_EFFS );	\
    ConnectVariable( (stringTREENAME), "EF_mu18_medium_3j20_a4tc_EFFS", m_EF_mu18_medium_3j20_a4tc_EFFS );	\
    ConnectVariable( (stringTREENAME), "EF_mu18_medium_4j15_a4tc_EFFS", m_EF_mu18_medium_4j15_a4tc_EFFS );	\
    ConnectVariable( (stringTREENAME), "EF_mu18_medium_4j20_a4tc_EFFS", m_EF_mu18_medium_4j20_a4tc_EFFS );	\
    ConnectVariable( (stringTREENAME), "EF_mu18i3_medium", m_EF_mu18i3_medium );	\
    ConnectVariable( (stringTREENAME), "EF_mu18i4_medium", m_EF_mu18i4_medium );	\
    ConnectVariable( (stringTREENAME), "EF_mu20", m_EF_mu20 );	\
    ConnectVariable( (stringTREENAME), "EF_mu20_IDTrkNoCut", m_EF_mu20_IDTrkNoCut );	\
    ConnectVariable( (stringTREENAME), "EF_mu20_IDTrkNoCut_ManyVx", m_EF_mu20_IDTrkNoCut_ManyVx );	\
    ConnectVariable( (stringTREENAME), "EF_mu20_MG", m_EF_mu20_MG );	\
    ConnectVariable( (stringTREENAME), "EF_mu20_MG_medium", m_EF_mu20_MG_medium );	\
    ConnectVariable( (stringTREENAME), "EF_mu20_empty", m_EF_mu20_empty );	\
    ConnectVariable( (stringTREENAME), "EF_mu20_medium", m_EF_mu20_medium );	\
    ConnectVariable( (stringTREENAME), "EF_mu20_mu10_EFFS_tight", m_EF_mu20_mu10_EFFS_tight );	\
    ConnectVariable( (stringTREENAME), "EF_mu20_muCombTag_NoEF", m_EF_mu20_muCombTag_NoEF );	\
    ConnectVariable( (stringTREENAME), "EF_mu20i", m_EF_mu20i );	\
    ConnectVariable( (stringTREENAME), "EF_mu20i_medium", m_EF_mu20i_medium );	\
    ConnectVariable( (stringTREENAME), "EF_mu22", m_EF_mu22 );	\
    ConnectVariable( (stringTREENAME), "EF_mu22_MG", m_EF_mu22_MG );	\
    ConnectVariable( (stringTREENAME), "EF_mu22_MG_medium", m_EF_mu22_MG_medium );	\
    ConnectVariable( (stringTREENAME), "EF_mu22_j30_a4tc_EFFS", m_EF_mu22_j30_a4tc_EFFS );	\
    ConnectVariable( (stringTREENAME), "EF_mu22_medium", m_EF_mu22_medium );	\
    ConnectVariable( (stringTREENAME), "EF_mu22i1_medium", m_EF_mu22i1_medium );	\
    ConnectVariable( (stringTREENAME), "EF_mu22i2_medium", m_EF_mu22i2_medium );	\
    ConnectVariable( (stringTREENAME), "EF_mu22i3_medium", m_EF_mu22i3_medium );	\
    ConnectVariable( (stringTREENAME), "EF_mu22i4_medium", m_EF_mu22i4_medium );	\
    ConnectVariable( (stringTREENAME), "EF_mu24_MG_medium", m_EF_mu24_MG_medium );	\
    ConnectVariable( (stringTREENAME), "EF_mu24_MG_tight", m_EF_mu24_MG_tight );	\
    ConnectVariable( (stringTREENAME), "EF_mu24_medium", m_EF_mu24_medium );	\
    ConnectVariable( (stringTREENAME), "EF_mu24_tight", m_EF_mu24_tight );	\
    ConnectVariable( (stringTREENAME), "EF_mu30_MG_medium", m_EF_mu30_MG_medium );	\
    ConnectVariable( (stringTREENAME), "EF_mu30_MG_tight", m_EF_mu30_MG_tight );	\
    ConnectVariable( (stringTREENAME), "EF_mu30_medium", m_EF_mu30_medium );	\
    ConnectVariable( (stringTREENAME), "EF_mu30_tight", m_EF_mu30_tight );	\
    ConnectVariable( (stringTREENAME), "EF_mu40_MSonly_barrel", m_EF_mu40_MSonly_barrel );	\
    ConnectVariable( (stringTREENAME), "EF_mu40_MSonly_barrel_medium", m_EF_mu40_MSonly_barrel_medium );	\
    ConnectVariable( (stringTREENAME), "EF_mu40_MSonly_empty", m_EF_mu40_MSonly_empty );	\
    ConnectVariable( (stringTREENAME), "EF_mu40_MSonly_tight", m_EF_mu40_MSonly_tight );	\
    ConnectVariable( (stringTREENAME), "EF_mu40_MSonly_tight_L1MU11", m_EF_mu40_MSonly_tight_L1MU11 );	\
    ConnectVariable( (stringTREENAME), "EF_mu40_MSonly_tighter", m_EF_mu40_MSonly_tighter );	\
    ConnectVariable( (stringTREENAME), "EF_mu40_slow", m_EF_mu40_slow );	\
    ConnectVariable( (stringTREENAME), "EF_mu40_slow_empty", m_EF_mu40_slow_empty );	\
    ConnectVariable( (stringTREENAME), "EF_mu40_slow_medium", m_EF_mu40_slow_medium );	\
    ConnectVariable( (stringTREENAME), "EF_mu40_slow_outOfTime", m_EF_mu40_slow_outOfTime );	\
    ConnectVariable( (stringTREENAME), "EF_mu40_slow_outOfTime_medium", m_EF_mu40_slow_outOfTime_medium );	\
    ConnectVariable( (stringTREENAME), "EF_mu4T", m_EF_mu4T );	\
    ConnectVariable( (stringTREENAME), "EF_mu4T_DiMu", m_EF_mu4T_DiMu );	\
    ConnectVariable( (stringTREENAME), "EF_mu4T_DiMu_FS_noOS", m_EF_mu4T_DiMu_FS_noOS );	\
    ConnectVariable( (stringTREENAME), "EF_mu4T_Jpsimumu", m_EF_mu4T_Jpsimumu );	\
    ConnectVariable( (stringTREENAME), "EF_mu4T_Trk_Jpsi", m_EF_mu4T_Trk_Jpsi );	\
    ConnectVariable( (stringTREENAME), "EF_mu4T_Trk_Upsi_FS", m_EF_mu4T_Trk_Upsi_FS );	\
    ConnectVariable( (stringTREENAME), "EF_mu4T_Upsimumu_FS", m_EF_mu4T_Upsimumu_FS );	\
    ConnectVariable( (stringTREENAME), "EF_mu4T_Upsimumu_SiTrk_FS", m_EF_mu4T_Upsimumu_SiTrk_FS );	\
    ConnectVariable( (stringTREENAME), "EF_mu4T_Upsimumu_tight_FS", m_EF_mu4T_Upsimumu_tight_FS );	\
    ConnectVariable( (stringTREENAME), "EF_mu4T_j45_a4tc_EFFS_xe45_loose_noMu", m_EF_mu4T_j45_a4tc_EFFS_xe45_loose_noMu );	\
    ConnectVariable( (stringTREENAME), "EF_mu4T_j45_a4tc_EFFS_xe55_noMu", m_EF_mu4T_j45_a4tc_EFFS_xe55_noMu );	\
    ConnectVariable( (stringTREENAME), "EF_mu4Timu6i_DiMu_DY", m_EF_mu4Timu6i_DiMu_DY );	\
    ConnectVariable( (stringTREENAME), "EF_mu4Timu6i_DiMu_DY14_noVtx_noOS", m_EF_mu4Timu6i_DiMu_DY14_noVtx_noOS );	\
    ConnectVariable( (stringTREENAME), "EF_mu4Tmu6_Bmumu", m_EF_mu4Tmu6_Bmumu );	\
    ConnectVariable( (stringTREENAME), "EF_mu4Tmu6_Bmumux", m_EF_mu4Tmu6_Bmumux );	\
    ConnectVariable( (stringTREENAME), "EF_mu4Tmu6_DiMu", m_EF_mu4Tmu6_DiMu );	\
    ConnectVariable( (stringTREENAME), "EF_mu4Tmu6_DiMu_DY20", m_EF_mu4Tmu6_DiMu_DY20 );	\
    ConnectVariable( (stringTREENAME), "EF_mu4Tmu6_DiMu_noVtx_noOS", m_EF_mu4Tmu6_DiMu_noVtx_noOS );	\
    ConnectVariable( (stringTREENAME), "EF_mu4Tmu6_Jpsimumu", m_EF_mu4Tmu6_Jpsimumu );	\
    ConnectVariable( (stringTREENAME), "EF_mu4Tmu6_Jpsimumu_IDTrkNoCut", m_EF_mu4Tmu6_Jpsimumu_IDTrkNoCut );	\
    ConnectVariable( (stringTREENAME), "EF_mu4Tmu6_Upsimumu", m_EF_mu4Tmu6_Upsimumu );	\
    ConnectVariable( (stringTREENAME), "EF_mu4_L1J10_matched", m_EF_mu4_L1J10_matched );	\
    ConnectVariable( (stringTREENAME), "EF_mu4_L1J15_matched", m_EF_mu4_L1J15_matched );	\
    ConnectVariable( (stringTREENAME), "EF_mu4_L1J20_matched", m_EF_mu4_L1J20_matched );	\
    ConnectVariable( (stringTREENAME), "EF_mu4_L1J30_matched", m_EF_mu4_L1J30_matched );	\
    ConnectVariable( (stringTREENAME), "EF_mu4_L1J50_matched", m_EF_mu4_L1J50_matched );	\
    ConnectVariable( (stringTREENAME), "EF_mu4_L1J75_matched", m_EF_mu4_L1J75_matched );	\
    ConnectVariable( (stringTREENAME), "EF_mu4_L1MU11_MSonly_cosmic", m_EF_mu4_L1MU11_MSonly_cosmic );	\
    ConnectVariable( (stringTREENAME), "EF_mu4_L1MU11_cosmic", m_EF_mu4_L1MU11_cosmic );	\
    ConnectVariable( (stringTREENAME), "EF_mu4_cosmic", m_EF_mu4_cosmic );	\
    ConnectVariable( (stringTREENAME), "EF_mu4_empty_NoAlg", m_EF_mu4_empty_NoAlg );	\
    ConnectVariable( (stringTREENAME), "EF_mu4_firstempty_NoAlg", m_EF_mu4_firstempty_NoAlg );	\
    ConnectVariable( (stringTREENAME), "EF_mu4_j10_a4tc_EFFS_matched", m_EF_mu4_j10_a4tc_EFFS_matched );	\
    ConnectVariable( (stringTREENAME), "EF_mu4_j135_a4tc_EFFS_L1matched", m_EF_mu4_j135_a4tc_EFFS_L1matched );	\
    ConnectVariable( (stringTREENAME), "EF_mu4_j180_a4tc_EFFS_L1matched", m_EF_mu4_j180_a4tc_EFFS_L1matched );	\
    ConnectVariable( (stringTREENAME), "EF_mu4_unpaired_iso_NoAlg", m_EF_mu4_unpaired_iso_NoAlg );	\
    ConnectVariable( (stringTREENAME), "EF_mu6", m_EF_mu6 );	\
    ConnectVariable( (stringTREENAME), "EF_mu6_DiMu_noOS", m_EF_mu6_DiMu_noOS );	\
    ConnectVariable( (stringTREENAME), "EF_mu6_Jpsimumu", m_EF_mu6_Jpsimumu );	\
    ConnectVariable( (stringTREENAME), "EF_mu6_Jpsimumu_SiTrk", m_EF_mu6_Jpsimumu_SiTrk );	\
    ConnectVariable( (stringTREENAME), "EF_mu6_Jpsimumu_tight", m_EF_mu6_Jpsimumu_tight );	\
    ConnectVariable( (stringTREENAME), "EF_mu6_Trk_Jpsi_loose", m_EF_mu6_Trk_Jpsi_loose );	\
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
    ConnectVariable( (stringTREENAME), "ph_looseIso", m_ph_looseIso );	\
    ConnectVariable( (stringTREENAME), "ph_tight", m_ph_tight );	\
    ConnectVariable( (stringTREENAME), "ph_tightIso", m_ph_tightIso );	\
    ConnectVariable( (stringTREENAME), "ph_looseAR", m_ph_looseAR );	\
    ConnectVariable( (stringTREENAME), "ph_looseARIso", m_ph_looseARIso );	\
    ConnectVariable( (stringTREENAME), "ph_tightAR", m_ph_tightAR );	\
    ConnectVariable( (stringTREENAME), "ph_tightARIso", m_ph_tightARIso );	\
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
    ConnectVariable( (stringTREENAME), "ph_nucone20", m_ph_nucone20 );	\
    ConnectVariable( (stringTREENAME), "ph_nucone30", m_ph_nucone30 );	\
    ConnectVariable( (stringTREENAME), "ph_nucone40", m_ph_nucone40 );	\
    ConnectVariable( (stringTREENAME), "ph_Etcone15_pt_corrected", m_ph_Etcone15_pt_corrected );	\
    ConnectVariable( (stringTREENAME), "ph_Etcone20_pt_corrected", m_ph_Etcone20_pt_corrected );	\
    ConnectVariable( (stringTREENAME), "ph_Etcone25_pt_corrected", m_ph_Etcone25_pt_corrected );	\
    ConnectVariable( (stringTREENAME), "ph_Etcone30_pt_corrected", m_ph_Etcone30_pt_corrected );	\
    ConnectVariable( (stringTREENAME), "ph_Etcone35_pt_corrected", m_ph_Etcone35_pt_corrected );	\
    ConnectVariable( (stringTREENAME), "ph_Etcone40_pt_corrected", m_ph_Etcone40_pt_corrected );	\
    ConnectVariable( (stringTREENAME), "ph_convanglematch", m_ph_convanglematch );	\
    ConnectVariable( (stringTREENAME), "ph_convtrackmatch", m_ph_convtrackmatch );	\
    ConnectVariable( (stringTREENAME), "ph_hasconv", m_ph_hasconv );	\
    ConnectVariable( (stringTREENAME), "ph_convvtxx", m_ph_convvtxx );	\
    ConnectVariable( (stringTREENAME), "ph_convvtxy", m_ph_convvtxy );	\
    ConnectVariable( (stringTREENAME), "ph_convvtxz", m_ph_convvtxz );	\
    ConnectVariable( (stringTREENAME), "ph_Rconv", m_ph_Rconv );	\
    ConnectVariable( (stringTREENAME), "ph_zconv", m_ph_zconv );	\
    ConnectVariable( (stringTREENAME), "ph_convvtxchi2", m_ph_convvtxchi2 );	\
    ConnectVariable( (stringTREENAME), "ph_pt1conv", m_ph_pt1conv );	\
    ConnectVariable( (stringTREENAME), "ph_convtrk1nBLHits", m_ph_convtrk1nBLHits );	\
    ConnectVariable( (stringTREENAME), "ph_convtrk1nPixHits", m_ph_convtrk1nPixHits );	\
    ConnectVariable( (stringTREENAME), "ph_convtrk1nSCTHits", m_ph_convtrk1nSCTHits );	\
    ConnectVariable( (stringTREENAME), "ph_convtrk1nTRTHits", m_ph_convtrk1nTRTHits );	\
    ConnectVariable( (stringTREENAME), "ph_pt2conv", m_ph_pt2conv );	\
    ConnectVariable( (stringTREENAME), "ph_convtrk2nBLHits", m_ph_convtrk2nBLHits );	\
    ConnectVariable( (stringTREENAME), "ph_convtrk2nPixHits", m_ph_convtrk2nPixHits );	\
    ConnectVariable( (stringTREENAME), "ph_convtrk2nSCTHits", m_ph_convtrk2nSCTHits );	\
    ConnectVariable( (stringTREENAME), "ph_convtrk2nTRTHits", m_ph_convtrk2nTRTHits );	\
    ConnectVariable( (stringTREENAME), "ph_ptconv", m_ph_ptconv );	\
    ConnectVariable( (stringTREENAME), "ph_pzconv", m_ph_pzconv );	\
    ConnectVariable( (stringTREENAME), "ph_reta", m_ph_reta );	\
    ConnectVariable( (stringTREENAME), "ph_rphi", m_ph_rphi );	\
    ConnectVariable( (stringTREENAME), "ph_EtringnoisedR03sig2", m_ph_EtringnoisedR03sig2 );	\
    ConnectVariable( (stringTREENAME), "ph_EtringnoisedR03sig3", m_ph_EtringnoisedR03sig3 );	\
    ConnectVariable( (stringTREENAME), "ph_EtringnoisedR03sig4", m_ph_EtringnoisedR03sig4 );	\
    ConnectVariable( (stringTREENAME), "ph_isolationlikelihoodjets", m_ph_isolationlikelihoodjets );	\
    ConnectVariable( (stringTREENAME), "ph_isolationlikelihoodhqelectrons", m_ph_isolationlikelihoodhqelectrons );	\
    ConnectVariable( (stringTREENAME), "ph_loglikelihood", m_ph_loglikelihood );	\
    ConnectVariable( (stringTREENAME), "ph_photonweight", m_ph_photonweight );	\
    ConnectVariable( (stringTREENAME), "ph_photonbgweight", m_ph_photonbgweight );	\
    ConnectVariable( (stringTREENAME), "ph_neuralnet", m_ph_neuralnet );	\
    ConnectVariable( (stringTREENAME), "ph_Hmatrix", m_ph_Hmatrix );	\
    ConnectVariable( (stringTREENAME), "ph_Hmatrix5", m_ph_Hmatrix5 );	\
    ConnectVariable( (stringTREENAME), "ph_adaboost", m_ph_adaboost );	\
    ConnectVariable( (stringTREENAME), "ph_zvertex", m_ph_zvertex );	\
    ConnectVariable( (stringTREENAME), "ph_errz", m_ph_errz );	\
    ConnectVariable( (stringTREENAME), "ph_etap", m_ph_etap );	\
    ConnectVariable( (stringTREENAME), "ph_depth", m_ph_depth );	\
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
    ConnectVariable( (stringTREENAME), "ph_calibHitsShowerDepth", m_ph_calibHitsShowerDepth );	\
    ConnectVariable( (stringTREENAME), "ph_isIso", m_ph_isIso );	\
    ConnectVariable( (stringTREENAME), "ph_mvaptcone20", m_ph_mvaptcone20 );	\
    ConnectVariable( (stringTREENAME), "ph_mvaptcone30", m_ph_mvaptcone30 );	\
    ConnectVariable( (stringTREENAME), "ph_mvaptcone40", m_ph_mvaptcone40 );	\
    ConnectVariable( (stringTREENAME), "ph_topoEtcone20", m_ph_topoEtcone20 );	\
    ConnectVariable( (stringTREENAME), "ph_topoEtcone40", m_ph_topoEtcone40 );	\
    ConnectVariable( (stringTREENAME), "ph_topoEtcone60", m_ph_topoEtcone60 );	\
    ConnectVariable( (stringTREENAME), "ph_jet_dr", m_ph_jet_dr );	\
    ConnectVariable( (stringTREENAME), "ph_jet_E", m_ph_jet_E );	\
    ConnectVariable( (stringTREENAME), "ph_jet_pt", m_ph_jet_pt );	\
    ConnectVariable( (stringTREENAME), "ph_jet_m", m_ph_jet_m );	\
    ConnectVariable( (stringTREENAME), "ph_jet_eta", m_ph_jet_eta );	\
    ConnectVariable( (stringTREENAME), "ph_jet_phi", m_ph_jet_phi );	\
    ConnectVariable( (stringTREENAME), "ph_jet_matched", m_ph_jet_matched );	\
    ConnectVariable( (stringTREENAME), "ph_convIP", m_ph_convIP );	\
    ConnectVariable( (stringTREENAME), "ph_convIPRev", m_ph_convIPRev );	\
    ConnectVariable( (stringTREENAME), "ph_ptIsolationCone", m_ph_ptIsolationCone );	\
    ConnectVariable( (stringTREENAME), "ph_ptIsolationConePhAngle", m_ph_ptIsolationConePhAngle );	\
    ConnectVariable( (stringTREENAME), "ph_Etcone40_ED_corrected", m_ph_Etcone40_ED_corrected );	\
    ConnectVariable( (stringTREENAME), "ph_Etcone40_corrected", m_ph_Etcone40_corrected );	\
    ConnectVariable( (stringTREENAME), "ph_topodr", m_ph_topodr );	\
    ConnectVariable( (stringTREENAME), "ph_topopt", m_ph_topopt );	\
    ConnectVariable( (stringTREENAME), "ph_topoeta", m_ph_topoeta );	\
    ConnectVariable( (stringTREENAME), "ph_topophi", m_ph_topophi );	\
    ConnectVariable( (stringTREENAME), "ph_topomatched", m_ph_topomatched );	\
    ConnectVariable( (stringTREENAME), "ph_topoEMdr", m_ph_topoEMdr );	\
    ConnectVariable( (stringTREENAME), "ph_topoEMpt", m_ph_topoEMpt );	\
    ConnectVariable( (stringTREENAME), "ph_topoEMeta", m_ph_topoEMeta );	\
    ConnectVariable( (stringTREENAME), "ph_topoEMphi", m_ph_topoEMphi );	\
    ConnectVariable( (stringTREENAME), "ph_topoEMmatched", m_ph_topoEMmatched );	\
    ConnectVariable( (stringTREENAME), "ph_EF_dr", m_ph_EF_dr );	\
    ConnectVariable( (stringTREENAME), "ph_EF_index", m_ph_EF_index );	\
    ConnectVariable( (stringTREENAME), "ph_L2_dr", m_ph_L2_dr );	\
    ConnectVariable( (stringTREENAME), "ph_L2_index", m_ph_L2_index );	\
    ConnectVariable( (stringTREENAME), "ph_L1_dr", m_ph_L1_dr );	\
    ConnectVariable( (stringTREENAME), "ph_L1_index", m_ph_L1_index );	\
    ConnectVariable( (stringTREENAME), "ph_el_index", m_ph_el_index );	\
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
    ConnectVariable( (stringTREENAME), "mu_staco_matchchi2", m_mu_staco_matchchi2 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_matchndof", m_mu_staco_matchndof );	\
    ConnectVariable( (stringTREENAME), "mu_staco_etcone20", m_mu_staco_etcone20 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_etcone30", m_mu_staco_etcone30 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_etcone40", m_mu_staco_etcone40 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nucone20", m_mu_staco_nucone20 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nucone30", m_mu_staco_nucone30 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nucone40", m_mu_staco_nucone40 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_ptcone20", m_mu_staco_ptcone20 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_ptcone30", m_mu_staco_ptcone30 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_ptcone40", m_mu_staco_ptcone40 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_energyLossPar", m_mu_staco_energyLossPar );	\
    ConnectVariable( (stringTREENAME), "mu_staco_energyLossErr", m_mu_staco_energyLossErr );	\
    ConnectVariable( (stringTREENAME), "mu_staco_etCore", m_mu_staco_etCore );	\
    ConnectVariable( (stringTREENAME), "mu_staco_energyLossType", m_mu_staco_energyLossType );	\
    ConnectVariable( (stringTREENAME), "mu_staco_caloMuonIdTag", m_mu_staco_caloMuonIdTag );	\
    ConnectVariable( (stringTREENAME), "mu_staco_caloLRLikelihood", m_mu_staco_caloLRLikelihood );	\
    ConnectVariable( (stringTREENAME), "mu_staco_bestMatch", m_mu_staco_bestMatch );	\
    ConnectVariable( (stringTREENAME), "mu_staco_isStandAloneMuon", m_mu_staco_isStandAloneMuon );	\
    ConnectVariable( (stringTREENAME), "mu_staco_isCombinedMuon", m_mu_staco_isCombinedMuon );	\
    ConnectVariable( (stringTREENAME), "mu_staco_isLowPtReconstructedMuon", m_mu_staco_isLowPtReconstructedMuon );	\
    ConnectVariable( (stringTREENAME), "mu_staco_isSegmentTaggedMuon", m_mu_staco_isSegmentTaggedMuon );	\
    ConnectVariable( (stringTREENAME), "mu_staco_isCaloMuonId", m_mu_staco_isCaloMuonId );	\
    ConnectVariable( (stringTREENAME), "mu_staco_alsoFoundByLowPt", m_mu_staco_alsoFoundByLowPt );	\
    ConnectVariable( (stringTREENAME), "mu_staco_alsoFoundByCaloMuonId", m_mu_staco_alsoFoundByCaloMuonId );	\
    ConnectVariable( (stringTREENAME), "mu_staco_loose", m_mu_staco_loose );	\
    ConnectVariable( (stringTREENAME), "mu_staco_medium", m_mu_staco_medium );	\
    ConnectVariable( (stringTREENAME), "mu_staco_tight", m_mu_staco_tight );	\
    ConnectVariable( (stringTREENAME), "mu_staco_d0_exPV", m_mu_staco_d0_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_z0_exPV", m_mu_staco_z0_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_phi_exPV", m_mu_staco_phi_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_theta_exPV", m_mu_staco_theta_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_qoverp_exPV", m_mu_staco_qoverp_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_cb_d0_exPV", m_mu_staco_cb_d0_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_cb_z0_exPV", m_mu_staco_cb_z0_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_cb_phi_exPV", m_mu_staco_cb_phi_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_cb_theta_exPV", m_mu_staco_cb_theta_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_cb_qoverp_exPV", m_mu_staco_cb_qoverp_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_d0_exPV", m_mu_staco_id_d0_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_z0_exPV", m_mu_staco_id_z0_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_phi_exPV", m_mu_staco_id_phi_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_theta_exPV", m_mu_staco_id_theta_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_qoverp_exPV", m_mu_staco_id_qoverp_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_me_d0_exPV", m_mu_staco_me_d0_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_me_z0_exPV", m_mu_staco_me_z0_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_me_phi_exPV", m_mu_staco_me_phi_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_me_theta_exPV", m_mu_staco_me_theta_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_me_qoverp_exPV", m_mu_staco_me_qoverp_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_ie_d0_exPV", m_mu_staco_ie_d0_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_ie_z0_exPV", m_mu_staco_ie_z0_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_ie_phi_exPV", m_mu_staco_ie_phi_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_ie_theta_exPV", m_mu_staco_ie_theta_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_ie_qoverp_exPV", m_mu_staco_ie_qoverp_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_SpaceTime_detID", m_mu_staco_SpaceTime_detID );	\
    ConnectVariable( (stringTREENAME), "mu_staco_SpaceTime_t", m_mu_staco_SpaceTime_t );	\
    ConnectVariable( (stringTREENAME), "mu_staco_SpaceTime_tError", m_mu_staco_SpaceTime_tError );	\
    ConnectVariable( (stringTREENAME), "mu_staco_SpaceTime_weight", m_mu_staco_SpaceTime_weight );	\
    ConnectVariable( (stringTREENAME), "mu_staco_SpaceTime_x", m_mu_staco_SpaceTime_x );	\
    ConnectVariable( (stringTREENAME), "mu_staco_SpaceTime_y", m_mu_staco_SpaceTime_y );	\
    ConnectVariable( (stringTREENAME), "mu_staco_SpaceTime_z", m_mu_staco_SpaceTime_z );	\
    ConnectVariable( (stringTREENAME), "mu_staco_cov_d0_exPV", m_mu_staco_cov_d0_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_cov_z0_exPV", m_mu_staco_cov_z0_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_cov_phi_exPV", m_mu_staco_cov_phi_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_cov_theta_exPV", m_mu_staco_cov_theta_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_cov_qoverp_exPV", m_mu_staco_cov_qoverp_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_cov_d0_z0_exPV", m_mu_staco_cov_d0_z0_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_cov_d0_phi_exPV", m_mu_staco_cov_d0_phi_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_cov_d0_theta_exPV", m_mu_staco_cov_d0_theta_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_cov_d0_qoverp_exPV", m_mu_staco_cov_d0_qoverp_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_cov_z0_phi_exPV", m_mu_staco_cov_z0_phi_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_cov_z0_theta_exPV", m_mu_staco_cov_z0_theta_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_cov_z0_qoverp_exPV", m_mu_staco_cov_z0_qoverp_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_cov_phi_theta_exPV", m_mu_staco_cov_phi_theta_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_cov_phi_qoverp_exPV", m_mu_staco_cov_phi_qoverp_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_cov_theta_qoverp_exPV", m_mu_staco_cov_theta_qoverp_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_cov_d0_exPV", m_mu_staco_id_cov_d0_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_cov_z0_exPV", m_mu_staco_id_cov_z0_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_cov_phi_exPV", m_mu_staco_id_cov_phi_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_cov_theta_exPV", m_mu_staco_id_cov_theta_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_cov_qoverp_exPV", m_mu_staco_id_cov_qoverp_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_cov_d0_z0_exPV", m_mu_staco_id_cov_d0_z0_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_cov_d0_phi_exPV", m_mu_staco_id_cov_d0_phi_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_cov_d0_theta_exPV", m_mu_staco_id_cov_d0_theta_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_cov_d0_qoverp_exPV", m_mu_staco_id_cov_d0_qoverp_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_cov_z0_phi_exPV", m_mu_staco_id_cov_z0_phi_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_cov_z0_theta_exPV", m_mu_staco_id_cov_z0_theta_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_cov_z0_qoverp_exPV", m_mu_staco_id_cov_z0_qoverp_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_cov_phi_theta_exPV", m_mu_staco_id_cov_phi_theta_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_cov_phi_qoverp_exPV", m_mu_staco_id_cov_phi_qoverp_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_cov_theta_qoverp_exPV", m_mu_staco_id_cov_theta_qoverp_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_me_cov_d0_exPV", m_mu_staco_me_cov_d0_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_me_cov_z0_exPV", m_mu_staco_me_cov_z0_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_me_cov_phi_exPV", m_mu_staco_me_cov_phi_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_me_cov_theta_exPV", m_mu_staco_me_cov_theta_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_me_cov_qoverp_exPV", m_mu_staco_me_cov_qoverp_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_me_cov_d0_z0_exPV", m_mu_staco_me_cov_d0_z0_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_me_cov_d0_phi_exPV", m_mu_staco_me_cov_d0_phi_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_me_cov_d0_theta_exPV", m_mu_staco_me_cov_d0_theta_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_me_cov_d0_qoverp_exPV", m_mu_staco_me_cov_d0_qoverp_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_me_cov_z0_phi_exPV", m_mu_staco_me_cov_z0_phi_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_me_cov_z0_theta_exPV", m_mu_staco_me_cov_z0_theta_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_me_cov_z0_qoverp_exPV", m_mu_staco_me_cov_z0_qoverp_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_me_cov_phi_theta_exPV", m_mu_staco_me_cov_phi_theta_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_me_cov_phi_qoverp_exPV", m_mu_staco_me_cov_phi_qoverp_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_me_cov_theta_qoverp_exPV", m_mu_staco_me_cov_theta_qoverp_exPV );	\
    ConnectVariable( (stringTREENAME), "mu_staco_ms_d0", m_mu_staco_ms_d0 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_ms_z0", m_mu_staco_ms_z0 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_ms_phi", m_mu_staco_ms_phi );	\
    ConnectVariable( (stringTREENAME), "mu_staco_ms_theta", m_mu_staco_ms_theta );	\
    ConnectVariable( (stringTREENAME), "mu_staco_ms_qoverp", m_mu_staco_ms_qoverp );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_d0", m_mu_staco_id_d0 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_z0", m_mu_staco_id_z0 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_phi", m_mu_staco_id_phi );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_theta", m_mu_staco_id_theta );	\
    ConnectVariable( (stringTREENAME), "mu_staco_id_qoverp", m_mu_staco_id_qoverp );	\
    ConnectVariable( (stringTREENAME), "mu_staco_me_d0", m_mu_staco_me_d0 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_me_z0", m_mu_staco_me_z0 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_me_phi", m_mu_staco_me_phi );	\
    ConnectVariable( (stringTREENAME), "mu_staco_me_theta", m_mu_staco_me_theta );	\
    ConnectVariable( (stringTREENAME), "mu_staco_me_qoverp", m_mu_staco_me_qoverp );	\
    ConnectVariable( (stringTREENAME), "mu_staco_ie_d0", m_mu_staco_ie_d0 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_ie_z0", m_mu_staco_ie_z0 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_ie_phi", m_mu_staco_ie_phi );	\
    ConnectVariable( (stringTREENAME), "mu_staco_ie_theta", m_mu_staco_ie_theta );	\
    ConnectVariable( (stringTREENAME), "mu_staco_ie_qoverp", m_mu_staco_ie_qoverp );	\
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
    ConnectVariable( (stringTREENAME), "mu_staco_nGangedPixels", m_mu_staco_nGangedPixels );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nPixelDeadSensors", m_mu_staco_nPixelDeadSensors );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nSCTDeadSensors", m_mu_staco_nSCTDeadSensors );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nTRTDeadStraws", m_mu_staco_nTRTDeadStraws );	\
    ConnectVariable( (stringTREENAME), "mu_staco_expectBLayerHit", m_mu_staco_expectBLayerHit );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nMDTHits", m_mu_staco_nMDTHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nMDTHoles", m_mu_staco_nMDTHoles );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nCSCEtaHits", m_mu_staco_nCSCEtaHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nCSCEtaHoles", m_mu_staco_nCSCEtaHoles );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nCSCPhiHits", m_mu_staco_nCSCPhiHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nCSCPhiHoles", m_mu_staco_nCSCPhiHoles );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nRPCEtaHits", m_mu_staco_nRPCEtaHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nRPCEtaHoles", m_mu_staco_nRPCEtaHoles );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nRPCPhiHits", m_mu_staco_nRPCPhiHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nRPCPhiHoles", m_mu_staco_nRPCPhiHoles );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nTGCEtaHits", m_mu_staco_nTGCEtaHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nTGCEtaHoles", m_mu_staco_nTGCEtaHoles );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nTGCPhiHits", m_mu_staco_nTGCPhiHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nTGCPhiHoles", m_mu_staco_nTGCPhiHoles );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nMDTBIHits", m_mu_staco_nMDTBIHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nMDTBMHits", m_mu_staco_nMDTBMHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nMDTBOHits", m_mu_staco_nMDTBOHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nMDTBEEHits", m_mu_staco_nMDTBEEHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nMDTBIS78Hits", m_mu_staco_nMDTBIS78Hits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nMDTEIHits", m_mu_staco_nMDTEIHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nMDTEMHits", m_mu_staco_nMDTEMHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nMDTEOHits", m_mu_staco_nMDTEOHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nMDTEEHits", m_mu_staco_nMDTEEHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nRPCLayer1EtaHits", m_mu_staco_nRPCLayer1EtaHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nRPCLayer2EtaHits", m_mu_staco_nRPCLayer2EtaHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nRPCLayer3EtaHits", m_mu_staco_nRPCLayer3EtaHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nRPCLayer1PhiHits", m_mu_staco_nRPCLayer1PhiHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nRPCLayer2PhiHits", m_mu_staco_nRPCLayer2PhiHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nRPCLayer3PhiHits", m_mu_staco_nRPCLayer3PhiHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nTGCLayer1EtaHits", m_mu_staco_nTGCLayer1EtaHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nTGCLayer2EtaHits", m_mu_staco_nTGCLayer2EtaHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nTGCLayer3EtaHits", m_mu_staco_nTGCLayer3EtaHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nTGCLayer4EtaHits", m_mu_staco_nTGCLayer4EtaHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nTGCLayer1PhiHits", m_mu_staco_nTGCLayer1PhiHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nTGCLayer2PhiHits", m_mu_staco_nTGCLayer2PhiHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nTGCLayer3PhiHits", m_mu_staco_nTGCLayer3PhiHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_nTGCLayer4PhiHits", m_mu_staco_nTGCLayer4PhiHits );	\
    ConnectVariable( (stringTREENAME), "mu_staco_barrelSectors", m_mu_staco_barrelSectors );	\
    ConnectVariable( (stringTREENAME), "mu_staco_endcapSectors", m_mu_staco_endcapSectors );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackd0", m_mu_staco_trackd0 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackz0", m_mu_staco_trackz0 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackphi", m_mu_staco_trackphi );	\
    ConnectVariable( (stringTREENAME), "mu_staco_tracktheta", m_mu_staco_tracktheta );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackqoverp", m_mu_staco_trackqoverp );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackcov_d0", m_mu_staco_trackcov_d0 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackcov_z0", m_mu_staco_trackcov_z0 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackcov_phi", m_mu_staco_trackcov_phi );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackcov_theta", m_mu_staco_trackcov_theta );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackcov_qoverp", m_mu_staco_trackcov_qoverp );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackcov_d0_z0", m_mu_staco_trackcov_d0_z0 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackcov_d0_phi", m_mu_staco_trackcov_d0_phi );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackcov_d0_theta", m_mu_staco_trackcov_d0_theta );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackcov_d0_qoverp", m_mu_staco_trackcov_d0_qoverp );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackcov_z0_phi", m_mu_staco_trackcov_z0_phi );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackcov_z0_theta", m_mu_staco_trackcov_z0_theta );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackcov_z0_qoverp", m_mu_staco_trackcov_z0_qoverp );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackcov_phi_theta", m_mu_staco_trackcov_phi_theta );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackcov_phi_qoverp", m_mu_staco_trackcov_phi_qoverp );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackcov_theta_qoverp", m_mu_staco_trackcov_theta_qoverp );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackfitchi2", m_mu_staco_trackfitchi2 );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackfitndof", m_mu_staco_trackfitndof );	\
    ConnectVariable( (stringTREENAME), "mu_staco_hastrack", m_mu_staco_hastrack );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackd0beam", m_mu_staco_trackd0beam );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackz0beam", m_mu_staco_trackz0beam );	\
    ConnectVariable( (stringTREENAME), "mu_staco_tracksigd0beam", m_mu_staco_tracksigd0beam );	\
    ConnectVariable( (stringTREENAME), "mu_staco_tracksigz0beam", m_mu_staco_tracksigz0beam );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackd0pv", m_mu_staco_trackd0pv );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackz0pv", m_mu_staco_trackz0pv );	\
    ConnectVariable( (stringTREENAME), "mu_staco_tracksigd0pv", m_mu_staco_tracksigd0pv );	\
    ConnectVariable( (stringTREENAME), "mu_staco_tracksigz0pv", m_mu_staco_tracksigz0pv );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackIPEstimate_d0_biasedpvunbiased", m_mu_staco_trackIPEstimate_d0_biasedpvunbiased );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackIPEstimate_z0_biasedpvunbiased", m_mu_staco_trackIPEstimate_z0_biasedpvunbiased );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackIPEstimate_d0_unbiasedpvunbiased", m_mu_staco_trackIPEstimate_d0_unbiasedpvunbiased );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackIPEstimate_z0_unbiasedpvunbiased", m_mu_staco_trackIPEstimate_z0_unbiasedpvunbiased );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackIPEstimate_sigd0_biasedpvunbiased", m_mu_staco_trackIPEstimate_sigd0_biasedpvunbiased );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackIPEstimate_sigz0_biasedpvunbiased", m_mu_staco_trackIPEstimate_sigz0_biasedpvunbiased );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased", m_mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased );	\
    ConnectVariable( (stringTREENAME), "mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased", m_mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased );	\
    ConnectVariable( (stringTREENAME), "mu_staco_EFCB_dr", m_mu_staco_EFCB_dr );	\
    ConnectVariable( (stringTREENAME), "mu_staco_EFCB_index", m_mu_staco_EFCB_index );	\
    ConnectVariable( (stringTREENAME), "mu_staco_EFMG_dr", m_mu_staco_EFMG_dr );	\
    ConnectVariable( (stringTREENAME), "mu_staco_EFMG_index", m_mu_staco_EFMG_index );	\
    ConnectVariable( (stringTREENAME), "mu_staco_EFME_dr", m_mu_staco_EFME_dr );	\
    ConnectVariable( (stringTREENAME), "mu_staco_EFME_index", m_mu_staco_EFME_index );	\
    ConnectVariable( (stringTREENAME), "mu_staco_L2CB_dr", m_mu_staco_L2CB_dr );	\
    ConnectVariable( (stringTREENAME), "mu_staco_L2CB_index", m_mu_staco_L2CB_index );	\
    ConnectVariable( (stringTREENAME), "mu_staco_L1_dr", m_mu_staco_L1_dr );	\
    ConnectVariable( (stringTREENAME), "mu_staco_L1_index", m_mu_staco_L1_index );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_n", m_jet_AntiKt4TopoEM_n );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_E", m_jet_AntiKt4TopoEM_E );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_pt", m_jet_AntiKt4TopoEM_pt );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_m", m_jet_AntiKt4TopoEM_m );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_eta", m_jet_AntiKt4TopoEM_eta );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_phi", m_jet_AntiKt4TopoEM_phi );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_EtaOrigin", m_jet_AntiKt4TopoEM_EtaOrigin );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_PhiOrigin", m_jet_AntiKt4TopoEM_PhiOrigin );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_MOrigin", m_jet_AntiKt4TopoEM_MOrigin );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_EtaOriginEM", m_jet_AntiKt4TopoEM_EtaOriginEM );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_PhiOriginEM", m_jet_AntiKt4TopoEM_PhiOriginEM );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_MOriginEM", m_jet_AntiKt4TopoEM_MOriginEM );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_WIDTH", m_jet_AntiKt4TopoEM_WIDTH );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_n90", m_jet_AntiKt4TopoEM_n90 );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_Timing", m_jet_AntiKt4TopoEM_Timing );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_LArQuality", m_jet_AntiKt4TopoEM_LArQuality );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_nTrk", m_jet_AntiKt4TopoEM_nTrk );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_sumPtTrk", m_jet_AntiKt4TopoEM_sumPtTrk );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_OriginIndex", m_jet_AntiKt4TopoEM_OriginIndex );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_HECQuality", m_jet_AntiKt4TopoEM_HECQuality );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_NegativeE", m_jet_AntiKt4TopoEM_NegativeE );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_AverageLArQF", m_jet_AntiKt4TopoEM_AverageLArQF );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_YFlip12", m_jet_AntiKt4TopoEM_YFlip12 );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_YFlip23", m_jet_AntiKt4TopoEM_YFlip23 );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_BCH_CORR_CELL", m_jet_AntiKt4TopoEM_BCH_CORR_CELL );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_BCH_CORR_DOTX", m_jet_AntiKt4TopoEM_BCH_CORR_DOTX );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_BCH_CORR_JET", m_jet_AntiKt4TopoEM_BCH_CORR_JET );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_BCH_CORR_JET_FORCELL", m_jet_AntiKt4TopoEM_BCH_CORR_JET_FORCELL );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_ENG_BAD_CELLS", m_jet_AntiKt4TopoEM_ENG_BAD_CELLS );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_N_BAD_CELLS", m_jet_AntiKt4TopoEM_N_BAD_CELLS );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_N_BAD_CELLS_CORR", m_jet_AntiKt4TopoEM_N_BAD_CELLS_CORR );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_BAD_CELLS_CORR_E", m_jet_AntiKt4TopoEM_BAD_CELLS_CORR_E );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_NumTowers", m_jet_AntiKt4TopoEM_NumTowers );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_SamplingMax", m_jet_AntiKt4TopoEM_SamplingMax );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_fracSamplingMax", m_jet_AntiKt4TopoEM_fracSamplingMax );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_hecf", m_jet_AntiKt4TopoEM_hecf );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_tgap3f", m_jet_AntiKt4TopoEM_tgap3f );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_isUgly", m_jet_AntiKt4TopoEM_isUgly );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_isBadLoose", m_jet_AntiKt4TopoEM_isBadLoose );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_isBadMedium", m_jet_AntiKt4TopoEM_isBadMedium );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_isBadTight", m_jet_AntiKt4TopoEM_isBadTight );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_emfrac", m_jet_AntiKt4TopoEM_emfrac );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_Offset", m_jet_AntiKt4TopoEM_Offset );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_EMJES", m_jet_AntiKt4TopoEM_EMJES );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_EMJES_EtaCorr", m_jet_AntiKt4TopoEM_EMJES_EtaCorr );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_EMJESnooffset", m_jet_AntiKt4TopoEM_EMJESnooffset );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_GCWJES", m_jet_AntiKt4TopoEM_GCWJES );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_GCWJES_EtaCorr", m_jet_AntiKt4TopoEM_GCWJES_EtaCorr );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_CB", m_jet_AntiKt4TopoEM_CB );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_LCJES", m_jet_AntiKt4TopoEM_LCJES );	\
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
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_GSCFactorF", m_jet_AntiKt4TopoEM_GSCFactorF );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_WidthFraction", m_jet_AntiKt4TopoEM_WidthFraction );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_el_dr", m_jet_AntiKt4TopoEM_el_dr );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_el_matched", m_jet_AntiKt4TopoEM_el_matched );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_mu_dr", m_jet_AntiKt4TopoEM_mu_dr );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_mu_matched", m_jet_AntiKt4TopoEM_mu_matched );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_L1_dr", m_jet_AntiKt4TopoEM_L1_dr );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_L1_matched", m_jet_AntiKt4TopoEM_L1_matched );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_L2_dr", m_jet_AntiKt4TopoEM_L2_dr );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_L2_matched", m_jet_AntiKt4TopoEM_L2_matched );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_EF_dr", m_jet_AntiKt4TopoEM_EF_dr );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoEM_EF_matched", m_jet_AntiKt4TopoEM_EF_matched );	\
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
    DeclareVariable( o_m_timestamp, "timestamp" );	\
    DeclareVariable( o_m_timestamp_ns, "timestamp_ns" );	\
    DeclareVariable( o_m_lbn, "lbn" );	\
    DeclareVariable( o_m_bcid, "bcid" );	\
    DeclareVariable( o_m_actualIntPerXing, "actualIntPerXing" );	\
    DeclareVariable( o_m_averageIntPerXing, "averageIntPerXing" );	\
    DeclareVariable( o_m_el_n, "el_n" );	\
    DeclareVariable( o_m_el_E, "el_E" );	\
    DeclareVariable( o_m_el_Et, "el_Et" );	\
    DeclareVariable( o_m_el_pt, "el_pt" );	\
    DeclareVariable( o_m_el_m, "el_m" );	\
    DeclareVariable( o_m_el_eta, "el_eta" );	\
    DeclareVariable( o_m_el_phi, "el_phi" );	\
    DeclareVariable( o_m_el_px, "el_px" );	\
    DeclareVariable( o_m_el_py, "el_py" );	\
    DeclareVariable( o_m_el_pz, "el_pz" );	\
    DeclareVariable( o_m_el_charge, "el_charge" );	\
    DeclareVariable( o_m_el_author, "el_author" );	\
    DeclareVariable( o_m_el_isEM, "el_isEM" );	\
    DeclareVariable( o_m_el_OQ, "el_OQ" );	\
    DeclareVariable( o_m_el_convFlag, "el_convFlag" );	\
    DeclareVariable( o_m_el_isConv, "el_isConv" );	\
    DeclareVariable( o_m_el_nConv, "el_nConv" );	\
    DeclareVariable( o_m_el_nSingleTrackConv, "el_nSingleTrackConv" );	\
    DeclareVariable( o_m_el_nDoubleTrackConv, "el_nDoubleTrackConv" );	\
    DeclareVariable( o_m_el_OQRecalc, "el_OQRecalc" );	\
    DeclareVariable( o_m_el_loose, "el_loose" );	\
    DeclareVariable( o_m_el_looseIso, "el_looseIso" );	\
    DeclareVariable( o_m_el_medium, "el_medium" );	\
    DeclareVariable( o_m_el_mediumIso, "el_mediumIso" );	\
    DeclareVariable( o_m_el_mediumWithoutTrack, "el_mediumWithoutTrack" );	\
    DeclareVariable( o_m_el_mediumIsoWithoutTrack, "el_mediumIsoWithoutTrack" );	\
    DeclareVariable( o_m_el_tight, "el_tight" );	\
    DeclareVariable( o_m_el_tightIso, "el_tightIso" );	\
    DeclareVariable( o_m_el_tightWithoutTrack, "el_tightWithoutTrack" );	\
    DeclareVariable( o_m_el_tightIsoWithoutTrack, "el_tightIsoWithoutTrack" );	\
    DeclareVariable( o_m_el_loosePP, "el_loosePP" );	\
    DeclareVariable( o_m_el_loosePPIso, "el_loosePPIso" );	\
    DeclareVariable( o_m_el_mediumPP, "el_mediumPP" );	\
    DeclareVariable( o_m_el_mediumPPIso, "el_mediumPPIso" );	\
    DeclareVariable( o_m_el_tightPP, "el_tightPP" );	\
    DeclareVariable( o_m_el_tightPPIso, "el_tightPPIso" );	\
    DeclareVariable( o_m_el_goodOQ, "el_goodOQ" );	\
    DeclareVariable( o_m_el_Ethad, "el_Ethad" );	\
    DeclareVariable( o_m_el_Ethad1, "el_Ethad1" );	\
    DeclareVariable( o_m_el_f1, "el_f1" );	\
    DeclareVariable( o_m_el_f1core, "el_f1core" );	\
    DeclareVariable( o_m_el_Emins1, "el_Emins1" );	\
    DeclareVariable( o_m_el_fside, "el_fside" );	\
    DeclareVariable( o_m_el_Emax2, "el_Emax2" );	\
    DeclareVariable( o_m_el_ws3, "el_ws3" );	\
    DeclareVariable( o_m_el_wstot, "el_wstot" );	\
    DeclareVariable( o_m_el_emaxs1, "el_emaxs1" );	\
    DeclareVariable( o_m_el_deltaEs, "el_deltaEs" );	\
    DeclareVariable( o_m_el_E233, "el_E233" );	\
    DeclareVariable( o_m_el_E237, "el_E237" );	\
    DeclareVariable( o_m_el_E277, "el_E277" );	\
    DeclareVariable( o_m_el_weta2, "el_weta2" );	\
    DeclareVariable( o_m_el_f3, "el_f3" );	\
    DeclareVariable( o_m_el_f3core, "el_f3core" );	\
    DeclareVariable( o_m_el_rphiallcalo, "el_rphiallcalo" );	\
    DeclareVariable( o_m_el_Etcone45, "el_Etcone45" );	\
    DeclareVariable( o_m_el_Etcone15, "el_Etcone15" );	\
    DeclareVariable( o_m_el_Etcone20, "el_Etcone20" );	\
    DeclareVariable( o_m_el_Etcone25, "el_Etcone25" );	\
    DeclareVariable( o_m_el_Etcone30, "el_Etcone30" );	\
    DeclareVariable( o_m_el_Etcone35, "el_Etcone35" );	\
    DeclareVariable( o_m_el_Etcone40, "el_Etcone40" );	\
    DeclareVariable( o_m_el_ptcone20, "el_ptcone20" );	\
    DeclareVariable( o_m_el_ptcone30, "el_ptcone30" );	\
    DeclareVariable( o_m_el_ptcone40, "el_ptcone40" );	\
    DeclareVariable( o_m_el_nucone20, "el_nucone20" );	\
    DeclareVariable( o_m_el_nucone30, "el_nucone30" );	\
    DeclareVariable( o_m_el_nucone40, "el_nucone40" );	\
    DeclareVariable( o_m_el_Etcone15_pt_corrected, "el_Etcone15_pt_corrected" );	\
    DeclareVariable( o_m_el_Etcone20_pt_corrected, "el_Etcone20_pt_corrected" );	\
    DeclareVariable( o_m_el_Etcone25_pt_corrected, "el_Etcone25_pt_corrected" );	\
    DeclareVariable( o_m_el_Etcone30_pt_corrected, "el_Etcone30_pt_corrected" );	\
    DeclareVariable( o_m_el_Etcone35_pt_corrected, "el_Etcone35_pt_corrected" );	\
    DeclareVariable( o_m_el_Etcone40_pt_corrected, "el_Etcone40_pt_corrected" );	\
    DeclareVariable( o_m_el_convanglematch, "el_convanglematch" );	\
    DeclareVariable( o_m_el_convtrackmatch, "el_convtrackmatch" );	\
    DeclareVariable( o_m_el_hasconv, "el_hasconv" );	\
    DeclareVariable( o_m_el_convvtxx, "el_convvtxx" );	\
    DeclareVariable( o_m_el_convvtxy, "el_convvtxy" );	\
    DeclareVariable( o_m_el_convvtxz, "el_convvtxz" );	\
    DeclareVariable( o_m_el_Rconv, "el_Rconv" );	\
    DeclareVariable( o_m_el_zconv, "el_zconv" );	\
    DeclareVariable( o_m_el_convvtxchi2, "el_convvtxchi2" );	\
    DeclareVariable( o_m_el_pt1conv, "el_pt1conv" );	\
    DeclareVariable( o_m_el_convtrk1nBLHits, "el_convtrk1nBLHits" );	\
    DeclareVariable( o_m_el_convtrk1nPixHits, "el_convtrk1nPixHits" );	\
    DeclareVariable( o_m_el_convtrk1nSCTHits, "el_convtrk1nSCTHits" );	\
    DeclareVariable( o_m_el_convtrk1nTRTHits, "el_convtrk1nTRTHits" );	\
    DeclareVariable( o_m_el_pt2conv, "el_pt2conv" );	\
    DeclareVariable( o_m_el_convtrk2nBLHits, "el_convtrk2nBLHits" );	\
    DeclareVariable( o_m_el_convtrk2nPixHits, "el_convtrk2nPixHits" );	\
    DeclareVariable( o_m_el_convtrk2nSCTHits, "el_convtrk2nSCTHits" );	\
    DeclareVariable( o_m_el_convtrk2nTRTHits, "el_convtrk2nTRTHits" );	\
    DeclareVariable( o_m_el_ptconv, "el_ptconv" );	\
    DeclareVariable( o_m_el_pzconv, "el_pzconv" );	\
    DeclareVariable( o_m_el_pos7, "el_pos7" );	\
    DeclareVariable( o_m_el_etacorrmag, "el_etacorrmag" );	\
    DeclareVariable( o_m_el_deltaeta1, "el_deltaeta1" );	\
    DeclareVariable( o_m_el_deltaeta2, "el_deltaeta2" );	\
    DeclareVariable( o_m_el_deltaphi2, "el_deltaphi2" );	\
    DeclareVariable( o_m_el_deltaphiRescaled, "el_deltaphiRescaled" );	\
    DeclareVariable( o_m_el_deltaPhiRot, "el_deltaPhiRot" );	\
    DeclareVariable( o_m_el_expectHitInBLayer, "el_expectHitInBLayer" );	\
    DeclareVariable( o_m_el_trackd0_physics, "el_trackd0_physics" );	\
    DeclareVariable( o_m_el_etaSampling1, "el_etaSampling1" );	\
    DeclareVariable( o_m_el_reta, "el_reta" );	\
    DeclareVariable( o_m_el_rphi, "el_rphi" );	\
    DeclareVariable( o_m_el_EtringnoisedR03sig2, "el_EtringnoisedR03sig2" );	\
    DeclareVariable( o_m_el_EtringnoisedR03sig3, "el_EtringnoisedR03sig3" );	\
    DeclareVariable( o_m_el_EtringnoisedR03sig4, "el_EtringnoisedR03sig4" );	\
    DeclareVariable( o_m_el_isolationlikelihoodjets, "el_isolationlikelihoodjets" );	\
    DeclareVariable( o_m_el_isolationlikelihoodhqelectrons, "el_isolationlikelihoodhqelectrons" );	\
    DeclareVariable( o_m_el_electronweight, "el_electronweight" );	\
    DeclareVariable( o_m_el_electronbgweight, "el_electronbgweight" );	\
    DeclareVariable( o_m_el_softeweight, "el_softeweight" );	\
    DeclareVariable( o_m_el_softebgweight, "el_softebgweight" );	\
    DeclareVariable( o_m_el_neuralnet, "el_neuralnet" );	\
    DeclareVariable( o_m_el_Hmatrix, "el_Hmatrix" );	\
    DeclareVariable( o_m_el_Hmatrix5, "el_Hmatrix5" );	\
    DeclareVariable( o_m_el_adaboost, "el_adaboost" );	\
    DeclareVariable( o_m_el_softeneuralnet, "el_softeneuralnet" );	\
    DeclareVariable( o_m_el_zvertex, "el_zvertex" );	\
    DeclareVariable( o_m_el_errz, "el_errz" );	\
    DeclareVariable( o_m_el_etap, "el_etap" );	\
    DeclareVariable( o_m_el_depth, "el_depth" );	\
    DeclareVariable( o_m_el_refittedTrack_n, "el_refittedTrack_n" );	\
    DeclareVariable( o_m_el_refittedTrack_author, "el_refittedTrack_author" );	\
    DeclareVariable( o_m_el_refittedTrack_chi2, "el_refittedTrack_chi2" );	\
    DeclareVariable( o_m_el_refittedTrack_hasBrem, "el_refittedTrack_hasBrem" );	\
    DeclareVariable( o_m_el_refittedTrack_bremRadius, "el_refittedTrack_bremRadius" );	\
    DeclareVariable( o_m_el_refittedTrack_bremZ, "el_refittedTrack_bremZ" );	\
    DeclareVariable( o_m_el_refittedTrack_bremRadiusErr, "el_refittedTrack_bremRadiusErr" );	\
    DeclareVariable( o_m_el_refittedTrack_bremZErr, "el_refittedTrack_bremZErr" );	\
    DeclareVariable( o_m_el_refittedTrack_bremFitStatus, "el_refittedTrack_bremFitStatus" );	\
    DeclareVariable( o_m_el_refittedTrack_qoverp, "el_refittedTrack_qoverp" );	\
    DeclareVariable( o_m_el_refittedTrack_d0, "el_refittedTrack_d0" );	\
    DeclareVariable( o_m_el_refittedTrack_z0, "el_refittedTrack_z0" );	\
    DeclareVariable( o_m_el_refittedTrack_theta, "el_refittedTrack_theta" );	\
    DeclareVariable( o_m_el_refittedTrack_phi, "el_refittedTrack_phi" );	\
    DeclareVariable( o_m_el_refittedTrack_LMqoverp, "el_refittedTrack_LMqoverp" );	\
    DeclareVariable( o_m_el_refittedTrack_covd0, "el_refittedTrack_covd0" );	\
    DeclareVariable( o_m_el_refittedTrack_covz0, "el_refittedTrack_covz0" );	\
    DeclareVariable( o_m_el_refittedTrack_covphi, "el_refittedTrack_covphi" );	\
    DeclareVariable( o_m_el_refittedTrack_covtheta, "el_refittedTrack_covtheta" );	\
    DeclareVariable( o_m_el_refittedTrack_covqoverp, "el_refittedTrack_covqoverp" );	\
    DeclareVariable( o_m_el_refittedTrack_covd0z0, "el_refittedTrack_covd0z0" );	\
    DeclareVariable( o_m_el_refittedTrack_covz0phi, "el_refittedTrack_covz0phi" );	\
    DeclareVariable( o_m_el_refittedTrack_covz0theta, "el_refittedTrack_covz0theta" );	\
    DeclareVariable( o_m_el_refittedTrack_covz0qoverp, "el_refittedTrack_covz0qoverp" );	\
    DeclareVariable( o_m_el_refittedTrack_covd0phi, "el_refittedTrack_covd0phi" );	\
    DeclareVariable( o_m_el_refittedTrack_covd0theta, "el_refittedTrack_covd0theta" );	\
    DeclareVariable( o_m_el_refittedTrack_covd0qoverp, "el_refittedTrack_covd0qoverp" );	\
    DeclareVariable( o_m_el_refittedTrack_covphitheta, "el_refittedTrack_covphitheta" );	\
    DeclareVariable( o_m_el_refittedTrack_covphiqoverp, "el_refittedTrack_covphiqoverp" );	\
    DeclareVariable( o_m_el_refittedTrack_covthetaqoverp, "el_refittedTrack_covthetaqoverp" );	\
    DeclareVariable( o_m_el_Es0, "el_Es0" );	\
    DeclareVariable( o_m_el_etas0, "el_etas0" );	\
    DeclareVariable( o_m_el_phis0, "el_phis0" );	\
    DeclareVariable( o_m_el_Es1, "el_Es1" );	\
    DeclareVariable( o_m_el_etas1, "el_etas1" );	\
    DeclareVariable( o_m_el_phis1, "el_phis1" );	\
    DeclareVariable( o_m_el_Es2, "el_Es2" );	\
    DeclareVariable( o_m_el_etas2, "el_etas2" );	\
    DeclareVariable( o_m_el_phis2, "el_phis2" );	\
    DeclareVariable( o_m_el_Es3, "el_Es3" );	\
    DeclareVariable( o_m_el_etas3, "el_etas3" );	\
    DeclareVariable( o_m_el_phis3, "el_phis3" );	\
    DeclareVariable( o_m_el_E_PreSamplerB, "el_E_PreSamplerB" );	\
    DeclareVariable( o_m_el_E_EMB1, "el_E_EMB1" );	\
    DeclareVariable( o_m_el_E_EMB2, "el_E_EMB2" );	\
    DeclareVariable( o_m_el_E_EMB3, "el_E_EMB3" );	\
    DeclareVariable( o_m_el_E_PreSamplerE, "el_E_PreSamplerE" );	\
    DeclareVariable( o_m_el_E_EME1, "el_E_EME1" );	\
    DeclareVariable( o_m_el_E_EME2, "el_E_EME2" );	\
    DeclareVariable( o_m_el_E_EME3, "el_E_EME3" );	\
    DeclareVariable( o_m_el_E_HEC0, "el_E_HEC0" );	\
    DeclareVariable( o_m_el_E_HEC1, "el_E_HEC1" );	\
    DeclareVariable( o_m_el_E_HEC2, "el_E_HEC2" );	\
    DeclareVariable( o_m_el_E_HEC3, "el_E_HEC3" );	\
    DeclareVariable( o_m_el_E_TileBar0, "el_E_TileBar0" );	\
    DeclareVariable( o_m_el_E_TileBar1, "el_E_TileBar1" );	\
    DeclareVariable( o_m_el_E_TileBar2, "el_E_TileBar2" );	\
    DeclareVariable( o_m_el_E_TileGap1, "el_E_TileGap1" );	\
    DeclareVariable( o_m_el_E_TileGap2, "el_E_TileGap2" );	\
    DeclareVariable( o_m_el_E_TileGap3, "el_E_TileGap3" );	\
    DeclareVariable( o_m_el_E_TileExt0, "el_E_TileExt0" );	\
    DeclareVariable( o_m_el_E_TileExt1, "el_E_TileExt1" );	\
    DeclareVariable( o_m_el_E_TileExt2, "el_E_TileExt2" );	\
    DeclareVariable( o_m_el_E_FCAL0, "el_E_FCAL0" );	\
    DeclareVariable( o_m_el_E_FCAL1, "el_E_FCAL1" );	\
    DeclareVariable( o_m_el_E_FCAL2, "el_E_FCAL2" );	\
    DeclareVariable( o_m_el_cl_E, "el_cl_E" );	\
    DeclareVariable( o_m_el_cl_pt, "el_cl_pt" );	\
    DeclareVariable( o_m_el_cl_eta, "el_cl_eta" );	\
    DeclareVariable( o_m_el_cl_phi, "el_cl_phi" );	\
    DeclareVariable( o_m_el_firstEdens, "el_firstEdens" );	\
    DeclareVariable( o_m_el_cellmaxfrac, "el_cellmaxfrac" );	\
    DeclareVariable( o_m_el_longitudinal, "el_longitudinal" );	\
    DeclareVariable( o_m_el_secondlambda, "el_secondlambda" );	\
    DeclareVariable( o_m_el_lateral, "el_lateral" );	\
    DeclareVariable( o_m_el_secondR, "el_secondR" );	\
    DeclareVariable( o_m_el_centerlambda, "el_centerlambda" );	\
    DeclareVariable( o_m_el_trackd0, "el_trackd0" );	\
    DeclareVariable( o_m_el_trackz0, "el_trackz0" );	\
    DeclareVariable( o_m_el_trackphi, "el_trackphi" );	\
    DeclareVariable( o_m_el_tracktheta, "el_tracktheta" );	\
    DeclareVariable( o_m_el_trackqoverp, "el_trackqoverp" );	\
    DeclareVariable( o_m_el_trackpt, "el_trackpt" );	\
    DeclareVariable( o_m_el_tracketa, "el_tracketa" );	\
    DeclareVariable( o_m_el_trackcov_d0, "el_trackcov_d0" );	\
    DeclareVariable( o_m_el_trackcov_z0, "el_trackcov_z0" );	\
    DeclareVariable( o_m_el_trackcov_phi, "el_trackcov_phi" );	\
    DeclareVariable( o_m_el_trackcov_theta, "el_trackcov_theta" );	\
    DeclareVariable( o_m_el_trackcov_qoverp, "el_trackcov_qoverp" );	\
    DeclareVariable( o_m_el_trackcov_d0_z0, "el_trackcov_d0_z0" );	\
    DeclareVariable( o_m_el_trackcov_d0_phi, "el_trackcov_d0_phi" );	\
    DeclareVariable( o_m_el_trackcov_d0_theta, "el_trackcov_d0_theta" );	\
    DeclareVariable( o_m_el_trackcov_d0_qoverp, "el_trackcov_d0_qoverp" );	\
    DeclareVariable( o_m_el_trackcov_z0_phi, "el_trackcov_z0_phi" );	\
    DeclareVariable( o_m_el_trackcov_z0_theta, "el_trackcov_z0_theta" );	\
    DeclareVariable( o_m_el_trackcov_z0_qoverp, "el_trackcov_z0_qoverp" );	\
    DeclareVariable( o_m_el_trackcov_phi_theta, "el_trackcov_phi_theta" );	\
    DeclareVariable( o_m_el_trackcov_phi_qoverp, "el_trackcov_phi_qoverp" );	\
    DeclareVariable( o_m_el_trackcov_theta_qoverp, "el_trackcov_theta_qoverp" );	\
    DeclareVariable( o_m_el_trackfitchi2, "el_trackfitchi2" );	\
    DeclareVariable( o_m_el_trackfitndof, "el_trackfitndof" );	\
    DeclareVariable( o_m_el_nBLHits, "el_nBLHits" );	\
    DeclareVariable( o_m_el_nPixHits, "el_nPixHits" );	\
    DeclareVariable( o_m_el_nSCTHits, "el_nSCTHits" );	\
    DeclareVariable( o_m_el_nTRTHits, "el_nTRTHits" );	\
    DeclareVariable( o_m_el_nTRTHighTHits, "el_nTRTHighTHits" );	\
    DeclareVariable( o_m_el_nPixHoles, "el_nPixHoles" );	\
    DeclareVariable( o_m_el_nSCTHoles, "el_nSCTHoles" );	\
    DeclareVariable( o_m_el_nTRTHoles, "el_nTRTHoles" );	\
    DeclareVariable( o_m_el_nBLSharedHits, "el_nBLSharedHits" );	\
    DeclareVariable( o_m_el_nPixSharedHits, "el_nPixSharedHits" );	\
    DeclareVariable( o_m_el_nSCTSharedHits, "el_nSCTSharedHits" );	\
    DeclareVariable( o_m_el_nBLayerOutliers, "el_nBLayerOutliers" );	\
    DeclareVariable( o_m_el_nPixelOutliers, "el_nPixelOutliers" );	\
    DeclareVariable( o_m_el_nSCTOutliers, "el_nSCTOutliers" );	\
    DeclareVariable( o_m_el_nTRTOutliers, "el_nTRTOutliers" );	\
    DeclareVariable( o_m_el_nTRTHighTOutliers, "el_nTRTHighTOutliers" );	\
    DeclareVariable( o_m_el_expectBLayerHit, "el_expectBLayerHit" );	\
    DeclareVariable( o_m_el_nSiHits, "el_nSiHits" );	\
    DeclareVariable( o_m_el_TRTHighTHitsRatio, "el_TRTHighTHitsRatio" );	\
    DeclareVariable( o_m_el_TRTHighTOutliersRatio, "el_TRTHighTOutliersRatio" );	\
    DeclareVariable( o_m_el_pixeldEdx, "el_pixeldEdx" );	\
    DeclareVariable( o_m_el_nGoodHitsPixeldEdx, "el_nGoodHitsPixeldEdx" );	\
    DeclareVariable( o_m_el_massPixeldEdx, "el_massPixeldEdx" );	\
    DeclareVariable( o_m_el_likelihoodsPixeldEdx, "el_likelihoodsPixeldEdx" );	\
    DeclareVariable( o_m_el_eProbabilityComb, "el_eProbabilityComb" );	\
    DeclareVariable( o_m_el_eProbabilityHT, "el_eProbabilityHT" );	\
    DeclareVariable( o_m_el_eProbabilityToT, "el_eProbabilityToT" );	\
    DeclareVariable( o_m_el_eProbabilityBrem, "el_eProbabilityBrem" );	\
    DeclareVariable( o_m_el_vertweight, "el_vertweight" );	\
    DeclareVariable( o_m_el_vertx, "el_vertx" );	\
    DeclareVariable( o_m_el_verty, "el_verty" );	\
    DeclareVariable( o_m_el_vertz, "el_vertz" );	\
    DeclareVariable( o_m_el_trackd0beam, "el_trackd0beam" );	\
    DeclareVariable( o_m_el_trackz0beam, "el_trackz0beam" );	\
    DeclareVariable( o_m_el_tracksigd0beam, "el_tracksigd0beam" );	\
    DeclareVariable( o_m_el_tracksigz0beam, "el_tracksigz0beam" );	\
    DeclareVariable( o_m_el_trackd0pv, "el_trackd0pv" );	\
    DeclareVariable( o_m_el_trackz0pv, "el_trackz0pv" );	\
    DeclareVariable( o_m_el_tracksigd0pv, "el_tracksigd0pv" );	\
    DeclareVariable( o_m_el_tracksigz0pv, "el_tracksigz0pv" );	\
    DeclareVariable( o_m_el_trackIPEstimate_d0_biasedpvunbiased, "el_trackIPEstimate_d0_biasedpvunbiased" );	\
    DeclareVariable( o_m_el_trackIPEstimate_z0_biasedpvunbiased, "el_trackIPEstimate_z0_biasedpvunbiased" );	\
    DeclareVariable( o_m_el_trackIPEstimate_d0_unbiasedpvunbiased, "el_trackIPEstimate_d0_unbiasedpvunbiased" );	\
    DeclareVariable( o_m_el_trackIPEstimate_z0_unbiasedpvunbiased, "el_trackIPEstimate_z0_unbiasedpvunbiased" );	\
    DeclareVariable( o_m_el_trackIPEstimate_sigd0_biasedpvunbiased, "el_trackIPEstimate_sigd0_biasedpvunbiased" );	\
    DeclareVariable( o_m_el_trackIPEstimate_sigz0_biasedpvunbiased, "el_trackIPEstimate_sigz0_biasedpvunbiased" );	\
    DeclareVariable( o_m_el_trackIPEstimate_sigd0_unbiasedpvunbiased, "el_trackIPEstimate_sigd0_unbiasedpvunbiased" );	\
    DeclareVariable( o_m_el_trackIPEstimate_sigz0_unbiasedpvunbiased, "el_trackIPEstimate_sigz0_unbiasedpvunbiased" );	\
    DeclareVariable( o_m_el_hastrack, "el_hastrack" );	\
    DeclareVariable( o_m_el_deltaEmax2, "el_deltaEmax2" );	\
    DeclareVariable( o_m_el_calibHitsShowerDepth, "el_calibHitsShowerDepth" );	\
    DeclareVariable( o_m_el_isIso, "el_isIso" );	\
    DeclareVariable( o_m_el_mvaptcone20, "el_mvaptcone20" );	\
    DeclareVariable( o_m_el_mvaptcone30, "el_mvaptcone30" );	\
    DeclareVariable( o_m_el_mvaptcone40, "el_mvaptcone40" );	\
    DeclareVariable( o_m_el_jet_dr, "el_jet_dr" );	\
    DeclareVariable( o_m_el_jet_E, "el_jet_E" );	\
    DeclareVariable( o_m_el_jet_pt, "el_jet_pt" );	\
    DeclareVariable( o_m_el_jet_m, "el_jet_m" );	\
    DeclareVariable( o_m_el_jet_eta, "el_jet_eta" );	\
    DeclareVariable( o_m_el_jet_phi, "el_jet_phi" );	\
    DeclareVariable( o_m_el_jet_matched, "el_jet_matched" );	\
    DeclareVariable( o_m_el_Etcone40_ED_corrected, "el_Etcone40_ED_corrected" );	\
    DeclareVariable( o_m_el_Etcone40_corrected, "el_Etcone40_corrected" );	\
    DeclareVariable( o_m_el_EF_dr, "el_EF_dr" );	\
    DeclareVariable( o_m_el_EF_index, "el_EF_index" );	\
    DeclareVariable( o_m_el_L2_dr, "el_L2_dr" );	\
    DeclareVariable( o_m_el_L2_index, "el_L2_index" );	\
    DeclareVariable( o_m_el_L1_dr, "el_L1_dr" );	\
    DeclareVariable( o_m_el_L1_index, "el_L1_index" );	\
    DeclareVariable( o_m_trig_EF_el_n, "trig_EF_el_n" );	\
    DeclareVariable( o_m_trig_EF_el_pt, "trig_EF_el_pt" );	\
    DeclareVariable( o_m_trig_EF_el_eta, "trig_EF_el_eta" );	\
    DeclareVariable( o_m_trig_EF_el_phi, "trig_EF_el_phi" );	\
    DeclareVariable( o_m_EF_2e10_medium, "EF_2e10_medium" );	\
    DeclareVariable( o_m_EF_2e10_medium_mu6, "EF_2e10_medium_mu6" );	\
    DeclareVariable( o_m_EF_2e12Tvh_medium, "EF_2e12Tvh_medium" );	\
    DeclareVariable( o_m_EF_2e12_medium, "EF_2e12_medium" );	\
    DeclareVariable( o_m_EF_2e15vh_medium, "EF_2e15vh_medium" );	\
    DeclareVariable( o_m_EF_2e5_tight, "EF_2e5_tight" );	\
    DeclareVariable( o_m_EF_2e5_tight_Jpsi, "EF_2e5_tight_Jpsi" );	\
    DeclareVariable( o_m_EF_2mu10, "EF_2mu10" );	\
    DeclareVariable( o_m_EF_2mu10_empty, "EF_2mu10_empty" );	\
    DeclareVariable( o_m_EF_2mu10_loose, "EF_2mu10_loose" );	\
    DeclareVariable( o_m_EF_2mu10_loose_empty, "EF_2mu10_loose_empty" );	\
    DeclareVariable( o_m_EF_2mu10_loose_noOvlpRm, "EF_2mu10_loose_noOvlpRm" );	\
    DeclareVariable( o_m_EF_2mu13_Zmumu_IDTrkNoCut, "EF_2mu13_Zmumu_IDTrkNoCut" );	\
    DeclareVariable( o_m_EF_2mu4T, "EF_2mu4T" );	\
    DeclareVariable( o_m_EF_2mu4T_Bmumu, "EF_2mu4T_Bmumu" );	\
    DeclareVariable( o_m_EF_2mu4T_Bmumux, "EF_2mu4T_Bmumux" );	\
    DeclareVariable( o_m_EF_2mu4T_DiMu, "EF_2mu4T_DiMu" );	\
    DeclareVariable( o_m_EF_2mu4T_DiMu_DY, "EF_2mu4T_DiMu_DY" );	\
    DeclareVariable( o_m_EF_2mu4T_DiMu_DY20, "EF_2mu4T_DiMu_DY20" );	\
    DeclareVariable( o_m_EF_2mu4T_DiMu_DY_noVtx_noOS, "EF_2mu4T_DiMu_DY_noVtx_noOS" );	\
    DeclareVariable( o_m_EF_2mu4T_DiMu_SiTrk, "EF_2mu4T_DiMu_SiTrk" );	\
    DeclareVariable( o_m_EF_2mu4T_DiMu_noVtx_noOS, "EF_2mu4T_DiMu_noVtx_noOS" );	\
    DeclareVariable( o_m_EF_2mu4T_EFxe20_noMu, "EF_2mu4T_EFxe20_noMu" );	\
    DeclareVariable( o_m_EF_2mu4T_EFxe30_noMu, "EF_2mu4T_EFxe30_noMu" );	\
    DeclareVariable( o_m_EF_2mu4T_Jpsimumu, "EF_2mu4T_Jpsimumu" );	\
    DeclareVariable( o_m_EF_2mu4T_Jpsimumu_IDTrkNoCut, "EF_2mu4T_Jpsimumu_IDTrkNoCut" );	\
    DeclareVariable( o_m_EF_2mu4T_Upsimumu, "EF_2mu4T_Upsimumu" );	\
    DeclareVariable( o_m_EF_2mu4T_xe30_noMu, "EF_2mu4T_xe30_noMu" );	\
    DeclareVariable( o_m_EF_2mu4T_xe40_noMu, "EF_2mu4T_xe40_noMu" );	\
    DeclareVariable( o_m_EF_2mu4Ti_DiMu_DY, "EF_2mu4Ti_DiMu_DY" );	\
    DeclareVariable( o_m_EF_2mu6, "EF_2mu6" );	\
    DeclareVariable( o_m_EF_2mu6_Bmumux, "EF_2mu6_Bmumux" );	\
    DeclareVariable( o_m_EF_2mu6_DiMu, "EF_2mu6_DiMu" );	\
    DeclareVariable( o_m_EF_2mu6_MSonly_g10_loose, "EF_2mu6_MSonly_g10_loose" );	\
    DeclareVariable( o_m_EF_2mu6_MSonly_g10_loose_nonfilled, "EF_2mu6_MSonly_g10_loose_nonfilled" );	\
    DeclareVariable( o_m_EF_e10_medium, "EF_e10_medium" );	\
    DeclareVariable( o_m_EF_e10_medium_2mu6, "EF_e10_medium_2mu6" );	\
    DeclareVariable( o_m_EF_e10_medium_mu10, "EF_e10_medium_mu10" );	\
    DeclareVariable( o_m_EF_e10_medium_mu6, "EF_e10_medium_mu6" );	\
    DeclareVariable( o_m_EF_e10_medium_mu6_topo_medium, "EF_e10_medium_mu6_topo_medium" );	\
    DeclareVariable( o_m_EF_e11_etcut, "EF_e11_etcut" );	\
    DeclareVariable( o_m_EF_e12Tvh_medium, "EF_e12Tvh_medium" );	\
    DeclareVariable( o_m_EF_e12Tvh_medium_2e6T_medium, "EF_e12Tvh_medium_2e6T_medium" );	\
    DeclareVariable( o_m_EF_e12Tvh_medium_mu6, "EF_e12Tvh_medium_mu6" );	\
    DeclareVariable( o_m_EF_e12Tvh_medium_mu6_topo_medium, "EF_e12Tvh_medium_mu6_topo_medium" );	\
    DeclareVariable( o_m_EF_e12_medium, "EF_e12_medium" );	\
    DeclareVariable( o_m_EF_e13_etcutTrk_xs45_noMu_dphi2j10xe20, "EF_e13_etcutTrk_xs45_noMu_dphi2j10xe20" );	\
    DeclareVariable( o_m_EF_e13_etcutTrk_xs60_noMu, "EF_e13_etcutTrk_xs60_noMu" );	\
    DeclareVariable( o_m_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe07, "EF_e13_etcutTrk_xs60_noMu_dphi2j10xe07" );	\
    DeclareVariable( o_m_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe20, "EF_e13_etcutTrk_xs60_noMu_dphi2j10xe20" );	\
    DeclareVariable( o_m_EF_e14_tight_e4_etcut_Jpsi, "EF_e14_tight_e4_etcut_Jpsi" );	\
    DeclareVariable( o_m_EF_e15vh_loose1_e12Tvh_loose1_Zee, "EF_e15vh_loose1_e12Tvh_loose1_Zee" );	\
    DeclareVariable( o_m_EF_e15vh_medium, "EF_e15vh_medium" );	\
    DeclareVariable( o_m_EF_e15vh_medium_xe40_noMu, "EF_e15vh_medium_xe40_noMu" );	\
    DeclareVariable( o_m_EF_e15vh_medium_xe50_noMu, "EF_e15vh_medium_xe50_noMu" );	\
    DeclareVariable( o_m_EF_e20_etcutTrk_xe40_noMu_dphi2j10xe20, "EF_e20_etcutTrk_xe40_noMu_dphi2j10xe20" );	\
    DeclareVariable( o_m_EF_e20_etcutTrk_xs60_noMu_dphi2j10xe07, "EF_e20_etcutTrk_xs60_noMu_dphi2j10xe07" );	\
    DeclareVariable( o_m_EF_e20_tight_e15_NoCut_Zee, "EF_e20_tight_e15_NoCut_Zee" );	\
    DeclareVariable( o_m_EF_e22vh_loose, "EF_e22vh_loose" );	\
    DeclareVariable( o_m_EF_e22vh_loose1, "EF_e22vh_loose1" );	\
    DeclareVariable( o_m_EF_e22vh_looseTrk, "EF_e22vh_looseTrk" );	\
    DeclareVariable( o_m_EF_e22vh_loose_2j20_a4tc_EFFS, "EF_e22vh_loose_2j20_a4tc_EFFS" );	\
    DeclareVariable( o_m_EF_e22vh_loose_3j20_a4tc_EFFS, "EF_e22vh_loose_3j20_a4tc_EFFS" );	\
    DeclareVariable( o_m_EF_e22vh_loose_4j15_a4tc_EFFS, "EF_e22vh_loose_4j15_a4tc_EFFS" );	\
    DeclareVariable( o_m_EF_e22vh_medium, "EF_e22vh_medium" );	\
    DeclareVariable( o_m_EF_e22vh_medium1, "EF_e22vh_medium1" );	\
    DeclareVariable( o_m_EF_e22vh_medium2, "EF_e22vh_medium2" );	\
    DeclareVariable( o_m_EF_e22vh_medium_IDTrkNoCut, "EF_e22vh_medium_IDTrkNoCut" );	\
    DeclareVariable( o_m_EF_e22vh_medium_SiTrk, "EF_e22vh_medium_SiTrk" );	\
    DeclareVariable( o_m_EF_e22vh_medium_TRT, "EF_e22vh_medium_TRT" );	\
    DeclareVariable( o_m_EF_e40_medium, "EF_e40_medium" );	\
    DeclareVariable( o_m_EF_e45_medium, "EF_e45_medium" );	\
    DeclareVariable( o_m_EF_e45_medium1, "EF_e45_medium1" );	\
    DeclareVariable( o_m_EF_e5_medium_mu6, "EF_e5_medium_mu6" );	\
    DeclareVariable( o_m_EF_e5_medium_mu6_topo_medium, "EF_e5_medium_mu6_topo_medium" );	\
    DeclareVariable( o_m_EF_e5_tight, "EF_e5_tight" );	\
    DeclareVariable( o_m_EF_e5_tight_e14_etcut_Jpsi, "EF_e5_tight_e14_etcut_Jpsi" );	\
    DeclareVariable( o_m_EF_e5_tight_e4_etcut_Jpsi, "EF_e5_tight_e4_etcut_Jpsi" );	\
    DeclareVariable( o_m_EF_e5_tight_e4_etcut_Jpsi_SiTrk, "EF_e5_tight_e4_etcut_Jpsi_SiTrk" );	\
    DeclareVariable( o_m_EF_e5_tight_e4_etcut_Jpsi_TRT, "EF_e5_tight_e4_etcut_Jpsi_TRT" );	\
    DeclareVariable( o_m_EF_e5_tight_e5_NoCut, "EF_e5_tight_e5_NoCut" );	\
    DeclareVariable( o_m_EF_e5_tight_e9_etcut_Jpsi, "EF_e5_tight_e9_etcut_Jpsi" );	\
    DeclareVariable( o_m_EF_e60_loose, "EF_e60_loose" );	\
    DeclareVariable( o_m_EF_e6T_medium, "EF_e6T_medium" );	\
    DeclareVariable( o_m_EF_e9_tight_e4_etcut_Jpsi, "EF_e9_tight_e4_etcut_Jpsi" );	\
    DeclareVariable( o_m_EF_g100_loose, "EF_g100_loose" );	\
    DeclareVariable( o_m_EF_g10_NoCut_cosmic, "EF_g10_NoCut_cosmic" );	\
    DeclareVariable( o_m_EF_g11_etcut, "EF_g11_etcut" );	\
    DeclareVariable( o_m_EF_g11_etcut_larcalib, "EF_g11_etcut_larcalib" );	\
    DeclareVariable( o_m_EF_g150_etcut, "EF_g150_etcut" );	\
    DeclareVariable( o_m_EF_g20_etcut, "EF_g20_etcut" );	\
    DeclareVariable( o_m_EF_g20_loose, "EF_g20_loose" );	\
    DeclareVariable( o_m_EF_g20_loose_larcalib, "EF_g20_loose_larcalib" );	\
    DeclareVariable( o_m_EF_g40_loose, "EF_g40_loose" );	\
    DeclareVariable( o_m_EF_g40_loose_EFxe40_noMu, "EF_g40_loose_EFxe40_noMu" );	\
    DeclareVariable( o_m_EF_g40_loose_larcalib, "EF_g40_loose_larcalib" );	\
    DeclareVariable( o_m_EF_g40_loose_xe45_medium_noMu, "EF_g40_loose_xe45_medium_noMu" );	\
    DeclareVariable( o_m_EF_g40_loose_xe55_medium_noMu, "EF_g40_loose_xe55_medium_noMu" );	\
    DeclareVariable( o_m_EF_g40_tight_b10_medium, "EF_g40_tight_b10_medium" );	\
    DeclareVariable( o_m_EF_g5_NoCut_cosmic, "EF_g5_NoCut_cosmic" );	\
    DeclareVariable( o_m_EF_g60_loose, "EF_g60_loose" );	\
    DeclareVariable( o_m_EF_g60_loose_larcalib, "EF_g60_loose_larcalib" );	\
    DeclareVariable( o_m_EF_g80_loose, "EF_g80_loose" );	\
    DeclareVariable( o_m_EF_g80_loose_larcalib, "EF_g80_loose_larcalib" );	\
    DeclareVariable( o_m_EF_mu10, "EF_mu10" );	\
    DeclareVariable( o_m_EF_mu10_Jpsimumu, "EF_mu10_Jpsimumu" );	\
    DeclareVariable( o_m_EF_mu10_Upsimumu_FS, "EF_mu10_Upsimumu_FS" );	\
    DeclareVariable( o_m_EF_mu10_Upsimumu_tight_FS, "EF_mu10_Upsimumu_tight_FS" );	\
    DeclareVariable( o_m_EF_mu10_loose, "EF_mu10_loose" );	\
    DeclareVariable( o_m_EF_mu10_muCombTag_NoEF, "EF_mu10_muCombTag_NoEF" );	\
    DeclareVariable( o_m_EF_mu11_empty_NoAlg, "EF_mu11_empty_NoAlg" );	\
    DeclareVariable( o_m_EF_mu13, "EF_mu13" );	\
    DeclareVariable( o_m_EF_mu13_MG, "EF_mu13_MG" );	\
    DeclareVariable( o_m_EF_mu13_muCombTag_NoEF, "EF_mu13_muCombTag_NoEF" );	\
    DeclareVariable( o_m_EF_mu15, "EF_mu15" );	\
    DeclareVariable( o_m_EF_mu15_2mu4_EFFS_medium, "EF_mu15_2mu4_EFFS_medium" );	\
    DeclareVariable( o_m_EF_mu15_mu10_EFFS, "EF_mu15_mu10_EFFS" );	\
    DeclareVariable( o_m_EF_mu15_mu10_EFFS_medium, "EF_mu15_mu10_EFFS_medium" );	\
    DeclareVariable( o_m_EF_mu15_mu10_EFFS_tight, "EF_mu15_mu10_EFFS_tight" );	\
    DeclareVariable( o_m_EF_mu15_xe30_noMu, "EF_mu15_xe30_noMu" );	\
    DeclareVariable( o_m_EF_mu15i, "EF_mu15i" );	\
    DeclareVariable( o_m_EF_mu15i_medium, "EF_mu15i_medium" );	\
    DeclareVariable( o_m_EF_mu18, "EF_mu18" );	\
    DeclareVariable( o_m_EF_mu18_L1J10, "EF_mu18_L1J10" );	\
    DeclareVariable( o_m_EF_mu18_MG, "EF_mu18_MG" );	\
    DeclareVariable( o_m_EF_mu18_MG_L1J10, "EF_mu18_MG_L1J10" );	\
    DeclareVariable( o_m_EF_mu18_MG_medium, "EF_mu18_MG_medium" );	\
    DeclareVariable( o_m_EF_mu18_medium, "EF_mu18_medium" );	\
    DeclareVariable( o_m_EF_mu18_medium_2j20_a4tc_EFFS, "EF_mu18_medium_2j20_a4tc_EFFS" );	\
    DeclareVariable( o_m_EF_mu18_medium_3j20_a4tc_EFFS, "EF_mu18_medium_3j20_a4tc_EFFS" );	\
    DeclareVariable( o_m_EF_mu18_medium_4j15_a4tc_EFFS, "EF_mu18_medium_4j15_a4tc_EFFS" );	\
    DeclareVariable( o_m_EF_mu18_medium_4j20_a4tc_EFFS, "EF_mu18_medium_4j20_a4tc_EFFS" );	\
    DeclareVariable( o_m_EF_mu18i3_medium, "EF_mu18i3_medium" );	\
    DeclareVariable( o_m_EF_mu18i4_medium, "EF_mu18i4_medium" );	\
    DeclareVariable( o_m_EF_mu20, "EF_mu20" );	\
    DeclareVariable( o_m_EF_mu20_IDTrkNoCut, "EF_mu20_IDTrkNoCut" );	\
    DeclareVariable( o_m_EF_mu20_IDTrkNoCut_ManyVx, "EF_mu20_IDTrkNoCut_ManyVx" );	\
    DeclareVariable( o_m_EF_mu20_MG, "EF_mu20_MG" );	\
    DeclareVariable( o_m_EF_mu20_MG_medium, "EF_mu20_MG_medium" );	\
    DeclareVariable( o_m_EF_mu20_empty, "EF_mu20_empty" );	\
    DeclareVariable( o_m_EF_mu20_medium, "EF_mu20_medium" );	\
    DeclareVariable( o_m_EF_mu20_mu10_EFFS_tight, "EF_mu20_mu10_EFFS_tight" );	\
    DeclareVariable( o_m_EF_mu20_muCombTag_NoEF, "EF_mu20_muCombTag_NoEF" );	\
    DeclareVariable( o_m_EF_mu20i, "EF_mu20i" );	\
    DeclareVariable( o_m_EF_mu20i_medium, "EF_mu20i_medium" );	\
    DeclareVariable( o_m_EF_mu22, "EF_mu22" );	\
    DeclareVariable( o_m_EF_mu22_MG, "EF_mu22_MG" );	\
    DeclareVariable( o_m_EF_mu22_MG_medium, "EF_mu22_MG_medium" );	\
    DeclareVariable( o_m_EF_mu22_j30_a4tc_EFFS, "EF_mu22_j30_a4tc_EFFS" );	\
    DeclareVariable( o_m_EF_mu22_medium, "EF_mu22_medium" );	\
    DeclareVariable( o_m_EF_mu22i1_medium, "EF_mu22i1_medium" );	\
    DeclareVariable( o_m_EF_mu22i2_medium, "EF_mu22i2_medium" );	\
    DeclareVariable( o_m_EF_mu22i3_medium, "EF_mu22i3_medium" );	\
    DeclareVariable( o_m_EF_mu22i4_medium, "EF_mu22i4_medium" );	\
    DeclareVariable( o_m_EF_mu24_MG_medium, "EF_mu24_MG_medium" );	\
    DeclareVariable( o_m_EF_mu24_MG_tight, "EF_mu24_MG_tight" );	\
    DeclareVariable( o_m_EF_mu24_medium, "EF_mu24_medium" );	\
    DeclareVariable( o_m_EF_mu24_tight, "EF_mu24_tight" );	\
    DeclareVariable( o_m_EF_mu30_MG_medium, "EF_mu30_MG_medium" );	\
    DeclareVariable( o_m_EF_mu30_MG_tight, "EF_mu30_MG_tight" );	\
    DeclareVariable( o_m_EF_mu30_medium, "EF_mu30_medium" );	\
    DeclareVariable( o_m_EF_mu30_tight, "EF_mu30_tight" );	\
    DeclareVariable( o_m_EF_mu40_MSonly_barrel, "EF_mu40_MSonly_barrel" );	\
    DeclareVariable( o_m_EF_mu40_MSonly_barrel_medium, "EF_mu40_MSonly_barrel_medium" );	\
    DeclareVariable( o_m_EF_mu40_MSonly_empty, "EF_mu40_MSonly_empty" );	\
    DeclareVariable( o_m_EF_mu40_MSonly_tight, "EF_mu40_MSonly_tight" );	\
    DeclareVariable( o_m_EF_mu40_MSonly_tight_L1MU11, "EF_mu40_MSonly_tight_L1MU11" );	\
    DeclareVariable( o_m_EF_mu40_MSonly_tighter, "EF_mu40_MSonly_tighter" );	\
    DeclareVariable( o_m_EF_mu40_slow, "EF_mu40_slow" );	\
    DeclareVariable( o_m_EF_mu40_slow_empty, "EF_mu40_slow_empty" );	\
    DeclareVariable( o_m_EF_mu40_slow_medium, "EF_mu40_slow_medium" );	\
    DeclareVariable( o_m_EF_mu40_slow_outOfTime, "EF_mu40_slow_outOfTime" );	\
    DeclareVariable( o_m_EF_mu40_slow_outOfTime_medium, "EF_mu40_slow_outOfTime_medium" );	\
    DeclareVariable( o_m_EF_mu4T, "EF_mu4T" );	\
    DeclareVariable( o_m_EF_mu4T_DiMu, "EF_mu4T_DiMu" );	\
    DeclareVariable( o_m_EF_mu4T_DiMu_FS_noOS, "EF_mu4T_DiMu_FS_noOS" );	\
    DeclareVariable( o_m_EF_mu4T_Jpsimumu, "EF_mu4T_Jpsimumu" );	\
    DeclareVariable( o_m_EF_mu4T_Trk_Jpsi, "EF_mu4T_Trk_Jpsi" );	\
    DeclareVariable( o_m_EF_mu4T_Trk_Upsi_FS, "EF_mu4T_Trk_Upsi_FS" );	\
    DeclareVariable( o_m_EF_mu4T_Upsimumu_FS, "EF_mu4T_Upsimumu_FS" );	\
    DeclareVariable( o_m_EF_mu4T_Upsimumu_SiTrk_FS, "EF_mu4T_Upsimumu_SiTrk_FS" );	\
    DeclareVariable( o_m_EF_mu4T_Upsimumu_tight_FS, "EF_mu4T_Upsimumu_tight_FS" );	\
    DeclareVariable( o_m_EF_mu4T_j45_a4tc_EFFS_xe45_loose_noMu, "EF_mu4T_j45_a4tc_EFFS_xe45_loose_noMu" );	\
    DeclareVariable( o_m_EF_mu4T_j45_a4tc_EFFS_xe55_noMu, "EF_mu4T_j45_a4tc_EFFS_xe55_noMu" );	\
    DeclareVariable( o_m_EF_mu4Timu6i_DiMu_DY, "EF_mu4Timu6i_DiMu_DY" );	\
    DeclareVariable( o_m_EF_mu4Timu6i_DiMu_DY14_noVtx_noOS, "EF_mu4Timu6i_DiMu_DY14_noVtx_noOS" );	\
    DeclareVariable( o_m_EF_mu4Tmu6_Bmumu, "EF_mu4Tmu6_Bmumu" );	\
    DeclareVariable( o_m_EF_mu4Tmu6_Bmumux, "EF_mu4Tmu6_Bmumux" );	\
    DeclareVariable( o_m_EF_mu4Tmu6_DiMu, "EF_mu4Tmu6_DiMu" );	\
    DeclareVariable( o_m_EF_mu4Tmu6_DiMu_DY20, "EF_mu4Tmu6_DiMu_DY20" );	\
    DeclareVariable( o_m_EF_mu4Tmu6_DiMu_noVtx_noOS, "EF_mu4Tmu6_DiMu_noVtx_noOS" );	\
    DeclareVariable( o_m_EF_mu4Tmu6_Jpsimumu, "EF_mu4Tmu6_Jpsimumu" );	\
    DeclareVariable( o_m_EF_mu4Tmu6_Jpsimumu_IDTrkNoCut, "EF_mu4Tmu6_Jpsimumu_IDTrkNoCut" );	\
    DeclareVariable( o_m_EF_mu4Tmu6_Upsimumu, "EF_mu4Tmu6_Upsimumu" );	\
    DeclareVariable( o_m_EF_mu4_L1J10_matched, "EF_mu4_L1J10_matched" );	\
    DeclareVariable( o_m_EF_mu4_L1J15_matched, "EF_mu4_L1J15_matched" );	\
    DeclareVariable( o_m_EF_mu4_L1J20_matched, "EF_mu4_L1J20_matched" );	\
    DeclareVariable( o_m_EF_mu4_L1J30_matched, "EF_mu4_L1J30_matched" );	\
    DeclareVariable( o_m_EF_mu4_L1J50_matched, "EF_mu4_L1J50_matched" );	\
    DeclareVariable( o_m_EF_mu4_L1J75_matched, "EF_mu4_L1J75_matched" );	\
    DeclareVariable( o_m_EF_mu4_L1MU11_MSonly_cosmic, "EF_mu4_L1MU11_MSonly_cosmic" );	\
    DeclareVariable( o_m_EF_mu4_L1MU11_cosmic, "EF_mu4_L1MU11_cosmic" );	\
    DeclareVariable( o_m_EF_mu4_cosmic, "EF_mu4_cosmic" );	\
    DeclareVariable( o_m_EF_mu4_empty_NoAlg, "EF_mu4_empty_NoAlg" );	\
    DeclareVariable( o_m_EF_mu4_firstempty_NoAlg, "EF_mu4_firstempty_NoAlg" );	\
    DeclareVariable( o_m_EF_mu4_j10_a4tc_EFFS_matched, "EF_mu4_j10_a4tc_EFFS_matched" );	\
    DeclareVariable( o_m_EF_mu4_j135_a4tc_EFFS_L1matched, "EF_mu4_j135_a4tc_EFFS_L1matched" );	\
    DeclareVariable( o_m_EF_mu4_j180_a4tc_EFFS_L1matched, "EF_mu4_j180_a4tc_EFFS_L1matched" );	\
    DeclareVariable( o_m_EF_mu4_unpaired_iso_NoAlg, "EF_mu4_unpaired_iso_NoAlg" );	\
    DeclareVariable( o_m_EF_mu6, "EF_mu6" );	\
    DeclareVariable( o_m_EF_mu6_DiMu_noOS, "EF_mu6_DiMu_noOS" );	\
    DeclareVariable( o_m_EF_mu6_Jpsimumu, "EF_mu6_Jpsimumu" );	\
    DeclareVariable( o_m_EF_mu6_Jpsimumu_SiTrk, "EF_mu6_Jpsimumu_SiTrk" );	\
    DeclareVariable( o_m_EF_mu6_Jpsimumu_tight, "EF_mu6_Jpsimumu_tight" );	\
    DeclareVariable( o_m_EF_mu6_Trk_Jpsi_loose, "EF_mu6_Trk_Jpsi_loose" );	\
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
    DeclareVariable( o_m_ph_OQRecalc, "ph_OQRecalc" );	\
    DeclareVariable( o_m_ph_convFlag, "ph_convFlag" );	\
    DeclareVariable( o_m_ph_isConv, "ph_isConv" );	\
    DeclareVariable( o_m_ph_nConv, "ph_nConv" );	\
    DeclareVariable( o_m_ph_nSingleTrackConv, "ph_nSingleTrackConv" );	\
    DeclareVariable( o_m_ph_nDoubleTrackConv, "ph_nDoubleTrackConv" );	\
    DeclareVariable( o_m_ph_loose, "ph_loose" );	\
    DeclareVariable( o_m_ph_looseIso, "ph_looseIso" );	\
    DeclareVariable( o_m_ph_tight, "ph_tight" );	\
    DeclareVariable( o_m_ph_tightIso, "ph_tightIso" );	\
    DeclareVariable( o_m_ph_looseAR, "ph_looseAR" );	\
    DeclareVariable( o_m_ph_looseARIso, "ph_looseARIso" );	\
    DeclareVariable( o_m_ph_tightAR, "ph_tightAR" );	\
    DeclareVariable( o_m_ph_tightARIso, "ph_tightARIso" );	\
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
    DeclareVariable( o_m_ph_nucone20, "ph_nucone20" );	\
    DeclareVariable( o_m_ph_nucone30, "ph_nucone30" );	\
    DeclareVariable( o_m_ph_nucone40, "ph_nucone40" );	\
    DeclareVariable( o_m_ph_Etcone15_pt_corrected, "ph_Etcone15_pt_corrected" );	\
    DeclareVariable( o_m_ph_Etcone20_pt_corrected, "ph_Etcone20_pt_corrected" );	\
    DeclareVariable( o_m_ph_Etcone25_pt_corrected, "ph_Etcone25_pt_corrected" );	\
    DeclareVariable( o_m_ph_Etcone30_pt_corrected, "ph_Etcone30_pt_corrected" );	\
    DeclareVariable( o_m_ph_Etcone35_pt_corrected, "ph_Etcone35_pt_corrected" );	\
    DeclareVariable( o_m_ph_Etcone40_pt_corrected, "ph_Etcone40_pt_corrected" );	\
    DeclareVariable( o_m_ph_convanglematch, "ph_convanglematch" );	\
    DeclareVariable( o_m_ph_convtrackmatch, "ph_convtrackmatch" );	\
    DeclareVariable( o_m_ph_hasconv, "ph_hasconv" );	\
    DeclareVariable( o_m_ph_convvtxx, "ph_convvtxx" );	\
    DeclareVariable( o_m_ph_convvtxy, "ph_convvtxy" );	\
    DeclareVariable( o_m_ph_convvtxz, "ph_convvtxz" );	\
    DeclareVariable( o_m_ph_Rconv, "ph_Rconv" );	\
    DeclareVariable( o_m_ph_zconv, "ph_zconv" );	\
    DeclareVariable( o_m_ph_convvtxchi2, "ph_convvtxchi2" );	\
    DeclareVariable( o_m_ph_pt1conv, "ph_pt1conv" );	\
    DeclareVariable( o_m_ph_convtrk1nBLHits, "ph_convtrk1nBLHits" );	\
    DeclareVariable( o_m_ph_convtrk1nPixHits, "ph_convtrk1nPixHits" );	\
    DeclareVariable( o_m_ph_convtrk1nSCTHits, "ph_convtrk1nSCTHits" );	\
    DeclareVariable( o_m_ph_convtrk1nTRTHits, "ph_convtrk1nTRTHits" );	\
    DeclareVariable( o_m_ph_pt2conv, "ph_pt2conv" );	\
    DeclareVariable( o_m_ph_convtrk2nBLHits, "ph_convtrk2nBLHits" );	\
    DeclareVariable( o_m_ph_convtrk2nPixHits, "ph_convtrk2nPixHits" );	\
    DeclareVariable( o_m_ph_convtrk2nSCTHits, "ph_convtrk2nSCTHits" );	\
    DeclareVariable( o_m_ph_convtrk2nTRTHits, "ph_convtrk2nTRTHits" );	\
    DeclareVariable( o_m_ph_ptconv, "ph_ptconv" );	\
    DeclareVariable( o_m_ph_pzconv, "ph_pzconv" );	\
    DeclareVariable( o_m_ph_reta, "ph_reta" );	\
    DeclareVariable( o_m_ph_rphi, "ph_rphi" );	\
    DeclareVariable( o_m_ph_EtringnoisedR03sig2, "ph_EtringnoisedR03sig2" );	\
    DeclareVariable( o_m_ph_EtringnoisedR03sig3, "ph_EtringnoisedR03sig3" );	\
    DeclareVariable( o_m_ph_EtringnoisedR03sig4, "ph_EtringnoisedR03sig4" );	\
    DeclareVariable( o_m_ph_isolationlikelihoodjets, "ph_isolationlikelihoodjets" );	\
    DeclareVariable( o_m_ph_isolationlikelihoodhqelectrons, "ph_isolationlikelihoodhqelectrons" );	\
    DeclareVariable( o_m_ph_loglikelihood, "ph_loglikelihood" );	\
    DeclareVariable( o_m_ph_photonweight, "ph_photonweight" );	\
    DeclareVariable( o_m_ph_photonbgweight, "ph_photonbgweight" );	\
    DeclareVariable( o_m_ph_neuralnet, "ph_neuralnet" );	\
    DeclareVariable( o_m_ph_Hmatrix, "ph_Hmatrix" );	\
    DeclareVariable( o_m_ph_Hmatrix5, "ph_Hmatrix5" );	\
    DeclareVariable( o_m_ph_adaboost, "ph_adaboost" );	\
    DeclareVariable( o_m_ph_zvertex, "ph_zvertex" );	\
    DeclareVariable( o_m_ph_errz, "ph_errz" );	\
    DeclareVariable( o_m_ph_etap, "ph_etap" );	\
    DeclareVariable( o_m_ph_depth, "ph_depth" );	\
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
    DeclareVariable( o_m_ph_calibHitsShowerDepth, "ph_calibHitsShowerDepth" );	\
    DeclareVariable( o_m_ph_isIso, "ph_isIso" );	\
    DeclareVariable( o_m_ph_mvaptcone20, "ph_mvaptcone20" );	\
    DeclareVariable( o_m_ph_mvaptcone30, "ph_mvaptcone30" );	\
    DeclareVariable( o_m_ph_mvaptcone40, "ph_mvaptcone40" );	\
    DeclareVariable( o_m_ph_topoEtcone20, "ph_topoEtcone20" );	\
    DeclareVariable( o_m_ph_topoEtcone40, "ph_topoEtcone40" );	\
    DeclareVariable( o_m_ph_topoEtcone60, "ph_topoEtcone60" );	\
    DeclareVariable( o_m_ph_jet_dr, "ph_jet_dr" );	\
    DeclareVariable( o_m_ph_jet_E, "ph_jet_E" );	\
    DeclareVariable( o_m_ph_jet_pt, "ph_jet_pt" );	\
    DeclareVariable( o_m_ph_jet_m, "ph_jet_m" );	\
    DeclareVariable( o_m_ph_jet_eta, "ph_jet_eta" );	\
    DeclareVariable( o_m_ph_jet_phi, "ph_jet_phi" );	\
    DeclareVariable( o_m_ph_jet_matched, "ph_jet_matched" );	\
    DeclareVariable( o_m_ph_convIP, "ph_convIP" );	\
    DeclareVariable( o_m_ph_convIPRev, "ph_convIPRev" );	\
    DeclareVariable( o_m_ph_ptIsolationCone, "ph_ptIsolationCone" );	\
    DeclareVariable( o_m_ph_ptIsolationConePhAngle, "ph_ptIsolationConePhAngle" );	\
    DeclareVariable( o_m_ph_Etcone40_ED_corrected, "ph_Etcone40_ED_corrected" );	\
    DeclareVariable( o_m_ph_Etcone40_corrected, "ph_Etcone40_corrected" );	\
    DeclareVariable( o_m_ph_topodr, "ph_topodr" );	\
    DeclareVariable( o_m_ph_topopt, "ph_topopt" );	\
    DeclareVariable( o_m_ph_topoeta, "ph_topoeta" );	\
    DeclareVariable( o_m_ph_topophi, "ph_topophi" );	\
    DeclareVariable( o_m_ph_topomatched, "ph_topomatched" );	\
    DeclareVariable( o_m_ph_topoEMdr, "ph_topoEMdr" );	\
    DeclareVariable( o_m_ph_topoEMpt, "ph_topoEMpt" );	\
    DeclareVariable( o_m_ph_topoEMeta, "ph_topoEMeta" );	\
    DeclareVariable( o_m_ph_topoEMphi, "ph_topoEMphi" );	\
    DeclareVariable( o_m_ph_topoEMmatched, "ph_topoEMmatched" );	\
    DeclareVariable( o_m_ph_EF_dr, "ph_EF_dr" );	\
    DeclareVariable( o_m_ph_EF_index, "ph_EF_index" );	\
    DeclareVariable( o_m_ph_L2_dr, "ph_L2_dr" );	\
    DeclareVariable( o_m_ph_L2_index, "ph_L2_index" );	\
    DeclareVariable( o_m_ph_L1_dr, "ph_L1_dr" );	\
    DeclareVariable( o_m_ph_L1_index, "ph_L1_index" );	\
    DeclareVariable( o_m_ph_el_index, "ph_el_index" );	\
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
    DeclareVariable( o_m_mu_staco_matchchi2, "mu_staco_matchchi2" );	\
    DeclareVariable( o_m_mu_staco_matchndof, "mu_staco_matchndof" );	\
    DeclareVariable( o_m_mu_staco_etcone20, "mu_staco_etcone20" );	\
    DeclareVariable( o_m_mu_staco_etcone30, "mu_staco_etcone30" );	\
    DeclareVariable( o_m_mu_staco_etcone40, "mu_staco_etcone40" );	\
    DeclareVariable( o_m_mu_staco_nucone20, "mu_staco_nucone20" );	\
    DeclareVariable( o_m_mu_staco_nucone30, "mu_staco_nucone30" );	\
    DeclareVariable( o_m_mu_staco_nucone40, "mu_staco_nucone40" );	\
    DeclareVariable( o_m_mu_staco_ptcone20, "mu_staco_ptcone20" );	\
    DeclareVariable( o_m_mu_staco_ptcone30, "mu_staco_ptcone30" );	\
    DeclareVariable( o_m_mu_staco_ptcone40, "mu_staco_ptcone40" );	\
    DeclareVariable( o_m_mu_staco_energyLossPar, "mu_staco_energyLossPar" );	\
    DeclareVariable( o_m_mu_staco_energyLossErr, "mu_staco_energyLossErr" );	\
    DeclareVariable( o_m_mu_staco_etCore, "mu_staco_etCore" );	\
    DeclareVariable( o_m_mu_staco_energyLossType, "mu_staco_energyLossType" );	\
    DeclareVariable( o_m_mu_staco_caloMuonIdTag, "mu_staco_caloMuonIdTag" );	\
    DeclareVariable( o_m_mu_staco_caloLRLikelihood, "mu_staco_caloLRLikelihood" );	\
    DeclareVariable( o_m_mu_staco_bestMatch, "mu_staco_bestMatch" );	\
    DeclareVariable( o_m_mu_staco_isStandAloneMuon, "mu_staco_isStandAloneMuon" );	\
    DeclareVariable( o_m_mu_staco_isCombinedMuon, "mu_staco_isCombinedMuon" );	\
    DeclareVariable( o_m_mu_staco_isLowPtReconstructedMuon, "mu_staco_isLowPtReconstructedMuon" );	\
    DeclareVariable( o_m_mu_staco_isSegmentTaggedMuon, "mu_staco_isSegmentTaggedMuon" );	\
    DeclareVariable( o_m_mu_staco_isCaloMuonId, "mu_staco_isCaloMuonId" );	\
    DeclareVariable( o_m_mu_staco_alsoFoundByLowPt, "mu_staco_alsoFoundByLowPt" );	\
    DeclareVariable( o_m_mu_staco_alsoFoundByCaloMuonId, "mu_staco_alsoFoundByCaloMuonId" );	\
    DeclareVariable( o_m_mu_staco_loose, "mu_staco_loose" );	\
    DeclareVariable( o_m_mu_staco_medium, "mu_staco_medium" );	\
    DeclareVariable( o_m_mu_staco_tight, "mu_staco_tight" );	\
    DeclareVariable( o_m_mu_staco_d0_exPV, "mu_staco_d0_exPV" );	\
    DeclareVariable( o_m_mu_staco_z0_exPV, "mu_staco_z0_exPV" );	\
    DeclareVariable( o_m_mu_staco_phi_exPV, "mu_staco_phi_exPV" );	\
    DeclareVariable( o_m_mu_staco_theta_exPV, "mu_staco_theta_exPV" );	\
    DeclareVariable( o_m_mu_staco_qoverp_exPV, "mu_staco_qoverp_exPV" );	\
    DeclareVariable( o_m_mu_staco_cb_d0_exPV, "mu_staco_cb_d0_exPV" );	\
    DeclareVariable( o_m_mu_staco_cb_z0_exPV, "mu_staco_cb_z0_exPV" );	\
    DeclareVariable( o_m_mu_staco_cb_phi_exPV, "mu_staco_cb_phi_exPV" );	\
    DeclareVariable( o_m_mu_staco_cb_theta_exPV, "mu_staco_cb_theta_exPV" );	\
    DeclareVariable( o_m_mu_staco_cb_qoverp_exPV, "mu_staco_cb_qoverp_exPV" );	\
    DeclareVariable( o_m_mu_staco_id_d0_exPV, "mu_staco_id_d0_exPV" );	\
    DeclareVariable( o_m_mu_staco_id_z0_exPV, "mu_staco_id_z0_exPV" );	\
    DeclareVariable( o_m_mu_staco_id_phi_exPV, "mu_staco_id_phi_exPV" );	\
    DeclareVariable( o_m_mu_staco_id_theta_exPV, "mu_staco_id_theta_exPV" );	\
    DeclareVariable( o_m_mu_staco_id_qoverp_exPV, "mu_staco_id_qoverp_exPV" );	\
    DeclareVariable( o_m_mu_staco_me_d0_exPV, "mu_staco_me_d0_exPV" );	\
    DeclareVariable( o_m_mu_staco_me_z0_exPV, "mu_staco_me_z0_exPV" );	\
    DeclareVariable( o_m_mu_staco_me_phi_exPV, "mu_staco_me_phi_exPV" );	\
    DeclareVariable( o_m_mu_staco_me_theta_exPV, "mu_staco_me_theta_exPV" );	\
    DeclareVariable( o_m_mu_staco_me_qoverp_exPV, "mu_staco_me_qoverp_exPV" );	\
    DeclareVariable( o_m_mu_staco_ie_d0_exPV, "mu_staco_ie_d0_exPV" );	\
    DeclareVariable( o_m_mu_staco_ie_z0_exPV, "mu_staco_ie_z0_exPV" );	\
    DeclareVariable( o_m_mu_staco_ie_phi_exPV, "mu_staco_ie_phi_exPV" );	\
    DeclareVariable( o_m_mu_staco_ie_theta_exPV, "mu_staco_ie_theta_exPV" );	\
    DeclareVariable( o_m_mu_staco_ie_qoverp_exPV, "mu_staco_ie_qoverp_exPV" );	\
    DeclareVariable( o_m_mu_staco_SpaceTime_detID, "mu_staco_SpaceTime_detID" );	\
    DeclareVariable( o_m_mu_staco_SpaceTime_t, "mu_staco_SpaceTime_t" );	\
    DeclareVariable( o_m_mu_staco_SpaceTime_tError, "mu_staco_SpaceTime_tError" );	\
    DeclareVariable( o_m_mu_staco_SpaceTime_weight, "mu_staco_SpaceTime_weight" );	\
    DeclareVariable( o_m_mu_staco_SpaceTime_x, "mu_staco_SpaceTime_x" );	\
    DeclareVariable( o_m_mu_staco_SpaceTime_y, "mu_staco_SpaceTime_y" );	\
    DeclareVariable( o_m_mu_staco_SpaceTime_z, "mu_staco_SpaceTime_z" );	\
    DeclareVariable( o_m_mu_staco_cov_d0_exPV, "mu_staco_cov_d0_exPV" );	\
    DeclareVariable( o_m_mu_staco_cov_z0_exPV, "mu_staco_cov_z0_exPV" );	\
    DeclareVariable( o_m_mu_staco_cov_phi_exPV, "mu_staco_cov_phi_exPV" );	\
    DeclareVariable( o_m_mu_staco_cov_theta_exPV, "mu_staco_cov_theta_exPV" );	\
    DeclareVariable( o_m_mu_staco_cov_qoverp_exPV, "mu_staco_cov_qoverp_exPV" );	\
    DeclareVariable( o_m_mu_staco_cov_d0_z0_exPV, "mu_staco_cov_d0_z0_exPV" );	\
    DeclareVariable( o_m_mu_staco_cov_d0_phi_exPV, "mu_staco_cov_d0_phi_exPV" );	\
    DeclareVariable( o_m_mu_staco_cov_d0_theta_exPV, "mu_staco_cov_d0_theta_exPV" );	\
    DeclareVariable( o_m_mu_staco_cov_d0_qoverp_exPV, "mu_staco_cov_d0_qoverp_exPV" );	\
    DeclareVariable( o_m_mu_staco_cov_z0_phi_exPV, "mu_staco_cov_z0_phi_exPV" );	\
    DeclareVariable( o_m_mu_staco_cov_z0_theta_exPV, "mu_staco_cov_z0_theta_exPV" );	\
    DeclareVariable( o_m_mu_staco_cov_z0_qoverp_exPV, "mu_staco_cov_z0_qoverp_exPV" );	\
    DeclareVariable( o_m_mu_staco_cov_phi_theta_exPV, "mu_staco_cov_phi_theta_exPV" );	\
    DeclareVariable( o_m_mu_staco_cov_phi_qoverp_exPV, "mu_staco_cov_phi_qoverp_exPV" );	\
    DeclareVariable( o_m_mu_staco_cov_theta_qoverp_exPV, "mu_staco_cov_theta_qoverp_exPV" );	\
    DeclareVariable( o_m_mu_staco_id_cov_d0_exPV, "mu_staco_id_cov_d0_exPV" );	\
    DeclareVariable( o_m_mu_staco_id_cov_z0_exPV, "mu_staco_id_cov_z0_exPV" );	\
    DeclareVariable( o_m_mu_staco_id_cov_phi_exPV, "mu_staco_id_cov_phi_exPV" );	\
    DeclareVariable( o_m_mu_staco_id_cov_theta_exPV, "mu_staco_id_cov_theta_exPV" );	\
    DeclareVariable( o_m_mu_staco_id_cov_qoverp_exPV, "mu_staco_id_cov_qoverp_exPV" );	\
    DeclareVariable( o_m_mu_staco_id_cov_d0_z0_exPV, "mu_staco_id_cov_d0_z0_exPV" );	\
    DeclareVariable( o_m_mu_staco_id_cov_d0_phi_exPV, "mu_staco_id_cov_d0_phi_exPV" );	\
    DeclareVariable( o_m_mu_staco_id_cov_d0_theta_exPV, "mu_staco_id_cov_d0_theta_exPV" );	\
    DeclareVariable( o_m_mu_staco_id_cov_d0_qoverp_exPV, "mu_staco_id_cov_d0_qoverp_exPV" );	\
    DeclareVariable( o_m_mu_staco_id_cov_z0_phi_exPV, "mu_staco_id_cov_z0_phi_exPV" );	\
    DeclareVariable( o_m_mu_staco_id_cov_z0_theta_exPV, "mu_staco_id_cov_z0_theta_exPV" );	\
    DeclareVariable( o_m_mu_staco_id_cov_z0_qoverp_exPV, "mu_staco_id_cov_z0_qoverp_exPV" );	\
    DeclareVariable( o_m_mu_staco_id_cov_phi_theta_exPV, "mu_staco_id_cov_phi_theta_exPV" );	\
    DeclareVariable( o_m_mu_staco_id_cov_phi_qoverp_exPV, "mu_staco_id_cov_phi_qoverp_exPV" );	\
    DeclareVariable( o_m_mu_staco_id_cov_theta_qoverp_exPV, "mu_staco_id_cov_theta_qoverp_exPV" );	\
    DeclareVariable( o_m_mu_staco_me_cov_d0_exPV, "mu_staco_me_cov_d0_exPV" );	\
    DeclareVariable( o_m_mu_staco_me_cov_z0_exPV, "mu_staco_me_cov_z0_exPV" );	\
    DeclareVariable( o_m_mu_staco_me_cov_phi_exPV, "mu_staco_me_cov_phi_exPV" );	\
    DeclareVariable( o_m_mu_staco_me_cov_theta_exPV, "mu_staco_me_cov_theta_exPV" );	\
    DeclareVariable( o_m_mu_staco_me_cov_qoverp_exPV, "mu_staco_me_cov_qoverp_exPV" );	\
    DeclareVariable( o_m_mu_staco_me_cov_d0_z0_exPV, "mu_staco_me_cov_d0_z0_exPV" );	\
    DeclareVariable( o_m_mu_staco_me_cov_d0_phi_exPV, "mu_staco_me_cov_d0_phi_exPV" );	\
    DeclareVariable( o_m_mu_staco_me_cov_d0_theta_exPV, "mu_staco_me_cov_d0_theta_exPV" );	\
    DeclareVariable( o_m_mu_staco_me_cov_d0_qoverp_exPV, "mu_staco_me_cov_d0_qoverp_exPV" );	\
    DeclareVariable( o_m_mu_staco_me_cov_z0_phi_exPV, "mu_staco_me_cov_z0_phi_exPV" );	\
    DeclareVariable( o_m_mu_staco_me_cov_z0_theta_exPV, "mu_staco_me_cov_z0_theta_exPV" );	\
    DeclareVariable( o_m_mu_staco_me_cov_z0_qoverp_exPV, "mu_staco_me_cov_z0_qoverp_exPV" );	\
    DeclareVariable( o_m_mu_staco_me_cov_phi_theta_exPV, "mu_staco_me_cov_phi_theta_exPV" );	\
    DeclareVariable( o_m_mu_staco_me_cov_phi_qoverp_exPV, "mu_staco_me_cov_phi_qoverp_exPV" );	\
    DeclareVariable( o_m_mu_staco_me_cov_theta_qoverp_exPV, "mu_staco_me_cov_theta_qoverp_exPV" );	\
    DeclareVariable( o_m_mu_staco_ms_d0, "mu_staco_ms_d0" );	\
    DeclareVariable( o_m_mu_staco_ms_z0, "mu_staco_ms_z0" );	\
    DeclareVariable( o_m_mu_staco_ms_phi, "mu_staco_ms_phi" );	\
    DeclareVariable( o_m_mu_staco_ms_theta, "mu_staco_ms_theta" );	\
    DeclareVariable( o_m_mu_staco_ms_qoverp, "mu_staco_ms_qoverp" );	\
    DeclareVariable( o_m_mu_staco_id_d0, "mu_staco_id_d0" );	\
    DeclareVariable( o_m_mu_staco_id_z0, "mu_staco_id_z0" );	\
    DeclareVariable( o_m_mu_staco_id_phi, "mu_staco_id_phi" );	\
    DeclareVariable( o_m_mu_staco_id_theta, "mu_staco_id_theta" );	\
    DeclareVariable( o_m_mu_staco_id_qoverp, "mu_staco_id_qoverp" );	\
    DeclareVariable( o_m_mu_staco_me_d0, "mu_staco_me_d0" );	\
    DeclareVariable( o_m_mu_staco_me_z0, "mu_staco_me_z0" );	\
    DeclareVariable( o_m_mu_staco_me_phi, "mu_staco_me_phi" );	\
    DeclareVariable( o_m_mu_staco_me_theta, "mu_staco_me_theta" );	\
    DeclareVariable( o_m_mu_staco_me_qoverp, "mu_staco_me_qoverp" );	\
    DeclareVariable( o_m_mu_staco_ie_d0, "mu_staco_ie_d0" );	\
    DeclareVariable( o_m_mu_staco_ie_z0, "mu_staco_ie_z0" );	\
    DeclareVariable( o_m_mu_staco_ie_phi, "mu_staco_ie_phi" );	\
    DeclareVariable( o_m_mu_staco_ie_theta, "mu_staco_ie_theta" );	\
    DeclareVariable( o_m_mu_staco_ie_qoverp, "mu_staco_ie_qoverp" );	\
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
    DeclareVariable( o_m_mu_staco_nGangedPixels, "mu_staco_nGangedPixels" );	\
    DeclareVariable( o_m_mu_staco_nPixelDeadSensors, "mu_staco_nPixelDeadSensors" );	\
    DeclareVariable( o_m_mu_staco_nSCTDeadSensors, "mu_staco_nSCTDeadSensors" );	\
    DeclareVariable( o_m_mu_staco_nTRTDeadStraws, "mu_staco_nTRTDeadStraws" );	\
    DeclareVariable( o_m_mu_staco_expectBLayerHit, "mu_staco_expectBLayerHit" );	\
    DeclareVariable( o_m_mu_staco_nMDTHits, "mu_staco_nMDTHits" );	\
    DeclareVariable( o_m_mu_staco_nMDTHoles, "mu_staco_nMDTHoles" );	\
    DeclareVariable( o_m_mu_staco_nCSCEtaHits, "mu_staco_nCSCEtaHits" );	\
    DeclareVariable( o_m_mu_staco_nCSCEtaHoles, "mu_staco_nCSCEtaHoles" );	\
    DeclareVariable( o_m_mu_staco_nCSCPhiHits, "mu_staco_nCSCPhiHits" );	\
    DeclareVariable( o_m_mu_staco_nCSCPhiHoles, "mu_staco_nCSCPhiHoles" );	\
    DeclareVariable( o_m_mu_staco_nRPCEtaHits, "mu_staco_nRPCEtaHits" );	\
    DeclareVariable( o_m_mu_staco_nRPCEtaHoles, "mu_staco_nRPCEtaHoles" );	\
    DeclareVariable( o_m_mu_staco_nRPCPhiHits, "mu_staco_nRPCPhiHits" );	\
    DeclareVariable( o_m_mu_staco_nRPCPhiHoles, "mu_staco_nRPCPhiHoles" );	\
    DeclareVariable( o_m_mu_staco_nTGCEtaHits, "mu_staco_nTGCEtaHits" );	\
    DeclareVariable( o_m_mu_staco_nTGCEtaHoles, "mu_staco_nTGCEtaHoles" );	\
    DeclareVariable( o_m_mu_staco_nTGCPhiHits, "mu_staco_nTGCPhiHits" );	\
    DeclareVariable( o_m_mu_staco_nTGCPhiHoles, "mu_staco_nTGCPhiHoles" );	\
    DeclareVariable( o_m_mu_staco_nMDTBIHits, "mu_staco_nMDTBIHits" );	\
    DeclareVariable( o_m_mu_staco_nMDTBMHits, "mu_staco_nMDTBMHits" );	\
    DeclareVariable( o_m_mu_staco_nMDTBOHits, "mu_staco_nMDTBOHits" );	\
    DeclareVariable( o_m_mu_staco_nMDTBEEHits, "mu_staco_nMDTBEEHits" );	\
    DeclareVariable( o_m_mu_staco_nMDTBIS78Hits, "mu_staco_nMDTBIS78Hits" );	\
    DeclareVariable( o_m_mu_staco_nMDTEIHits, "mu_staco_nMDTEIHits" );	\
    DeclareVariable( o_m_mu_staco_nMDTEMHits, "mu_staco_nMDTEMHits" );	\
    DeclareVariable( o_m_mu_staco_nMDTEOHits, "mu_staco_nMDTEOHits" );	\
    DeclareVariable( o_m_mu_staco_nMDTEEHits, "mu_staco_nMDTEEHits" );	\
    DeclareVariable( o_m_mu_staco_nRPCLayer1EtaHits, "mu_staco_nRPCLayer1EtaHits" );	\
    DeclareVariable( o_m_mu_staco_nRPCLayer2EtaHits, "mu_staco_nRPCLayer2EtaHits" );	\
    DeclareVariable( o_m_mu_staco_nRPCLayer3EtaHits, "mu_staco_nRPCLayer3EtaHits" );	\
    DeclareVariable( o_m_mu_staco_nRPCLayer1PhiHits, "mu_staco_nRPCLayer1PhiHits" );	\
    DeclareVariable( o_m_mu_staco_nRPCLayer2PhiHits, "mu_staco_nRPCLayer2PhiHits" );	\
    DeclareVariable( o_m_mu_staco_nRPCLayer3PhiHits, "mu_staco_nRPCLayer3PhiHits" );	\
    DeclareVariable( o_m_mu_staco_nTGCLayer1EtaHits, "mu_staco_nTGCLayer1EtaHits" );	\
    DeclareVariable( o_m_mu_staco_nTGCLayer2EtaHits, "mu_staco_nTGCLayer2EtaHits" );	\
    DeclareVariable( o_m_mu_staco_nTGCLayer3EtaHits, "mu_staco_nTGCLayer3EtaHits" );	\
    DeclareVariable( o_m_mu_staco_nTGCLayer4EtaHits, "mu_staco_nTGCLayer4EtaHits" );	\
    DeclareVariable( o_m_mu_staco_nTGCLayer1PhiHits, "mu_staco_nTGCLayer1PhiHits" );	\
    DeclareVariable( o_m_mu_staco_nTGCLayer2PhiHits, "mu_staco_nTGCLayer2PhiHits" );	\
    DeclareVariable( o_m_mu_staco_nTGCLayer3PhiHits, "mu_staco_nTGCLayer3PhiHits" );	\
    DeclareVariable( o_m_mu_staco_nTGCLayer4PhiHits, "mu_staco_nTGCLayer4PhiHits" );	\
    DeclareVariable( o_m_mu_staco_barrelSectors, "mu_staco_barrelSectors" );	\
    DeclareVariable( o_m_mu_staco_endcapSectors, "mu_staco_endcapSectors" );	\
    DeclareVariable( o_m_mu_staco_trackd0, "mu_staco_trackd0" );	\
    DeclareVariable( o_m_mu_staco_trackz0, "mu_staco_trackz0" );	\
    DeclareVariable( o_m_mu_staco_trackphi, "mu_staco_trackphi" );	\
    DeclareVariable( o_m_mu_staco_tracktheta, "mu_staco_tracktheta" );	\
    DeclareVariable( o_m_mu_staco_trackqoverp, "mu_staco_trackqoverp" );	\
    DeclareVariable( o_m_mu_staco_trackcov_d0, "mu_staco_trackcov_d0" );	\
    DeclareVariable( o_m_mu_staco_trackcov_z0, "mu_staco_trackcov_z0" );	\
    DeclareVariable( o_m_mu_staco_trackcov_phi, "mu_staco_trackcov_phi" );	\
    DeclareVariable( o_m_mu_staco_trackcov_theta, "mu_staco_trackcov_theta" );	\
    DeclareVariable( o_m_mu_staco_trackcov_qoverp, "mu_staco_trackcov_qoverp" );	\
    DeclareVariable( o_m_mu_staco_trackcov_d0_z0, "mu_staco_trackcov_d0_z0" );	\
    DeclareVariable( o_m_mu_staco_trackcov_d0_phi, "mu_staco_trackcov_d0_phi" );	\
    DeclareVariable( o_m_mu_staco_trackcov_d0_theta, "mu_staco_trackcov_d0_theta" );	\
    DeclareVariable( o_m_mu_staco_trackcov_d0_qoverp, "mu_staco_trackcov_d0_qoverp" );	\
    DeclareVariable( o_m_mu_staco_trackcov_z0_phi, "mu_staco_trackcov_z0_phi" );	\
    DeclareVariable( o_m_mu_staco_trackcov_z0_theta, "mu_staco_trackcov_z0_theta" );	\
    DeclareVariable( o_m_mu_staco_trackcov_z0_qoverp, "mu_staco_trackcov_z0_qoverp" );	\
    DeclareVariable( o_m_mu_staco_trackcov_phi_theta, "mu_staco_trackcov_phi_theta" );	\
    DeclareVariable( o_m_mu_staco_trackcov_phi_qoverp, "mu_staco_trackcov_phi_qoverp" );	\
    DeclareVariable( o_m_mu_staco_trackcov_theta_qoverp, "mu_staco_trackcov_theta_qoverp" );	\
    DeclareVariable( o_m_mu_staco_trackfitchi2, "mu_staco_trackfitchi2" );	\
    DeclareVariable( o_m_mu_staco_trackfitndof, "mu_staco_trackfitndof" );	\
    DeclareVariable( o_m_mu_staco_hastrack, "mu_staco_hastrack" );	\
    DeclareVariable( o_m_mu_staco_trackd0beam, "mu_staco_trackd0beam" );	\
    DeclareVariable( o_m_mu_staco_trackz0beam, "mu_staco_trackz0beam" );	\
    DeclareVariable( o_m_mu_staco_tracksigd0beam, "mu_staco_tracksigd0beam" );	\
    DeclareVariable( o_m_mu_staco_tracksigz0beam, "mu_staco_tracksigz0beam" );	\
    DeclareVariable( o_m_mu_staco_trackd0pv, "mu_staco_trackd0pv" );	\
    DeclareVariable( o_m_mu_staco_trackz0pv, "mu_staco_trackz0pv" );	\
    DeclareVariable( o_m_mu_staco_tracksigd0pv, "mu_staco_tracksigd0pv" );	\
    DeclareVariable( o_m_mu_staco_tracksigz0pv, "mu_staco_tracksigz0pv" );	\
    DeclareVariable( o_m_mu_staco_trackIPEstimate_d0_biasedpvunbiased, "mu_staco_trackIPEstimate_d0_biasedpvunbiased" );	\
    DeclareVariable( o_m_mu_staco_trackIPEstimate_z0_biasedpvunbiased, "mu_staco_trackIPEstimate_z0_biasedpvunbiased" );	\
    DeclareVariable( o_m_mu_staco_trackIPEstimate_d0_unbiasedpvunbiased, "mu_staco_trackIPEstimate_d0_unbiasedpvunbiased" );	\
    DeclareVariable( o_m_mu_staco_trackIPEstimate_z0_unbiasedpvunbiased, "mu_staco_trackIPEstimate_z0_unbiasedpvunbiased" );	\
    DeclareVariable( o_m_mu_staco_trackIPEstimate_sigd0_biasedpvunbiased, "mu_staco_trackIPEstimate_sigd0_biasedpvunbiased" );	\
    DeclareVariable( o_m_mu_staco_trackIPEstimate_sigz0_biasedpvunbiased, "mu_staco_trackIPEstimate_sigz0_biasedpvunbiased" );	\
    DeclareVariable( o_m_mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased, "mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased" );	\
    DeclareVariable( o_m_mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased, "mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased" );	\
    DeclareVariable( o_m_mu_staco_EFCB_dr, "mu_staco_EFCB_dr" );	\
    DeclareVariable( o_m_mu_staco_EFCB_index, "mu_staco_EFCB_index" );	\
    DeclareVariable( o_m_mu_staco_EFMG_dr, "mu_staco_EFMG_dr" );	\
    DeclareVariable( o_m_mu_staco_EFMG_index, "mu_staco_EFMG_index" );	\
    DeclareVariable( o_m_mu_staco_EFME_dr, "mu_staco_EFME_dr" );	\
    DeclareVariable( o_m_mu_staco_EFME_index, "mu_staco_EFME_index" );	\
    DeclareVariable( o_m_mu_staco_L2CB_dr, "mu_staco_L2CB_dr" );	\
    DeclareVariable( o_m_mu_staco_L2CB_index, "mu_staco_L2CB_index" );	\
    DeclareVariable( o_m_mu_staco_L1_dr, "mu_staco_L1_dr" );	\
    DeclareVariable( o_m_mu_staco_L1_index, "mu_staco_L1_index" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_n, "jet_AntiKt4TopoEM_n" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_E, "jet_AntiKt4TopoEM_E" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_pt, "jet_AntiKt4TopoEM_pt" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_m, "jet_AntiKt4TopoEM_m" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_eta, "jet_AntiKt4TopoEM_eta" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_phi, "jet_AntiKt4TopoEM_phi" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_EtaOrigin, "jet_AntiKt4TopoEM_EtaOrigin" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_PhiOrigin, "jet_AntiKt4TopoEM_PhiOrigin" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_MOrigin, "jet_AntiKt4TopoEM_MOrigin" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_EtaOriginEM, "jet_AntiKt4TopoEM_EtaOriginEM" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_PhiOriginEM, "jet_AntiKt4TopoEM_PhiOriginEM" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_MOriginEM, "jet_AntiKt4TopoEM_MOriginEM" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_WIDTH, "jet_AntiKt4TopoEM_WIDTH" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_n90, "jet_AntiKt4TopoEM_n90" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_Timing, "jet_AntiKt4TopoEM_Timing" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_LArQuality, "jet_AntiKt4TopoEM_LArQuality" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_nTrk, "jet_AntiKt4TopoEM_nTrk" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_sumPtTrk, "jet_AntiKt4TopoEM_sumPtTrk" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_OriginIndex, "jet_AntiKt4TopoEM_OriginIndex" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_HECQuality, "jet_AntiKt4TopoEM_HECQuality" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_NegativeE, "jet_AntiKt4TopoEM_NegativeE" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_AverageLArQF, "jet_AntiKt4TopoEM_AverageLArQF" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_YFlip12, "jet_AntiKt4TopoEM_YFlip12" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_YFlip23, "jet_AntiKt4TopoEM_YFlip23" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_BCH_CORR_CELL, "jet_AntiKt4TopoEM_BCH_CORR_CELL" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_BCH_CORR_DOTX, "jet_AntiKt4TopoEM_BCH_CORR_DOTX" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_BCH_CORR_JET, "jet_AntiKt4TopoEM_BCH_CORR_JET" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_BCH_CORR_JET_FORCELL, "jet_AntiKt4TopoEM_BCH_CORR_JET_FORCELL" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_ENG_BAD_CELLS, "jet_AntiKt4TopoEM_ENG_BAD_CELLS" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_N_BAD_CELLS, "jet_AntiKt4TopoEM_N_BAD_CELLS" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_N_BAD_CELLS_CORR, "jet_AntiKt4TopoEM_N_BAD_CELLS_CORR" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_BAD_CELLS_CORR_E, "jet_AntiKt4TopoEM_BAD_CELLS_CORR_E" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_NumTowers, "jet_AntiKt4TopoEM_NumTowers" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_SamplingMax, "jet_AntiKt4TopoEM_SamplingMax" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_fracSamplingMax, "jet_AntiKt4TopoEM_fracSamplingMax" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_hecf, "jet_AntiKt4TopoEM_hecf" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_tgap3f, "jet_AntiKt4TopoEM_tgap3f" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_isUgly, "jet_AntiKt4TopoEM_isUgly" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_isBadLoose, "jet_AntiKt4TopoEM_isBadLoose" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_isBadMedium, "jet_AntiKt4TopoEM_isBadMedium" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_isBadTight, "jet_AntiKt4TopoEM_isBadTight" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_emfrac, "jet_AntiKt4TopoEM_emfrac" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_Offset, "jet_AntiKt4TopoEM_Offset" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_EMJES, "jet_AntiKt4TopoEM_EMJES" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_EMJES_EtaCorr, "jet_AntiKt4TopoEM_EMJES_EtaCorr" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_EMJESnooffset, "jet_AntiKt4TopoEM_EMJESnooffset" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_GCWJES, "jet_AntiKt4TopoEM_GCWJES" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_GCWJES_EtaCorr, "jet_AntiKt4TopoEM_GCWJES_EtaCorr" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_CB, "jet_AntiKt4TopoEM_CB" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_LCJES, "jet_AntiKt4TopoEM_LCJES" );	\
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
    DeclareVariable( o_m_jet_AntiKt4TopoEM_GSCFactorF, "jet_AntiKt4TopoEM_GSCFactorF" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_WidthFraction, "jet_AntiKt4TopoEM_WidthFraction" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_el_dr, "jet_AntiKt4TopoEM_el_dr" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_el_matched, "jet_AntiKt4TopoEM_el_matched" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_mu_dr, "jet_AntiKt4TopoEM_mu_dr" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_mu_matched, "jet_AntiKt4TopoEM_mu_matched" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_L1_dr, "jet_AntiKt4TopoEM_L1_dr" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_L1_matched, "jet_AntiKt4TopoEM_L1_matched" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_L2_dr, "jet_AntiKt4TopoEM_L2_dr" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_L2_matched, "jet_AntiKt4TopoEM_L2_matched" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_EF_dr, "jet_AntiKt4TopoEM_EF_dr" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoEM_EF_matched, "jet_AntiKt4TopoEM_EF_matched" );	\
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
    o_m_timestamp = -999;\
    o_m_timestamp_ns = -999;\
    o_m_lbn = -999;\
    o_m_bcid = -999;\
    o_m_actualIntPerXing = -999;\
    o_m_averageIntPerXing = -999;\
    o_m_el_n = -999;\
    o_m_el_E.clear();\
    o_m_el_Et.clear();\
    o_m_el_pt.clear();\
    o_m_el_m.clear();\
    o_m_el_eta.clear();\
    o_m_el_phi.clear();\
    o_m_el_px.clear();\
    o_m_el_py.clear();\
    o_m_el_pz.clear();\
    o_m_el_charge.clear();\
    o_m_el_author.clear();\
    o_m_el_isEM.clear();\
    o_m_el_OQ.clear();\
    o_m_el_convFlag.clear();\
    o_m_el_isConv.clear();\
    o_m_el_nConv.clear();\
    o_m_el_nSingleTrackConv.clear();\
    o_m_el_nDoubleTrackConv.clear();\
    o_m_el_OQRecalc.clear();\
    o_m_el_loose.clear();\
    o_m_el_looseIso.clear();\
    o_m_el_medium.clear();\
    o_m_el_mediumIso.clear();\
    o_m_el_mediumWithoutTrack.clear();\
    o_m_el_mediumIsoWithoutTrack.clear();\
    o_m_el_tight.clear();\
    o_m_el_tightIso.clear();\
    o_m_el_tightWithoutTrack.clear();\
    o_m_el_tightIsoWithoutTrack.clear();\
    o_m_el_loosePP.clear();\
    o_m_el_loosePPIso.clear();\
    o_m_el_mediumPP.clear();\
    o_m_el_mediumPPIso.clear();\
    o_m_el_tightPP.clear();\
    o_m_el_tightPPIso.clear();\
    o_m_el_goodOQ.clear();\
    o_m_el_Ethad.clear();\
    o_m_el_Ethad1.clear();\
    o_m_el_f1.clear();\
    o_m_el_f1core.clear();\
    o_m_el_Emins1.clear();\
    o_m_el_fside.clear();\
    o_m_el_Emax2.clear();\
    o_m_el_ws3.clear();\
    o_m_el_wstot.clear();\
    o_m_el_emaxs1.clear();\
    o_m_el_deltaEs.clear();\
    o_m_el_E233.clear();\
    o_m_el_E237.clear();\
    o_m_el_E277.clear();\
    o_m_el_weta2.clear();\
    o_m_el_f3.clear();\
    o_m_el_f3core.clear();\
    o_m_el_rphiallcalo.clear();\
    o_m_el_Etcone45.clear();\
    o_m_el_Etcone15.clear();\
    o_m_el_Etcone20.clear();\
    o_m_el_Etcone25.clear();\
    o_m_el_Etcone30.clear();\
    o_m_el_Etcone35.clear();\
    o_m_el_Etcone40.clear();\
    o_m_el_ptcone20.clear();\
    o_m_el_ptcone30.clear();\
    o_m_el_ptcone40.clear();\
    o_m_el_nucone20.clear();\
    o_m_el_nucone30.clear();\
    o_m_el_nucone40.clear();\
    o_m_el_Etcone15_pt_corrected.clear();\
    o_m_el_Etcone20_pt_corrected.clear();\
    o_m_el_Etcone25_pt_corrected.clear();\
    o_m_el_Etcone30_pt_corrected.clear();\
    o_m_el_Etcone35_pt_corrected.clear();\
    o_m_el_Etcone40_pt_corrected.clear();\
    o_m_el_convanglematch.clear();\
    o_m_el_convtrackmatch.clear();\
    o_m_el_hasconv.clear();\
    o_m_el_convvtxx.clear();\
    o_m_el_convvtxy.clear();\
    o_m_el_convvtxz.clear();\
    o_m_el_Rconv.clear();\
    o_m_el_zconv.clear();\
    o_m_el_convvtxchi2.clear();\
    o_m_el_pt1conv.clear();\
    o_m_el_convtrk1nBLHits.clear();\
    o_m_el_convtrk1nPixHits.clear();\
    o_m_el_convtrk1nSCTHits.clear();\
    o_m_el_convtrk1nTRTHits.clear();\
    o_m_el_pt2conv.clear();\
    o_m_el_convtrk2nBLHits.clear();\
    o_m_el_convtrk2nPixHits.clear();\
    o_m_el_convtrk2nSCTHits.clear();\
    o_m_el_convtrk2nTRTHits.clear();\
    o_m_el_ptconv.clear();\
    o_m_el_pzconv.clear();\
    o_m_el_pos7.clear();\
    o_m_el_etacorrmag.clear();\
    o_m_el_deltaeta1.clear();\
    o_m_el_deltaeta2.clear();\
    o_m_el_deltaphi2.clear();\
    o_m_el_deltaphiRescaled.clear();\
    o_m_el_deltaPhiRot.clear();\
    o_m_el_expectHitInBLayer.clear();\
    o_m_el_trackd0_physics.clear();\
    o_m_el_etaSampling1.clear();\
    o_m_el_reta.clear();\
    o_m_el_rphi.clear();\
    o_m_el_EtringnoisedR03sig2.clear();\
    o_m_el_EtringnoisedR03sig3.clear();\
    o_m_el_EtringnoisedR03sig4.clear();\
    o_m_el_isolationlikelihoodjets.clear();\
    o_m_el_isolationlikelihoodhqelectrons.clear();\
    o_m_el_electronweight.clear();\
    o_m_el_electronbgweight.clear();\
    o_m_el_softeweight.clear();\
    o_m_el_softebgweight.clear();\
    o_m_el_neuralnet.clear();\
    o_m_el_Hmatrix.clear();\
    o_m_el_Hmatrix5.clear();\
    o_m_el_adaboost.clear();\
    o_m_el_softeneuralnet.clear();\
    o_m_el_zvertex.clear();\
    o_m_el_errz.clear();\
    o_m_el_etap.clear();\
    o_m_el_depth.clear();\
    o_m_el_refittedTrack_n.clear();\
    o_m_el_refittedTrack_author.clear();\
    o_m_el_refittedTrack_chi2.clear();\
    o_m_el_refittedTrack_hasBrem.clear();\
    o_m_el_refittedTrack_bremRadius.clear();\
    o_m_el_refittedTrack_bremZ.clear();\
    o_m_el_refittedTrack_bremRadiusErr.clear();\
    o_m_el_refittedTrack_bremZErr.clear();\
    o_m_el_refittedTrack_bremFitStatus.clear();\
    o_m_el_refittedTrack_qoverp.clear();\
    o_m_el_refittedTrack_d0.clear();\
    o_m_el_refittedTrack_z0.clear();\
    o_m_el_refittedTrack_theta.clear();\
    o_m_el_refittedTrack_phi.clear();\
    o_m_el_refittedTrack_LMqoverp.clear();\
    o_m_el_refittedTrack_covd0.clear();\
    o_m_el_refittedTrack_covz0.clear();\
    o_m_el_refittedTrack_covphi.clear();\
    o_m_el_refittedTrack_covtheta.clear();\
    o_m_el_refittedTrack_covqoverp.clear();\
    o_m_el_refittedTrack_covd0z0.clear();\
    o_m_el_refittedTrack_covz0phi.clear();\
    o_m_el_refittedTrack_covz0theta.clear();\
    o_m_el_refittedTrack_covz0qoverp.clear();\
    o_m_el_refittedTrack_covd0phi.clear();\
    o_m_el_refittedTrack_covd0theta.clear();\
    o_m_el_refittedTrack_covd0qoverp.clear();\
    o_m_el_refittedTrack_covphitheta.clear();\
    o_m_el_refittedTrack_covphiqoverp.clear();\
    o_m_el_refittedTrack_covthetaqoverp.clear();\
    o_m_el_Es0.clear();\
    o_m_el_etas0.clear();\
    o_m_el_phis0.clear();\
    o_m_el_Es1.clear();\
    o_m_el_etas1.clear();\
    o_m_el_phis1.clear();\
    o_m_el_Es2.clear();\
    o_m_el_etas2.clear();\
    o_m_el_phis2.clear();\
    o_m_el_Es3.clear();\
    o_m_el_etas3.clear();\
    o_m_el_phis3.clear();\
    o_m_el_E_PreSamplerB.clear();\
    o_m_el_E_EMB1.clear();\
    o_m_el_E_EMB2.clear();\
    o_m_el_E_EMB3.clear();\
    o_m_el_E_PreSamplerE.clear();\
    o_m_el_E_EME1.clear();\
    o_m_el_E_EME2.clear();\
    o_m_el_E_EME3.clear();\
    o_m_el_E_HEC0.clear();\
    o_m_el_E_HEC1.clear();\
    o_m_el_E_HEC2.clear();\
    o_m_el_E_HEC3.clear();\
    o_m_el_E_TileBar0.clear();\
    o_m_el_E_TileBar1.clear();\
    o_m_el_E_TileBar2.clear();\
    o_m_el_E_TileGap1.clear();\
    o_m_el_E_TileGap2.clear();\
    o_m_el_E_TileGap3.clear();\
    o_m_el_E_TileExt0.clear();\
    o_m_el_E_TileExt1.clear();\
    o_m_el_E_TileExt2.clear();\
    o_m_el_E_FCAL0.clear();\
    o_m_el_E_FCAL1.clear();\
    o_m_el_E_FCAL2.clear();\
    o_m_el_cl_E.clear();\
    o_m_el_cl_pt.clear();\
    o_m_el_cl_eta.clear();\
    o_m_el_cl_phi.clear();\
    o_m_el_firstEdens.clear();\
    o_m_el_cellmaxfrac.clear();\
    o_m_el_longitudinal.clear();\
    o_m_el_secondlambda.clear();\
    o_m_el_lateral.clear();\
    o_m_el_secondR.clear();\
    o_m_el_centerlambda.clear();\
    o_m_el_trackd0.clear();\
    o_m_el_trackz0.clear();\
    o_m_el_trackphi.clear();\
    o_m_el_tracktheta.clear();\
    o_m_el_trackqoverp.clear();\
    o_m_el_trackpt.clear();\
    o_m_el_tracketa.clear();\
    o_m_el_trackcov_d0.clear();\
    o_m_el_trackcov_z0.clear();\
    o_m_el_trackcov_phi.clear();\
    o_m_el_trackcov_theta.clear();\
    o_m_el_trackcov_qoverp.clear();\
    o_m_el_trackcov_d0_z0.clear();\
    o_m_el_trackcov_d0_phi.clear();\
    o_m_el_trackcov_d0_theta.clear();\
    o_m_el_trackcov_d0_qoverp.clear();\
    o_m_el_trackcov_z0_phi.clear();\
    o_m_el_trackcov_z0_theta.clear();\
    o_m_el_trackcov_z0_qoverp.clear();\
    o_m_el_trackcov_phi_theta.clear();\
    o_m_el_trackcov_phi_qoverp.clear();\
    o_m_el_trackcov_theta_qoverp.clear();\
    o_m_el_trackfitchi2.clear();\
    o_m_el_trackfitndof.clear();\
    o_m_el_nBLHits.clear();\
    o_m_el_nPixHits.clear();\
    o_m_el_nSCTHits.clear();\
    o_m_el_nTRTHits.clear();\
    o_m_el_nTRTHighTHits.clear();\
    o_m_el_nPixHoles.clear();\
    o_m_el_nSCTHoles.clear();\
    o_m_el_nTRTHoles.clear();\
    o_m_el_nBLSharedHits.clear();\
    o_m_el_nPixSharedHits.clear();\
    o_m_el_nSCTSharedHits.clear();\
    o_m_el_nBLayerOutliers.clear();\
    o_m_el_nPixelOutliers.clear();\
    o_m_el_nSCTOutliers.clear();\
    o_m_el_nTRTOutliers.clear();\
    o_m_el_nTRTHighTOutliers.clear();\
    o_m_el_expectBLayerHit.clear();\
    o_m_el_nSiHits.clear();\
    o_m_el_TRTHighTHitsRatio.clear();\
    o_m_el_TRTHighTOutliersRatio.clear();\
    o_m_el_pixeldEdx.clear();\
    o_m_el_nGoodHitsPixeldEdx.clear();\
    o_m_el_massPixeldEdx.clear();\
    o_m_el_likelihoodsPixeldEdx.clear();\
    o_m_el_eProbabilityComb.clear();\
    o_m_el_eProbabilityHT.clear();\
    o_m_el_eProbabilityToT.clear();\
    o_m_el_eProbabilityBrem.clear();\
    o_m_el_vertweight.clear();\
    o_m_el_vertx.clear();\
    o_m_el_verty.clear();\
    o_m_el_vertz.clear();\
    o_m_el_trackd0beam.clear();\
    o_m_el_trackz0beam.clear();\
    o_m_el_tracksigd0beam.clear();\
    o_m_el_tracksigz0beam.clear();\
    o_m_el_trackd0pv.clear();\
    o_m_el_trackz0pv.clear();\
    o_m_el_tracksigd0pv.clear();\
    o_m_el_tracksigz0pv.clear();\
    o_m_el_trackIPEstimate_d0_biasedpvunbiased.clear();\
    o_m_el_trackIPEstimate_z0_biasedpvunbiased.clear();\
    o_m_el_trackIPEstimate_d0_unbiasedpvunbiased.clear();\
    o_m_el_trackIPEstimate_z0_unbiasedpvunbiased.clear();\
    o_m_el_trackIPEstimate_sigd0_biasedpvunbiased.clear();\
    o_m_el_trackIPEstimate_sigz0_biasedpvunbiased.clear();\
    o_m_el_trackIPEstimate_sigd0_unbiasedpvunbiased.clear();\
    o_m_el_trackIPEstimate_sigz0_unbiasedpvunbiased.clear();\
    o_m_el_hastrack.clear();\
    o_m_el_deltaEmax2.clear();\
    o_m_el_calibHitsShowerDepth.clear();\
    o_m_el_isIso.clear();\
    o_m_el_mvaptcone20.clear();\
    o_m_el_mvaptcone30.clear();\
    o_m_el_mvaptcone40.clear();\
    o_m_el_jet_dr.clear();\
    o_m_el_jet_E.clear();\
    o_m_el_jet_pt.clear();\
    o_m_el_jet_m.clear();\
    o_m_el_jet_eta.clear();\
    o_m_el_jet_phi.clear();\
    o_m_el_jet_matched.clear();\
    o_m_el_Etcone40_ED_corrected.clear();\
    o_m_el_Etcone40_corrected.clear();\
    o_m_el_EF_dr.clear();\
    o_m_el_EF_index.clear();\
    o_m_el_L2_dr.clear();\
    o_m_el_L2_index.clear();\
    o_m_el_L1_dr.clear();\
    o_m_el_L1_index.clear();\
    o_m_trig_EF_el_n = -999;\
    o_m_trig_EF_el_pt.clear();\
    o_m_trig_EF_el_eta.clear();\
    o_m_trig_EF_el_phi.clear();\
    o_m_EF_2e10_medium = -999;\
    o_m_EF_2e10_medium_mu6 = -999;\
    o_m_EF_2e12Tvh_medium = -999;\
    o_m_EF_2e12_medium = -999;\
    o_m_EF_2e15vh_medium = -999;\
    o_m_EF_2e5_tight = -999;\
    o_m_EF_2e5_tight_Jpsi = -999;\
    o_m_EF_2mu10 = -999;\
    o_m_EF_2mu10_empty = -999;\
    o_m_EF_2mu10_loose = -999;\
    o_m_EF_2mu10_loose_empty = -999;\
    o_m_EF_2mu10_loose_noOvlpRm = -999;\
    o_m_EF_2mu13_Zmumu_IDTrkNoCut = -999;\
    o_m_EF_2mu4T = -999;\
    o_m_EF_2mu4T_Bmumu = -999;\
    o_m_EF_2mu4T_Bmumux = -999;\
    o_m_EF_2mu4T_DiMu = -999;\
    o_m_EF_2mu4T_DiMu_DY = -999;\
    o_m_EF_2mu4T_DiMu_DY20 = -999;\
    o_m_EF_2mu4T_DiMu_DY_noVtx_noOS = -999;\
    o_m_EF_2mu4T_DiMu_SiTrk = -999;\
    o_m_EF_2mu4T_DiMu_noVtx_noOS = -999;\
    o_m_EF_2mu4T_EFxe20_noMu = -999;\
    o_m_EF_2mu4T_EFxe30_noMu = -999;\
    o_m_EF_2mu4T_Jpsimumu = -999;\
    o_m_EF_2mu4T_Jpsimumu_IDTrkNoCut = -999;\
    o_m_EF_2mu4T_Upsimumu = -999;\
    o_m_EF_2mu4T_xe30_noMu = -999;\
    o_m_EF_2mu4T_xe40_noMu = -999;\
    o_m_EF_2mu4Ti_DiMu_DY = -999;\
    o_m_EF_2mu6 = -999;\
    o_m_EF_2mu6_Bmumux = -999;\
    o_m_EF_2mu6_DiMu = -999;\
    o_m_EF_2mu6_MSonly_g10_loose = -999;\
    o_m_EF_2mu6_MSonly_g10_loose_nonfilled = -999;\
    o_m_EF_e10_medium = -999;\
    o_m_EF_e10_medium_2mu6 = -999;\
    o_m_EF_e10_medium_mu10 = -999;\
    o_m_EF_e10_medium_mu6 = -999;\
    o_m_EF_e10_medium_mu6_topo_medium = -999;\
    o_m_EF_e11_etcut = -999;\
    o_m_EF_e12Tvh_medium = -999;\
    o_m_EF_e12Tvh_medium_2e6T_medium = -999;\
    o_m_EF_e12Tvh_medium_mu6 = -999;\
    o_m_EF_e12Tvh_medium_mu6_topo_medium = -999;\
    o_m_EF_e12_medium = -999;\
    o_m_EF_e13_etcutTrk_xs45_noMu_dphi2j10xe20 = -999;\
    o_m_EF_e13_etcutTrk_xs60_noMu = -999;\
    o_m_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe07 = -999;\
    o_m_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe20 = -999;\
    o_m_EF_e14_tight_e4_etcut_Jpsi = -999;\
    o_m_EF_e15vh_loose1_e12Tvh_loose1_Zee = -999;\
    o_m_EF_e15vh_medium = -999;\
    o_m_EF_e15vh_medium_xe40_noMu = -999;\
    o_m_EF_e15vh_medium_xe50_noMu = -999;\
    o_m_EF_e20_etcutTrk_xe40_noMu_dphi2j10xe20 = -999;\
    o_m_EF_e20_etcutTrk_xs60_noMu_dphi2j10xe07 = -999;\
    o_m_EF_e20_tight_e15_NoCut_Zee = -999;\
    o_m_EF_e22vh_loose = -999;\
    o_m_EF_e22vh_loose1 = -999;\
    o_m_EF_e22vh_looseTrk = -999;\
    o_m_EF_e22vh_loose_2j20_a4tc_EFFS = -999;\
    o_m_EF_e22vh_loose_3j20_a4tc_EFFS = -999;\
    o_m_EF_e22vh_loose_4j15_a4tc_EFFS = -999;\
    o_m_EF_e22vh_medium = -999;\
    o_m_EF_e22vh_medium1 = -999;\
    o_m_EF_e22vh_medium2 = -999;\
    o_m_EF_e22vh_medium_IDTrkNoCut = -999;\
    o_m_EF_e22vh_medium_SiTrk = -999;\
    o_m_EF_e22vh_medium_TRT = -999;\
    o_m_EF_e40_medium = -999;\
    o_m_EF_e45_medium = -999;\
    o_m_EF_e45_medium1 = -999;\
    o_m_EF_e5_medium_mu6 = -999;\
    o_m_EF_e5_medium_mu6_topo_medium = -999;\
    o_m_EF_e5_tight = -999;\
    o_m_EF_e5_tight_e14_etcut_Jpsi = -999;\
    o_m_EF_e5_tight_e4_etcut_Jpsi = -999;\
    o_m_EF_e5_tight_e4_etcut_Jpsi_SiTrk = -999;\
    o_m_EF_e5_tight_e4_etcut_Jpsi_TRT = -999;\
    o_m_EF_e5_tight_e5_NoCut = -999;\
    o_m_EF_e5_tight_e9_etcut_Jpsi = -999;\
    o_m_EF_e60_loose = -999;\
    o_m_EF_e6T_medium = -999;\
    o_m_EF_e9_tight_e4_etcut_Jpsi = -999;\
    o_m_EF_g100_loose = -999;\
    o_m_EF_g10_NoCut_cosmic = -999;\
    o_m_EF_g11_etcut = -999;\
    o_m_EF_g11_etcut_larcalib = -999;\
    o_m_EF_g150_etcut = -999;\
    o_m_EF_g20_etcut = -999;\
    o_m_EF_g20_loose = -999;\
    o_m_EF_g20_loose_larcalib = -999;\
    o_m_EF_g40_loose = -999;\
    o_m_EF_g40_loose_EFxe40_noMu = -999;\
    o_m_EF_g40_loose_larcalib = -999;\
    o_m_EF_g40_loose_xe45_medium_noMu = -999;\
    o_m_EF_g40_loose_xe55_medium_noMu = -999;\
    o_m_EF_g40_tight_b10_medium = -999;\
    o_m_EF_g5_NoCut_cosmic = -999;\
    o_m_EF_g60_loose = -999;\
    o_m_EF_g60_loose_larcalib = -999;\
    o_m_EF_g80_loose = -999;\
    o_m_EF_g80_loose_larcalib = -999;\
    o_m_EF_mu10 = -999;\
    o_m_EF_mu10_Jpsimumu = -999;\
    o_m_EF_mu10_Upsimumu_FS = -999;\
    o_m_EF_mu10_Upsimumu_tight_FS = -999;\
    o_m_EF_mu10_loose = -999;\
    o_m_EF_mu10_muCombTag_NoEF = -999;\
    o_m_EF_mu11_empty_NoAlg = -999;\
    o_m_EF_mu13 = -999;\
    o_m_EF_mu13_MG = -999;\
    o_m_EF_mu13_muCombTag_NoEF = -999;\
    o_m_EF_mu15 = -999;\
    o_m_EF_mu15_2mu4_EFFS_medium = -999;\
    o_m_EF_mu15_mu10_EFFS = -999;\
    o_m_EF_mu15_mu10_EFFS_medium = -999;\
    o_m_EF_mu15_mu10_EFFS_tight = -999;\
    o_m_EF_mu15_xe30_noMu = -999;\
    o_m_EF_mu15i = -999;\
    o_m_EF_mu15i_medium = -999;\
    o_m_EF_mu18 = -999;\
    o_m_EF_mu18_L1J10 = -999;\
    o_m_EF_mu18_MG = -999;\
    o_m_EF_mu18_MG_L1J10 = -999;\
    o_m_EF_mu18_MG_medium = -999;\
    o_m_EF_mu18_medium = -999;\
    o_m_EF_mu18_medium_2j20_a4tc_EFFS = -999;\
    o_m_EF_mu18_medium_3j20_a4tc_EFFS = -999;\
    o_m_EF_mu18_medium_4j15_a4tc_EFFS = -999;\
    o_m_EF_mu18_medium_4j20_a4tc_EFFS = -999;\
    o_m_EF_mu18i3_medium = -999;\
    o_m_EF_mu18i4_medium = -999;\
    o_m_EF_mu20 = -999;\
    o_m_EF_mu20_IDTrkNoCut = -999;\
    o_m_EF_mu20_IDTrkNoCut_ManyVx = -999;\
    o_m_EF_mu20_MG = -999;\
    o_m_EF_mu20_MG_medium = -999;\
    o_m_EF_mu20_empty = -999;\
    o_m_EF_mu20_medium = -999;\
    o_m_EF_mu20_mu10_EFFS_tight = -999;\
    o_m_EF_mu20_muCombTag_NoEF = -999;\
    o_m_EF_mu20i = -999;\
    o_m_EF_mu20i_medium = -999;\
    o_m_EF_mu22 = -999;\
    o_m_EF_mu22_MG = -999;\
    o_m_EF_mu22_MG_medium = -999;\
    o_m_EF_mu22_j30_a4tc_EFFS = -999;\
    o_m_EF_mu22_medium = -999;\
    o_m_EF_mu22i1_medium = -999;\
    o_m_EF_mu22i2_medium = -999;\
    o_m_EF_mu22i3_medium = -999;\
    o_m_EF_mu22i4_medium = -999;\
    o_m_EF_mu24_MG_medium = -999;\
    o_m_EF_mu24_MG_tight = -999;\
    o_m_EF_mu24_medium = -999;\
    o_m_EF_mu24_tight = -999;\
    o_m_EF_mu30_MG_medium = -999;\
    o_m_EF_mu30_MG_tight = -999;\
    o_m_EF_mu30_medium = -999;\
    o_m_EF_mu30_tight = -999;\
    o_m_EF_mu40_MSonly_barrel = -999;\
    o_m_EF_mu40_MSonly_barrel_medium = -999;\
    o_m_EF_mu40_MSonly_empty = -999;\
    o_m_EF_mu40_MSonly_tight = -999;\
    o_m_EF_mu40_MSonly_tight_L1MU11 = -999;\
    o_m_EF_mu40_MSonly_tighter = -999;\
    o_m_EF_mu40_slow = -999;\
    o_m_EF_mu40_slow_empty = -999;\
    o_m_EF_mu40_slow_medium = -999;\
    o_m_EF_mu40_slow_outOfTime = -999;\
    o_m_EF_mu40_slow_outOfTime_medium = -999;\
    o_m_EF_mu4T = -999;\
    o_m_EF_mu4T_DiMu = -999;\
    o_m_EF_mu4T_DiMu_FS_noOS = -999;\
    o_m_EF_mu4T_Jpsimumu = -999;\
    o_m_EF_mu4T_Trk_Jpsi = -999;\
    o_m_EF_mu4T_Trk_Upsi_FS = -999;\
    o_m_EF_mu4T_Upsimumu_FS = -999;\
    o_m_EF_mu4T_Upsimumu_SiTrk_FS = -999;\
    o_m_EF_mu4T_Upsimumu_tight_FS = -999;\
    o_m_EF_mu4T_j45_a4tc_EFFS_xe45_loose_noMu = -999;\
    o_m_EF_mu4T_j45_a4tc_EFFS_xe55_noMu = -999;\
    o_m_EF_mu4Timu6i_DiMu_DY = -999;\
    o_m_EF_mu4Timu6i_DiMu_DY14_noVtx_noOS = -999;\
    o_m_EF_mu4Tmu6_Bmumu = -999;\
    o_m_EF_mu4Tmu6_Bmumux = -999;\
    o_m_EF_mu4Tmu6_DiMu = -999;\
    o_m_EF_mu4Tmu6_DiMu_DY20 = -999;\
    o_m_EF_mu4Tmu6_DiMu_noVtx_noOS = -999;\
    o_m_EF_mu4Tmu6_Jpsimumu = -999;\
    o_m_EF_mu4Tmu6_Jpsimumu_IDTrkNoCut = -999;\
    o_m_EF_mu4Tmu6_Upsimumu = -999;\
    o_m_EF_mu4_L1J10_matched = -999;\
    o_m_EF_mu4_L1J15_matched = -999;\
    o_m_EF_mu4_L1J20_matched = -999;\
    o_m_EF_mu4_L1J30_matched = -999;\
    o_m_EF_mu4_L1J50_matched = -999;\
    o_m_EF_mu4_L1J75_matched = -999;\
    o_m_EF_mu4_L1MU11_MSonly_cosmic = -999;\
    o_m_EF_mu4_L1MU11_cosmic = -999;\
    o_m_EF_mu4_cosmic = -999;\
    o_m_EF_mu4_empty_NoAlg = -999;\
    o_m_EF_mu4_firstempty_NoAlg = -999;\
    o_m_EF_mu4_j10_a4tc_EFFS_matched = -999;\
    o_m_EF_mu4_j135_a4tc_EFFS_L1matched = -999;\
    o_m_EF_mu4_j180_a4tc_EFFS_L1matched = -999;\
    o_m_EF_mu4_unpaired_iso_NoAlg = -999;\
    o_m_EF_mu6 = -999;\
    o_m_EF_mu6_DiMu_noOS = -999;\
    o_m_EF_mu6_Jpsimumu = -999;\
    o_m_EF_mu6_Jpsimumu_SiTrk = -999;\
    o_m_EF_mu6_Jpsimumu_tight = -999;\
    o_m_EF_mu6_Trk_Jpsi_loose = -999;\
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
    o_m_ph_OQRecalc.clear();\
    o_m_ph_convFlag.clear();\
    o_m_ph_isConv.clear();\
    o_m_ph_nConv.clear();\
    o_m_ph_nSingleTrackConv.clear();\
    o_m_ph_nDoubleTrackConv.clear();\
    o_m_ph_loose.clear();\
    o_m_ph_looseIso.clear();\
    o_m_ph_tight.clear();\
    o_m_ph_tightIso.clear();\
    o_m_ph_looseAR.clear();\
    o_m_ph_looseARIso.clear();\
    o_m_ph_tightAR.clear();\
    o_m_ph_tightARIso.clear();\
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
    o_m_ph_nucone20.clear();\
    o_m_ph_nucone30.clear();\
    o_m_ph_nucone40.clear();\
    o_m_ph_Etcone15_pt_corrected.clear();\
    o_m_ph_Etcone20_pt_corrected.clear();\
    o_m_ph_Etcone25_pt_corrected.clear();\
    o_m_ph_Etcone30_pt_corrected.clear();\
    o_m_ph_Etcone35_pt_corrected.clear();\
    o_m_ph_Etcone40_pt_corrected.clear();\
    o_m_ph_convanglematch.clear();\
    o_m_ph_convtrackmatch.clear();\
    o_m_ph_hasconv.clear();\
    o_m_ph_convvtxx.clear();\
    o_m_ph_convvtxy.clear();\
    o_m_ph_convvtxz.clear();\
    o_m_ph_Rconv.clear();\
    o_m_ph_zconv.clear();\
    o_m_ph_convvtxchi2.clear();\
    o_m_ph_pt1conv.clear();\
    o_m_ph_convtrk1nBLHits.clear();\
    o_m_ph_convtrk1nPixHits.clear();\
    o_m_ph_convtrk1nSCTHits.clear();\
    o_m_ph_convtrk1nTRTHits.clear();\
    o_m_ph_pt2conv.clear();\
    o_m_ph_convtrk2nBLHits.clear();\
    o_m_ph_convtrk2nPixHits.clear();\
    o_m_ph_convtrk2nSCTHits.clear();\
    o_m_ph_convtrk2nTRTHits.clear();\
    o_m_ph_ptconv.clear();\
    o_m_ph_pzconv.clear();\
    o_m_ph_reta.clear();\
    o_m_ph_rphi.clear();\
    o_m_ph_EtringnoisedR03sig2.clear();\
    o_m_ph_EtringnoisedR03sig3.clear();\
    o_m_ph_EtringnoisedR03sig4.clear();\
    o_m_ph_isolationlikelihoodjets.clear();\
    o_m_ph_isolationlikelihoodhqelectrons.clear();\
    o_m_ph_loglikelihood.clear();\
    o_m_ph_photonweight.clear();\
    o_m_ph_photonbgweight.clear();\
    o_m_ph_neuralnet.clear();\
    o_m_ph_Hmatrix.clear();\
    o_m_ph_Hmatrix5.clear();\
    o_m_ph_adaboost.clear();\
    o_m_ph_zvertex.clear();\
    o_m_ph_errz.clear();\
    o_m_ph_etap.clear();\
    o_m_ph_depth.clear();\
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
    o_m_ph_calibHitsShowerDepth.clear();\
    o_m_ph_isIso.clear();\
    o_m_ph_mvaptcone20.clear();\
    o_m_ph_mvaptcone30.clear();\
    o_m_ph_mvaptcone40.clear();\
    o_m_ph_topoEtcone20.clear();\
    o_m_ph_topoEtcone40.clear();\
    o_m_ph_topoEtcone60.clear();\
    o_m_ph_jet_dr.clear();\
    o_m_ph_jet_E.clear();\
    o_m_ph_jet_pt.clear();\
    o_m_ph_jet_m.clear();\
    o_m_ph_jet_eta.clear();\
    o_m_ph_jet_phi.clear();\
    o_m_ph_jet_matched.clear();\
    o_m_ph_convIP.clear();\
    o_m_ph_convIPRev.clear();\
    o_m_ph_ptIsolationCone.clear();\
    o_m_ph_ptIsolationConePhAngle.clear();\
    o_m_ph_Etcone40_ED_corrected.clear();\
    o_m_ph_Etcone40_corrected.clear();\
    o_m_ph_topodr.clear();\
    o_m_ph_topopt.clear();\
    o_m_ph_topoeta.clear();\
    o_m_ph_topophi.clear();\
    o_m_ph_topomatched.clear();\
    o_m_ph_topoEMdr.clear();\
    o_m_ph_topoEMpt.clear();\
    o_m_ph_topoEMeta.clear();\
    o_m_ph_topoEMphi.clear();\
    o_m_ph_topoEMmatched.clear();\
    o_m_ph_EF_dr.clear();\
    o_m_ph_EF_index.clear();\
    o_m_ph_L2_dr.clear();\
    o_m_ph_L2_index.clear();\
    o_m_ph_L1_dr.clear();\
    o_m_ph_L1_index.clear();\
    o_m_ph_el_index.clear();\
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
    o_m_mu_staco_matchchi2.clear();\
    o_m_mu_staco_matchndof.clear();\
    o_m_mu_staco_etcone20.clear();\
    o_m_mu_staco_etcone30.clear();\
    o_m_mu_staco_etcone40.clear();\
    o_m_mu_staco_nucone20.clear();\
    o_m_mu_staco_nucone30.clear();\
    o_m_mu_staco_nucone40.clear();\
    o_m_mu_staco_ptcone20.clear();\
    o_m_mu_staco_ptcone30.clear();\
    o_m_mu_staco_ptcone40.clear();\
    o_m_mu_staco_energyLossPar.clear();\
    o_m_mu_staco_energyLossErr.clear();\
    o_m_mu_staco_etCore.clear();\
    o_m_mu_staco_energyLossType.clear();\
    o_m_mu_staco_caloMuonIdTag.clear();\
    o_m_mu_staco_caloLRLikelihood.clear();\
    o_m_mu_staco_bestMatch.clear();\
    o_m_mu_staco_isStandAloneMuon.clear();\
    o_m_mu_staco_isCombinedMuon.clear();\
    o_m_mu_staco_isLowPtReconstructedMuon.clear();\
    o_m_mu_staco_isSegmentTaggedMuon.clear();\
    o_m_mu_staco_isCaloMuonId.clear();\
    o_m_mu_staco_alsoFoundByLowPt.clear();\
    o_m_mu_staco_alsoFoundByCaloMuonId.clear();\
    o_m_mu_staco_loose.clear();\
    o_m_mu_staco_medium.clear();\
    o_m_mu_staco_tight.clear();\
    o_m_mu_staco_d0_exPV.clear();\
    o_m_mu_staco_z0_exPV.clear();\
    o_m_mu_staco_phi_exPV.clear();\
    o_m_mu_staco_theta_exPV.clear();\
    o_m_mu_staco_qoverp_exPV.clear();\
    o_m_mu_staco_cb_d0_exPV.clear();\
    o_m_mu_staco_cb_z0_exPV.clear();\
    o_m_mu_staco_cb_phi_exPV.clear();\
    o_m_mu_staco_cb_theta_exPV.clear();\
    o_m_mu_staco_cb_qoverp_exPV.clear();\
    o_m_mu_staco_id_d0_exPV.clear();\
    o_m_mu_staco_id_z0_exPV.clear();\
    o_m_mu_staco_id_phi_exPV.clear();\
    o_m_mu_staco_id_theta_exPV.clear();\
    o_m_mu_staco_id_qoverp_exPV.clear();\
    o_m_mu_staco_me_d0_exPV.clear();\
    o_m_mu_staco_me_z0_exPV.clear();\
    o_m_mu_staco_me_phi_exPV.clear();\
    o_m_mu_staco_me_theta_exPV.clear();\
    o_m_mu_staco_me_qoverp_exPV.clear();\
    o_m_mu_staco_ie_d0_exPV.clear();\
    o_m_mu_staco_ie_z0_exPV.clear();\
    o_m_mu_staco_ie_phi_exPV.clear();\
    o_m_mu_staco_ie_theta_exPV.clear();\
    o_m_mu_staco_ie_qoverp_exPV.clear();\
    o_m_mu_staco_SpaceTime_detID.clear();\
    o_m_mu_staco_SpaceTime_t.clear();\
    o_m_mu_staco_SpaceTime_tError.clear();\
    o_m_mu_staco_SpaceTime_weight.clear();\
    o_m_mu_staco_SpaceTime_x.clear();\
    o_m_mu_staco_SpaceTime_y.clear();\
    o_m_mu_staco_SpaceTime_z.clear();\
    o_m_mu_staco_cov_d0_exPV.clear();\
    o_m_mu_staco_cov_z0_exPV.clear();\
    o_m_mu_staco_cov_phi_exPV.clear();\
    o_m_mu_staco_cov_theta_exPV.clear();\
    o_m_mu_staco_cov_qoverp_exPV.clear();\
    o_m_mu_staco_cov_d0_z0_exPV.clear();\
    o_m_mu_staco_cov_d0_phi_exPV.clear();\
    o_m_mu_staco_cov_d0_theta_exPV.clear();\
    o_m_mu_staco_cov_d0_qoverp_exPV.clear();\
    o_m_mu_staco_cov_z0_phi_exPV.clear();\
    o_m_mu_staco_cov_z0_theta_exPV.clear();\
    o_m_mu_staco_cov_z0_qoverp_exPV.clear();\
    o_m_mu_staco_cov_phi_theta_exPV.clear();\
    o_m_mu_staco_cov_phi_qoverp_exPV.clear();\
    o_m_mu_staco_cov_theta_qoverp_exPV.clear();\
    o_m_mu_staco_id_cov_d0_exPV.clear();\
    o_m_mu_staco_id_cov_z0_exPV.clear();\
    o_m_mu_staco_id_cov_phi_exPV.clear();\
    o_m_mu_staco_id_cov_theta_exPV.clear();\
    o_m_mu_staco_id_cov_qoverp_exPV.clear();\
    o_m_mu_staco_id_cov_d0_z0_exPV.clear();\
    o_m_mu_staco_id_cov_d0_phi_exPV.clear();\
    o_m_mu_staco_id_cov_d0_theta_exPV.clear();\
    o_m_mu_staco_id_cov_d0_qoverp_exPV.clear();\
    o_m_mu_staco_id_cov_z0_phi_exPV.clear();\
    o_m_mu_staco_id_cov_z0_theta_exPV.clear();\
    o_m_mu_staco_id_cov_z0_qoverp_exPV.clear();\
    o_m_mu_staco_id_cov_phi_theta_exPV.clear();\
    o_m_mu_staco_id_cov_phi_qoverp_exPV.clear();\
    o_m_mu_staco_id_cov_theta_qoverp_exPV.clear();\
    o_m_mu_staco_me_cov_d0_exPV.clear();\
    o_m_mu_staco_me_cov_z0_exPV.clear();\
    o_m_mu_staco_me_cov_phi_exPV.clear();\
    o_m_mu_staco_me_cov_theta_exPV.clear();\
    o_m_mu_staco_me_cov_qoverp_exPV.clear();\
    o_m_mu_staco_me_cov_d0_z0_exPV.clear();\
    o_m_mu_staco_me_cov_d0_phi_exPV.clear();\
    o_m_mu_staco_me_cov_d0_theta_exPV.clear();\
    o_m_mu_staco_me_cov_d0_qoverp_exPV.clear();\
    o_m_mu_staco_me_cov_z0_phi_exPV.clear();\
    o_m_mu_staco_me_cov_z0_theta_exPV.clear();\
    o_m_mu_staco_me_cov_z0_qoverp_exPV.clear();\
    o_m_mu_staco_me_cov_phi_theta_exPV.clear();\
    o_m_mu_staco_me_cov_phi_qoverp_exPV.clear();\
    o_m_mu_staco_me_cov_theta_qoverp_exPV.clear();\
    o_m_mu_staco_ms_d0.clear();\
    o_m_mu_staco_ms_z0.clear();\
    o_m_mu_staco_ms_phi.clear();\
    o_m_mu_staco_ms_theta.clear();\
    o_m_mu_staco_ms_qoverp.clear();\
    o_m_mu_staco_id_d0.clear();\
    o_m_mu_staco_id_z0.clear();\
    o_m_mu_staco_id_phi.clear();\
    o_m_mu_staco_id_theta.clear();\
    o_m_mu_staco_id_qoverp.clear();\
    o_m_mu_staco_me_d0.clear();\
    o_m_mu_staco_me_z0.clear();\
    o_m_mu_staco_me_phi.clear();\
    o_m_mu_staco_me_theta.clear();\
    o_m_mu_staco_me_qoverp.clear();\
    o_m_mu_staco_ie_d0.clear();\
    o_m_mu_staco_ie_z0.clear();\
    o_m_mu_staco_ie_phi.clear();\
    o_m_mu_staco_ie_theta.clear();\
    o_m_mu_staco_ie_qoverp.clear();\
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
    o_m_mu_staco_nGangedPixels.clear();\
    o_m_mu_staco_nPixelDeadSensors.clear();\
    o_m_mu_staco_nSCTDeadSensors.clear();\
    o_m_mu_staco_nTRTDeadStraws.clear();\
    o_m_mu_staco_expectBLayerHit.clear();\
    o_m_mu_staco_nMDTHits.clear();\
    o_m_mu_staco_nMDTHoles.clear();\
    o_m_mu_staco_nCSCEtaHits.clear();\
    o_m_mu_staco_nCSCEtaHoles.clear();\
    o_m_mu_staco_nCSCPhiHits.clear();\
    o_m_mu_staco_nCSCPhiHoles.clear();\
    o_m_mu_staco_nRPCEtaHits.clear();\
    o_m_mu_staco_nRPCEtaHoles.clear();\
    o_m_mu_staco_nRPCPhiHits.clear();\
    o_m_mu_staco_nRPCPhiHoles.clear();\
    o_m_mu_staco_nTGCEtaHits.clear();\
    o_m_mu_staco_nTGCEtaHoles.clear();\
    o_m_mu_staco_nTGCPhiHits.clear();\
    o_m_mu_staco_nTGCPhiHoles.clear();\
    o_m_mu_staco_nMDTBIHits.clear();\
    o_m_mu_staco_nMDTBMHits.clear();\
    o_m_mu_staco_nMDTBOHits.clear();\
    o_m_mu_staco_nMDTBEEHits.clear();\
    o_m_mu_staco_nMDTBIS78Hits.clear();\
    o_m_mu_staco_nMDTEIHits.clear();\
    o_m_mu_staco_nMDTEMHits.clear();\
    o_m_mu_staco_nMDTEOHits.clear();\
    o_m_mu_staco_nMDTEEHits.clear();\
    o_m_mu_staco_nRPCLayer1EtaHits.clear();\
    o_m_mu_staco_nRPCLayer2EtaHits.clear();\
    o_m_mu_staco_nRPCLayer3EtaHits.clear();\
    o_m_mu_staco_nRPCLayer1PhiHits.clear();\
    o_m_mu_staco_nRPCLayer2PhiHits.clear();\
    o_m_mu_staco_nRPCLayer3PhiHits.clear();\
    o_m_mu_staco_nTGCLayer1EtaHits.clear();\
    o_m_mu_staco_nTGCLayer2EtaHits.clear();\
    o_m_mu_staco_nTGCLayer3EtaHits.clear();\
    o_m_mu_staco_nTGCLayer4EtaHits.clear();\
    o_m_mu_staco_nTGCLayer1PhiHits.clear();\
    o_m_mu_staco_nTGCLayer2PhiHits.clear();\
    o_m_mu_staco_nTGCLayer3PhiHits.clear();\
    o_m_mu_staco_nTGCLayer4PhiHits.clear();\
    o_m_mu_staco_barrelSectors.clear();\
    o_m_mu_staco_endcapSectors.clear();\
    o_m_mu_staco_trackd0.clear();\
    o_m_mu_staco_trackz0.clear();\
    o_m_mu_staco_trackphi.clear();\
    o_m_mu_staco_tracktheta.clear();\
    o_m_mu_staco_trackqoverp.clear();\
    o_m_mu_staco_trackcov_d0.clear();\
    o_m_mu_staco_trackcov_z0.clear();\
    o_m_mu_staco_trackcov_phi.clear();\
    o_m_mu_staco_trackcov_theta.clear();\
    o_m_mu_staco_trackcov_qoverp.clear();\
    o_m_mu_staco_trackcov_d0_z0.clear();\
    o_m_mu_staco_trackcov_d0_phi.clear();\
    o_m_mu_staco_trackcov_d0_theta.clear();\
    o_m_mu_staco_trackcov_d0_qoverp.clear();\
    o_m_mu_staco_trackcov_z0_phi.clear();\
    o_m_mu_staco_trackcov_z0_theta.clear();\
    o_m_mu_staco_trackcov_z0_qoverp.clear();\
    o_m_mu_staco_trackcov_phi_theta.clear();\
    o_m_mu_staco_trackcov_phi_qoverp.clear();\
    o_m_mu_staco_trackcov_theta_qoverp.clear();\
    o_m_mu_staco_trackfitchi2.clear();\
    o_m_mu_staco_trackfitndof.clear();\
    o_m_mu_staco_hastrack.clear();\
    o_m_mu_staco_trackd0beam.clear();\
    o_m_mu_staco_trackz0beam.clear();\
    o_m_mu_staco_tracksigd0beam.clear();\
    o_m_mu_staco_tracksigz0beam.clear();\
    o_m_mu_staco_trackd0pv.clear();\
    o_m_mu_staco_trackz0pv.clear();\
    o_m_mu_staco_tracksigd0pv.clear();\
    o_m_mu_staco_tracksigz0pv.clear();\
    o_m_mu_staco_trackIPEstimate_d0_biasedpvunbiased.clear();\
    o_m_mu_staco_trackIPEstimate_z0_biasedpvunbiased.clear();\
    o_m_mu_staco_trackIPEstimate_d0_unbiasedpvunbiased.clear();\
    o_m_mu_staco_trackIPEstimate_z0_unbiasedpvunbiased.clear();\
    o_m_mu_staco_trackIPEstimate_sigd0_biasedpvunbiased.clear();\
    o_m_mu_staco_trackIPEstimate_sigz0_biasedpvunbiased.clear();\
    o_m_mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased.clear();\
    o_m_mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased.clear();\
    o_m_mu_staco_EFCB_dr.clear();\
    o_m_mu_staco_EFCB_index.clear();\
    o_m_mu_staco_EFMG_dr.clear();\
    o_m_mu_staco_EFMG_index.clear();\
    o_m_mu_staco_EFME_dr.clear();\
    o_m_mu_staco_EFME_index.clear();\
    o_m_mu_staco_L2CB_dr.clear();\
    o_m_mu_staco_L2CB_index.clear();\
    o_m_mu_staco_L1_dr.clear();\
    o_m_mu_staco_L1_index.clear();\
    o_m_jet_AntiKt4TopoEM_n = -999;\
    o_m_jet_AntiKt4TopoEM_E.clear();\
    o_m_jet_AntiKt4TopoEM_pt.clear();\
    o_m_jet_AntiKt4TopoEM_m.clear();\
    o_m_jet_AntiKt4TopoEM_eta.clear();\
    o_m_jet_AntiKt4TopoEM_phi.clear();\
    o_m_jet_AntiKt4TopoEM_EtaOrigin.clear();\
    o_m_jet_AntiKt4TopoEM_PhiOrigin.clear();\
    o_m_jet_AntiKt4TopoEM_MOrigin.clear();\
    o_m_jet_AntiKt4TopoEM_EtaOriginEM.clear();\
    o_m_jet_AntiKt4TopoEM_PhiOriginEM.clear();\
    o_m_jet_AntiKt4TopoEM_MOriginEM.clear();\
    o_m_jet_AntiKt4TopoEM_WIDTH.clear();\
    o_m_jet_AntiKt4TopoEM_n90.clear();\
    o_m_jet_AntiKt4TopoEM_Timing.clear();\
    o_m_jet_AntiKt4TopoEM_LArQuality.clear();\
    o_m_jet_AntiKt4TopoEM_nTrk.clear();\
    o_m_jet_AntiKt4TopoEM_sumPtTrk.clear();\
    o_m_jet_AntiKt4TopoEM_OriginIndex.clear();\
    o_m_jet_AntiKt4TopoEM_HECQuality.clear();\
    o_m_jet_AntiKt4TopoEM_NegativeE.clear();\
    o_m_jet_AntiKt4TopoEM_AverageLArQF.clear();\
    o_m_jet_AntiKt4TopoEM_YFlip12.clear();\
    o_m_jet_AntiKt4TopoEM_YFlip23.clear();\
    o_m_jet_AntiKt4TopoEM_BCH_CORR_CELL.clear();\
    o_m_jet_AntiKt4TopoEM_BCH_CORR_DOTX.clear();\
    o_m_jet_AntiKt4TopoEM_BCH_CORR_JET.clear();\
    o_m_jet_AntiKt4TopoEM_BCH_CORR_JET_FORCELL.clear();\
    o_m_jet_AntiKt4TopoEM_ENG_BAD_CELLS.clear();\
    o_m_jet_AntiKt4TopoEM_N_BAD_CELLS.clear();\
    o_m_jet_AntiKt4TopoEM_N_BAD_CELLS_CORR.clear();\
    o_m_jet_AntiKt4TopoEM_BAD_CELLS_CORR_E.clear();\
    o_m_jet_AntiKt4TopoEM_NumTowers.clear();\
    o_m_jet_AntiKt4TopoEM_SamplingMax.clear();\
    o_m_jet_AntiKt4TopoEM_fracSamplingMax.clear();\
    o_m_jet_AntiKt4TopoEM_hecf.clear();\
    o_m_jet_AntiKt4TopoEM_tgap3f.clear();\
    o_m_jet_AntiKt4TopoEM_isUgly.clear();\
    o_m_jet_AntiKt4TopoEM_isBadLoose.clear();\
    o_m_jet_AntiKt4TopoEM_isBadMedium.clear();\
    o_m_jet_AntiKt4TopoEM_isBadTight.clear();\
    o_m_jet_AntiKt4TopoEM_emfrac.clear();\
    o_m_jet_AntiKt4TopoEM_Offset.clear();\
    o_m_jet_AntiKt4TopoEM_EMJES.clear();\
    o_m_jet_AntiKt4TopoEM_EMJES_EtaCorr.clear();\
    o_m_jet_AntiKt4TopoEM_EMJESnooffset.clear();\
    o_m_jet_AntiKt4TopoEM_GCWJES.clear();\
    o_m_jet_AntiKt4TopoEM_GCWJES_EtaCorr.clear();\
    o_m_jet_AntiKt4TopoEM_CB.clear();\
    o_m_jet_AntiKt4TopoEM_LCJES.clear();\
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
    o_m_jet_AntiKt4TopoEM_GSCFactorF.clear();\
    o_m_jet_AntiKt4TopoEM_WidthFraction.clear();\
    o_m_jet_AntiKt4TopoEM_el_dr.clear();\
    o_m_jet_AntiKt4TopoEM_el_matched.clear();\
    o_m_jet_AntiKt4TopoEM_mu_dr.clear();\
    o_m_jet_AntiKt4TopoEM_mu_matched.clear();\
    o_m_jet_AntiKt4TopoEM_L1_dr.clear();\
    o_m_jet_AntiKt4TopoEM_L1_matched.clear();\
    o_m_jet_AntiKt4TopoEM_L2_dr.clear();\
    o_m_jet_AntiKt4TopoEM_L2_matched.clear();\
    o_m_jet_AntiKt4TopoEM_EF_dr.clear();\
    o_m_jet_AntiKt4TopoEM_EF_matched.clear();\
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
   o_m_timestamp = m_timestamp;\
   o_m_timestamp_ns = m_timestamp_ns;\
   o_m_lbn = m_lbn;\
   o_m_bcid = m_bcid;\
   o_m_actualIntPerXing = m_actualIntPerXing;\
   o_m_averageIntPerXing = m_averageIntPerXing;\
   o_m_el_n = m_el_n;\
   o_m_el_E = std::vector<float>(*m_el_E);\
   o_m_el_Et = std::vector<float>(*m_el_Et);\
   o_m_el_pt = std::vector<float>(*m_el_pt);\
   o_m_el_m = std::vector<float>(*m_el_m);\
   o_m_el_eta = std::vector<float>(*m_el_eta);\
   o_m_el_phi = std::vector<float>(*m_el_phi);\
   o_m_el_px = std::vector<float>(*m_el_px);\
   o_m_el_py = std::vector<float>(*m_el_py);\
   o_m_el_pz = std::vector<float>(*m_el_pz);\
   o_m_el_charge = std::vector<float>(*m_el_charge);\
   o_m_el_author = std::vector<int>(*m_el_author);\
   o_m_el_isEM = std::vector<unsigned int>(*m_el_isEM);\
   o_m_el_OQ = std::vector<unsigned int>(*m_el_OQ);\
   o_m_el_convFlag = std::vector<int>(*m_el_convFlag);\
   o_m_el_isConv = std::vector<int>(*m_el_isConv);\
   o_m_el_nConv = std::vector<int>(*m_el_nConv);\
   o_m_el_nSingleTrackConv = std::vector<int>(*m_el_nSingleTrackConv);\
   o_m_el_nDoubleTrackConv = std::vector<int>(*m_el_nDoubleTrackConv);\
   o_m_el_OQRecalc = std::vector<unsigned int>(*m_el_OQRecalc);\
   o_m_el_loose = std::vector<int>(*m_el_loose);\
   o_m_el_looseIso = std::vector<int>(*m_el_looseIso);\
   o_m_el_medium = std::vector<int>(*m_el_medium);\
   o_m_el_mediumIso = std::vector<int>(*m_el_mediumIso);\
   o_m_el_mediumWithoutTrack = std::vector<int>(*m_el_mediumWithoutTrack);\
   o_m_el_mediumIsoWithoutTrack = std::vector<int>(*m_el_mediumIsoWithoutTrack);\
   o_m_el_tight = std::vector<int>(*m_el_tight);\
   o_m_el_tightIso = std::vector<int>(*m_el_tightIso);\
   o_m_el_tightWithoutTrack = std::vector<int>(*m_el_tightWithoutTrack);\
   o_m_el_tightIsoWithoutTrack = std::vector<int>(*m_el_tightIsoWithoutTrack);\
   o_m_el_loosePP = std::vector<int>(*m_el_loosePP);\
   o_m_el_loosePPIso = std::vector<int>(*m_el_loosePPIso);\
   o_m_el_mediumPP = std::vector<int>(*m_el_mediumPP);\
   o_m_el_mediumPPIso = std::vector<int>(*m_el_mediumPPIso);\
   o_m_el_tightPP = std::vector<int>(*m_el_tightPP);\
   o_m_el_tightPPIso = std::vector<int>(*m_el_tightPPIso);\
   o_m_el_goodOQ = std::vector<int>(*m_el_goodOQ);\
   o_m_el_Ethad = std::vector<float>(*m_el_Ethad);\
   o_m_el_Ethad1 = std::vector<float>(*m_el_Ethad1);\
   o_m_el_f1 = std::vector<float>(*m_el_f1);\
   o_m_el_f1core = std::vector<float>(*m_el_f1core);\
   o_m_el_Emins1 = std::vector<float>(*m_el_Emins1);\
   o_m_el_fside = std::vector<float>(*m_el_fside);\
   o_m_el_Emax2 = std::vector<float>(*m_el_Emax2);\
   o_m_el_ws3 = std::vector<float>(*m_el_ws3);\
   o_m_el_wstot = std::vector<float>(*m_el_wstot);\
   o_m_el_emaxs1 = std::vector<float>(*m_el_emaxs1);\
   o_m_el_deltaEs = std::vector<float>(*m_el_deltaEs);\
   o_m_el_E233 = std::vector<float>(*m_el_E233);\
   o_m_el_E237 = std::vector<float>(*m_el_E237);\
   o_m_el_E277 = std::vector<float>(*m_el_E277);\
   o_m_el_weta2 = std::vector<float>(*m_el_weta2);\
   o_m_el_f3 = std::vector<float>(*m_el_f3);\
   o_m_el_f3core = std::vector<float>(*m_el_f3core);\
   o_m_el_rphiallcalo = std::vector<float>(*m_el_rphiallcalo);\
   o_m_el_Etcone45 = std::vector<float>(*m_el_Etcone45);\
   o_m_el_Etcone15 = std::vector<float>(*m_el_Etcone15);\
   o_m_el_Etcone20 = std::vector<float>(*m_el_Etcone20);\
   o_m_el_Etcone25 = std::vector<float>(*m_el_Etcone25);\
   o_m_el_Etcone30 = std::vector<float>(*m_el_Etcone30);\
   o_m_el_Etcone35 = std::vector<float>(*m_el_Etcone35);\
   o_m_el_Etcone40 = std::vector<float>(*m_el_Etcone40);\
   o_m_el_ptcone20 = std::vector<float>(*m_el_ptcone20);\
   o_m_el_ptcone30 = std::vector<float>(*m_el_ptcone30);\
   o_m_el_ptcone40 = std::vector<float>(*m_el_ptcone40);\
   o_m_el_nucone20 = std::vector<float>(*m_el_nucone20);\
   o_m_el_nucone30 = std::vector<float>(*m_el_nucone30);\
   o_m_el_nucone40 = std::vector<float>(*m_el_nucone40);\
   o_m_el_Etcone15_pt_corrected = std::vector<float>(*m_el_Etcone15_pt_corrected);\
   o_m_el_Etcone20_pt_corrected = std::vector<float>(*m_el_Etcone20_pt_corrected);\
   o_m_el_Etcone25_pt_corrected = std::vector<float>(*m_el_Etcone25_pt_corrected);\
   o_m_el_Etcone30_pt_corrected = std::vector<float>(*m_el_Etcone30_pt_corrected);\
   o_m_el_Etcone35_pt_corrected = std::vector<float>(*m_el_Etcone35_pt_corrected);\
   o_m_el_Etcone40_pt_corrected = std::vector<float>(*m_el_Etcone40_pt_corrected);\
   o_m_el_convanglematch = std::vector<float>(*m_el_convanglematch);\
   o_m_el_convtrackmatch = std::vector<float>(*m_el_convtrackmatch);\
   o_m_el_hasconv = std::vector<int>(*m_el_hasconv);\
   o_m_el_convvtxx = std::vector<float>(*m_el_convvtxx);\
   o_m_el_convvtxy = std::vector<float>(*m_el_convvtxy);\
   o_m_el_convvtxz = std::vector<float>(*m_el_convvtxz);\
   o_m_el_Rconv = std::vector<float>(*m_el_Rconv);\
   o_m_el_zconv = std::vector<float>(*m_el_zconv);\
   o_m_el_convvtxchi2 = std::vector<float>(*m_el_convvtxchi2);\
   o_m_el_pt1conv = std::vector<float>(*m_el_pt1conv);\
   o_m_el_convtrk1nBLHits = std::vector<int>(*m_el_convtrk1nBLHits);\
   o_m_el_convtrk1nPixHits = std::vector<int>(*m_el_convtrk1nPixHits);\
   o_m_el_convtrk1nSCTHits = std::vector<int>(*m_el_convtrk1nSCTHits);\
   o_m_el_convtrk1nTRTHits = std::vector<int>(*m_el_convtrk1nTRTHits);\
   o_m_el_pt2conv = std::vector<float>(*m_el_pt2conv);\
   o_m_el_convtrk2nBLHits = std::vector<int>(*m_el_convtrk2nBLHits);\
   o_m_el_convtrk2nPixHits = std::vector<int>(*m_el_convtrk2nPixHits);\
   o_m_el_convtrk2nSCTHits = std::vector<int>(*m_el_convtrk2nSCTHits);\
   o_m_el_convtrk2nTRTHits = std::vector<int>(*m_el_convtrk2nTRTHits);\
   o_m_el_ptconv = std::vector<float>(*m_el_ptconv);\
   o_m_el_pzconv = std::vector<float>(*m_el_pzconv);\
   o_m_el_pos7 = std::vector<float>(*m_el_pos7);\
   o_m_el_etacorrmag = std::vector<float>(*m_el_etacorrmag);\
   o_m_el_deltaeta1 = std::vector<float>(*m_el_deltaeta1);\
   o_m_el_deltaeta2 = std::vector<float>(*m_el_deltaeta2);\
   o_m_el_deltaphi2 = std::vector<float>(*m_el_deltaphi2);\
   o_m_el_deltaphiRescaled = std::vector<float>(*m_el_deltaphiRescaled);\
   o_m_el_deltaPhiRot = std::vector<float>(*m_el_deltaPhiRot);\
   o_m_el_expectHitInBLayer = std::vector<float>(*m_el_expectHitInBLayer);\
   o_m_el_trackd0_physics = std::vector<float>(*m_el_trackd0_physics);\
   o_m_el_etaSampling1 = std::vector<float>(*m_el_etaSampling1);\
   o_m_el_reta = std::vector<float>(*m_el_reta);\
   o_m_el_rphi = std::vector<float>(*m_el_rphi);\
   o_m_el_EtringnoisedR03sig2 = std::vector<float>(*m_el_EtringnoisedR03sig2);\
   o_m_el_EtringnoisedR03sig3 = std::vector<float>(*m_el_EtringnoisedR03sig3);\
   o_m_el_EtringnoisedR03sig4 = std::vector<float>(*m_el_EtringnoisedR03sig4);\
   o_m_el_isolationlikelihoodjets = std::vector<double>(*m_el_isolationlikelihoodjets);\
   o_m_el_isolationlikelihoodhqelectrons = std::vector<double>(*m_el_isolationlikelihoodhqelectrons);\
   o_m_el_electronweight = std::vector<double>(*m_el_electronweight);\
   o_m_el_electronbgweight = std::vector<double>(*m_el_electronbgweight);\
   o_m_el_softeweight = std::vector<double>(*m_el_softeweight);\
   o_m_el_softebgweight = std::vector<double>(*m_el_softebgweight);\
   o_m_el_neuralnet = std::vector<double>(*m_el_neuralnet);\
   o_m_el_Hmatrix = std::vector<double>(*m_el_Hmatrix);\
   o_m_el_Hmatrix5 = std::vector<double>(*m_el_Hmatrix5);\
   o_m_el_adaboost = std::vector<double>(*m_el_adaboost);\
   o_m_el_softeneuralnet = std::vector<double>(*m_el_softeneuralnet);\
   o_m_el_zvertex = std::vector<float>(*m_el_zvertex);\
   o_m_el_errz = std::vector<float>(*m_el_errz);\
   o_m_el_etap = std::vector<float>(*m_el_etap);\
   o_m_el_depth = std::vector<float>(*m_el_depth);\
   o_m_el_refittedTrack_n = std::vector<int>(*m_el_refittedTrack_n);\
   o_m_el_refittedTrack_author = std::vector<std::vector<int> >(*m_el_refittedTrack_author);\
   o_m_el_refittedTrack_chi2 = std::vector<std::vector<float> >(*m_el_refittedTrack_chi2);\
   o_m_el_refittedTrack_hasBrem = std::vector<std::vector<int> >(*m_el_refittedTrack_hasBrem);\
   o_m_el_refittedTrack_bremRadius = std::vector<std::vector<float> >(*m_el_refittedTrack_bremRadius);\
   o_m_el_refittedTrack_bremZ = std::vector<std::vector<float> >(*m_el_refittedTrack_bremZ);\
   o_m_el_refittedTrack_bremRadiusErr = std::vector<std::vector<float> >(*m_el_refittedTrack_bremRadiusErr);\
   o_m_el_refittedTrack_bremZErr = std::vector<std::vector<float> >(*m_el_refittedTrack_bremZErr);\
   o_m_el_refittedTrack_bremFitStatus = std::vector<std::vector<int> >(*m_el_refittedTrack_bremFitStatus);\
   o_m_el_refittedTrack_qoverp = std::vector<std::vector<float> >(*m_el_refittedTrack_qoverp);\
   o_m_el_refittedTrack_d0 = std::vector<std::vector<float> >(*m_el_refittedTrack_d0);\
   o_m_el_refittedTrack_z0 = std::vector<std::vector<float> >(*m_el_refittedTrack_z0);\
   o_m_el_refittedTrack_theta = std::vector<std::vector<float> >(*m_el_refittedTrack_theta);\
   o_m_el_refittedTrack_phi = std::vector<std::vector<float> >(*m_el_refittedTrack_phi);\
   o_m_el_refittedTrack_LMqoverp = std::vector<std::vector<float> >(*m_el_refittedTrack_LMqoverp);\
   o_m_el_refittedTrack_covd0 = std::vector<std::vector<float> >(*m_el_refittedTrack_covd0);\
   o_m_el_refittedTrack_covz0 = std::vector<std::vector<float> >(*m_el_refittedTrack_covz0);\
   o_m_el_refittedTrack_covphi = std::vector<std::vector<float> >(*m_el_refittedTrack_covphi);\
   o_m_el_refittedTrack_covtheta = std::vector<std::vector<float> >(*m_el_refittedTrack_covtheta);\
   o_m_el_refittedTrack_covqoverp = std::vector<std::vector<float> >(*m_el_refittedTrack_covqoverp);\
   o_m_el_refittedTrack_covd0z0 = std::vector<std::vector<float> >(*m_el_refittedTrack_covd0z0);\
   o_m_el_refittedTrack_covz0phi = std::vector<std::vector<float> >(*m_el_refittedTrack_covz0phi);\
   o_m_el_refittedTrack_covz0theta = std::vector<std::vector<float> >(*m_el_refittedTrack_covz0theta);\
   o_m_el_refittedTrack_covz0qoverp = std::vector<std::vector<float> >(*m_el_refittedTrack_covz0qoverp);\
   o_m_el_refittedTrack_covd0phi = std::vector<std::vector<float> >(*m_el_refittedTrack_covd0phi);\
   o_m_el_refittedTrack_covd0theta = std::vector<std::vector<float> >(*m_el_refittedTrack_covd0theta);\
   o_m_el_refittedTrack_covd0qoverp = std::vector<std::vector<float> >(*m_el_refittedTrack_covd0qoverp);\
   o_m_el_refittedTrack_covphitheta = std::vector<std::vector<float> >(*m_el_refittedTrack_covphitheta);\
   o_m_el_refittedTrack_covphiqoverp = std::vector<std::vector<float> >(*m_el_refittedTrack_covphiqoverp);\
   o_m_el_refittedTrack_covthetaqoverp = std::vector<std::vector<float> >(*m_el_refittedTrack_covthetaqoverp);\
   o_m_el_Es0 = std::vector<float>(*m_el_Es0);\
   o_m_el_etas0 = std::vector<float>(*m_el_etas0);\
   o_m_el_phis0 = std::vector<float>(*m_el_phis0);\
   o_m_el_Es1 = std::vector<float>(*m_el_Es1);\
   o_m_el_etas1 = std::vector<float>(*m_el_etas1);\
   o_m_el_phis1 = std::vector<float>(*m_el_phis1);\
   o_m_el_Es2 = std::vector<float>(*m_el_Es2);\
   o_m_el_etas2 = std::vector<float>(*m_el_etas2);\
   o_m_el_phis2 = std::vector<float>(*m_el_phis2);\
   o_m_el_Es3 = std::vector<float>(*m_el_Es3);\
   o_m_el_etas3 = std::vector<float>(*m_el_etas3);\
   o_m_el_phis3 = std::vector<float>(*m_el_phis3);\
   o_m_el_E_PreSamplerB = std::vector<float>(*m_el_E_PreSamplerB);\
   o_m_el_E_EMB1 = std::vector<float>(*m_el_E_EMB1);\
   o_m_el_E_EMB2 = std::vector<float>(*m_el_E_EMB2);\
   o_m_el_E_EMB3 = std::vector<float>(*m_el_E_EMB3);\
   o_m_el_E_PreSamplerE = std::vector<float>(*m_el_E_PreSamplerE);\
   o_m_el_E_EME1 = std::vector<float>(*m_el_E_EME1);\
   o_m_el_E_EME2 = std::vector<float>(*m_el_E_EME2);\
   o_m_el_E_EME3 = std::vector<float>(*m_el_E_EME3);\
   o_m_el_E_HEC0 = std::vector<float>(*m_el_E_HEC0);\
   o_m_el_E_HEC1 = std::vector<float>(*m_el_E_HEC1);\
   o_m_el_E_HEC2 = std::vector<float>(*m_el_E_HEC2);\
   o_m_el_E_HEC3 = std::vector<float>(*m_el_E_HEC3);\
   o_m_el_E_TileBar0 = std::vector<float>(*m_el_E_TileBar0);\
   o_m_el_E_TileBar1 = std::vector<float>(*m_el_E_TileBar1);\
   o_m_el_E_TileBar2 = std::vector<float>(*m_el_E_TileBar2);\
   o_m_el_E_TileGap1 = std::vector<float>(*m_el_E_TileGap1);\
   o_m_el_E_TileGap2 = std::vector<float>(*m_el_E_TileGap2);\
   o_m_el_E_TileGap3 = std::vector<float>(*m_el_E_TileGap3);\
   o_m_el_E_TileExt0 = std::vector<float>(*m_el_E_TileExt0);\
   o_m_el_E_TileExt1 = std::vector<float>(*m_el_E_TileExt1);\
   o_m_el_E_TileExt2 = std::vector<float>(*m_el_E_TileExt2);\
   o_m_el_E_FCAL0 = std::vector<float>(*m_el_E_FCAL0);\
   o_m_el_E_FCAL1 = std::vector<float>(*m_el_E_FCAL1);\
   o_m_el_E_FCAL2 = std::vector<float>(*m_el_E_FCAL2);\
   o_m_el_cl_E = std::vector<float>(*m_el_cl_E);\
   o_m_el_cl_pt = std::vector<float>(*m_el_cl_pt);\
   o_m_el_cl_eta = std::vector<float>(*m_el_cl_eta);\
   o_m_el_cl_phi = std::vector<float>(*m_el_cl_phi);\
   o_m_el_firstEdens = std::vector<float>(*m_el_firstEdens);\
   o_m_el_cellmaxfrac = std::vector<float>(*m_el_cellmaxfrac);\
   o_m_el_longitudinal = std::vector<float>(*m_el_longitudinal);\
   o_m_el_secondlambda = std::vector<float>(*m_el_secondlambda);\
   o_m_el_lateral = std::vector<float>(*m_el_lateral);\
   o_m_el_secondR = std::vector<float>(*m_el_secondR);\
   o_m_el_centerlambda = std::vector<float>(*m_el_centerlambda);\
   o_m_el_trackd0 = std::vector<float>(*m_el_trackd0);\
   o_m_el_trackz0 = std::vector<float>(*m_el_trackz0);\
   o_m_el_trackphi = std::vector<float>(*m_el_trackphi);\
   o_m_el_tracktheta = std::vector<float>(*m_el_tracktheta);\
   o_m_el_trackqoverp = std::vector<float>(*m_el_trackqoverp);\
   o_m_el_trackpt = std::vector<float>(*m_el_trackpt);\
   o_m_el_tracketa = std::vector<float>(*m_el_tracketa);\
   o_m_el_trackcov_d0 = std::vector<float>(*m_el_trackcov_d0);\
   o_m_el_trackcov_z0 = std::vector<float>(*m_el_trackcov_z0);\
   o_m_el_trackcov_phi = std::vector<float>(*m_el_trackcov_phi);\
   o_m_el_trackcov_theta = std::vector<float>(*m_el_trackcov_theta);\
   o_m_el_trackcov_qoverp = std::vector<float>(*m_el_trackcov_qoverp);\
   o_m_el_trackcov_d0_z0 = std::vector<float>(*m_el_trackcov_d0_z0);\
   o_m_el_trackcov_d0_phi = std::vector<float>(*m_el_trackcov_d0_phi);\
   o_m_el_trackcov_d0_theta = std::vector<float>(*m_el_trackcov_d0_theta);\
   o_m_el_trackcov_d0_qoverp = std::vector<float>(*m_el_trackcov_d0_qoverp);\
   o_m_el_trackcov_z0_phi = std::vector<float>(*m_el_trackcov_z0_phi);\
   o_m_el_trackcov_z0_theta = std::vector<float>(*m_el_trackcov_z0_theta);\
   o_m_el_trackcov_z0_qoverp = std::vector<float>(*m_el_trackcov_z0_qoverp);\
   o_m_el_trackcov_phi_theta = std::vector<float>(*m_el_trackcov_phi_theta);\
   o_m_el_trackcov_phi_qoverp = std::vector<float>(*m_el_trackcov_phi_qoverp);\
   o_m_el_trackcov_theta_qoverp = std::vector<float>(*m_el_trackcov_theta_qoverp);\
   o_m_el_trackfitchi2 = std::vector<float>(*m_el_trackfitchi2);\
   o_m_el_trackfitndof = std::vector<int>(*m_el_trackfitndof);\
   o_m_el_nBLHits = std::vector<int>(*m_el_nBLHits);\
   o_m_el_nPixHits = std::vector<int>(*m_el_nPixHits);\
   o_m_el_nSCTHits = std::vector<int>(*m_el_nSCTHits);\
   o_m_el_nTRTHits = std::vector<int>(*m_el_nTRTHits);\
   o_m_el_nTRTHighTHits = std::vector<int>(*m_el_nTRTHighTHits);\
   o_m_el_nPixHoles = std::vector<int>(*m_el_nPixHoles);\
   o_m_el_nSCTHoles = std::vector<int>(*m_el_nSCTHoles);\
   o_m_el_nTRTHoles = std::vector<int>(*m_el_nTRTHoles);\
   o_m_el_nBLSharedHits = std::vector<int>(*m_el_nBLSharedHits);\
   o_m_el_nPixSharedHits = std::vector<int>(*m_el_nPixSharedHits);\
   o_m_el_nSCTSharedHits = std::vector<int>(*m_el_nSCTSharedHits);\
   o_m_el_nBLayerOutliers = std::vector<int>(*m_el_nBLayerOutliers);\
   o_m_el_nPixelOutliers = std::vector<int>(*m_el_nPixelOutliers);\
   o_m_el_nSCTOutliers = std::vector<int>(*m_el_nSCTOutliers);\
   o_m_el_nTRTOutliers = std::vector<int>(*m_el_nTRTOutliers);\
   o_m_el_nTRTHighTOutliers = std::vector<int>(*m_el_nTRTHighTOutliers);\
   o_m_el_expectBLayerHit = std::vector<int>(*m_el_expectBLayerHit);\
   o_m_el_nSiHits = std::vector<int>(*m_el_nSiHits);\
   o_m_el_TRTHighTHitsRatio = std::vector<float>(*m_el_TRTHighTHitsRatio);\
   o_m_el_TRTHighTOutliersRatio = std::vector<float>(*m_el_TRTHighTOutliersRatio);\
   o_m_el_pixeldEdx = std::vector<float>(*m_el_pixeldEdx);\
   o_m_el_nGoodHitsPixeldEdx = std::vector<int>(*m_el_nGoodHitsPixeldEdx);\
   o_m_el_massPixeldEdx = std::vector<float>(*m_el_massPixeldEdx);\
   o_m_el_likelihoodsPixeldEdx = std::vector<std::vector<float> >(*m_el_likelihoodsPixeldEdx);\
   o_m_el_eProbabilityComb = std::vector<float>(*m_el_eProbabilityComb);\
   o_m_el_eProbabilityHT = std::vector<float>(*m_el_eProbabilityHT);\
   o_m_el_eProbabilityToT = std::vector<float>(*m_el_eProbabilityToT);\
   o_m_el_eProbabilityBrem = std::vector<float>(*m_el_eProbabilityBrem);\
   o_m_el_vertweight = std::vector<float>(*m_el_vertweight);\
   o_m_el_vertx = std::vector<float>(*m_el_vertx);\
   o_m_el_verty = std::vector<float>(*m_el_verty);\
   o_m_el_vertz = std::vector<float>(*m_el_vertz);\
   o_m_el_trackd0beam = std::vector<float>(*m_el_trackd0beam);\
   o_m_el_trackz0beam = std::vector<float>(*m_el_trackz0beam);\
   o_m_el_tracksigd0beam = std::vector<float>(*m_el_tracksigd0beam);\
   o_m_el_tracksigz0beam = std::vector<float>(*m_el_tracksigz0beam);\
   o_m_el_trackd0pv = std::vector<float>(*m_el_trackd0pv);\
   o_m_el_trackz0pv = std::vector<float>(*m_el_trackz0pv);\
   o_m_el_tracksigd0pv = std::vector<float>(*m_el_tracksigd0pv);\
   o_m_el_tracksigz0pv = std::vector<float>(*m_el_tracksigz0pv);\
   o_m_el_trackIPEstimate_d0_biasedpvunbiased = std::vector<float>(*m_el_trackIPEstimate_d0_biasedpvunbiased);\
   o_m_el_trackIPEstimate_z0_biasedpvunbiased = std::vector<float>(*m_el_trackIPEstimate_z0_biasedpvunbiased);\
   o_m_el_trackIPEstimate_d0_unbiasedpvunbiased = std::vector<float>(*m_el_trackIPEstimate_d0_unbiasedpvunbiased);\
   o_m_el_trackIPEstimate_z0_unbiasedpvunbiased = std::vector<float>(*m_el_trackIPEstimate_z0_unbiasedpvunbiased);\
   o_m_el_trackIPEstimate_sigd0_biasedpvunbiased = std::vector<float>(*m_el_trackIPEstimate_sigd0_biasedpvunbiased);\
   o_m_el_trackIPEstimate_sigz0_biasedpvunbiased = std::vector<float>(*m_el_trackIPEstimate_sigz0_biasedpvunbiased);\
   o_m_el_trackIPEstimate_sigd0_unbiasedpvunbiased = std::vector<float>(*m_el_trackIPEstimate_sigd0_unbiasedpvunbiased);\
   o_m_el_trackIPEstimate_sigz0_unbiasedpvunbiased = std::vector<float>(*m_el_trackIPEstimate_sigz0_unbiasedpvunbiased);\
   o_m_el_hastrack = std::vector<int>(*m_el_hastrack);\
   o_m_el_deltaEmax2 = std::vector<float>(*m_el_deltaEmax2);\
   o_m_el_calibHitsShowerDepth = std::vector<float>(*m_el_calibHitsShowerDepth);\
   o_m_el_isIso = std::vector<unsigned int>(*m_el_isIso);\
   o_m_el_mvaptcone20 = std::vector<float>(*m_el_mvaptcone20);\
   o_m_el_mvaptcone30 = std::vector<float>(*m_el_mvaptcone30);\
   o_m_el_mvaptcone40 = std::vector<float>(*m_el_mvaptcone40);\
   o_m_el_jet_dr = std::vector<float>(*m_el_jet_dr);\
   o_m_el_jet_E = std::vector<float>(*m_el_jet_E);\
   o_m_el_jet_pt = std::vector<float>(*m_el_jet_pt);\
   o_m_el_jet_m = std::vector<float>(*m_el_jet_m);\
   o_m_el_jet_eta = std::vector<float>(*m_el_jet_eta);\
   o_m_el_jet_phi = std::vector<float>(*m_el_jet_phi);\
   o_m_el_jet_matched = std::vector<int>(*m_el_jet_matched);\
   o_m_el_Etcone40_ED_corrected = std::vector<float>(*m_el_Etcone40_ED_corrected);\
   o_m_el_Etcone40_corrected = std::vector<float>(*m_el_Etcone40_corrected);\
   o_m_el_EF_dr = std::vector<float>(*m_el_EF_dr);\
   o_m_el_EF_index = std::vector<int>(*m_el_EF_index);\
   o_m_el_L2_dr = std::vector<float>(*m_el_L2_dr);\
   o_m_el_L2_index = std::vector<int>(*m_el_L2_index);\
   o_m_el_L1_dr = std::vector<float>(*m_el_L1_dr);\
   o_m_el_L1_index = std::vector<int>(*m_el_L1_index);\
   o_m_trig_EF_el_n = m_trig_EF_el_n;\
   o_m_trig_EF_el_pt = std::vector<float>(*m_trig_EF_el_pt);\
   o_m_trig_EF_el_eta = std::vector<float>(*m_trig_EF_el_eta);\
   o_m_trig_EF_el_phi = std::vector<float>(*m_trig_EF_el_phi);\
   o_m_EF_2e10_medium = m_EF_2e10_medium;\
   o_m_EF_2e10_medium_mu6 = m_EF_2e10_medium_mu6;\
   o_m_EF_2e12Tvh_medium = m_EF_2e12Tvh_medium;\
   o_m_EF_2e12_medium = m_EF_2e12_medium;\
   o_m_EF_2e15vh_medium = m_EF_2e15vh_medium;\
   o_m_EF_2e5_tight = m_EF_2e5_tight;\
   o_m_EF_2e5_tight_Jpsi = m_EF_2e5_tight_Jpsi;\
   o_m_EF_2mu10 = m_EF_2mu10;\
   o_m_EF_2mu10_empty = m_EF_2mu10_empty;\
   o_m_EF_2mu10_loose = m_EF_2mu10_loose;\
   o_m_EF_2mu10_loose_empty = m_EF_2mu10_loose_empty;\
   o_m_EF_2mu10_loose_noOvlpRm = m_EF_2mu10_loose_noOvlpRm;\
   o_m_EF_2mu13_Zmumu_IDTrkNoCut = m_EF_2mu13_Zmumu_IDTrkNoCut;\
   o_m_EF_2mu4T = m_EF_2mu4T;\
   o_m_EF_2mu4T_Bmumu = m_EF_2mu4T_Bmumu;\
   o_m_EF_2mu4T_Bmumux = m_EF_2mu4T_Bmumux;\
   o_m_EF_2mu4T_DiMu = m_EF_2mu4T_DiMu;\
   o_m_EF_2mu4T_DiMu_DY = m_EF_2mu4T_DiMu_DY;\
   o_m_EF_2mu4T_DiMu_DY20 = m_EF_2mu4T_DiMu_DY20;\
   o_m_EF_2mu4T_DiMu_DY_noVtx_noOS = m_EF_2mu4T_DiMu_DY_noVtx_noOS;\
   o_m_EF_2mu4T_DiMu_SiTrk = m_EF_2mu4T_DiMu_SiTrk;\
   o_m_EF_2mu4T_DiMu_noVtx_noOS = m_EF_2mu4T_DiMu_noVtx_noOS;\
   o_m_EF_2mu4T_EFxe20_noMu = m_EF_2mu4T_EFxe20_noMu;\
   o_m_EF_2mu4T_EFxe30_noMu = m_EF_2mu4T_EFxe30_noMu;\
   o_m_EF_2mu4T_Jpsimumu = m_EF_2mu4T_Jpsimumu;\
   o_m_EF_2mu4T_Jpsimumu_IDTrkNoCut = m_EF_2mu4T_Jpsimumu_IDTrkNoCut;\
   o_m_EF_2mu4T_Upsimumu = m_EF_2mu4T_Upsimumu;\
   o_m_EF_2mu4T_xe30_noMu = m_EF_2mu4T_xe30_noMu;\
   o_m_EF_2mu4T_xe40_noMu = m_EF_2mu4T_xe40_noMu;\
   o_m_EF_2mu4Ti_DiMu_DY = m_EF_2mu4Ti_DiMu_DY;\
   o_m_EF_2mu6 = m_EF_2mu6;\
   o_m_EF_2mu6_Bmumux = m_EF_2mu6_Bmumux;\
   o_m_EF_2mu6_DiMu = m_EF_2mu6_DiMu;\
   o_m_EF_2mu6_MSonly_g10_loose = m_EF_2mu6_MSonly_g10_loose;\
   o_m_EF_2mu6_MSonly_g10_loose_nonfilled = m_EF_2mu6_MSonly_g10_loose_nonfilled;\
   o_m_EF_e10_medium = m_EF_e10_medium;\
   o_m_EF_e10_medium_2mu6 = m_EF_e10_medium_2mu6;\
   o_m_EF_e10_medium_mu10 = m_EF_e10_medium_mu10;\
   o_m_EF_e10_medium_mu6 = m_EF_e10_medium_mu6;\
   o_m_EF_e10_medium_mu6_topo_medium = m_EF_e10_medium_mu6_topo_medium;\
   o_m_EF_e11_etcut = m_EF_e11_etcut;\
   o_m_EF_e12Tvh_medium = m_EF_e12Tvh_medium;\
   o_m_EF_e12Tvh_medium_2e6T_medium = m_EF_e12Tvh_medium_2e6T_medium;\
   o_m_EF_e12Tvh_medium_mu6 = m_EF_e12Tvh_medium_mu6;\
   o_m_EF_e12Tvh_medium_mu6_topo_medium = m_EF_e12Tvh_medium_mu6_topo_medium;\
   o_m_EF_e12_medium = m_EF_e12_medium;\
   o_m_EF_e13_etcutTrk_xs45_noMu_dphi2j10xe20 = m_EF_e13_etcutTrk_xs45_noMu_dphi2j10xe20;\
   o_m_EF_e13_etcutTrk_xs60_noMu = m_EF_e13_etcutTrk_xs60_noMu;\
   o_m_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe07 = m_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe07;\
   o_m_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe20 = m_EF_e13_etcutTrk_xs60_noMu_dphi2j10xe20;\
   o_m_EF_e14_tight_e4_etcut_Jpsi = m_EF_e14_tight_e4_etcut_Jpsi;\
   o_m_EF_e15vh_loose1_e12Tvh_loose1_Zee = m_EF_e15vh_loose1_e12Tvh_loose1_Zee;\
   o_m_EF_e15vh_medium = m_EF_e15vh_medium;\
   o_m_EF_e15vh_medium_xe40_noMu = m_EF_e15vh_medium_xe40_noMu;\
   o_m_EF_e15vh_medium_xe50_noMu = m_EF_e15vh_medium_xe50_noMu;\
   o_m_EF_e20_etcutTrk_xe40_noMu_dphi2j10xe20 = m_EF_e20_etcutTrk_xe40_noMu_dphi2j10xe20;\
   o_m_EF_e20_etcutTrk_xs60_noMu_dphi2j10xe07 = m_EF_e20_etcutTrk_xs60_noMu_dphi2j10xe07;\
   o_m_EF_e20_tight_e15_NoCut_Zee = m_EF_e20_tight_e15_NoCut_Zee;\
   o_m_EF_e22vh_loose = m_EF_e22vh_loose;\
   o_m_EF_e22vh_loose1 = m_EF_e22vh_loose1;\
   o_m_EF_e22vh_looseTrk = m_EF_e22vh_looseTrk;\
   o_m_EF_e22vh_loose_2j20_a4tc_EFFS = m_EF_e22vh_loose_2j20_a4tc_EFFS;\
   o_m_EF_e22vh_loose_3j20_a4tc_EFFS = m_EF_e22vh_loose_3j20_a4tc_EFFS;\
   o_m_EF_e22vh_loose_4j15_a4tc_EFFS = m_EF_e22vh_loose_4j15_a4tc_EFFS;\
   o_m_EF_e22vh_medium = m_EF_e22vh_medium;\
   o_m_EF_e22vh_medium1 = m_EF_e22vh_medium1;\
   o_m_EF_e22vh_medium2 = m_EF_e22vh_medium2;\
   o_m_EF_e22vh_medium_IDTrkNoCut = m_EF_e22vh_medium_IDTrkNoCut;\
   o_m_EF_e22vh_medium_SiTrk = m_EF_e22vh_medium_SiTrk;\
   o_m_EF_e22vh_medium_TRT = m_EF_e22vh_medium_TRT;\
   o_m_EF_e40_medium = m_EF_e40_medium;\
   o_m_EF_e45_medium = m_EF_e45_medium;\
   o_m_EF_e45_medium1 = m_EF_e45_medium1;\
   o_m_EF_e5_medium_mu6 = m_EF_e5_medium_mu6;\
   o_m_EF_e5_medium_mu6_topo_medium = m_EF_e5_medium_mu6_topo_medium;\
   o_m_EF_e5_tight = m_EF_e5_tight;\
   o_m_EF_e5_tight_e14_etcut_Jpsi = m_EF_e5_tight_e14_etcut_Jpsi;\
   o_m_EF_e5_tight_e4_etcut_Jpsi = m_EF_e5_tight_e4_etcut_Jpsi;\
   o_m_EF_e5_tight_e4_etcut_Jpsi_SiTrk = m_EF_e5_tight_e4_etcut_Jpsi_SiTrk;\
   o_m_EF_e5_tight_e4_etcut_Jpsi_TRT = m_EF_e5_tight_e4_etcut_Jpsi_TRT;\
   o_m_EF_e5_tight_e5_NoCut = m_EF_e5_tight_e5_NoCut;\
   o_m_EF_e5_tight_e9_etcut_Jpsi = m_EF_e5_tight_e9_etcut_Jpsi;\
   o_m_EF_e60_loose = m_EF_e60_loose;\
   o_m_EF_e6T_medium = m_EF_e6T_medium;\
   o_m_EF_e9_tight_e4_etcut_Jpsi = m_EF_e9_tight_e4_etcut_Jpsi;\
   o_m_EF_g100_loose = m_EF_g100_loose;\
   o_m_EF_g10_NoCut_cosmic = m_EF_g10_NoCut_cosmic;\
   o_m_EF_g11_etcut = m_EF_g11_etcut;\
   o_m_EF_g11_etcut_larcalib = m_EF_g11_etcut_larcalib;\
   o_m_EF_g150_etcut = m_EF_g150_etcut;\
   o_m_EF_g20_etcut = m_EF_g20_etcut;\
   o_m_EF_g20_loose = m_EF_g20_loose;\
   o_m_EF_g20_loose_larcalib = m_EF_g20_loose_larcalib;\
   o_m_EF_g40_loose = m_EF_g40_loose;\
   o_m_EF_g40_loose_EFxe40_noMu = m_EF_g40_loose_EFxe40_noMu;\
   o_m_EF_g40_loose_larcalib = m_EF_g40_loose_larcalib;\
   o_m_EF_g40_loose_xe45_medium_noMu = m_EF_g40_loose_xe45_medium_noMu;\
   o_m_EF_g40_loose_xe55_medium_noMu = m_EF_g40_loose_xe55_medium_noMu;\
   o_m_EF_g40_tight_b10_medium = m_EF_g40_tight_b10_medium;\
   o_m_EF_g5_NoCut_cosmic = m_EF_g5_NoCut_cosmic;\
   o_m_EF_g60_loose = m_EF_g60_loose;\
   o_m_EF_g60_loose_larcalib = m_EF_g60_loose_larcalib;\
   o_m_EF_g80_loose = m_EF_g80_loose;\
   o_m_EF_g80_loose_larcalib = m_EF_g80_loose_larcalib;\
   o_m_EF_mu10 = m_EF_mu10;\
   o_m_EF_mu10_Jpsimumu = m_EF_mu10_Jpsimumu;\
   o_m_EF_mu10_Upsimumu_FS = m_EF_mu10_Upsimumu_FS;\
   o_m_EF_mu10_Upsimumu_tight_FS = m_EF_mu10_Upsimumu_tight_FS;\
   o_m_EF_mu10_loose = m_EF_mu10_loose;\
   o_m_EF_mu10_muCombTag_NoEF = m_EF_mu10_muCombTag_NoEF;\
   o_m_EF_mu11_empty_NoAlg = m_EF_mu11_empty_NoAlg;\
   o_m_EF_mu13 = m_EF_mu13;\
   o_m_EF_mu13_MG = m_EF_mu13_MG;\
   o_m_EF_mu13_muCombTag_NoEF = m_EF_mu13_muCombTag_NoEF;\
   o_m_EF_mu15 = m_EF_mu15;\
   o_m_EF_mu15_2mu4_EFFS_medium = m_EF_mu15_2mu4_EFFS_medium;\
   o_m_EF_mu15_mu10_EFFS = m_EF_mu15_mu10_EFFS;\
   o_m_EF_mu15_mu10_EFFS_medium = m_EF_mu15_mu10_EFFS_medium;\
   o_m_EF_mu15_mu10_EFFS_tight = m_EF_mu15_mu10_EFFS_tight;\
   o_m_EF_mu15_xe30_noMu = m_EF_mu15_xe30_noMu;\
   o_m_EF_mu15i = m_EF_mu15i;\
   o_m_EF_mu15i_medium = m_EF_mu15i_medium;\
   o_m_EF_mu18 = m_EF_mu18;\
   o_m_EF_mu18_L1J10 = m_EF_mu18_L1J10;\
   o_m_EF_mu18_MG = m_EF_mu18_MG;\
   o_m_EF_mu18_MG_L1J10 = m_EF_mu18_MG_L1J10;\
   o_m_EF_mu18_MG_medium = m_EF_mu18_MG_medium;\
   o_m_EF_mu18_medium = m_EF_mu18_medium;\
   o_m_EF_mu18_medium_2j20_a4tc_EFFS = m_EF_mu18_medium_2j20_a4tc_EFFS;\
   o_m_EF_mu18_medium_3j20_a4tc_EFFS = m_EF_mu18_medium_3j20_a4tc_EFFS;\
   o_m_EF_mu18_medium_4j15_a4tc_EFFS = m_EF_mu18_medium_4j15_a4tc_EFFS;\
   o_m_EF_mu18_medium_4j20_a4tc_EFFS = m_EF_mu18_medium_4j20_a4tc_EFFS;\
   o_m_EF_mu18i3_medium = m_EF_mu18i3_medium;\
   o_m_EF_mu18i4_medium = m_EF_mu18i4_medium;\
   o_m_EF_mu20 = m_EF_mu20;\
   o_m_EF_mu20_IDTrkNoCut = m_EF_mu20_IDTrkNoCut;\
   o_m_EF_mu20_IDTrkNoCut_ManyVx = m_EF_mu20_IDTrkNoCut_ManyVx;\
   o_m_EF_mu20_MG = m_EF_mu20_MG;\
   o_m_EF_mu20_MG_medium = m_EF_mu20_MG_medium;\
   o_m_EF_mu20_empty = m_EF_mu20_empty;\
   o_m_EF_mu20_medium = m_EF_mu20_medium;\
   o_m_EF_mu20_mu10_EFFS_tight = m_EF_mu20_mu10_EFFS_tight;\
   o_m_EF_mu20_muCombTag_NoEF = m_EF_mu20_muCombTag_NoEF;\
   o_m_EF_mu20i = m_EF_mu20i;\
   o_m_EF_mu20i_medium = m_EF_mu20i_medium;\
   o_m_EF_mu22 = m_EF_mu22;\
   o_m_EF_mu22_MG = m_EF_mu22_MG;\
   o_m_EF_mu22_MG_medium = m_EF_mu22_MG_medium;\
   o_m_EF_mu22_j30_a4tc_EFFS = m_EF_mu22_j30_a4tc_EFFS;\
   o_m_EF_mu22_medium = m_EF_mu22_medium;\
   o_m_EF_mu22i1_medium = m_EF_mu22i1_medium;\
   o_m_EF_mu22i2_medium = m_EF_mu22i2_medium;\
   o_m_EF_mu22i3_medium = m_EF_mu22i3_medium;\
   o_m_EF_mu22i4_medium = m_EF_mu22i4_medium;\
   o_m_EF_mu24_MG_medium = m_EF_mu24_MG_medium;\
   o_m_EF_mu24_MG_tight = m_EF_mu24_MG_tight;\
   o_m_EF_mu24_medium = m_EF_mu24_medium;\
   o_m_EF_mu24_tight = m_EF_mu24_tight;\
   o_m_EF_mu30_MG_medium = m_EF_mu30_MG_medium;\
   o_m_EF_mu30_MG_tight = m_EF_mu30_MG_tight;\
   o_m_EF_mu30_medium = m_EF_mu30_medium;\
   o_m_EF_mu30_tight = m_EF_mu30_tight;\
   o_m_EF_mu40_MSonly_barrel = m_EF_mu40_MSonly_barrel;\
   o_m_EF_mu40_MSonly_barrel_medium = m_EF_mu40_MSonly_barrel_medium;\
   o_m_EF_mu40_MSonly_empty = m_EF_mu40_MSonly_empty;\
   o_m_EF_mu40_MSonly_tight = m_EF_mu40_MSonly_tight;\
   o_m_EF_mu40_MSonly_tight_L1MU11 = m_EF_mu40_MSonly_tight_L1MU11;\
   o_m_EF_mu40_MSonly_tighter = m_EF_mu40_MSonly_tighter;\
   o_m_EF_mu40_slow = m_EF_mu40_slow;\
   o_m_EF_mu40_slow_empty = m_EF_mu40_slow_empty;\
   o_m_EF_mu40_slow_medium = m_EF_mu40_slow_medium;\
   o_m_EF_mu40_slow_outOfTime = m_EF_mu40_slow_outOfTime;\
   o_m_EF_mu40_slow_outOfTime_medium = m_EF_mu40_slow_outOfTime_medium;\
   o_m_EF_mu4T = m_EF_mu4T;\
   o_m_EF_mu4T_DiMu = m_EF_mu4T_DiMu;\
   o_m_EF_mu4T_DiMu_FS_noOS = m_EF_mu4T_DiMu_FS_noOS;\
   o_m_EF_mu4T_Jpsimumu = m_EF_mu4T_Jpsimumu;\
   o_m_EF_mu4T_Trk_Jpsi = m_EF_mu4T_Trk_Jpsi;\
   o_m_EF_mu4T_Trk_Upsi_FS = m_EF_mu4T_Trk_Upsi_FS;\
   o_m_EF_mu4T_Upsimumu_FS = m_EF_mu4T_Upsimumu_FS;\
   o_m_EF_mu4T_Upsimumu_SiTrk_FS = m_EF_mu4T_Upsimumu_SiTrk_FS;\
   o_m_EF_mu4T_Upsimumu_tight_FS = m_EF_mu4T_Upsimumu_tight_FS;\
   o_m_EF_mu4T_j45_a4tc_EFFS_xe45_loose_noMu = m_EF_mu4T_j45_a4tc_EFFS_xe45_loose_noMu;\
   o_m_EF_mu4T_j45_a4tc_EFFS_xe55_noMu = m_EF_mu4T_j45_a4tc_EFFS_xe55_noMu;\
   o_m_EF_mu4Timu6i_DiMu_DY = m_EF_mu4Timu6i_DiMu_DY;\
   o_m_EF_mu4Timu6i_DiMu_DY14_noVtx_noOS = m_EF_mu4Timu6i_DiMu_DY14_noVtx_noOS;\
   o_m_EF_mu4Tmu6_Bmumu = m_EF_mu4Tmu6_Bmumu;\
   o_m_EF_mu4Tmu6_Bmumux = m_EF_mu4Tmu6_Bmumux;\
   o_m_EF_mu4Tmu6_DiMu = m_EF_mu4Tmu6_DiMu;\
   o_m_EF_mu4Tmu6_DiMu_DY20 = m_EF_mu4Tmu6_DiMu_DY20;\
   o_m_EF_mu4Tmu6_DiMu_noVtx_noOS = m_EF_mu4Tmu6_DiMu_noVtx_noOS;\
   o_m_EF_mu4Tmu6_Jpsimumu = m_EF_mu4Tmu6_Jpsimumu;\
   o_m_EF_mu4Tmu6_Jpsimumu_IDTrkNoCut = m_EF_mu4Tmu6_Jpsimumu_IDTrkNoCut;\
   o_m_EF_mu4Tmu6_Upsimumu = m_EF_mu4Tmu6_Upsimumu;\
   o_m_EF_mu4_L1J10_matched = m_EF_mu4_L1J10_matched;\
   o_m_EF_mu4_L1J15_matched = m_EF_mu4_L1J15_matched;\
   o_m_EF_mu4_L1J20_matched = m_EF_mu4_L1J20_matched;\
   o_m_EF_mu4_L1J30_matched = m_EF_mu4_L1J30_matched;\
   o_m_EF_mu4_L1J50_matched = m_EF_mu4_L1J50_matched;\
   o_m_EF_mu4_L1J75_matched = m_EF_mu4_L1J75_matched;\
   o_m_EF_mu4_L1MU11_MSonly_cosmic = m_EF_mu4_L1MU11_MSonly_cosmic;\
   o_m_EF_mu4_L1MU11_cosmic = m_EF_mu4_L1MU11_cosmic;\
   o_m_EF_mu4_cosmic = m_EF_mu4_cosmic;\
   o_m_EF_mu4_empty_NoAlg = m_EF_mu4_empty_NoAlg;\
   o_m_EF_mu4_firstempty_NoAlg = m_EF_mu4_firstempty_NoAlg;\
   o_m_EF_mu4_j10_a4tc_EFFS_matched = m_EF_mu4_j10_a4tc_EFFS_matched;\
   o_m_EF_mu4_j135_a4tc_EFFS_L1matched = m_EF_mu4_j135_a4tc_EFFS_L1matched;\
   o_m_EF_mu4_j180_a4tc_EFFS_L1matched = m_EF_mu4_j180_a4tc_EFFS_L1matched;\
   o_m_EF_mu4_unpaired_iso_NoAlg = m_EF_mu4_unpaired_iso_NoAlg;\
   o_m_EF_mu6 = m_EF_mu6;\
   o_m_EF_mu6_DiMu_noOS = m_EF_mu6_DiMu_noOS;\
   o_m_EF_mu6_Jpsimumu = m_EF_mu6_Jpsimumu;\
   o_m_EF_mu6_Jpsimumu_SiTrk = m_EF_mu6_Jpsimumu_SiTrk;\
   o_m_EF_mu6_Jpsimumu_tight = m_EF_mu6_Jpsimumu_tight;\
   o_m_EF_mu6_Trk_Jpsi_loose = m_EF_mu6_Trk_Jpsi_loose;\
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
   o_m_ph_OQRecalc = std::vector<unsigned int>(*m_ph_OQRecalc);\
   o_m_ph_convFlag = std::vector<int>(*m_ph_convFlag);\
   o_m_ph_isConv = std::vector<int>(*m_ph_isConv);\
   o_m_ph_nConv = std::vector<int>(*m_ph_nConv);\
   o_m_ph_nSingleTrackConv = std::vector<int>(*m_ph_nSingleTrackConv);\
   o_m_ph_nDoubleTrackConv = std::vector<int>(*m_ph_nDoubleTrackConv);\
   o_m_ph_loose = std::vector<int>(*m_ph_loose);\
   o_m_ph_looseIso = std::vector<int>(*m_ph_looseIso);\
   o_m_ph_tight = std::vector<int>(*m_ph_tight);\
   o_m_ph_tightIso = std::vector<int>(*m_ph_tightIso);\
   o_m_ph_looseAR = std::vector<int>(*m_ph_looseAR);\
   o_m_ph_looseARIso = std::vector<int>(*m_ph_looseARIso);\
   o_m_ph_tightAR = std::vector<int>(*m_ph_tightAR);\
   o_m_ph_tightARIso = std::vector<int>(*m_ph_tightARIso);\
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
   o_m_ph_nucone20 = std::vector<float>(*m_ph_nucone20);\
   o_m_ph_nucone30 = std::vector<float>(*m_ph_nucone30);\
   o_m_ph_nucone40 = std::vector<float>(*m_ph_nucone40);\
   o_m_ph_Etcone15_pt_corrected = std::vector<float>(*m_ph_Etcone15_pt_corrected);\
   o_m_ph_Etcone20_pt_corrected = std::vector<float>(*m_ph_Etcone20_pt_corrected);\
   o_m_ph_Etcone25_pt_corrected = std::vector<float>(*m_ph_Etcone25_pt_corrected);\
   o_m_ph_Etcone30_pt_corrected = std::vector<float>(*m_ph_Etcone30_pt_corrected);\
   o_m_ph_Etcone35_pt_corrected = std::vector<float>(*m_ph_Etcone35_pt_corrected);\
   o_m_ph_Etcone40_pt_corrected = std::vector<float>(*m_ph_Etcone40_pt_corrected);\
   o_m_ph_convanglematch = std::vector<float>(*m_ph_convanglematch);\
   o_m_ph_convtrackmatch = std::vector<float>(*m_ph_convtrackmatch);\
   o_m_ph_hasconv = std::vector<int>(*m_ph_hasconv);\
   o_m_ph_convvtxx = std::vector<float>(*m_ph_convvtxx);\
   o_m_ph_convvtxy = std::vector<float>(*m_ph_convvtxy);\
   o_m_ph_convvtxz = std::vector<float>(*m_ph_convvtxz);\
   o_m_ph_Rconv = std::vector<float>(*m_ph_Rconv);\
   o_m_ph_zconv = std::vector<float>(*m_ph_zconv);\
   o_m_ph_convvtxchi2 = std::vector<float>(*m_ph_convvtxchi2);\
   o_m_ph_pt1conv = std::vector<float>(*m_ph_pt1conv);\
   o_m_ph_convtrk1nBLHits = std::vector<int>(*m_ph_convtrk1nBLHits);\
   o_m_ph_convtrk1nPixHits = std::vector<int>(*m_ph_convtrk1nPixHits);\
   o_m_ph_convtrk1nSCTHits = std::vector<int>(*m_ph_convtrk1nSCTHits);\
   o_m_ph_convtrk1nTRTHits = std::vector<int>(*m_ph_convtrk1nTRTHits);\
   o_m_ph_pt2conv = std::vector<float>(*m_ph_pt2conv);\
   o_m_ph_convtrk2nBLHits = std::vector<int>(*m_ph_convtrk2nBLHits);\
   o_m_ph_convtrk2nPixHits = std::vector<int>(*m_ph_convtrk2nPixHits);\
   o_m_ph_convtrk2nSCTHits = std::vector<int>(*m_ph_convtrk2nSCTHits);\
   o_m_ph_convtrk2nTRTHits = std::vector<int>(*m_ph_convtrk2nTRTHits);\
   o_m_ph_ptconv = std::vector<float>(*m_ph_ptconv);\
   o_m_ph_pzconv = std::vector<float>(*m_ph_pzconv);\
   o_m_ph_reta = std::vector<float>(*m_ph_reta);\
   o_m_ph_rphi = std::vector<float>(*m_ph_rphi);\
   o_m_ph_EtringnoisedR03sig2 = std::vector<float>(*m_ph_EtringnoisedR03sig2);\
   o_m_ph_EtringnoisedR03sig3 = std::vector<float>(*m_ph_EtringnoisedR03sig3);\
   o_m_ph_EtringnoisedR03sig4 = std::vector<float>(*m_ph_EtringnoisedR03sig4);\
   o_m_ph_isolationlikelihoodjets = std::vector<double>(*m_ph_isolationlikelihoodjets);\
   o_m_ph_isolationlikelihoodhqelectrons = std::vector<double>(*m_ph_isolationlikelihoodhqelectrons);\
   o_m_ph_loglikelihood = std::vector<double>(*m_ph_loglikelihood);\
   o_m_ph_photonweight = std::vector<double>(*m_ph_photonweight);\
   o_m_ph_photonbgweight = std::vector<double>(*m_ph_photonbgweight);\
   o_m_ph_neuralnet = std::vector<double>(*m_ph_neuralnet);\
   o_m_ph_Hmatrix = std::vector<double>(*m_ph_Hmatrix);\
   o_m_ph_Hmatrix5 = std::vector<double>(*m_ph_Hmatrix5);\
   o_m_ph_adaboost = std::vector<double>(*m_ph_adaboost);\
   o_m_ph_zvertex = std::vector<float>(*m_ph_zvertex);\
   o_m_ph_errz = std::vector<float>(*m_ph_errz);\
   o_m_ph_etap = std::vector<float>(*m_ph_etap);\
   o_m_ph_depth = std::vector<float>(*m_ph_depth);\
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
   o_m_ph_calibHitsShowerDepth = std::vector<float>(*m_ph_calibHitsShowerDepth);\
   o_m_ph_isIso = std::vector<unsigned int>(*m_ph_isIso);\
   o_m_ph_mvaptcone20 = std::vector<float>(*m_ph_mvaptcone20);\
   o_m_ph_mvaptcone30 = std::vector<float>(*m_ph_mvaptcone30);\
   o_m_ph_mvaptcone40 = std::vector<float>(*m_ph_mvaptcone40);\
   o_m_ph_topoEtcone20 = std::vector<float>(*m_ph_topoEtcone20);\
   o_m_ph_topoEtcone40 = std::vector<float>(*m_ph_topoEtcone40);\
   o_m_ph_topoEtcone60 = std::vector<float>(*m_ph_topoEtcone60);\
   o_m_ph_jet_dr = std::vector<float>(*m_ph_jet_dr);\
   o_m_ph_jet_E = std::vector<float>(*m_ph_jet_E);\
   o_m_ph_jet_pt = std::vector<float>(*m_ph_jet_pt);\
   o_m_ph_jet_m = std::vector<float>(*m_ph_jet_m);\
   o_m_ph_jet_eta = std::vector<float>(*m_ph_jet_eta);\
   o_m_ph_jet_phi = std::vector<float>(*m_ph_jet_phi);\
   o_m_ph_jet_matched = std::vector<int>(*m_ph_jet_matched);\
   o_m_ph_convIP = std::vector<float>(*m_ph_convIP);\
   o_m_ph_convIPRev = std::vector<float>(*m_ph_convIPRev);\
   o_m_ph_ptIsolationCone = std::vector<float>(*m_ph_ptIsolationCone);\
   o_m_ph_ptIsolationConePhAngle = std::vector<float>(*m_ph_ptIsolationConePhAngle);\
   o_m_ph_Etcone40_ED_corrected = std::vector<float>(*m_ph_Etcone40_ED_corrected);\
   o_m_ph_Etcone40_corrected = std::vector<float>(*m_ph_Etcone40_corrected);\
   o_m_ph_topodr = std::vector<float>(*m_ph_topodr);\
   o_m_ph_topopt = std::vector<float>(*m_ph_topopt);\
   o_m_ph_topoeta = std::vector<float>(*m_ph_topoeta);\
   o_m_ph_topophi = std::vector<float>(*m_ph_topophi);\
   o_m_ph_topomatched = std::vector<int>(*m_ph_topomatched);\
   o_m_ph_topoEMdr = std::vector<float>(*m_ph_topoEMdr);\
   o_m_ph_topoEMpt = std::vector<float>(*m_ph_topoEMpt);\
   o_m_ph_topoEMeta = std::vector<float>(*m_ph_topoEMeta);\
   o_m_ph_topoEMphi = std::vector<float>(*m_ph_topoEMphi);\
   o_m_ph_topoEMmatched = std::vector<int>(*m_ph_topoEMmatched);\
   o_m_ph_EF_dr = std::vector<float>(*m_ph_EF_dr);\
   o_m_ph_EF_index = std::vector<int>(*m_ph_EF_index);\
   o_m_ph_L2_dr = std::vector<float>(*m_ph_L2_dr);\
   o_m_ph_L2_index = std::vector<int>(*m_ph_L2_index);\
   o_m_ph_L1_dr = std::vector<float>(*m_ph_L1_dr);\
   o_m_ph_L1_index = std::vector<int>(*m_ph_L1_index);\
   o_m_ph_el_index = std::vector<int>(*m_ph_el_index);\
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
   o_m_mu_staco_matchchi2 = std::vector<float>(*m_mu_staco_matchchi2);\
   o_m_mu_staco_matchndof = std::vector<int>(*m_mu_staco_matchndof);\
   o_m_mu_staco_etcone20 = std::vector<float>(*m_mu_staco_etcone20);\
   o_m_mu_staco_etcone30 = std::vector<float>(*m_mu_staco_etcone30);\
   o_m_mu_staco_etcone40 = std::vector<float>(*m_mu_staco_etcone40);\
   o_m_mu_staco_nucone20 = std::vector<float>(*m_mu_staco_nucone20);\
   o_m_mu_staco_nucone30 = std::vector<float>(*m_mu_staco_nucone30);\
   o_m_mu_staco_nucone40 = std::vector<float>(*m_mu_staco_nucone40);\
   o_m_mu_staco_ptcone20 = std::vector<float>(*m_mu_staco_ptcone20);\
   o_m_mu_staco_ptcone30 = std::vector<float>(*m_mu_staco_ptcone30);\
   o_m_mu_staco_ptcone40 = std::vector<float>(*m_mu_staco_ptcone40);\
   o_m_mu_staco_energyLossPar = std::vector<float>(*m_mu_staco_energyLossPar);\
   o_m_mu_staco_energyLossErr = std::vector<float>(*m_mu_staco_energyLossErr);\
   o_m_mu_staco_etCore = std::vector<float>(*m_mu_staco_etCore);\
   o_m_mu_staco_energyLossType = std::vector<float>(*m_mu_staco_energyLossType);\
   o_m_mu_staco_caloMuonIdTag = std::vector<unsigned short>(*m_mu_staco_caloMuonIdTag);\
   o_m_mu_staco_caloLRLikelihood = std::vector<double>(*m_mu_staco_caloLRLikelihood);\
   o_m_mu_staco_bestMatch = std::vector<int>(*m_mu_staco_bestMatch);\
   o_m_mu_staco_isStandAloneMuon = std::vector<int>(*m_mu_staco_isStandAloneMuon);\
   o_m_mu_staco_isCombinedMuon = std::vector<int>(*m_mu_staco_isCombinedMuon);\
   o_m_mu_staco_isLowPtReconstructedMuon = std::vector<int>(*m_mu_staco_isLowPtReconstructedMuon);\
   o_m_mu_staco_isSegmentTaggedMuon = std::vector<int>(*m_mu_staco_isSegmentTaggedMuon);\
   o_m_mu_staco_isCaloMuonId = std::vector<int>(*m_mu_staco_isCaloMuonId);\
   o_m_mu_staco_alsoFoundByLowPt = std::vector<int>(*m_mu_staco_alsoFoundByLowPt);\
   o_m_mu_staco_alsoFoundByCaloMuonId = std::vector<int>(*m_mu_staco_alsoFoundByCaloMuonId);\
   o_m_mu_staco_loose = std::vector<int>(*m_mu_staco_loose);\
   o_m_mu_staco_medium = std::vector<int>(*m_mu_staco_medium);\
   o_m_mu_staco_tight = std::vector<int>(*m_mu_staco_tight);\
   o_m_mu_staco_d0_exPV = std::vector<float>(*m_mu_staco_d0_exPV);\
   o_m_mu_staco_z0_exPV = std::vector<float>(*m_mu_staco_z0_exPV);\
   o_m_mu_staco_phi_exPV = std::vector<float>(*m_mu_staco_phi_exPV);\
   o_m_mu_staco_theta_exPV = std::vector<float>(*m_mu_staco_theta_exPV);\
   o_m_mu_staco_qoverp_exPV = std::vector<float>(*m_mu_staco_qoverp_exPV);\
   o_m_mu_staco_cb_d0_exPV = std::vector<float>(*m_mu_staco_cb_d0_exPV);\
   o_m_mu_staco_cb_z0_exPV = std::vector<float>(*m_mu_staco_cb_z0_exPV);\
   o_m_mu_staco_cb_phi_exPV = std::vector<float>(*m_mu_staco_cb_phi_exPV);\
   o_m_mu_staco_cb_theta_exPV = std::vector<float>(*m_mu_staco_cb_theta_exPV);\
   o_m_mu_staco_cb_qoverp_exPV = std::vector<float>(*m_mu_staco_cb_qoverp_exPV);\
   o_m_mu_staco_id_d0_exPV = std::vector<float>(*m_mu_staco_id_d0_exPV);\
   o_m_mu_staco_id_z0_exPV = std::vector<float>(*m_mu_staco_id_z0_exPV);\
   o_m_mu_staco_id_phi_exPV = std::vector<float>(*m_mu_staco_id_phi_exPV);\
   o_m_mu_staco_id_theta_exPV = std::vector<float>(*m_mu_staco_id_theta_exPV);\
   o_m_mu_staco_id_qoverp_exPV = std::vector<float>(*m_mu_staco_id_qoverp_exPV);\
   o_m_mu_staco_me_d0_exPV = std::vector<float>(*m_mu_staco_me_d0_exPV);\
   o_m_mu_staco_me_z0_exPV = std::vector<float>(*m_mu_staco_me_z0_exPV);\
   o_m_mu_staco_me_phi_exPV = std::vector<float>(*m_mu_staco_me_phi_exPV);\
   o_m_mu_staco_me_theta_exPV = std::vector<float>(*m_mu_staco_me_theta_exPV);\
   o_m_mu_staco_me_qoverp_exPV = std::vector<float>(*m_mu_staco_me_qoverp_exPV);\
   o_m_mu_staco_ie_d0_exPV = std::vector<float>(*m_mu_staco_ie_d0_exPV);\
   o_m_mu_staco_ie_z0_exPV = std::vector<float>(*m_mu_staco_ie_z0_exPV);\
   o_m_mu_staco_ie_phi_exPV = std::vector<float>(*m_mu_staco_ie_phi_exPV);\
   o_m_mu_staco_ie_theta_exPV = std::vector<float>(*m_mu_staco_ie_theta_exPV);\
   o_m_mu_staco_ie_qoverp_exPV = std::vector<float>(*m_mu_staco_ie_qoverp_exPV);\
   o_m_mu_staco_SpaceTime_detID = std::vector<std::vector<int> >(*m_mu_staco_SpaceTime_detID);\
   o_m_mu_staco_SpaceTime_t = std::vector<std::vector<float> >(*m_mu_staco_SpaceTime_t);\
   o_m_mu_staco_SpaceTime_tError = std::vector<std::vector<float> >(*m_mu_staco_SpaceTime_tError);\
   o_m_mu_staco_SpaceTime_weight = std::vector<std::vector<float> >(*m_mu_staco_SpaceTime_weight);\
   o_m_mu_staco_SpaceTime_x = std::vector<std::vector<float> >(*m_mu_staco_SpaceTime_x);\
   o_m_mu_staco_SpaceTime_y = std::vector<std::vector<float> >(*m_mu_staco_SpaceTime_y);\
   o_m_mu_staco_SpaceTime_z = std::vector<std::vector<float> >(*m_mu_staco_SpaceTime_z);\
   o_m_mu_staco_cov_d0_exPV = std::vector<float>(*m_mu_staco_cov_d0_exPV);\
   o_m_mu_staco_cov_z0_exPV = std::vector<float>(*m_mu_staco_cov_z0_exPV);\
   o_m_mu_staco_cov_phi_exPV = std::vector<float>(*m_mu_staco_cov_phi_exPV);\
   o_m_mu_staco_cov_theta_exPV = std::vector<float>(*m_mu_staco_cov_theta_exPV);\
   o_m_mu_staco_cov_qoverp_exPV = std::vector<float>(*m_mu_staco_cov_qoverp_exPV);\
   o_m_mu_staco_cov_d0_z0_exPV = std::vector<float>(*m_mu_staco_cov_d0_z0_exPV);\
   o_m_mu_staco_cov_d0_phi_exPV = std::vector<float>(*m_mu_staco_cov_d0_phi_exPV);\
   o_m_mu_staco_cov_d0_theta_exPV = std::vector<float>(*m_mu_staco_cov_d0_theta_exPV);\
   o_m_mu_staco_cov_d0_qoverp_exPV = std::vector<float>(*m_mu_staco_cov_d0_qoverp_exPV);\
   o_m_mu_staco_cov_z0_phi_exPV = std::vector<float>(*m_mu_staco_cov_z0_phi_exPV);\
   o_m_mu_staco_cov_z0_theta_exPV = std::vector<float>(*m_mu_staco_cov_z0_theta_exPV);\
   o_m_mu_staco_cov_z0_qoverp_exPV = std::vector<float>(*m_mu_staco_cov_z0_qoverp_exPV);\
   o_m_mu_staco_cov_phi_theta_exPV = std::vector<float>(*m_mu_staco_cov_phi_theta_exPV);\
   o_m_mu_staco_cov_phi_qoverp_exPV = std::vector<float>(*m_mu_staco_cov_phi_qoverp_exPV);\
   o_m_mu_staco_cov_theta_qoverp_exPV = std::vector<float>(*m_mu_staco_cov_theta_qoverp_exPV);\
   o_m_mu_staco_id_cov_d0_exPV = std::vector<float>(*m_mu_staco_id_cov_d0_exPV);\
   o_m_mu_staco_id_cov_z0_exPV = std::vector<float>(*m_mu_staco_id_cov_z0_exPV);\
   o_m_mu_staco_id_cov_phi_exPV = std::vector<float>(*m_mu_staco_id_cov_phi_exPV);\
   o_m_mu_staco_id_cov_theta_exPV = std::vector<float>(*m_mu_staco_id_cov_theta_exPV);\
   o_m_mu_staco_id_cov_qoverp_exPV = std::vector<float>(*m_mu_staco_id_cov_qoverp_exPV);\
   o_m_mu_staco_id_cov_d0_z0_exPV = std::vector<float>(*m_mu_staco_id_cov_d0_z0_exPV);\
   o_m_mu_staco_id_cov_d0_phi_exPV = std::vector<float>(*m_mu_staco_id_cov_d0_phi_exPV);\
   o_m_mu_staco_id_cov_d0_theta_exPV = std::vector<float>(*m_mu_staco_id_cov_d0_theta_exPV);\
   o_m_mu_staco_id_cov_d0_qoverp_exPV = std::vector<float>(*m_mu_staco_id_cov_d0_qoverp_exPV);\
   o_m_mu_staco_id_cov_z0_phi_exPV = std::vector<float>(*m_mu_staco_id_cov_z0_phi_exPV);\
   o_m_mu_staco_id_cov_z0_theta_exPV = std::vector<float>(*m_mu_staco_id_cov_z0_theta_exPV);\
   o_m_mu_staco_id_cov_z0_qoverp_exPV = std::vector<float>(*m_mu_staco_id_cov_z0_qoverp_exPV);\
   o_m_mu_staco_id_cov_phi_theta_exPV = std::vector<float>(*m_mu_staco_id_cov_phi_theta_exPV);\
   o_m_mu_staco_id_cov_phi_qoverp_exPV = std::vector<float>(*m_mu_staco_id_cov_phi_qoverp_exPV);\
   o_m_mu_staco_id_cov_theta_qoverp_exPV = std::vector<float>(*m_mu_staco_id_cov_theta_qoverp_exPV);\
   o_m_mu_staco_me_cov_d0_exPV = std::vector<float>(*m_mu_staco_me_cov_d0_exPV);\
   o_m_mu_staco_me_cov_z0_exPV = std::vector<float>(*m_mu_staco_me_cov_z0_exPV);\
   o_m_mu_staco_me_cov_phi_exPV = std::vector<float>(*m_mu_staco_me_cov_phi_exPV);\
   o_m_mu_staco_me_cov_theta_exPV = std::vector<float>(*m_mu_staco_me_cov_theta_exPV);\
   o_m_mu_staco_me_cov_qoverp_exPV = std::vector<float>(*m_mu_staco_me_cov_qoverp_exPV);\
   o_m_mu_staco_me_cov_d0_z0_exPV = std::vector<float>(*m_mu_staco_me_cov_d0_z0_exPV);\
   o_m_mu_staco_me_cov_d0_phi_exPV = std::vector<float>(*m_mu_staco_me_cov_d0_phi_exPV);\
   o_m_mu_staco_me_cov_d0_theta_exPV = std::vector<float>(*m_mu_staco_me_cov_d0_theta_exPV);\
   o_m_mu_staco_me_cov_d0_qoverp_exPV = std::vector<float>(*m_mu_staco_me_cov_d0_qoverp_exPV);\
   o_m_mu_staco_me_cov_z0_phi_exPV = std::vector<float>(*m_mu_staco_me_cov_z0_phi_exPV);\
   o_m_mu_staco_me_cov_z0_theta_exPV = std::vector<float>(*m_mu_staco_me_cov_z0_theta_exPV);\
   o_m_mu_staco_me_cov_z0_qoverp_exPV = std::vector<float>(*m_mu_staco_me_cov_z0_qoverp_exPV);\
   o_m_mu_staco_me_cov_phi_theta_exPV = std::vector<float>(*m_mu_staco_me_cov_phi_theta_exPV);\
   o_m_mu_staco_me_cov_phi_qoverp_exPV = std::vector<float>(*m_mu_staco_me_cov_phi_qoverp_exPV);\
   o_m_mu_staco_me_cov_theta_qoverp_exPV = std::vector<float>(*m_mu_staco_me_cov_theta_qoverp_exPV);\
   o_m_mu_staco_ms_d0 = std::vector<float>(*m_mu_staco_ms_d0);\
   o_m_mu_staco_ms_z0 = std::vector<float>(*m_mu_staco_ms_z0);\
   o_m_mu_staco_ms_phi = std::vector<float>(*m_mu_staco_ms_phi);\
   o_m_mu_staco_ms_theta = std::vector<float>(*m_mu_staco_ms_theta);\
   o_m_mu_staco_ms_qoverp = std::vector<float>(*m_mu_staco_ms_qoverp);\
   o_m_mu_staco_id_d0 = std::vector<float>(*m_mu_staco_id_d0);\
   o_m_mu_staco_id_z0 = std::vector<float>(*m_mu_staco_id_z0);\
   o_m_mu_staco_id_phi = std::vector<float>(*m_mu_staco_id_phi);\
   o_m_mu_staco_id_theta = std::vector<float>(*m_mu_staco_id_theta);\
   o_m_mu_staco_id_qoverp = std::vector<float>(*m_mu_staco_id_qoverp);\
   o_m_mu_staco_me_d0 = std::vector<float>(*m_mu_staco_me_d0);\
   o_m_mu_staco_me_z0 = std::vector<float>(*m_mu_staco_me_z0);\
   o_m_mu_staco_me_phi = std::vector<float>(*m_mu_staco_me_phi);\
   o_m_mu_staco_me_theta = std::vector<float>(*m_mu_staco_me_theta);\
   o_m_mu_staco_me_qoverp = std::vector<float>(*m_mu_staco_me_qoverp);\
   o_m_mu_staco_ie_d0 = std::vector<float>(*m_mu_staco_ie_d0);\
   o_m_mu_staco_ie_z0 = std::vector<float>(*m_mu_staco_ie_z0);\
   o_m_mu_staco_ie_phi = std::vector<float>(*m_mu_staco_ie_phi);\
   o_m_mu_staco_ie_theta = std::vector<float>(*m_mu_staco_ie_theta);\
   o_m_mu_staco_ie_qoverp = std::vector<float>(*m_mu_staco_ie_qoverp);\
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
   o_m_mu_staco_nGangedPixels = std::vector<int>(*m_mu_staco_nGangedPixels);\
   o_m_mu_staco_nPixelDeadSensors = std::vector<int>(*m_mu_staco_nPixelDeadSensors);\
   o_m_mu_staco_nSCTDeadSensors = std::vector<int>(*m_mu_staco_nSCTDeadSensors);\
   o_m_mu_staco_nTRTDeadStraws = std::vector<int>(*m_mu_staco_nTRTDeadStraws);\
   o_m_mu_staco_expectBLayerHit = std::vector<int>(*m_mu_staco_expectBLayerHit);\
   o_m_mu_staco_nMDTHits = std::vector<int>(*m_mu_staco_nMDTHits);\
   o_m_mu_staco_nMDTHoles = std::vector<int>(*m_mu_staco_nMDTHoles);\
   o_m_mu_staco_nCSCEtaHits = std::vector<int>(*m_mu_staco_nCSCEtaHits);\
   o_m_mu_staco_nCSCEtaHoles = std::vector<int>(*m_mu_staco_nCSCEtaHoles);\
   o_m_mu_staco_nCSCPhiHits = std::vector<int>(*m_mu_staco_nCSCPhiHits);\
   o_m_mu_staco_nCSCPhiHoles = std::vector<int>(*m_mu_staco_nCSCPhiHoles);\
   o_m_mu_staco_nRPCEtaHits = std::vector<int>(*m_mu_staco_nRPCEtaHits);\
   o_m_mu_staco_nRPCEtaHoles = std::vector<int>(*m_mu_staco_nRPCEtaHoles);\
   o_m_mu_staco_nRPCPhiHits = std::vector<int>(*m_mu_staco_nRPCPhiHits);\
   o_m_mu_staco_nRPCPhiHoles = std::vector<int>(*m_mu_staco_nRPCPhiHoles);\
   o_m_mu_staco_nTGCEtaHits = std::vector<int>(*m_mu_staco_nTGCEtaHits);\
   o_m_mu_staco_nTGCEtaHoles = std::vector<int>(*m_mu_staco_nTGCEtaHoles);\
   o_m_mu_staco_nTGCPhiHits = std::vector<int>(*m_mu_staco_nTGCPhiHits);\
   o_m_mu_staco_nTGCPhiHoles = std::vector<int>(*m_mu_staco_nTGCPhiHoles);\
   o_m_mu_staco_nMDTBIHits = std::vector<int>(*m_mu_staco_nMDTBIHits);\
   o_m_mu_staco_nMDTBMHits = std::vector<int>(*m_mu_staco_nMDTBMHits);\
   o_m_mu_staco_nMDTBOHits = std::vector<int>(*m_mu_staco_nMDTBOHits);\
   o_m_mu_staco_nMDTBEEHits = std::vector<int>(*m_mu_staco_nMDTBEEHits);\
   o_m_mu_staco_nMDTBIS78Hits = std::vector<int>(*m_mu_staco_nMDTBIS78Hits);\
   o_m_mu_staco_nMDTEIHits = std::vector<int>(*m_mu_staco_nMDTEIHits);\
   o_m_mu_staco_nMDTEMHits = std::vector<int>(*m_mu_staco_nMDTEMHits);\
   o_m_mu_staco_nMDTEOHits = std::vector<int>(*m_mu_staco_nMDTEOHits);\
   o_m_mu_staco_nMDTEEHits = std::vector<int>(*m_mu_staco_nMDTEEHits);\
   o_m_mu_staco_nRPCLayer1EtaHits = std::vector<int>(*m_mu_staco_nRPCLayer1EtaHits);\
   o_m_mu_staco_nRPCLayer2EtaHits = std::vector<int>(*m_mu_staco_nRPCLayer2EtaHits);\
   o_m_mu_staco_nRPCLayer3EtaHits = std::vector<int>(*m_mu_staco_nRPCLayer3EtaHits);\
   o_m_mu_staco_nRPCLayer1PhiHits = std::vector<int>(*m_mu_staco_nRPCLayer1PhiHits);\
   o_m_mu_staco_nRPCLayer2PhiHits = std::vector<int>(*m_mu_staco_nRPCLayer2PhiHits);\
   o_m_mu_staco_nRPCLayer3PhiHits = std::vector<int>(*m_mu_staco_nRPCLayer3PhiHits);\
   o_m_mu_staco_nTGCLayer1EtaHits = std::vector<int>(*m_mu_staco_nTGCLayer1EtaHits);\
   o_m_mu_staco_nTGCLayer2EtaHits = std::vector<int>(*m_mu_staco_nTGCLayer2EtaHits);\
   o_m_mu_staco_nTGCLayer3EtaHits = std::vector<int>(*m_mu_staco_nTGCLayer3EtaHits);\
   o_m_mu_staco_nTGCLayer4EtaHits = std::vector<int>(*m_mu_staco_nTGCLayer4EtaHits);\
   o_m_mu_staco_nTGCLayer1PhiHits = std::vector<int>(*m_mu_staco_nTGCLayer1PhiHits);\
   o_m_mu_staco_nTGCLayer2PhiHits = std::vector<int>(*m_mu_staco_nTGCLayer2PhiHits);\
   o_m_mu_staco_nTGCLayer3PhiHits = std::vector<int>(*m_mu_staco_nTGCLayer3PhiHits);\
   o_m_mu_staco_nTGCLayer4PhiHits = std::vector<int>(*m_mu_staco_nTGCLayer4PhiHits);\
   o_m_mu_staco_barrelSectors = std::vector<int>(*m_mu_staco_barrelSectors);\
   o_m_mu_staco_endcapSectors = std::vector<int>(*m_mu_staco_endcapSectors);\
   o_m_mu_staco_trackd0 = std::vector<float>(*m_mu_staco_trackd0);\
   o_m_mu_staco_trackz0 = std::vector<float>(*m_mu_staco_trackz0);\
   o_m_mu_staco_trackphi = std::vector<float>(*m_mu_staco_trackphi);\
   o_m_mu_staco_tracktheta = std::vector<float>(*m_mu_staco_tracktheta);\
   o_m_mu_staco_trackqoverp = std::vector<float>(*m_mu_staco_trackqoverp);\
   o_m_mu_staco_trackcov_d0 = std::vector<float>(*m_mu_staco_trackcov_d0);\
   o_m_mu_staco_trackcov_z0 = std::vector<float>(*m_mu_staco_trackcov_z0);\
   o_m_mu_staco_trackcov_phi = std::vector<float>(*m_mu_staco_trackcov_phi);\
   o_m_mu_staco_trackcov_theta = std::vector<float>(*m_mu_staco_trackcov_theta);\
   o_m_mu_staco_trackcov_qoverp = std::vector<float>(*m_mu_staco_trackcov_qoverp);\
   o_m_mu_staco_trackcov_d0_z0 = std::vector<float>(*m_mu_staco_trackcov_d0_z0);\
   o_m_mu_staco_trackcov_d0_phi = std::vector<float>(*m_mu_staco_trackcov_d0_phi);\
   o_m_mu_staco_trackcov_d0_theta = std::vector<float>(*m_mu_staco_trackcov_d0_theta);\
   o_m_mu_staco_trackcov_d0_qoverp = std::vector<float>(*m_mu_staco_trackcov_d0_qoverp);\
   o_m_mu_staco_trackcov_z0_phi = std::vector<float>(*m_mu_staco_trackcov_z0_phi);\
   o_m_mu_staco_trackcov_z0_theta = std::vector<float>(*m_mu_staco_trackcov_z0_theta);\
   o_m_mu_staco_trackcov_z0_qoverp = std::vector<float>(*m_mu_staco_trackcov_z0_qoverp);\
   o_m_mu_staco_trackcov_phi_theta = std::vector<float>(*m_mu_staco_trackcov_phi_theta);\
   o_m_mu_staco_trackcov_phi_qoverp = std::vector<float>(*m_mu_staco_trackcov_phi_qoverp);\
   o_m_mu_staco_trackcov_theta_qoverp = std::vector<float>(*m_mu_staco_trackcov_theta_qoverp);\
   o_m_mu_staco_trackfitchi2 = std::vector<float>(*m_mu_staco_trackfitchi2);\
   o_m_mu_staco_trackfitndof = std::vector<int>(*m_mu_staco_trackfitndof);\
   o_m_mu_staco_hastrack = std::vector<int>(*m_mu_staco_hastrack);\
   o_m_mu_staco_trackd0beam = std::vector<float>(*m_mu_staco_trackd0beam);\
   o_m_mu_staco_trackz0beam = std::vector<float>(*m_mu_staco_trackz0beam);\
   o_m_mu_staco_tracksigd0beam = std::vector<float>(*m_mu_staco_tracksigd0beam);\
   o_m_mu_staco_tracksigz0beam = std::vector<float>(*m_mu_staco_tracksigz0beam);\
   o_m_mu_staco_trackd0pv = std::vector<float>(*m_mu_staco_trackd0pv);\
   o_m_mu_staco_trackz0pv = std::vector<float>(*m_mu_staco_trackz0pv);\
   o_m_mu_staco_tracksigd0pv = std::vector<float>(*m_mu_staco_tracksigd0pv);\
   o_m_mu_staco_tracksigz0pv = std::vector<float>(*m_mu_staco_tracksigz0pv);\
   o_m_mu_staco_trackIPEstimate_d0_biasedpvunbiased = std::vector<float>(*m_mu_staco_trackIPEstimate_d0_biasedpvunbiased);\
   o_m_mu_staco_trackIPEstimate_z0_biasedpvunbiased = std::vector<float>(*m_mu_staco_trackIPEstimate_z0_biasedpvunbiased);\
   o_m_mu_staco_trackIPEstimate_d0_unbiasedpvunbiased = std::vector<float>(*m_mu_staco_trackIPEstimate_d0_unbiasedpvunbiased);\
   o_m_mu_staco_trackIPEstimate_z0_unbiasedpvunbiased = std::vector<float>(*m_mu_staco_trackIPEstimate_z0_unbiasedpvunbiased);\
   o_m_mu_staco_trackIPEstimate_sigd0_biasedpvunbiased = std::vector<float>(*m_mu_staco_trackIPEstimate_sigd0_biasedpvunbiased);\
   o_m_mu_staco_trackIPEstimate_sigz0_biasedpvunbiased = std::vector<float>(*m_mu_staco_trackIPEstimate_sigz0_biasedpvunbiased);\
   o_m_mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased = std::vector<float>(*m_mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased);\
   o_m_mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased = std::vector<float>(*m_mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased);\
   o_m_mu_staco_EFCB_dr = std::vector<float>(*m_mu_staco_EFCB_dr);\
   o_m_mu_staco_EFCB_index = std::vector<int>(*m_mu_staco_EFCB_index);\
   o_m_mu_staco_EFMG_dr = std::vector<float>(*m_mu_staco_EFMG_dr);\
   o_m_mu_staco_EFMG_index = std::vector<int>(*m_mu_staco_EFMG_index);\
   o_m_mu_staco_EFME_dr = std::vector<float>(*m_mu_staco_EFME_dr);\
   o_m_mu_staco_EFME_index = std::vector<int>(*m_mu_staco_EFME_index);\
   o_m_mu_staco_L2CB_dr = std::vector<float>(*m_mu_staco_L2CB_dr);\
   o_m_mu_staco_L2CB_index = std::vector<int>(*m_mu_staco_L2CB_index);\
   o_m_mu_staco_L1_dr = std::vector<float>(*m_mu_staco_L1_dr);\
   o_m_mu_staco_L1_index = std::vector<int>(*m_mu_staco_L1_index);\
   o_m_jet_AntiKt4TopoEM_n = m_jet_AntiKt4TopoEM_n;\
   o_m_jet_AntiKt4TopoEM_E = std::vector<float>(*m_jet_AntiKt4TopoEM_E);\
   o_m_jet_AntiKt4TopoEM_pt = std::vector<float>(*m_jet_AntiKt4TopoEM_pt);\
   o_m_jet_AntiKt4TopoEM_m = std::vector<float>(*m_jet_AntiKt4TopoEM_m);\
   o_m_jet_AntiKt4TopoEM_eta = std::vector<float>(*m_jet_AntiKt4TopoEM_eta);\
   o_m_jet_AntiKt4TopoEM_phi = std::vector<float>(*m_jet_AntiKt4TopoEM_phi);\
   o_m_jet_AntiKt4TopoEM_EtaOrigin = std::vector<float>(*m_jet_AntiKt4TopoEM_EtaOrigin);\
   o_m_jet_AntiKt4TopoEM_PhiOrigin = std::vector<float>(*m_jet_AntiKt4TopoEM_PhiOrigin);\
   o_m_jet_AntiKt4TopoEM_MOrigin = std::vector<float>(*m_jet_AntiKt4TopoEM_MOrigin);\
   o_m_jet_AntiKt4TopoEM_EtaOriginEM = std::vector<float>(*m_jet_AntiKt4TopoEM_EtaOriginEM);\
   o_m_jet_AntiKt4TopoEM_PhiOriginEM = std::vector<float>(*m_jet_AntiKt4TopoEM_PhiOriginEM);\
   o_m_jet_AntiKt4TopoEM_MOriginEM = std::vector<float>(*m_jet_AntiKt4TopoEM_MOriginEM);\
   o_m_jet_AntiKt4TopoEM_WIDTH = std::vector<float>(*m_jet_AntiKt4TopoEM_WIDTH);\
   o_m_jet_AntiKt4TopoEM_n90 = std::vector<float>(*m_jet_AntiKt4TopoEM_n90);\
   o_m_jet_AntiKt4TopoEM_Timing = std::vector<float>(*m_jet_AntiKt4TopoEM_Timing);\
   o_m_jet_AntiKt4TopoEM_LArQuality = std::vector<float>(*m_jet_AntiKt4TopoEM_LArQuality);\
   o_m_jet_AntiKt4TopoEM_nTrk = std::vector<float>(*m_jet_AntiKt4TopoEM_nTrk);\
   o_m_jet_AntiKt4TopoEM_sumPtTrk = std::vector<float>(*m_jet_AntiKt4TopoEM_sumPtTrk);\
   o_m_jet_AntiKt4TopoEM_OriginIndex = std::vector<float>(*m_jet_AntiKt4TopoEM_OriginIndex);\
   o_m_jet_AntiKt4TopoEM_HECQuality = std::vector<float>(*m_jet_AntiKt4TopoEM_HECQuality);\
   o_m_jet_AntiKt4TopoEM_NegativeE = std::vector<float>(*m_jet_AntiKt4TopoEM_NegativeE);\
   o_m_jet_AntiKt4TopoEM_AverageLArQF = std::vector<float>(*m_jet_AntiKt4TopoEM_AverageLArQF);\
   o_m_jet_AntiKt4TopoEM_YFlip12 = std::vector<float>(*m_jet_AntiKt4TopoEM_YFlip12);\
   o_m_jet_AntiKt4TopoEM_YFlip23 = std::vector<float>(*m_jet_AntiKt4TopoEM_YFlip23);\
   o_m_jet_AntiKt4TopoEM_BCH_CORR_CELL = std::vector<float>(*m_jet_AntiKt4TopoEM_BCH_CORR_CELL);\
   o_m_jet_AntiKt4TopoEM_BCH_CORR_DOTX = std::vector<float>(*m_jet_AntiKt4TopoEM_BCH_CORR_DOTX);\
   o_m_jet_AntiKt4TopoEM_BCH_CORR_JET = std::vector<float>(*m_jet_AntiKt4TopoEM_BCH_CORR_JET);\
   o_m_jet_AntiKt4TopoEM_BCH_CORR_JET_FORCELL = std::vector<float>(*m_jet_AntiKt4TopoEM_BCH_CORR_JET_FORCELL);\
   o_m_jet_AntiKt4TopoEM_ENG_BAD_CELLS = std::vector<float>(*m_jet_AntiKt4TopoEM_ENG_BAD_CELLS);\
   o_m_jet_AntiKt4TopoEM_N_BAD_CELLS = std::vector<float>(*m_jet_AntiKt4TopoEM_N_BAD_CELLS);\
   o_m_jet_AntiKt4TopoEM_N_BAD_CELLS_CORR = std::vector<float>(*m_jet_AntiKt4TopoEM_N_BAD_CELLS_CORR);\
   o_m_jet_AntiKt4TopoEM_BAD_CELLS_CORR_E = std::vector<float>(*m_jet_AntiKt4TopoEM_BAD_CELLS_CORR_E);\
   o_m_jet_AntiKt4TopoEM_NumTowers = std::vector<float>(*m_jet_AntiKt4TopoEM_NumTowers);\
   o_m_jet_AntiKt4TopoEM_SamplingMax = std::vector<int>(*m_jet_AntiKt4TopoEM_SamplingMax);\
   o_m_jet_AntiKt4TopoEM_fracSamplingMax = std::vector<float>(*m_jet_AntiKt4TopoEM_fracSamplingMax);\
   o_m_jet_AntiKt4TopoEM_hecf = std::vector<float>(*m_jet_AntiKt4TopoEM_hecf);\
   o_m_jet_AntiKt4TopoEM_tgap3f = std::vector<float>(*m_jet_AntiKt4TopoEM_tgap3f);\
   o_m_jet_AntiKt4TopoEM_isUgly = std::vector<int>(*m_jet_AntiKt4TopoEM_isUgly);\
   o_m_jet_AntiKt4TopoEM_isBadLoose = std::vector<int>(*m_jet_AntiKt4TopoEM_isBadLoose);\
   o_m_jet_AntiKt4TopoEM_isBadMedium = std::vector<int>(*m_jet_AntiKt4TopoEM_isBadMedium);\
   o_m_jet_AntiKt4TopoEM_isBadTight = std::vector<int>(*m_jet_AntiKt4TopoEM_isBadTight);\
   o_m_jet_AntiKt4TopoEM_emfrac = std::vector<float>(*m_jet_AntiKt4TopoEM_emfrac);\
   o_m_jet_AntiKt4TopoEM_Offset = std::vector<float>(*m_jet_AntiKt4TopoEM_Offset);\
   o_m_jet_AntiKt4TopoEM_EMJES = std::vector<float>(*m_jet_AntiKt4TopoEM_EMJES);\
   o_m_jet_AntiKt4TopoEM_EMJES_EtaCorr = std::vector<float>(*m_jet_AntiKt4TopoEM_EMJES_EtaCorr);\
   o_m_jet_AntiKt4TopoEM_EMJESnooffset = std::vector<float>(*m_jet_AntiKt4TopoEM_EMJESnooffset);\
   o_m_jet_AntiKt4TopoEM_GCWJES = std::vector<float>(*m_jet_AntiKt4TopoEM_GCWJES);\
   o_m_jet_AntiKt4TopoEM_GCWJES_EtaCorr = std::vector<float>(*m_jet_AntiKt4TopoEM_GCWJES_EtaCorr);\
   o_m_jet_AntiKt4TopoEM_CB = std::vector<float>(*m_jet_AntiKt4TopoEM_CB);\
   o_m_jet_AntiKt4TopoEM_LCJES = std::vector<float>(*m_jet_AntiKt4TopoEM_LCJES);\
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
   o_m_jet_AntiKt4TopoEM_GSCFactorF = std::vector<float>(*m_jet_AntiKt4TopoEM_GSCFactorF);\
   o_m_jet_AntiKt4TopoEM_WidthFraction = std::vector<float>(*m_jet_AntiKt4TopoEM_WidthFraction);\
   o_m_jet_AntiKt4TopoEM_el_dr = std::vector<float>(*m_jet_AntiKt4TopoEM_el_dr);\
   o_m_jet_AntiKt4TopoEM_el_matched = std::vector<int>(*m_jet_AntiKt4TopoEM_el_matched);\
   o_m_jet_AntiKt4TopoEM_mu_dr = std::vector<float>(*m_jet_AntiKt4TopoEM_mu_dr);\
   o_m_jet_AntiKt4TopoEM_mu_matched = std::vector<int>(*m_jet_AntiKt4TopoEM_mu_matched);\
   o_m_jet_AntiKt4TopoEM_L1_dr = std::vector<float>(*m_jet_AntiKt4TopoEM_L1_dr);\
   o_m_jet_AntiKt4TopoEM_L1_matched = std::vector<int>(*m_jet_AntiKt4TopoEM_L1_matched);\
   o_m_jet_AntiKt4TopoEM_L2_dr = std::vector<float>(*m_jet_AntiKt4TopoEM_L2_dr);\
   o_m_jet_AntiKt4TopoEM_L2_matched = std::vector<int>(*m_jet_AntiKt4TopoEM_L2_matched);\
   o_m_jet_AntiKt4TopoEM_EF_dr = std::vector<float>(*m_jet_AntiKt4TopoEM_EF_dr);\
   o_m_jet_AntiKt4TopoEM_EF_matched = std::vector<int>(*m_jet_AntiKt4TopoEM_EF_matched);\
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
