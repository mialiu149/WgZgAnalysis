////bin/dukhep_create_filter.py MacrosForTruthD3PD.dat
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
m_detmask0(0),	\
m_detmask1(0),	\
m_actualIntPerXing(0),	\
m_averageIntPerXing(0),	\
m_mc_channel_number(0),	\
m_mc_event_number(0),	\
m_mc_event_weight(0),	\
m_pixelFlags(0),	\
m_sctFlags(0),	\
m_trtFlags(0),	\
m_larFlags(0),	\
m_tileFlags(0),	\
m_muonFlags(0),	\
m_fwdFlags(0),	\
m_coreFlags(0),	\
m_pixelError(0),	\
m_sctError(0),	\
m_trtError(0),	\
m_larError(0),	\
m_tileError(0),	\
m_muonError(0),	\
m_fwdError(0),	\
m_coreError(0),	\
m_isSimulation(0),	\
m_isCalibration(0),	\
m_isTestBeam(0),	\
m_mcevt_n(0),	\
m_mcevt_signal_process_id(0),	\
m_mcevt_event_number(0),	\
m_mcevt_event_scale(0),	\
m_mcevt_alphaQCD(0),	\
m_mcevt_alphaQED(0),	\
m_mcevt_pdf_id1(0),	\
m_mcevt_pdf_id2(0),	\
m_mcevt_pdf_x1(0),	\
m_mcevt_pdf_x2(0),	\
m_mcevt_pdf_scale(0),	\
m_mcevt_pdf1(0),	\
m_mcevt_pdf2(0),	\
m_mcevt_weight(0),	\
m_mcevt_nparticle(0),	\
m_mcevt_pileUpType(0),	\
m_mcVxn(0),	\
m_mcVxx(0),	\
m_mcVxy(0),	\
m_mcVxz(0),	\
m_vxn(0),	\
m_vxx(0),	\
m_vxy(0),	\
m_vxz(0),	\
m_jet_AntiKt4TruthJets_n(0),	\
m_jet_AntiKt4TruthJets_E(0),	\
m_jet_AntiKt4TruthJets_pt(0),	\
m_jet_AntiKt4TruthJets_m(0),	\
m_jet_AntiKt4TruthJets_eta(0),	\
m_jet_AntiKt4TruthJets_phi(0),	\
m_jet_AntiKt4TruthJets_EtaOrigin(0),	\
m_jet_AntiKt4TruthJets_PhiOrigin(0),	\
m_jet_AntiKt4TruthJets_MOrigin(0),	\
m_jet_AntiKt4TruthJets_EtaOriginEM(0),	\
m_jet_AntiKt4TruthJets_PhiOriginEM(0),	\
m_jet_AntiKt4TruthJets_MOriginEM(0),	\
m_jet_AntiKt4TruthJets_WIDTH(0),	\
m_jet_AntiKt4TruthJets_n90(0),	\
m_jet_AntiKt4TruthJets_Timing(0),	\
m_jet_AntiKt4TruthJets_LArQuality(0),	\
m_jet_AntiKt4TruthJets_nTrk(0),	\
m_jet_AntiKt4TruthJets_sumPtTrk(0),	\
m_jet_AntiKt4TruthJets_OriginIndex(0),	\
m_jet_AntiKt4TruthJets_HECQuality(0),	\
m_jet_AntiKt4TruthJets_NegativeE(0),	\
m_jet_AntiKt4TruthJets_AverageLArQF(0),	\
m_jet_AntiKt4TruthJets_YFlip12(0),	\
m_jet_AntiKt4TruthJets_YFlip23(0),	\
m_jet_AntiKt4TruthJets_BCH_CORR_CELL(0),	\
m_jet_AntiKt4TruthJets_BCH_CORR_DOTX(0),	\
m_jet_AntiKt4TruthJets_BCH_CORR_JET(0),	\
m_jet_AntiKt4TruthJets_BCH_CORR_JET_FORCELL(0),	\
m_jet_AntiKt4TruthJets_ENG_BAD_CELLS(0),	\
m_jet_AntiKt4TruthJets_N_BAD_CELLS(0),	\
m_jet_AntiKt4TruthJets_N_BAD_CELLS_CORR(0),	\
m_jet_AntiKt4TruthJets_BAD_CELLS_CORR_E(0),	\
m_jet_AntiKt4TruthJets_NumTowers(0),	\
m_jet_AntiKt4TruthJets_SamplingMax(0),	\
m_jet_AntiKt4TruthJets_fracSamplingMax(0),	\
m_jet_AntiKt4TruthJets_hecf(0),	\
m_jet_AntiKt4TruthJets_tgap3f(0),	\
m_jet_AntiKt4TruthJets_isUgly(0),	\
m_jet_AntiKt4TruthJets_isBadLooseMinus(0),	\
m_jet_AntiKt4TruthJets_isBadLoose(0),	\
m_jet_AntiKt4TruthJets_isBadMedium(0),	\
m_jet_AntiKt4TruthJets_isBadTight(0),	\
m_jet_AntiKt4TruthJets_emfrac(0),	\
m_jet_AntiKt4TruthJets_Offset(0),	\
m_jet_AntiKt4TruthJets_EMJES(0),	\
m_jet_AntiKt4TruthJets_EMJES_EtaCorr(0),	\
m_jet_AntiKt4TruthJets_EMJESnooffset(0),	\
m_jet_AntiKt4TruthJets_GCWJES(0),	\
m_jet_AntiKt4TruthJets_GCWJES_EtaCorr(0),	\
m_jet_AntiKt4TruthJets_CB(0),	\
m_jet_AntiKt4TruthJets_LCJES(0),	\
m_jet_AntiKt4TruthJets_emscale_E(0),	\
m_jet_AntiKt4TruthJets_emscale_pt(0),	\
m_jet_AntiKt4TruthJets_emscale_m(0),	\
m_jet_AntiKt4TruthJets_emscale_eta(0),	\
m_jet_AntiKt4TruthJets_emscale_phi(0),	\
m_jet_AntiKt4TruthJets_L1_dr(0),	\
m_jet_AntiKt4TruthJets_L1_matched(0),	\
m_jet_AntiKt4TruthJets_L2_dr(0),	\
m_jet_AntiKt4TruthJets_L2_matched(0),	\
m_jet_AntiKt4TruthJets_EF_dr(0),	\
m_jet_AntiKt4TruthJets_EF_matched(0),	\
m_jet_AntiKt4TopoNewEM_n(0),	\
m_jet_AntiKt4TopoNewEM_E(0),	\
m_jet_AntiKt4TopoNewEM_pt(0),	\
m_jet_AntiKt4TopoNewEM_m(0),	\
m_jet_AntiKt4TopoNewEM_eta(0),	\
m_jet_AntiKt4TopoNewEM_phi(0),	\
m_jet_AntiKt4TopoNewEM_EtaOrigin(0),	\
m_jet_AntiKt4TopoNewEM_PhiOrigin(0),	\
m_jet_AntiKt4TopoNewEM_MOrigin(0),	\
m_jet_AntiKt4TopoNewEM_EtaOriginEM(0),	\
m_jet_AntiKt4TopoNewEM_PhiOriginEM(0),	\
m_jet_AntiKt4TopoNewEM_MOriginEM(0),	\
m_jet_AntiKt4TopoNewEM_WIDTH(0),	\
m_jet_AntiKt4TopoNewEM_n90(0),	\
m_jet_AntiKt4TopoNewEM_Timing(0),	\
m_jet_AntiKt4TopoNewEM_LArQuality(0),	\
m_jet_AntiKt4TopoNewEM_nTrk(0),	\
m_jet_AntiKt4TopoNewEM_sumPtTrk(0),	\
m_jet_AntiKt4TopoNewEM_OriginIndex(0),	\
m_jet_AntiKt4TopoNewEM_HECQuality(0),	\
m_jet_AntiKt4TopoNewEM_NegativeE(0),	\
m_jet_AntiKt4TopoNewEM_AverageLArQF(0),	\
m_jet_AntiKt4TopoNewEM_YFlip12(0),	\
m_jet_AntiKt4TopoNewEM_YFlip23(0),	\
m_jet_AntiKt4TopoNewEM_BCH_CORR_CELL(0),	\
m_jet_AntiKt4TopoNewEM_BCH_CORR_DOTX(0),	\
m_jet_AntiKt4TopoNewEM_BCH_CORR_JET(0),	\
m_jet_AntiKt4TopoNewEM_BCH_CORR_JET_FORCELL(0),	\
m_jet_AntiKt4TopoNewEM_ENG_BAD_CELLS(0),	\
m_jet_AntiKt4TopoNewEM_N_BAD_CELLS(0),	\
m_jet_AntiKt4TopoNewEM_N_BAD_CELLS_CORR(0),	\
m_jet_AntiKt4TopoNewEM_BAD_CELLS_CORR_E(0),	\
m_jet_AntiKt4TopoNewEM_NumTowers(0),	\
m_jet_AntiKt4TopoNewEM_SamplingMax(0),	\
m_jet_AntiKt4TopoNewEM_fracSamplingMax(0),	\
m_jet_AntiKt4TopoNewEM_hecf(0),	\
m_jet_AntiKt4TopoNewEM_tgap3f(0),	\
m_jet_AntiKt4TopoNewEM_isUgly(0),	\
m_jet_AntiKt4TopoNewEM_isBadLooseMinus(0),	\
m_jet_AntiKt4TopoNewEM_isBadLoose(0),	\
m_jet_AntiKt4TopoNewEM_isBadMedium(0),	\
m_jet_AntiKt4TopoNewEM_isBadTight(0),	\
m_jet_AntiKt4TopoNewEM_emfrac(0),	\
m_jet_AntiKt4TopoNewEM_Offset(0),	\
m_jet_AntiKt4TopoNewEM_EMJES(0),	\
m_jet_AntiKt4TopoNewEM_EMJES_EtaCorr(0),	\
m_jet_AntiKt4TopoNewEM_EMJESnooffset(0),	\
m_jet_AntiKt4TopoNewEM_GCWJES(0),	\
m_jet_AntiKt4TopoNewEM_GCWJES_EtaCorr(0),	\
m_jet_AntiKt4TopoNewEM_CB(0),	\
m_jet_AntiKt4TopoNewEM_LCJES(0),	\
m_jet_AntiKt4TopoNewEM_emscale_E(0),	\
m_jet_AntiKt4TopoNewEM_emscale_pt(0),	\
m_jet_AntiKt4TopoNewEM_emscale_m(0),	\
m_jet_AntiKt4TopoNewEM_emscale_eta(0),	\
m_jet_AntiKt4TopoNewEM_emscale_phi(0),	\
m_jet_AntiKt4TopoNewEM_L1_dr(0),	\
m_jet_AntiKt4TopoNewEM_L1_matched(0),	\
m_jet_AntiKt4TopoNewEM_L2_dr(0),	\
m_jet_AntiKt4TopoNewEM_L2_matched(0),	\
m_jet_AntiKt4TopoNewEM_EF_dr(0),	\
m_jet_AntiKt4TopoNewEM_EF_matched(0),	\
m_mc_n(0),	\
m_mc_E(0),	\
m_mc_pt(0),	\
m_mc_m(0),	\
m_mc_eta(0),	\
m_mc_phi(0),	\
m_mc_px(0),	\
m_mc_py(0),	\
m_mc_pz(0),	\
m_mc_status(0),	\
m_mc_barcode(0),	\
m_mc_parents(0),	\
m_mc_children(0),	\
m_mc_pdgId(0),	\
m_mc_charge(0),	\
m_mc_vx_x(0),	\
m_mc_vx_y(0),	\
m_mc_vx_z(0),	\
m_mc_vx_barcode(0),	\
m_mc_child_index(0),	\
m_mc_parent_index(0),	\
m_MET_Truth_NonInt_etx(0),	\
m_MET_Truth_NonInt_ety(0),	\
m_MET_Truth_Int_etx(0),	\
m_MET_Truth_Int_ety(0),	\
m_MET_Truth_IntCentral_etx(0),	\
m_MET_Truth_IntCentral_ety(0),	\
m_MET_Truth_IntFwd_etx(0),	\
m_MET_Truth_IntFwd_ety(0),	\
m_MET_Truth_IntOutCover_etx(0),	\
m_MET_Truth_IntOutCover_ety(0),	\
m_MET_Truth_IntMuons_etx(0),	\
m_MET_Truth_IntMuons_ety(0),	\
m_el_n(0),	\
m_el_E(0),	\
m_el_pt(0),	\
m_el_m(0),	\
m_el_px(0),	\
m_el_py(0),	\
m_el_pz(0),	\
m_el_eta(0),	\
m_el_phi(0),	\
m_el_status(0),	\
m_el_barcode(0),	\
m_el_charge(0),	\
m_mu_muid_n(0),	\
m_mu_muid_E(0),	\
m_mu_muid_pt(0),	\
m_mu_muid_m(0),	\
m_mu_muid_px(0),	\
m_mu_muid_py(0),	\
m_mu_muid_pz(0),	\
m_mu_muid_eta(0),	\
m_mu_muid_phi(0),	\
m_mu_muid_status(0),	\
m_mu_muid_barcode(0),	\
m_mu_muid_charge(0),	\
m_mu_staco_n(0),	\
m_mu_staco_E(0),	\
m_mu_staco_pt(0),	\
m_mu_staco_m(0),	\
m_mu_staco_px(0),	\
m_mu_staco_py(0),	\
m_mu_staco_pz(0),	\
m_mu_staco_eta(0),	\
m_mu_staco_phi(0),	\
m_mu_staco_status(0),	\
m_mu_staco_barcode(0),	\
m_mu_staco_charge(0),	\
m_tau_n(0),	\
m_tau_pt(0),	\
m_tau_m(0),	\
m_tau_eta(0),	\
m_tau_phi(0),	\
m_tau_status(0),	\
m_tau_barcode(0),	\
m_tau_charge(0),	\
m_ph_n(0),	\
m_ph_E(0),	\
m_ph_pt(0),	\
m_ph_m(0),	\
m_ph_px(0),	\
m_ph_py(0),	\
m_ph_pz(0),	\
m_ph_eta(0),	\
m_ph_phi(0),	\
m_ph_status(0),	\
m_ph_barcode(0),	\
m_el_truth_n(0),	\
m_el_truth_E(0),	\
m_el_truth_pt(0),	\
m_el_truth_m(0),	\
m_el_truth_px(0),	\
m_el_truth_py(0),	\
m_el_truth_pz(0),	\
m_el_truth_eta(0),	\
m_el_truth_phi(0),	\
m_el_truth_status(0),	\
m_el_truth_barcode(0),	\
m_el_truth_charge(0),	\
m_mu_muid_truth_n(0),	\
m_mu_muid_truth_E(0),	\
m_mu_muid_truth_pt(0),	\
m_mu_muid_truth_m(0),	\
m_mu_muid_truth_px(0),	\
m_mu_muid_truth_py(0),	\
m_mu_muid_truth_pz(0),	\
m_mu_muid_truth_eta(0),	\
m_mu_muid_truth_phi(0),	\
m_mu_muid_truth_status(0),	\
m_mu_muid_truth_barcode(0),	\
m_mu_muid_truth_charge(0),	\
m_mu_staco_truth_n(0),	\
m_mu_staco_truth_E(0),	\
m_mu_staco_truth_pt(0),	\
m_mu_staco_truth_m(0),	\
m_mu_staco_truth_px(0),	\
m_mu_staco_truth_py(0),	\
m_mu_staco_truth_pz(0),	\
m_mu_staco_truth_eta(0),	\
m_mu_staco_truth_phi(0),	\
m_mu_staco_truth_status(0),	\
m_mu_staco_truth_barcode(0),	\
m_mu_staco_truth_charge(0),	\
m_trueTau_n(0),	\
m_trueTau_pt(0),	\
m_trueTau_m(0),	\
m_trueTau_eta(0),	\
m_trueTau_phi(0),	\
m_trueTau_status(0),	\
m_trueTau_barcode(0),	\
m_trueTau_charge(0),	\
m_ph_truth_n(0),	\
m_ph_truth_E(0),	\
m_ph_truth_pt(0),	\
m_ph_truth_m(0),	\
m_ph_truth_px(0),	\
m_ph_truth_py(0),	\
m_ph_truth_pz(0),	\
m_ph_truth_eta(0),	\
m_ph_truth_phi(0),	\
m_ph_truth_status(0),	\
m_ph_truth_barcode(0)
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
UInt_t m_detmask0;	\
UInt_t o_m_detmask0;	\
UInt_t m_detmask1;	\
UInt_t o_m_detmask1;	\
Float_t m_actualIntPerXing;	\
Float_t o_m_actualIntPerXing;	\
Float_t m_averageIntPerXing;	\
Float_t o_m_averageIntPerXing;	\
UInt_t m_mc_channel_number;	\
UInt_t o_m_mc_channel_number;	\
UInt_t m_mc_event_number;	\
UInt_t o_m_mc_event_number;	\
Float_t m_mc_event_weight;	\
Float_t o_m_mc_event_weight;	\
UInt_t m_pixelFlags;	\
UInt_t o_m_pixelFlags;	\
UInt_t m_sctFlags;	\
UInt_t o_m_sctFlags;	\
UInt_t m_trtFlags;	\
UInt_t o_m_trtFlags;	\
UInt_t m_larFlags;	\
UInt_t o_m_larFlags;	\
UInt_t m_tileFlags;	\
UInt_t o_m_tileFlags;	\
UInt_t m_muonFlags;	\
UInt_t o_m_muonFlags;	\
UInt_t m_fwdFlags;	\
UInt_t o_m_fwdFlags;	\
UInt_t m_coreFlags;	\
UInt_t o_m_coreFlags;	\
UInt_t m_pixelError;	\
UInt_t o_m_pixelError;	\
UInt_t m_sctError;	\
UInt_t o_m_sctError;	\
UInt_t m_trtError;	\
UInt_t o_m_trtError;	\
UInt_t m_larError;	\
UInt_t o_m_larError;	\
UInt_t m_tileError;	\
UInt_t o_m_tileError;	\
UInt_t m_muonError;	\
UInt_t o_m_muonError;	\
UInt_t m_fwdError;	\
UInt_t o_m_fwdError;	\
UInt_t m_coreError;	\
UInt_t o_m_coreError;	\
Bool_t m_isSimulation;	\
Bool_t o_m_isSimulation;	\
Bool_t m_isCalibration;	\
Bool_t o_m_isCalibration;	\
Bool_t m_isTestBeam;	\
Bool_t o_m_isTestBeam;	\
Int_t m_mcevt_n;	\
Int_t o_m_mcevt_n;	\
std::vector<int>* m_mcevt_signal_process_id;	\
std::vector<int> o_m_mcevt_signal_process_id;	\
std::vector<int>* m_mcevt_event_number;	\
std::vector<int> o_m_mcevt_event_number;	\
std::vector<double>* m_mcevt_event_scale;	\
std::vector<double> o_m_mcevt_event_scale;	\
std::vector<double>* m_mcevt_alphaQCD;	\
std::vector<double> o_m_mcevt_alphaQCD;	\
std::vector<double>* m_mcevt_alphaQED;	\
std::vector<double> o_m_mcevt_alphaQED;	\
std::vector<int>* m_mcevt_pdf_id1;	\
std::vector<int> o_m_mcevt_pdf_id1;	\
std::vector<int>* m_mcevt_pdf_id2;	\
std::vector<int> o_m_mcevt_pdf_id2;	\
std::vector<double>* m_mcevt_pdf_x1;	\
std::vector<double> o_m_mcevt_pdf_x1;	\
std::vector<double>* m_mcevt_pdf_x2;	\
std::vector<double> o_m_mcevt_pdf_x2;	\
std::vector<double>* m_mcevt_pdf_scale;	\
std::vector<double> o_m_mcevt_pdf_scale;	\
std::vector<double>* m_mcevt_pdf1;	\
std::vector<double> o_m_mcevt_pdf1;	\
std::vector<double>* m_mcevt_pdf2;	\
std::vector<double> o_m_mcevt_pdf2;	\
std::vector<std::vector<double> >* m_mcevt_weight;	\
std::vector<std::vector<double> > o_m_mcevt_weight;	\
std::vector<int>* m_mcevt_nparticle;	\
std::vector<int> o_m_mcevt_nparticle;	\
std::vector<short>* m_mcevt_pileUpType;	\
std::vector<short> o_m_mcevt_pileUpType;	\
Int_t m_mcVxn;	\
Int_t o_m_mcVxn;	\
std::vector<float>* m_mcVxx;	\
std::vector<float> o_m_mcVxx;	\
std::vector<float>* m_mcVxy;	\
std::vector<float> o_m_mcVxy;	\
std::vector<float>* m_mcVxz;	\
std::vector<float> o_m_mcVxz;	\
Int_t m_vxn;	\
Int_t o_m_vxn;	\
std::vector<float>* m_vxx;	\
std::vector<float> o_m_vxx;	\
std::vector<float>* m_vxy;	\
std::vector<float> o_m_vxy;	\
std::vector<float>* m_vxz;	\
std::vector<float> o_m_vxz;	\
Int_t m_jet_AntiKt4TruthJets_n;	\
Int_t o_m_jet_AntiKt4TruthJets_n;	\
std::vector<float>* m_jet_AntiKt4TruthJets_E;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_E;	\
std::vector<float>* m_jet_AntiKt4TruthJets_pt;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_pt;	\
std::vector<float>* m_jet_AntiKt4TruthJets_m;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_m;	\
std::vector<float>* m_jet_AntiKt4TruthJets_eta;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_eta;	\
std::vector<float>* m_jet_AntiKt4TruthJets_phi;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_phi;	\
std::vector<float>* m_jet_AntiKt4TruthJets_EtaOrigin;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_EtaOrigin;	\
std::vector<float>* m_jet_AntiKt4TruthJets_PhiOrigin;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_PhiOrigin;	\
std::vector<float>* m_jet_AntiKt4TruthJets_MOrigin;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_MOrigin;	\
std::vector<float>* m_jet_AntiKt4TruthJets_EtaOriginEM;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_EtaOriginEM;	\
std::vector<float>* m_jet_AntiKt4TruthJets_PhiOriginEM;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_PhiOriginEM;	\
std::vector<float>* m_jet_AntiKt4TruthJets_MOriginEM;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_MOriginEM;	\
std::vector<float>* m_jet_AntiKt4TruthJets_WIDTH;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_WIDTH;	\
std::vector<float>* m_jet_AntiKt4TruthJets_n90;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_n90;	\
std::vector<float>* m_jet_AntiKt4TruthJets_Timing;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_Timing;	\
std::vector<float>* m_jet_AntiKt4TruthJets_LArQuality;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_LArQuality;	\
std::vector<float>* m_jet_AntiKt4TruthJets_nTrk;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_nTrk;	\
std::vector<float>* m_jet_AntiKt4TruthJets_sumPtTrk;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_sumPtTrk;	\
std::vector<float>* m_jet_AntiKt4TruthJets_OriginIndex;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_OriginIndex;	\
std::vector<float>* m_jet_AntiKt4TruthJets_HECQuality;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_HECQuality;	\
std::vector<float>* m_jet_AntiKt4TruthJets_NegativeE;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_NegativeE;	\
std::vector<float>* m_jet_AntiKt4TruthJets_AverageLArQF;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_AverageLArQF;	\
std::vector<float>* m_jet_AntiKt4TruthJets_YFlip12;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_YFlip12;	\
std::vector<float>* m_jet_AntiKt4TruthJets_YFlip23;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_YFlip23;	\
std::vector<float>* m_jet_AntiKt4TruthJets_BCH_CORR_CELL;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_BCH_CORR_CELL;	\
std::vector<float>* m_jet_AntiKt4TruthJets_BCH_CORR_DOTX;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_BCH_CORR_DOTX;	\
std::vector<float>* m_jet_AntiKt4TruthJets_BCH_CORR_JET;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_BCH_CORR_JET;	\
std::vector<float>* m_jet_AntiKt4TruthJets_BCH_CORR_JET_FORCELL;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_BCH_CORR_JET_FORCELL;	\
std::vector<float>* m_jet_AntiKt4TruthJets_ENG_BAD_CELLS;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_ENG_BAD_CELLS;	\
std::vector<float>* m_jet_AntiKt4TruthJets_N_BAD_CELLS;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_N_BAD_CELLS;	\
std::vector<float>* m_jet_AntiKt4TruthJets_N_BAD_CELLS_CORR;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_N_BAD_CELLS_CORR;	\
std::vector<float>* m_jet_AntiKt4TruthJets_BAD_CELLS_CORR_E;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_BAD_CELLS_CORR_E;	\
std::vector<float>* m_jet_AntiKt4TruthJets_NumTowers;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_NumTowers;	\
std::vector<int>* m_jet_AntiKt4TruthJets_SamplingMax;	\
std::vector<int> o_m_jet_AntiKt4TruthJets_SamplingMax;	\
std::vector<float>* m_jet_AntiKt4TruthJets_fracSamplingMax;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_fracSamplingMax;	\
std::vector<float>* m_jet_AntiKt4TruthJets_hecf;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_hecf;	\
std::vector<float>* m_jet_AntiKt4TruthJets_tgap3f;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_tgap3f;	\
std::vector<int>* m_jet_AntiKt4TruthJets_isUgly;	\
std::vector<int> o_m_jet_AntiKt4TruthJets_isUgly;	\
std::vector<int>* m_jet_AntiKt4TruthJets_isBadLooseMinus;	\
std::vector<int> o_m_jet_AntiKt4TruthJets_isBadLooseMinus;	\
std::vector<int>* m_jet_AntiKt4TruthJets_isBadLoose;	\
std::vector<int> o_m_jet_AntiKt4TruthJets_isBadLoose;	\
std::vector<int>* m_jet_AntiKt4TruthJets_isBadMedium;	\
std::vector<int> o_m_jet_AntiKt4TruthJets_isBadMedium;	\
std::vector<int>* m_jet_AntiKt4TruthJets_isBadTight;	\
std::vector<int> o_m_jet_AntiKt4TruthJets_isBadTight;	\
std::vector<float>* m_jet_AntiKt4TruthJets_emfrac;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_emfrac;	\
std::vector<float>* m_jet_AntiKt4TruthJets_Offset;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_Offset;	\
std::vector<float>* m_jet_AntiKt4TruthJets_EMJES;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_EMJES;	\
std::vector<float>* m_jet_AntiKt4TruthJets_EMJES_EtaCorr;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_EMJES_EtaCorr;	\
std::vector<float>* m_jet_AntiKt4TruthJets_EMJESnooffset;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_EMJESnooffset;	\
std::vector<float>* m_jet_AntiKt4TruthJets_GCWJES;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_GCWJES;	\
std::vector<float>* m_jet_AntiKt4TruthJets_GCWJES_EtaCorr;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_GCWJES_EtaCorr;	\
std::vector<float>* m_jet_AntiKt4TruthJets_CB;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_CB;	\
std::vector<float>* m_jet_AntiKt4TruthJets_LCJES;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_LCJES;	\
std::vector<float>* m_jet_AntiKt4TruthJets_emscale_E;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_emscale_E;	\
std::vector<float>* m_jet_AntiKt4TruthJets_emscale_pt;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_emscale_pt;	\
std::vector<float>* m_jet_AntiKt4TruthJets_emscale_m;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_emscale_m;	\
std::vector<float>* m_jet_AntiKt4TruthJets_emscale_eta;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_emscale_eta;	\
std::vector<float>* m_jet_AntiKt4TruthJets_emscale_phi;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_emscale_phi;	\
std::vector<float>* m_jet_AntiKt4TruthJets_L1_dr;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_L1_dr;	\
std::vector<int>* m_jet_AntiKt4TruthJets_L1_matched;	\
std::vector<int> o_m_jet_AntiKt4TruthJets_L1_matched;	\
std::vector<float>* m_jet_AntiKt4TruthJets_L2_dr;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_L2_dr;	\
std::vector<int>* m_jet_AntiKt4TruthJets_L2_matched;	\
std::vector<int> o_m_jet_AntiKt4TruthJets_L2_matched;	\
std::vector<float>* m_jet_AntiKt4TruthJets_EF_dr;	\
std::vector<float> o_m_jet_AntiKt4TruthJets_EF_dr;	\
std::vector<int>* m_jet_AntiKt4TruthJets_EF_matched;	\
std::vector<int> o_m_jet_AntiKt4TruthJets_EF_matched;	\
Int_t m_jet_AntiKt4TopoNewEM_n;	\
Int_t o_m_jet_AntiKt4TopoNewEM_n;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_E;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_E;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_pt;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_pt;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_m;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_m;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_eta;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_eta;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_phi;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_phi;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_EtaOrigin;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_EtaOrigin;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_PhiOrigin;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_PhiOrigin;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_MOrigin;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_MOrigin;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_EtaOriginEM;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_EtaOriginEM;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_PhiOriginEM;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_PhiOriginEM;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_MOriginEM;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_MOriginEM;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_WIDTH;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_WIDTH;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_n90;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_n90;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_Timing;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_Timing;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_LArQuality;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_LArQuality;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_nTrk;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_nTrk;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_sumPtTrk;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_sumPtTrk;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_OriginIndex;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_OriginIndex;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_HECQuality;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_HECQuality;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_NegativeE;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_NegativeE;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_AverageLArQF;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_AverageLArQF;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_YFlip12;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_YFlip12;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_YFlip23;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_YFlip23;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_BCH_CORR_CELL;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_BCH_CORR_CELL;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_BCH_CORR_DOTX;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_BCH_CORR_DOTX;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_BCH_CORR_JET;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_BCH_CORR_JET;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_BCH_CORR_JET_FORCELL;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_BCH_CORR_JET_FORCELL;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_ENG_BAD_CELLS;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_ENG_BAD_CELLS;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_N_BAD_CELLS;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_N_BAD_CELLS;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_N_BAD_CELLS_CORR;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_N_BAD_CELLS_CORR;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_BAD_CELLS_CORR_E;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_BAD_CELLS_CORR_E;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_NumTowers;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_NumTowers;	\
std::vector<int>* m_jet_AntiKt4TopoNewEM_SamplingMax;	\
std::vector<int> o_m_jet_AntiKt4TopoNewEM_SamplingMax;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_fracSamplingMax;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_fracSamplingMax;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_hecf;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_hecf;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_tgap3f;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_tgap3f;	\
std::vector<int>* m_jet_AntiKt4TopoNewEM_isUgly;	\
std::vector<int> o_m_jet_AntiKt4TopoNewEM_isUgly;	\
std::vector<int>* m_jet_AntiKt4TopoNewEM_isBadLooseMinus;	\
std::vector<int> o_m_jet_AntiKt4TopoNewEM_isBadLooseMinus;	\
std::vector<int>* m_jet_AntiKt4TopoNewEM_isBadLoose;	\
std::vector<int> o_m_jet_AntiKt4TopoNewEM_isBadLoose;	\
std::vector<int>* m_jet_AntiKt4TopoNewEM_isBadMedium;	\
std::vector<int> o_m_jet_AntiKt4TopoNewEM_isBadMedium;	\
std::vector<int>* m_jet_AntiKt4TopoNewEM_isBadTight;	\
std::vector<int> o_m_jet_AntiKt4TopoNewEM_isBadTight;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_emfrac;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_emfrac;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_Offset;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_Offset;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_EMJES;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_EMJES;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_EMJES_EtaCorr;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_EMJES_EtaCorr;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_EMJESnooffset;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_EMJESnooffset;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_GCWJES;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_GCWJES;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_GCWJES_EtaCorr;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_GCWJES_EtaCorr;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_CB;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_CB;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_LCJES;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_LCJES;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_emscale_E;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_emscale_E;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_emscale_pt;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_emscale_pt;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_emscale_m;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_emscale_m;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_emscale_eta;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_emscale_eta;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_emscale_phi;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_emscale_phi;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_L1_dr;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_L1_dr;	\
std::vector<int>* m_jet_AntiKt4TopoNewEM_L1_matched;	\
std::vector<int> o_m_jet_AntiKt4TopoNewEM_L1_matched;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_L2_dr;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_L2_dr;	\
std::vector<int>* m_jet_AntiKt4TopoNewEM_L2_matched;	\
std::vector<int> o_m_jet_AntiKt4TopoNewEM_L2_matched;	\
std::vector<float>* m_jet_AntiKt4TopoNewEM_EF_dr;	\
std::vector<float> o_m_jet_AntiKt4TopoNewEM_EF_dr;	\
std::vector<int>* m_jet_AntiKt4TopoNewEM_EF_matched;	\
std::vector<int> o_m_jet_AntiKt4TopoNewEM_EF_matched;	\
Int_t m_mc_n;	\
Int_t o_m_mc_n;	\
std::vector<float>* m_mc_E;	\
std::vector<float> o_m_mc_E;	\
std::vector<float>* m_mc_pt;	\
std::vector<float> o_m_mc_pt;	\
std::vector<float>* m_mc_m;	\
std::vector<float> o_m_mc_m;	\
std::vector<float>* m_mc_eta;	\
std::vector<float> o_m_mc_eta;	\
std::vector<float>* m_mc_phi;	\
std::vector<float> o_m_mc_phi;	\
std::vector<float>* m_mc_px;	\
std::vector<float> o_m_mc_px;	\
std::vector<float>* m_mc_py;	\
std::vector<float> o_m_mc_py;	\
std::vector<float>* m_mc_pz;	\
std::vector<float> o_m_mc_pz;	\
std::vector<int>* m_mc_status;	\
std::vector<int> o_m_mc_status;	\
std::vector<int>* m_mc_barcode;	\
std::vector<int> o_m_mc_barcode;	\
std::vector<std::vector<int> >* m_mc_parents;	\
std::vector<std::vector<int> > o_m_mc_parents;	\
std::vector<std::vector<int> >* m_mc_children;	\
std::vector<std::vector<int> > o_m_mc_children;	\
std::vector<int>* m_mc_pdgId;	\
std::vector<int> o_m_mc_pdgId;	\
std::vector<float>* m_mc_charge;	\
std::vector<float> o_m_mc_charge;	\
std::vector<float>* m_mc_vx_x;	\
std::vector<float> o_m_mc_vx_x;	\
std::vector<float>* m_mc_vx_y;	\
std::vector<float> o_m_mc_vx_y;	\
std::vector<float>* m_mc_vx_z;	\
std::vector<float> o_m_mc_vx_z;	\
std::vector<int>* m_mc_vx_barcode;	\
std::vector<int> o_m_mc_vx_barcode;	\
std::vector<std::vector<int> >* m_mc_child_index;	\
std::vector<std::vector<int> > o_m_mc_child_index;	\
std::vector<std::vector<int> >* m_mc_parent_index;	\
std::vector<std::vector<int> > o_m_mc_parent_index;	\
Float_t m_MET_Truth_NonInt_etx;	\
Float_t o_m_MET_Truth_NonInt_etx;	\
Float_t m_MET_Truth_NonInt_ety;	\
Float_t o_m_MET_Truth_NonInt_ety;	\
Float_t m_MET_Truth_Int_etx;	\
Float_t o_m_MET_Truth_Int_etx;	\
Float_t m_MET_Truth_Int_ety;	\
Float_t o_m_MET_Truth_Int_ety;	\
Float_t m_MET_Truth_IntCentral_etx;	\
Float_t o_m_MET_Truth_IntCentral_etx;	\
Float_t m_MET_Truth_IntCentral_ety;	\
Float_t o_m_MET_Truth_IntCentral_ety;	\
Float_t m_MET_Truth_IntFwd_etx;	\
Float_t o_m_MET_Truth_IntFwd_etx;	\
Float_t m_MET_Truth_IntFwd_ety;	\
Float_t o_m_MET_Truth_IntFwd_ety;	\
Float_t m_MET_Truth_IntOutCover_etx;	\
Float_t o_m_MET_Truth_IntOutCover_etx;	\
Float_t m_MET_Truth_IntOutCover_ety;	\
Float_t o_m_MET_Truth_IntOutCover_ety;	\
Float_t m_MET_Truth_IntMuons_etx;	\
Float_t o_m_MET_Truth_IntMuons_etx;	\
Float_t m_MET_Truth_IntMuons_ety;	\
Float_t o_m_MET_Truth_IntMuons_ety;	\
Int_t m_el_n;	\
Int_t o_m_el_n;	\
std::vector<float>* m_el_E;	\
std::vector<float> o_m_el_E;	\
std::vector<float>* m_el_pt;	\
std::vector<float> o_m_el_pt;	\
std::vector<float>* m_el_m;	\
std::vector<float> o_m_el_m;	\
std::vector<float>* m_el_px;	\
std::vector<float> o_m_el_px;	\
std::vector<float>* m_el_py;	\
std::vector<float> o_m_el_py;	\
std::vector<float>* m_el_pz;	\
std::vector<float> o_m_el_pz;	\
std::vector<float>* m_el_eta;	\
std::vector<float> o_m_el_eta;	\
std::vector<float>* m_el_phi;	\
std::vector<float> o_m_el_phi;	\
std::vector<int>* m_el_status;	\
std::vector<int> o_m_el_status;	\
std::vector<int>* m_el_barcode;	\
std::vector<int> o_m_el_barcode;	\
std::vector<int>* m_el_charge;	\
std::vector<int> o_m_el_charge;	\
Int_t m_mu_muid_n;	\
Int_t o_m_mu_muid_n;	\
std::vector<float>* m_mu_muid_E;	\
std::vector<float> o_m_mu_muid_E;	\
std::vector<float>* m_mu_muid_pt;	\
std::vector<float> o_m_mu_muid_pt;	\
std::vector<float>* m_mu_muid_m;	\
std::vector<float> o_m_mu_muid_m;	\
std::vector<float>* m_mu_muid_px;	\
std::vector<float> o_m_mu_muid_px;	\
std::vector<float>* m_mu_muid_py;	\
std::vector<float> o_m_mu_muid_py;	\
std::vector<float>* m_mu_muid_pz;	\
std::vector<float> o_m_mu_muid_pz;	\
std::vector<float>* m_mu_muid_eta;	\
std::vector<float> o_m_mu_muid_eta;	\
std::vector<float>* m_mu_muid_phi;	\
std::vector<float> o_m_mu_muid_phi;	\
std::vector<int>* m_mu_muid_status;	\
std::vector<int> o_m_mu_muid_status;	\
std::vector<int>* m_mu_muid_barcode;	\
std::vector<int> o_m_mu_muid_barcode;	\
std::vector<int>* m_mu_muid_charge;	\
std::vector<int> o_m_mu_muid_charge;	\
Int_t m_mu_staco_n;	\
Int_t o_m_mu_staco_n;	\
std::vector<float>* m_mu_staco_E;	\
std::vector<float> o_m_mu_staco_E;	\
std::vector<float>* m_mu_staco_pt;	\
std::vector<float> o_m_mu_staco_pt;	\
std::vector<float>* m_mu_staco_m;	\
std::vector<float> o_m_mu_staco_m;	\
std::vector<float>* m_mu_staco_px;	\
std::vector<float> o_m_mu_staco_px;	\
std::vector<float>* m_mu_staco_py;	\
std::vector<float> o_m_mu_staco_py;	\
std::vector<float>* m_mu_staco_pz;	\
std::vector<float> o_m_mu_staco_pz;	\
std::vector<float>* m_mu_staco_eta;	\
std::vector<float> o_m_mu_staco_eta;	\
std::vector<float>* m_mu_staco_phi;	\
std::vector<float> o_m_mu_staco_phi;	\
std::vector<int>* m_mu_staco_status;	\
std::vector<int> o_m_mu_staco_status;	\
std::vector<int>* m_mu_staco_barcode;	\
std::vector<int> o_m_mu_staco_barcode;	\
std::vector<int>* m_mu_staco_charge;	\
std::vector<int> o_m_mu_staco_charge;	\
Int_t m_tau_n;	\
Int_t o_m_tau_n;	\
std::vector<float>* m_tau_pt;	\
std::vector<float> o_m_tau_pt;	\
std::vector<float>* m_tau_m;	\
std::vector<float> o_m_tau_m;	\
std::vector<float>* m_tau_eta;	\
std::vector<float> o_m_tau_eta;	\
std::vector<float>* m_tau_phi;	\
std::vector<float> o_m_tau_phi;	\
std::vector<int>* m_tau_status;	\
std::vector<int> o_m_tau_status;	\
std::vector<int>* m_tau_barcode;	\
std::vector<int> o_m_tau_barcode;	\
std::vector<int>* m_tau_charge;	\
std::vector<int> o_m_tau_charge;	\
Int_t m_ph_n;	\
Int_t o_m_ph_n;	\
std::vector<float>* m_ph_E;	\
std::vector<float> o_m_ph_E;	\
std::vector<float>* m_ph_pt;	\
std::vector<float> o_m_ph_pt;	\
std::vector<float>* m_ph_m;	\
std::vector<float> o_m_ph_m;	\
std::vector<float>* m_ph_px;	\
std::vector<float> o_m_ph_px;	\
std::vector<float>* m_ph_py;	\
std::vector<float> o_m_ph_py;	\
std::vector<float>* m_ph_pz;	\
std::vector<float> o_m_ph_pz;	\
std::vector<float>* m_ph_eta;	\
std::vector<float> o_m_ph_eta;	\
std::vector<float>* m_ph_phi;	\
std::vector<float> o_m_ph_phi;	\
std::vector<int>* m_ph_status;	\
std::vector<int> o_m_ph_status;	\
std::vector<int>* m_ph_barcode;	\
std::vector<int> o_m_ph_barcode;	\
Int_t m_el_truth_n;	\
Int_t o_m_el_truth_n;	\
std::vector<float>* m_el_truth_E;	\
std::vector<float> o_m_el_truth_E;	\
std::vector<float>* m_el_truth_pt;	\
std::vector<float> o_m_el_truth_pt;	\
std::vector<float>* m_el_truth_m;	\
std::vector<float> o_m_el_truth_m;	\
std::vector<float>* m_el_truth_px;	\
std::vector<float> o_m_el_truth_px;	\
std::vector<float>* m_el_truth_py;	\
std::vector<float> o_m_el_truth_py;	\
std::vector<float>* m_el_truth_pz;	\
std::vector<float> o_m_el_truth_pz;	\
std::vector<float>* m_el_truth_eta;	\
std::vector<float> o_m_el_truth_eta;	\
std::vector<float>* m_el_truth_phi;	\
std::vector<float> o_m_el_truth_phi;	\
std::vector<int>* m_el_truth_status;	\
std::vector<int> o_m_el_truth_status;	\
std::vector<int>* m_el_truth_barcode;	\
std::vector<int> o_m_el_truth_barcode;	\
std::vector<int>* m_el_truth_charge;	\
std::vector<int> o_m_el_truth_charge;	\
Int_t m_mu_muid_truth_n;	\
Int_t o_m_mu_muid_truth_n;	\
std::vector<float>* m_mu_muid_truth_E;	\
std::vector<float> o_m_mu_muid_truth_E;	\
std::vector<float>* m_mu_muid_truth_pt;	\
std::vector<float> o_m_mu_muid_truth_pt;	\
std::vector<float>* m_mu_muid_truth_m;	\
std::vector<float> o_m_mu_muid_truth_m;	\
std::vector<float>* m_mu_muid_truth_px;	\
std::vector<float> o_m_mu_muid_truth_px;	\
std::vector<float>* m_mu_muid_truth_py;	\
std::vector<float> o_m_mu_muid_truth_py;	\
std::vector<float>* m_mu_muid_truth_pz;	\
std::vector<float> o_m_mu_muid_truth_pz;	\
std::vector<float>* m_mu_muid_truth_eta;	\
std::vector<float> o_m_mu_muid_truth_eta;	\
std::vector<float>* m_mu_muid_truth_phi;	\
std::vector<float> o_m_mu_muid_truth_phi;	\
std::vector<int>* m_mu_muid_truth_status;	\
std::vector<int> o_m_mu_muid_truth_status;	\
std::vector<int>* m_mu_muid_truth_barcode;	\
std::vector<int> o_m_mu_muid_truth_barcode;	\
std::vector<int>* m_mu_muid_truth_charge;	\
std::vector<int> o_m_mu_muid_truth_charge;	\
Int_t m_mu_staco_truth_n;	\
Int_t o_m_mu_staco_truth_n;	\
std::vector<float>* m_mu_staco_truth_E;	\
std::vector<float> o_m_mu_staco_truth_E;	\
std::vector<float>* m_mu_staco_truth_pt;	\
std::vector<float> o_m_mu_staco_truth_pt;	\
std::vector<float>* m_mu_staco_truth_m;	\
std::vector<float> o_m_mu_staco_truth_m;	\
std::vector<float>* m_mu_staco_truth_px;	\
std::vector<float> o_m_mu_staco_truth_px;	\
std::vector<float>* m_mu_staco_truth_py;	\
std::vector<float> o_m_mu_staco_truth_py;	\
std::vector<float>* m_mu_staco_truth_pz;	\
std::vector<float> o_m_mu_staco_truth_pz;	\
std::vector<float>* m_mu_staco_truth_eta;	\
std::vector<float> o_m_mu_staco_truth_eta;	\
std::vector<float>* m_mu_staco_truth_phi;	\
std::vector<float> o_m_mu_staco_truth_phi;	\
std::vector<int>* m_mu_staco_truth_status;	\
std::vector<int> o_m_mu_staco_truth_status;	\
std::vector<int>* m_mu_staco_truth_barcode;	\
std::vector<int> o_m_mu_staco_truth_barcode;	\
std::vector<int>* m_mu_staco_truth_charge;	\
std::vector<int> o_m_mu_staco_truth_charge;	\
Int_t m_trueTau_n;	\
Int_t o_m_trueTau_n;	\
std::vector<float>* m_trueTau_pt;	\
std::vector<float> o_m_trueTau_pt;	\
std::vector<float>* m_trueTau_m;	\
std::vector<float> o_m_trueTau_m;	\
std::vector<float>* m_trueTau_eta;	\
std::vector<float> o_m_trueTau_eta;	\
std::vector<float>* m_trueTau_phi;	\
std::vector<float> o_m_trueTau_phi;	\
std::vector<int>* m_trueTau_status;	\
std::vector<int> o_m_trueTau_status;	\
std::vector<int>* m_trueTau_barcode;	\
std::vector<int> o_m_trueTau_barcode;	\
std::vector<int>* m_trueTau_charge;	\
std::vector<int> o_m_trueTau_charge;	\
Int_t m_ph_truth_n;	\
Int_t o_m_ph_truth_n;	\
std::vector<float>* m_ph_truth_E;	\
std::vector<float> o_m_ph_truth_E;	\
std::vector<float>* m_ph_truth_pt;	\
std::vector<float> o_m_ph_truth_pt;	\
std::vector<float>* m_ph_truth_m;	\
std::vector<float> o_m_ph_truth_m;	\
std::vector<float>* m_ph_truth_px;	\
std::vector<float> o_m_ph_truth_px;	\
std::vector<float>* m_ph_truth_py;	\
std::vector<float> o_m_ph_truth_py;	\
std::vector<float>* m_ph_truth_pz;	\
std::vector<float> o_m_ph_truth_pz;	\
std::vector<float>* m_ph_truth_eta;	\
std::vector<float> o_m_ph_truth_eta;	\
std::vector<float>* m_ph_truth_phi;	\
std::vector<float> o_m_ph_truth_phi;	\
std::vector<int>* m_ph_truth_status;	\
std::vector<int> o_m_ph_truth_status;	\
std::vector<int>* m_ph_truth_barcode;	\
std::vector<int> o_m_ph_truth_barcode;
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define CONNECT( stringTREENAME )                      \
  {    ConnectVariable( (stringTREENAME), "RunNumber", m_RunNumber );	\
    ConnectVariable( (stringTREENAME), "EventNumber", m_EventNumber );	\
    ConnectVariable( (stringTREENAME), "timestamp", m_timestamp );	\
    ConnectVariable( (stringTREENAME), "timestamp_ns", m_timestamp_ns );	\
    ConnectVariable( (stringTREENAME), "lbn", m_lbn );	\
    ConnectVariable( (stringTREENAME), "bcid", m_bcid );	\
    ConnectVariable( (stringTREENAME), "detmask0", m_detmask0 );	\
    ConnectVariable( (stringTREENAME), "detmask1", m_detmask1 );	\
    ConnectVariable( (stringTREENAME), "actualIntPerXing", m_actualIntPerXing );	\
    ConnectVariable( (stringTREENAME), "averageIntPerXing", m_averageIntPerXing );	\
    ConnectVariable( (stringTREENAME), "mc_channel_number", m_mc_channel_number );	\
    ConnectVariable( (stringTREENAME), "mc_event_number", m_mc_event_number );	\
    ConnectVariable( (stringTREENAME), "mc_event_weight", m_mc_event_weight );	\
    ConnectVariable( (stringTREENAME), "pixelFlags", m_pixelFlags );	\
    ConnectVariable( (stringTREENAME), "sctFlags", m_sctFlags );	\
    ConnectVariable( (stringTREENAME), "trtFlags", m_trtFlags );	\
    ConnectVariable( (stringTREENAME), "larFlags", m_larFlags );	\
    ConnectVariable( (stringTREENAME), "tileFlags", m_tileFlags );	\
    ConnectVariable( (stringTREENAME), "muonFlags", m_muonFlags );	\
    ConnectVariable( (stringTREENAME), "fwdFlags", m_fwdFlags );	\
    ConnectVariable( (stringTREENAME), "coreFlags", m_coreFlags );	\
    ConnectVariable( (stringTREENAME), "pixelError", m_pixelError );	\
    ConnectVariable( (stringTREENAME), "sctError", m_sctError );	\
    ConnectVariable( (stringTREENAME), "trtError", m_trtError );	\
    ConnectVariable( (stringTREENAME), "larError", m_larError );	\
    ConnectVariable( (stringTREENAME), "tileError", m_tileError );	\
    ConnectVariable( (stringTREENAME), "muonError", m_muonError );	\
    ConnectVariable( (stringTREENAME), "fwdError", m_fwdError );	\
    ConnectVariable( (stringTREENAME), "coreError", m_coreError );	\
    ConnectVariable( (stringTREENAME), "isSimulation", m_isSimulation );	\
    ConnectVariable( (stringTREENAME), "isCalibration", m_isCalibration );	\
    ConnectVariable( (stringTREENAME), "isTestBeam", m_isTestBeam );	\
    ConnectVariable( (stringTREENAME), "mcevt_n", m_mcevt_n );	\
    ConnectVariable( (stringTREENAME), "mcevt_signal_process_id", m_mcevt_signal_process_id );	\
    ConnectVariable( (stringTREENAME), "mcevt_event_number", m_mcevt_event_number );	\
    ConnectVariable( (stringTREENAME), "mcevt_event_scale", m_mcevt_event_scale );	\
    ConnectVariable( (stringTREENAME), "mcevt_alphaQCD", m_mcevt_alphaQCD );	\
    ConnectVariable( (stringTREENAME), "mcevt_alphaQED", m_mcevt_alphaQED );	\
    ConnectVariable( (stringTREENAME), "mcevt_pdf_id1", m_mcevt_pdf_id1 );	\
    ConnectVariable( (stringTREENAME), "mcevt_pdf_id2", m_mcevt_pdf_id2 );	\
    ConnectVariable( (stringTREENAME), "mcevt_pdf_x1", m_mcevt_pdf_x1 );	\
    ConnectVariable( (stringTREENAME), "mcevt_pdf_x2", m_mcevt_pdf_x2 );	\
    ConnectVariable( (stringTREENAME), "mcevt_pdf_scale", m_mcevt_pdf_scale );	\
    ConnectVariable( (stringTREENAME), "mcevt_pdf1", m_mcevt_pdf1 );	\
    ConnectVariable( (stringTREENAME), "mcevt_pdf2", m_mcevt_pdf2 );	\
    ConnectVariable( (stringTREENAME), "mcevt_weight", m_mcevt_weight );	\
    ConnectVariable( (stringTREENAME), "mcevt_nparticle", m_mcevt_nparticle );	\
    ConnectVariable( (stringTREENAME), "mcevt_pileUpType", m_mcevt_pileUpType );	\
    ConnectVariable( (stringTREENAME), "mcVxn", m_mcVxn );	\
    ConnectVariable( (stringTREENAME), "mcVxx", m_mcVxx );	\
    ConnectVariable( (stringTREENAME), "mcVxy", m_mcVxy );	\
    ConnectVariable( (stringTREENAME), "mcVxz", m_mcVxz );	\
    ConnectVariable( (stringTREENAME), "vxn", m_vxn );	\
    ConnectVariable( (stringTREENAME), "vxx", m_vxx );	\
    ConnectVariable( (stringTREENAME), "vxy", m_vxy );	\
    ConnectVariable( (stringTREENAME), "vxz", m_vxz );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_n", m_jet_AntiKt4TruthJets_n );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_E", m_jet_AntiKt4TruthJets_E );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_pt", m_jet_AntiKt4TruthJets_pt );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_m", m_jet_AntiKt4TruthJets_m );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_eta", m_jet_AntiKt4TruthJets_eta );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_phi", m_jet_AntiKt4TruthJets_phi );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_EtaOrigin", m_jet_AntiKt4TruthJets_EtaOrigin );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_PhiOrigin", m_jet_AntiKt4TruthJets_PhiOrigin );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_MOrigin", m_jet_AntiKt4TruthJets_MOrigin );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_EtaOriginEM", m_jet_AntiKt4TruthJets_EtaOriginEM );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_PhiOriginEM", m_jet_AntiKt4TruthJets_PhiOriginEM );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_MOriginEM", m_jet_AntiKt4TruthJets_MOriginEM );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_WIDTH", m_jet_AntiKt4TruthJets_WIDTH );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_n90", m_jet_AntiKt4TruthJets_n90 );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_Timing", m_jet_AntiKt4TruthJets_Timing );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_LArQuality", m_jet_AntiKt4TruthJets_LArQuality );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_nTrk", m_jet_AntiKt4TruthJets_nTrk );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_sumPtTrk", m_jet_AntiKt4TruthJets_sumPtTrk );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_OriginIndex", m_jet_AntiKt4TruthJets_OriginIndex );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_HECQuality", m_jet_AntiKt4TruthJets_HECQuality );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_NegativeE", m_jet_AntiKt4TruthJets_NegativeE );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_AverageLArQF", m_jet_AntiKt4TruthJets_AverageLArQF );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_YFlip12", m_jet_AntiKt4TruthJets_YFlip12 );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_YFlip23", m_jet_AntiKt4TruthJets_YFlip23 );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_BCH_CORR_CELL", m_jet_AntiKt4TruthJets_BCH_CORR_CELL );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_BCH_CORR_DOTX", m_jet_AntiKt4TruthJets_BCH_CORR_DOTX );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_BCH_CORR_JET", m_jet_AntiKt4TruthJets_BCH_CORR_JET );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_BCH_CORR_JET_FORCELL", m_jet_AntiKt4TruthJets_BCH_CORR_JET_FORCELL );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_ENG_BAD_CELLS", m_jet_AntiKt4TruthJets_ENG_BAD_CELLS );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_N_BAD_CELLS", m_jet_AntiKt4TruthJets_N_BAD_CELLS );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_N_BAD_CELLS_CORR", m_jet_AntiKt4TruthJets_N_BAD_CELLS_CORR );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_BAD_CELLS_CORR_E", m_jet_AntiKt4TruthJets_BAD_CELLS_CORR_E );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_NumTowers", m_jet_AntiKt4TruthJets_NumTowers );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_SamplingMax", m_jet_AntiKt4TruthJets_SamplingMax );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_fracSamplingMax", m_jet_AntiKt4TruthJets_fracSamplingMax );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_hecf", m_jet_AntiKt4TruthJets_hecf );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_tgap3f", m_jet_AntiKt4TruthJets_tgap3f );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_isUgly", m_jet_AntiKt4TruthJets_isUgly );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_isBadLooseMinus", m_jet_AntiKt4TruthJets_isBadLooseMinus );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_isBadLoose", m_jet_AntiKt4TruthJets_isBadLoose );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_isBadMedium", m_jet_AntiKt4TruthJets_isBadMedium );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_isBadTight", m_jet_AntiKt4TruthJets_isBadTight );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_emfrac", m_jet_AntiKt4TruthJets_emfrac );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_Offset", m_jet_AntiKt4TruthJets_Offset );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_EMJES", m_jet_AntiKt4TruthJets_EMJES );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_EMJES_EtaCorr", m_jet_AntiKt4TruthJets_EMJES_EtaCorr );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_EMJESnooffset", m_jet_AntiKt4TruthJets_EMJESnooffset );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_GCWJES", m_jet_AntiKt4TruthJets_GCWJES );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_GCWJES_EtaCorr", m_jet_AntiKt4TruthJets_GCWJES_EtaCorr );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_CB", m_jet_AntiKt4TruthJets_CB );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_LCJES", m_jet_AntiKt4TruthJets_LCJES );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_emscale_E", m_jet_AntiKt4TruthJets_emscale_E );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_emscale_pt", m_jet_AntiKt4TruthJets_emscale_pt );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_emscale_m", m_jet_AntiKt4TruthJets_emscale_m );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_emscale_eta", m_jet_AntiKt4TruthJets_emscale_eta );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_emscale_phi", m_jet_AntiKt4TruthJets_emscale_phi );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_L1_dr", m_jet_AntiKt4TruthJets_L1_dr );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_L1_matched", m_jet_AntiKt4TruthJets_L1_matched );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_L2_dr", m_jet_AntiKt4TruthJets_L2_dr );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_L2_matched", m_jet_AntiKt4TruthJets_L2_matched );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_EF_dr", m_jet_AntiKt4TruthJets_EF_dr );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TruthJets_EF_matched", m_jet_AntiKt4TruthJets_EF_matched );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_n", m_jet_AntiKt4TopoNewEM_n );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_E", m_jet_AntiKt4TopoNewEM_E );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_pt", m_jet_AntiKt4TopoNewEM_pt );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_m", m_jet_AntiKt4TopoNewEM_m );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_eta", m_jet_AntiKt4TopoNewEM_eta );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_phi", m_jet_AntiKt4TopoNewEM_phi );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_EtaOrigin", m_jet_AntiKt4TopoNewEM_EtaOrigin );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_PhiOrigin", m_jet_AntiKt4TopoNewEM_PhiOrigin );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_MOrigin", m_jet_AntiKt4TopoNewEM_MOrigin );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_EtaOriginEM", m_jet_AntiKt4TopoNewEM_EtaOriginEM );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_PhiOriginEM", m_jet_AntiKt4TopoNewEM_PhiOriginEM );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_MOriginEM", m_jet_AntiKt4TopoNewEM_MOriginEM );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_WIDTH", m_jet_AntiKt4TopoNewEM_WIDTH );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_n90", m_jet_AntiKt4TopoNewEM_n90 );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_Timing", m_jet_AntiKt4TopoNewEM_Timing );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_LArQuality", m_jet_AntiKt4TopoNewEM_LArQuality );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_nTrk", m_jet_AntiKt4TopoNewEM_nTrk );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_sumPtTrk", m_jet_AntiKt4TopoNewEM_sumPtTrk );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_OriginIndex", m_jet_AntiKt4TopoNewEM_OriginIndex );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_HECQuality", m_jet_AntiKt4TopoNewEM_HECQuality );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_NegativeE", m_jet_AntiKt4TopoNewEM_NegativeE );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_AverageLArQF", m_jet_AntiKt4TopoNewEM_AverageLArQF );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_YFlip12", m_jet_AntiKt4TopoNewEM_YFlip12 );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_YFlip23", m_jet_AntiKt4TopoNewEM_YFlip23 );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_BCH_CORR_CELL", m_jet_AntiKt4TopoNewEM_BCH_CORR_CELL );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_BCH_CORR_DOTX", m_jet_AntiKt4TopoNewEM_BCH_CORR_DOTX );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_BCH_CORR_JET", m_jet_AntiKt4TopoNewEM_BCH_CORR_JET );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_BCH_CORR_JET_FORCELL", m_jet_AntiKt4TopoNewEM_BCH_CORR_JET_FORCELL );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_ENG_BAD_CELLS", m_jet_AntiKt4TopoNewEM_ENG_BAD_CELLS );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_N_BAD_CELLS", m_jet_AntiKt4TopoNewEM_N_BAD_CELLS );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_N_BAD_CELLS_CORR", m_jet_AntiKt4TopoNewEM_N_BAD_CELLS_CORR );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_BAD_CELLS_CORR_E", m_jet_AntiKt4TopoNewEM_BAD_CELLS_CORR_E );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_NumTowers", m_jet_AntiKt4TopoNewEM_NumTowers );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_SamplingMax", m_jet_AntiKt4TopoNewEM_SamplingMax );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_fracSamplingMax", m_jet_AntiKt4TopoNewEM_fracSamplingMax );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_hecf", m_jet_AntiKt4TopoNewEM_hecf );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_tgap3f", m_jet_AntiKt4TopoNewEM_tgap3f );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_isUgly", m_jet_AntiKt4TopoNewEM_isUgly );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_isBadLooseMinus", m_jet_AntiKt4TopoNewEM_isBadLooseMinus );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_isBadLoose", m_jet_AntiKt4TopoNewEM_isBadLoose );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_isBadMedium", m_jet_AntiKt4TopoNewEM_isBadMedium );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_isBadTight", m_jet_AntiKt4TopoNewEM_isBadTight );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_emfrac", m_jet_AntiKt4TopoNewEM_emfrac );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_Offset", m_jet_AntiKt4TopoNewEM_Offset );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_EMJES", m_jet_AntiKt4TopoNewEM_EMJES );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_EMJES_EtaCorr", m_jet_AntiKt4TopoNewEM_EMJES_EtaCorr );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_EMJESnooffset", m_jet_AntiKt4TopoNewEM_EMJESnooffset );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_GCWJES", m_jet_AntiKt4TopoNewEM_GCWJES );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_GCWJES_EtaCorr", m_jet_AntiKt4TopoNewEM_GCWJES_EtaCorr );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_CB", m_jet_AntiKt4TopoNewEM_CB );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_LCJES", m_jet_AntiKt4TopoNewEM_LCJES );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_emscale_E", m_jet_AntiKt4TopoNewEM_emscale_E );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_emscale_pt", m_jet_AntiKt4TopoNewEM_emscale_pt );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_emscale_m", m_jet_AntiKt4TopoNewEM_emscale_m );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_emscale_eta", m_jet_AntiKt4TopoNewEM_emscale_eta );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_emscale_phi", m_jet_AntiKt4TopoNewEM_emscale_phi );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_L1_dr", m_jet_AntiKt4TopoNewEM_L1_dr );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_L1_matched", m_jet_AntiKt4TopoNewEM_L1_matched );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_L2_dr", m_jet_AntiKt4TopoNewEM_L2_dr );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_L2_matched", m_jet_AntiKt4TopoNewEM_L2_matched );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_EF_dr", m_jet_AntiKt4TopoNewEM_EF_dr );	\
    ConnectVariable( (stringTREENAME), "jet_AntiKt4TopoNewEM_EF_matched", m_jet_AntiKt4TopoNewEM_EF_matched );	\
    ConnectVariable( (stringTREENAME), "mc_n", m_mc_n );	\
    ConnectVariable( (stringTREENAME), "mc_E", m_mc_E );	\
    ConnectVariable( (stringTREENAME), "mc_pt", m_mc_pt );	\
    ConnectVariable( (stringTREENAME), "mc_m", m_mc_m );	\
    ConnectVariable( (stringTREENAME), "mc_eta", m_mc_eta );	\
    ConnectVariable( (stringTREENAME), "mc_phi", m_mc_phi );	\
    ConnectVariable( (stringTREENAME), "mc_px", m_mc_px );	\
    ConnectVariable( (stringTREENAME), "mc_py", m_mc_py );	\
    ConnectVariable( (stringTREENAME), "mc_pz", m_mc_pz );	\
    ConnectVariable( (stringTREENAME), "mc_status", m_mc_status );	\
    ConnectVariable( (stringTREENAME), "mc_barcode", m_mc_barcode );	\
    ConnectVariable( (stringTREENAME), "mc_parents", m_mc_parents );	\
    ConnectVariable( (stringTREENAME), "mc_children", m_mc_children );	\
    ConnectVariable( (stringTREENAME), "mc_pdgId", m_mc_pdgId );	\
    ConnectVariable( (stringTREENAME), "mc_charge", m_mc_charge );	\
    ConnectVariable( (stringTREENAME), "mc_vx_x", m_mc_vx_x );	\
    ConnectVariable( (stringTREENAME), "mc_vx_y", m_mc_vx_y );	\
    ConnectVariable( (stringTREENAME), "mc_vx_z", m_mc_vx_z );	\
    ConnectVariable( (stringTREENAME), "mc_vx_barcode", m_mc_vx_barcode );	\
    ConnectVariable( (stringTREENAME), "mc_child_index", m_mc_child_index );	\
    ConnectVariable( (stringTREENAME), "mc_parent_index", m_mc_parent_index );	\
    ConnectVariable( (stringTREENAME), "MET_Truth_NonInt_etx", m_MET_Truth_NonInt_etx );	\
    ConnectVariable( (stringTREENAME), "MET_Truth_NonInt_ety", m_MET_Truth_NonInt_ety );	\
    ConnectVariable( (stringTREENAME), "MET_Truth_Int_etx", m_MET_Truth_Int_etx );	\
    ConnectVariable( (stringTREENAME), "MET_Truth_Int_ety", m_MET_Truth_Int_ety );	\
    ConnectVariable( (stringTREENAME), "MET_Truth_IntCentral_etx", m_MET_Truth_IntCentral_etx );	\
    ConnectVariable( (stringTREENAME), "MET_Truth_IntCentral_ety", m_MET_Truth_IntCentral_ety );	\
    ConnectVariable( (stringTREENAME), "MET_Truth_IntFwd_etx", m_MET_Truth_IntFwd_etx );	\
    ConnectVariable( (stringTREENAME), "MET_Truth_IntFwd_ety", m_MET_Truth_IntFwd_ety );	\
    ConnectVariable( (stringTREENAME), "MET_Truth_IntOutCover_etx", m_MET_Truth_IntOutCover_etx );	\
    ConnectVariable( (stringTREENAME), "MET_Truth_IntOutCover_ety", m_MET_Truth_IntOutCover_ety );	\
    ConnectVariable( (stringTREENAME), "MET_Truth_IntMuons_etx", m_MET_Truth_IntMuons_etx );	\
    ConnectVariable( (stringTREENAME), "MET_Truth_IntMuons_ety", m_MET_Truth_IntMuons_ety );	\
    ConnectVariable( (stringTREENAME), "el_n", m_el_n );	\
    ConnectVariable( (stringTREENAME), "el_E", m_el_E );	\
    ConnectVariable( (stringTREENAME), "el_pt", m_el_pt );	\
    ConnectVariable( (stringTREENAME), "el_m", m_el_m );	\
    ConnectVariable( (stringTREENAME), "el_px", m_el_px );	\
    ConnectVariable( (stringTREENAME), "el_py", m_el_py );	\
    ConnectVariable( (stringTREENAME), "el_pz", m_el_pz );	\
    ConnectVariable( (stringTREENAME), "el_eta", m_el_eta );	\
    ConnectVariable( (stringTREENAME), "el_phi", m_el_phi );	\
    ConnectVariable( (stringTREENAME), "el_status", m_el_status );	\
    ConnectVariable( (stringTREENAME), "el_barcode", m_el_barcode );	\
    ConnectVariable( (stringTREENAME), "el_charge", m_el_charge );	\
    ConnectVariable( (stringTREENAME), "mu_muid_n", m_mu_muid_n );	\
    ConnectVariable( (stringTREENAME), "mu_muid_E", m_mu_muid_E );	\
    ConnectVariable( (stringTREENAME), "mu_muid_pt", m_mu_muid_pt );	\
    ConnectVariable( (stringTREENAME), "mu_muid_m", m_mu_muid_m );	\
    ConnectVariable( (stringTREENAME), "mu_muid_px", m_mu_muid_px );	\
    ConnectVariable( (stringTREENAME), "mu_muid_py", m_mu_muid_py );	\
    ConnectVariable( (stringTREENAME), "mu_muid_pz", m_mu_muid_pz );	\
    ConnectVariable( (stringTREENAME), "mu_muid_eta", m_mu_muid_eta );	\
    ConnectVariable( (stringTREENAME), "mu_muid_phi", m_mu_muid_phi );	\
    ConnectVariable( (stringTREENAME), "mu_muid_status", m_mu_muid_status );	\
    ConnectVariable( (stringTREENAME), "mu_muid_barcode", m_mu_muid_barcode );	\
    ConnectVariable( (stringTREENAME), "mu_muid_charge", m_mu_muid_charge );	\
    ConnectVariable( (stringTREENAME), "mu_staco_n", m_mu_staco_n );	\
    ConnectVariable( (stringTREENAME), "mu_staco_E", m_mu_staco_E );	\
    ConnectVariable( (stringTREENAME), "mu_staco_pt", m_mu_staco_pt );	\
    ConnectVariable( (stringTREENAME), "mu_staco_m", m_mu_staco_m );	\
    ConnectVariable( (stringTREENAME), "mu_staco_px", m_mu_staco_px );	\
    ConnectVariable( (stringTREENAME), "mu_staco_py", m_mu_staco_py );	\
    ConnectVariable( (stringTREENAME), "mu_staco_pz", m_mu_staco_pz );	\
    ConnectVariable( (stringTREENAME), "mu_staco_eta", m_mu_staco_eta );	\
    ConnectVariable( (stringTREENAME), "mu_staco_phi", m_mu_staco_phi );	\
    ConnectVariable( (stringTREENAME), "mu_staco_status", m_mu_staco_status );	\
    ConnectVariable( (stringTREENAME), "mu_staco_barcode", m_mu_staco_barcode );	\
    ConnectVariable( (stringTREENAME), "mu_staco_charge", m_mu_staco_charge );	\
    ConnectVariable( (stringTREENAME), "tau_n", m_tau_n );	\
    ConnectVariable( (stringTREENAME), "tau_pt", m_tau_pt );	\
    ConnectVariable( (stringTREENAME), "tau_m", m_tau_m );	\
    ConnectVariable( (stringTREENAME), "tau_eta", m_tau_eta );	\
    ConnectVariable( (stringTREENAME), "tau_phi", m_tau_phi );	\
    ConnectVariable( (stringTREENAME), "tau_status", m_tau_status );	\
    ConnectVariable( (stringTREENAME), "tau_barcode", m_tau_barcode );	\
    ConnectVariable( (stringTREENAME), "tau_charge", m_tau_charge );	\
    ConnectVariable( (stringTREENAME), "ph_n", m_ph_n );	\
    ConnectVariable( (stringTREENAME), "ph_E", m_ph_E );	\
    ConnectVariable( (stringTREENAME), "ph_pt", m_ph_pt );	\
    ConnectVariable( (stringTREENAME), "ph_m", m_ph_m );	\
    ConnectVariable( (stringTREENAME), "ph_px", m_ph_px );	\
    ConnectVariable( (stringTREENAME), "ph_py", m_ph_py );	\
    ConnectVariable( (stringTREENAME), "ph_pz", m_ph_pz );	\
    ConnectVariable( (stringTREENAME), "ph_eta", m_ph_eta );	\
    ConnectVariable( (stringTREENAME), "ph_phi", m_ph_phi );	\
    ConnectVariable( (stringTREENAME), "ph_status", m_ph_status );	\
    ConnectVariable( (stringTREENAME), "ph_barcode", m_ph_barcode );	\
    ConnectVariable( (stringTREENAME), "el_truth_n", m_el_truth_n );	\
    ConnectVariable( (stringTREENAME), "el_truth_E", m_el_truth_E );	\
    ConnectVariable( (stringTREENAME), "el_truth_pt", m_el_truth_pt );	\
    ConnectVariable( (stringTREENAME), "el_truth_m", m_el_truth_m );	\
    ConnectVariable( (stringTREENAME), "el_truth_px", m_el_truth_px );	\
    ConnectVariable( (stringTREENAME), "el_truth_py", m_el_truth_py );	\
    ConnectVariable( (stringTREENAME), "el_truth_pz", m_el_truth_pz );	\
    ConnectVariable( (stringTREENAME), "el_truth_eta", m_el_truth_eta );	\
    ConnectVariable( (stringTREENAME), "el_truth_phi", m_el_truth_phi );	\
    ConnectVariable( (stringTREENAME), "el_truth_status", m_el_truth_status );	\
    ConnectVariable( (stringTREENAME), "el_truth_barcode", m_el_truth_barcode );	\
    ConnectVariable( (stringTREENAME), "el_truth_charge", m_el_truth_charge );	\
    ConnectVariable( (stringTREENAME), "mu_muid_truth_n", m_mu_muid_truth_n );	\
    ConnectVariable( (stringTREENAME), "mu_muid_truth_E", m_mu_muid_truth_E );	\
    ConnectVariable( (stringTREENAME), "mu_muid_truth_pt", m_mu_muid_truth_pt );	\
    ConnectVariable( (stringTREENAME), "mu_muid_truth_m", m_mu_muid_truth_m );	\
    ConnectVariable( (stringTREENAME), "mu_muid_truth_px", m_mu_muid_truth_px );	\
    ConnectVariable( (stringTREENAME), "mu_muid_truth_py", m_mu_muid_truth_py );	\
    ConnectVariable( (stringTREENAME), "mu_muid_truth_pz", m_mu_muid_truth_pz );	\
    ConnectVariable( (stringTREENAME), "mu_muid_truth_eta", m_mu_muid_truth_eta );	\
    ConnectVariable( (stringTREENAME), "mu_muid_truth_phi", m_mu_muid_truth_phi );	\
    ConnectVariable( (stringTREENAME), "mu_muid_truth_status", m_mu_muid_truth_status );	\
    ConnectVariable( (stringTREENAME), "mu_muid_truth_barcode", m_mu_muid_truth_barcode );	\
    ConnectVariable( (stringTREENAME), "mu_muid_truth_charge", m_mu_muid_truth_charge );	\
    ConnectVariable( (stringTREENAME), "mu_staco_truth_n", m_mu_staco_truth_n );	\
    ConnectVariable( (stringTREENAME), "mu_staco_truth_E", m_mu_staco_truth_E );	\
    ConnectVariable( (stringTREENAME), "mu_staco_truth_pt", m_mu_staco_truth_pt );	\
    ConnectVariable( (stringTREENAME), "mu_staco_truth_m", m_mu_staco_truth_m );	\
    ConnectVariable( (stringTREENAME), "mu_staco_truth_px", m_mu_staco_truth_px );	\
    ConnectVariable( (stringTREENAME), "mu_staco_truth_py", m_mu_staco_truth_py );	\
    ConnectVariable( (stringTREENAME), "mu_staco_truth_pz", m_mu_staco_truth_pz );	\
    ConnectVariable( (stringTREENAME), "mu_staco_truth_eta", m_mu_staco_truth_eta );	\
    ConnectVariable( (stringTREENAME), "mu_staco_truth_phi", m_mu_staco_truth_phi );	\
    ConnectVariable( (stringTREENAME), "mu_staco_truth_status", m_mu_staco_truth_status );	\
    ConnectVariable( (stringTREENAME), "mu_staco_truth_barcode", m_mu_staco_truth_barcode );	\
    ConnectVariable( (stringTREENAME), "mu_staco_truth_charge", m_mu_staco_truth_charge );	\
    ConnectVariable( (stringTREENAME), "trueTau_n", m_trueTau_n );	\
    ConnectVariable( (stringTREENAME), "trueTau_pt", m_trueTau_pt );	\
    ConnectVariable( (stringTREENAME), "trueTau_m", m_trueTau_m );	\
    ConnectVariable( (stringTREENAME), "trueTau_eta", m_trueTau_eta );	\
    ConnectVariable( (stringTREENAME), "trueTau_phi", m_trueTau_phi );	\
    ConnectVariable( (stringTREENAME), "trueTau_status", m_trueTau_status );	\
    ConnectVariable( (stringTREENAME), "trueTau_barcode", m_trueTau_barcode );	\
    ConnectVariable( (stringTREENAME), "trueTau_charge", m_trueTau_charge );	\
    ConnectVariable( (stringTREENAME), "ph_truth_n", m_ph_truth_n );	\
    ConnectVariable( (stringTREENAME), "ph_truth_E", m_ph_truth_E );	\
    ConnectVariable( (stringTREENAME), "ph_truth_pt", m_ph_truth_pt );	\
    ConnectVariable( (stringTREENAME), "ph_truth_m", m_ph_truth_m );	\
    ConnectVariable( (stringTREENAME), "ph_truth_px", m_ph_truth_px );	\
    ConnectVariable( (stringTREENAME), "ph_truth_py", m_ph_truth_py );	\
    ConnectVariable( (stringTREENAME), "ph_truth_pz", m_ph_truth_pz );	\
    ConnectVariable( (stringTREENAME), "ph_truth_eta", m_ph_truth_eta );	\
    ConnectVariable( (stringTREENAME), "ph_truth_phi", m_ph_truth_phi );	\
    ConnectVariable( (stringTREENAME), "ph_truth_status", m_ph_truth_status );	\
    ConnectVariable( (stringTREENAME), "ph_truth_barcode", m_ph_truth_barcode );	\
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
    DeclareVariable( o_m_detmask0, "detmask0" );	\
    DeclareVariable( o_m_detmask1, "detmask1" );	\
    DeclareVariable( o_m_actualIntPerXing, "actualIntPerXing" );	\
    DeclareVariable( o_m_averageIntPerXing, "averageIntPerXing" );	\
    DeclareVariable( o_m_mc_channel_number, "mc_channel_number" );	\
    DeclareVariable( o_m_mc_event_number, "mc_event_number" );	\
    DeclareVariable( o_m_mc_event_weight, "mc_event_weight" );	\
    DeclareVariable( o_m_pixelFlags, "pixelFlags" );	\
    DeclareVariable( o_m_sctFlags, "sctFlags" );	\
    DeclareVariable( o_m_trtFlags, "trtFlags" );	\
    DeclareVariable( o_m_larFlags, "larFlags" );	\
    DeclareVariable( o_m_tileFlags, "tileFlags" );	\
    DeclareVariable( o_m_muonFlags, "muonFlags" );	\
    DeclareVariable( o_m_fwdFlags, "fwdFlags" );	\
    DeclareVariable( o_m_coreFlags, "coreFlags" );	\
    DeclareVariable( o_m_pixelError, "pixelError" );	\
    DeclareVariable( o_m_sctError, "sctError" );	\
    DeclareVariable( o_m_trtError, "trtError" );	\
    DeclareVariable( o_m_larError, "larError" );	\
    DeclareVariable( o_m_tileError, "tileError" );	\
    DeclareVariable( o_m_muonError, "muonError" );	\
    DeclareVariable( o_m_fwdError, "fwdError" );	\
    DeclareVariable( o_m_coreError, "coreError" );	\
    DeclareVariable( o_m_isSimulation, "isSimulation" );	\
    DeclareVariable( o_m_isCalibration, "isCalibration" );	\
    DeclareVariable( o_m_isTestBeam, "isTestBeam" );	\
    DeclareVariable( o_m_mcevt_n, "mcevt_n" );	\
    DeclareVariable( o_m_mcevt_signal_process_id, "mcevt_signal_process_id" );	\
    DeclareVariable( o_m_mcevt_event_number, "mcevt_event_number" );	\
    DeclareVariable( o_m_mcevt_event_scale, "mcevt_event_scale" );	\
    DeclareVariable( o_m_mcevt_alphaQCD, "mcevt_alphaQCD" );	\
    DeclareVariable( o_m_mcevt_alphaQED, "mcevt_alphaQED" );	\
    DeclareVariable( o_m_mcevt_pdf_id1, "mcevt_pdf_id1" );	\
    DeclareVariable( o_m_mcevt_pdf_id2, "mcevt_pdf_id2" );	\
    DeclareVariable( o_m_mcevt_pdf_x1, "mcevt_pdf_x1" );	\
    DeclareVariable( o_m_mcevt_pdf_x2, "mcevt_pdf_x2" );	\
    DeclareVariable( o_m_mcevt_pdf_scale, "mcevt_pdf_scale" );	\
    DeclareVariable( o_m_mcevt_pdf1, "mcevt_pdf1" );	\
    DeclareVariable( o_m_mcevt_pdf2, "mcevt_pdf2" );	\
    DeclareVariable( o_m_mcevt_weight, "mcevt_weight" );	\
    DeclareVariable( o_m_mcevt_nparticle, "mcevt_nparticle" );	\
    DeclareVariable( o_m_mcevt_pileUpType, "mcevt_pileUpType" );	\
    DeclareVariable( o_m_mcVxn, "mcVxn" );	\
    DeclareVariable( o_m_mcVxx, "mcVxx" );	\
    DeclareVariable( o_m_mcVxy, "mcVxy" );	\
    DeclareVariable( o_m_mcVxz, "mcVxz" );	\
    DeclareVariable( o_m_vxn, "vxn" );	\
    DeclareVariable( o_m_vxx, "vxx" );	\
    DeclareVariable( o_m_vxy, "vxy" );	\
    DeclareVariable( o_m_vxz, "vxz" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_n, "jet_AntiKt4TruthJets_n" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_E, "jet_AntiKt4TruthJets_E" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_pt, "jet_AntiKt4TruthJets_pt" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_m, "jet_AntiKt4TruthJets_m" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_eta, "jet_AntiKt4TruthJets_eta" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_phi, "jet_AntiKt4TruthJets_phi" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_EtaOrigin, "jet_AntiKt4TruthJets_EtaOrigin" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_PhiOrigin, "jet_AntiKt4TruthJets_PhiOrigin" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_MOrigin, "jet_AntiKt4TruthJets_MOrigin" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_EtaOriginEM, "jet_AntiKt4TruthJets_EtaOriginEM" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_PhiOriginEM, "jet_AntiKt4TruthJets_PhiOriginEM" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_MOriginEM, "jet_AntiKt4TruthJets_MOriginEM" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_WIDTH, "jet_AntiKt4TruthJets_WIDTH" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_n90, "jet_AntiKt4TruthJets_n90" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_Timing, "jet_AntiKt4TruthJets_Timing" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_LArQuality, "jet_AntiKt4TruthJets_LArQuality" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_nTrk, "jet_AntiKt4TruthJets_nTrk" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_sumPtTrk, "jet_AntiKt4TruthJets_sumPtTrk" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_OriginIndex, "jet_AntiKt4TruthJets_OriginIndex" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_HECQuality, "jet_AntiKt4TruthJets_HECQuality" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_NegativeE, "jet_AntiKt4TruthJets_NegativeE" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_AverageLArQF, "jet_AntiKt4TruthJets_AverageLArQF" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_YFlip12, "jet_AntiKt4TruthJets_YFlip12" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_YFlip23, "jet_AntiKt4TruthJets_YFlip23" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_BCH_CORR_CELL, "jet_AntiKt4TruthJets_BCH_CORR_CELL" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_BCH_CORR_DOTX, "jet_AntiKt4TruthJets_BCH_CORR_DOTX" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_BCH_CORR_JET, "jet_AntiKt4TruthJets_BCH_CORR_JET" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_BCH_CORR_JET_FORCELL, "jet_AntiKt4TruthJets_BCH_CORR_JET_FORCELL" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_ENG_BAD_CELLS, "jet_AntiKt4TruthJets_ENG_BAD_CELLS" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_N_BAD_CELLS, "jet_AntiKt4TruthJets_N_BAD_CELLS" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_N_BAD_CELLS_CORR, "jet_AntiKt4TruthJets_N_BAD_CELLS_CORR" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_BAD_CELLS_CORR_E, "jet_AntiKt4TruthJets_BAD_CELLS_CORR_E" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_NumTowers, "jet_AntiKt4TruthJets_NumTowers" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_SamplingMax, "jet_AntiKt4TruthJets_SamplingMax" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_fracSamplingMax, "jet_AntiKt4TruthJets_fracSamplingMax" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_hecf, "jet_AntiKt4TruthJets_hecf" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_tgap3f, "jet_AntiKt4TruthJets_tgap3f" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_isUgly, "jet_AntiKt4TruthJets_isUgly" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_isBadLooseMinus, "jet_AntiKt4TruthJets_isBadLooseMinus" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_isBadLoose, "jet_AntiKt4TruthJets_isBadLoose" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_isBadMedium, "jet_AntiKt4TruthJets_isBadMedium" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_isBadTight, "jet_AntiKt4TruthJets_isBadTight" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_emfrac, "jet_AntiKt4TruthJets_emfrac" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_Offset, "jet_AntiKt4TruthJets_Offset" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_EMJES, "jet_AntiKt4TruthJets_EMJES" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_EMJES_EtaCorr, "jet_AntiKt4TruthJets_EMJES_EtaCorr" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_EMJESnooffset, "jet_AntiKt4TruthJets_EMJESnooffset" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_GCWJES, "jet_AntiKt4TruthJets_GCWJES" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_GCWJES_EtaCorr, "jet_AntiKt4TruthJets_GCWJES_EtaCorr" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_CB, "jet_AntiKt4TruthJets_CB" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_LCJES, "jet_AntiKt4TruthJets_LCJES" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_emscale_E, "jet_AntiKt4TruthJets_emscale_E" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_emscale_pt, "jet_AntiKt4TruthJets_emscale_pt" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_emscale_m, "jet_AntiKt4TruthJets_emscale_m" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_emscale_eta, "jet_AntiKt4TruthJets_emscale_eta" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_emscale_phi, "jet_AntiKt4TruthJets_emscale_phi" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_L1_dr, "jet_AntiKt4TruthJets_L1_dr" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_L1_matched, "jet_AntiKt4TruthJets_L1_matched" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_L2_dr, "jet_AntiKt4TruthJets_L2_dr" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_L2_matched, "jet_AntiKt4TruthJets_L2_matched" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_EF_dr, "jet_AntiKt4TruthJets_EF_dr" );	\
    DeclareVariable( o_m_jet_AntiKt4TruthJets_EF_matched, "jet_AntiKt4TruthJets_EF_matched" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_n, "jet_AntiKt4TopoNewEM_n" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_E, "jet_AntiKt4TopoNewEM_E" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_pt, "jet_AntiKt4TopoNewEM_pt" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_m, "jet_AntiKt4TopoNewEM_m" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_eta, "jet_AntiKt4TopoNewEM_eta" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_phi, "jet_AntiKt4TopoNewEM_phi" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_EtaOrigin, "jet_AntiKt4TopoNewEM_EtaOrigin" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_PhiOrigin, "jet_AntiKt4TopoNewEM_PhiOrigin" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_MOrigin, "jet_AntiKt4TopoNewEM_MOrigin" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_EtaOriginEM, "jet_AntiKt4TopoNewEM_EtaOriginEM" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_PhiOriginEM, "jet_AntiKt4TopoNewEM_PhiOriginEM" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_MOriginEM, "jet_AntiKt4TopoNewEM_MOriginEM" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_WIDTH, "jet_AntiKt4TopoNewEM_WIDTH" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_n90, "jet_AntiKt4TopoNewEM_n90" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_Timing, "jet_AntiKt4TopoNewEM_Timing" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_LArQuality, "jet_AntiKt4TopoNewEM_LArQuality" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_nTrk, "jet_AntiKt4TopoNewEM_nTrk" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_sumPtTrk, "jet_AntiKt4TopoNewEM_sumPtTrk" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_OriginIndex, "jet_AntiKt4TopoNewEM_OriginIndex" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_HECQuality, "jet_AntiKt4TopoNewEM_HECQuality" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_NegativeE, "jet_AntiKt4TopoNewEM_NegativeE" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_AverageLArQF, "jet_AntiKt4TopoNewEM_AverageLArQF" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_YFlip12, "jet_AntiKt4TopoNewEM_YFlip12" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_YFlip23, "jet_AntiKt4TopoNewEM_YFlip23" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_BCH_CORR_CELL, "jet_AntiKt4TopoNewEM_BCH_CORR_CELL" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_BCH_CORR_DOTX, "jet_AntiKt4TopoNewEM_BCH_CORR_DOTX" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_BCH_CORR_JET, "jet_AntiKt4TopoNewEM_BCH_CORR_JET" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_BCH_CORR_JET_FORCELL, "jet_AntiKt4TopoNewEM_BCH_CORR_JET_FORCELL" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_ENG_BAD_CELLS, "jet_AntiKt4TopoNewEM_ENG_BAD_CELLS" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_N_BAD_CELLS, "jet_AntiKt4TopoNewEM_N_BAD_CELLS" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_N_BAD_CELLS_CORR, "jet_AntiKt4TopoNewEM_N_BAD_CELLS_CORR" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_BAD_CELLS_CORR_E, "jet_AntiKt4TopoNewEM_BAD_CELLS_CORR_E" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_NumTowers, "jet_AntiKt4TopoNewEM_NumTowers" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_SamplingMax, "jet_AntiKt4TopoNewEM_SamplingMax" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_fracSamplingMax, "jet_AntiKt4TopoNewEM_fracSamplingMax" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_hecf, "jet_AntiKt4TopoNewEM_hecf" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_tgap3f, "jet_AntiKt4TopoNewEM_tgap3f" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_isUgly, "jet_AntiKt4TopoNewEM_isUgly" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_isBadLooseMinus, "jet_AntiKt4TopoNewEM_isBadLooseMinus" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_isBadLoose, "jet_AntiKt4TopoNewEM_isBadLoose" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_isBadMedium, "jet_AntiKt4TopoNewEM_isBadMedium" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_isBadTight, "jet_AntiKt4TopoNewEM_isBadTight" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_emfrac, "jet_AntiKt4TopoNewEM_emfrac" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_Offset, "jet_AntiKt4TopoNewEM_Offset" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_EMJES, "jet_AntiKt4TopoNewEM_EMJES" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_EMJES_EtaCorr, "jet_AntiKt4TopoNewEM_EMJES_EtaCorr" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_EMJESnooffset, "jet_AntiKt4TopoNewEM_EMJESnooffset" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_GCWJES, "jet_AntiKt4TopoNewEM_GCWJES" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_GCWJES_EtaCorr, "jet_AntiKt4TopoNewEM_GCWJES_EtaCorr" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_CB, "jet_AntiKt4TopoNewEM_CB" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_LCJES, "jet_AntiKt4TopoNewEM_LCJES" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_emscale_E, "jet_AntiKt4TopoNewEM_emscale_E" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_emscale_pt, "jet_AntiKt4TopoNewEM_emscale_pt" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_emscale_m, "jet_AntiKt4TopoNewEM_emscale_m" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_emscale_eta, "jet_AntiKt4TopoNewEM_emscale_eta" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_emscale_phi, "jet_AntiKt4TopoNewEM_emscale_phi" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_L1_dr, "jet_AntiKt4TopoNewEM_L1_dr" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_L1_matched, "jet_AntiKt4TopoNewEM_L1_matched" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_L2_dr, "jet_AntiKt4TopoNewEM_L2_dr" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_L2_matched, "jet_AntiKt4TopoNewEM_L2_matched" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_EF_dr, "jet_AntiKt4TopoNewEM_EF_dr" );	\
    DeclareVariable( o_m_jet_AntiKt4TopoNewEM_EF_matched, "jet_AntiKt4TopoNewEM_EF_matched" );	\
    DeclareVariable( o_m_mc_n, "mc_n" );	\
    DeclareVariable( o_m_mc_E, "mc_E" );	\
    DeclareVariable( o_m_mc_pt, "mc_pt" );	\
    DeclareVariable( o_m_mc_m, "mc_m" );	\
    DeclareVariable( o_m_mc_eta, "mc_eta" );	\
    DeclareVariable( o_m_mc_phi, "mc_phi" );	\
    DeclareVariable( o_m_mc_px, "mc_px" );	\
    DeclareVariable( o_m_mc_py, "mc_py" );	\
    DeclareVariable( o_m_mc_pz, "mc_pz" );	\
    DeclareVariable( o_m_mc_status, "mc_status" );	\
    DeclareVariable( o_m_mc_barcode, "mc_barcode" );	\
    DeclareVariable( o_m_mc_parents, "mc_parents" );	\
    DeclareVariable( o_m_mc_children, "mc_children" );	\
    DeclareVariable( o_m_mc_pdgId, "mc_pdgId" );	\
    DeclareVariable( o_m_mc_charge, "mc_charge" );	\
    DeclareVariable( o_m_mc_vx_x, "mc_vx_x" );	\
    DeclareVariable( o_m_mc_vx_y, "mc_vx_y" );	\
    DeclareVariable( o_m_mc_vx_z, "mc_vx_z" );	\
    DeclareVariable( o_m_mc_vx_barcode, "mc_vx_barcode" );	\
    DeclareVariable( o_m_mc_child_index, "mc_child_index" );	\
    DeclareVariable( o_m_mc_parent_index, "mc_parent_index" );	\
    DeclareVariable( o_m_MET_Truth_NonInt_etx, "MET_Truth_NonInt_etx" );	\
    DeclareVariable( o_m_MET_Truth_NonInt_ety, "MET_Truth_NonInt_ety" );	\
    DeclareVariable( o_m_MET_Truth_Int_etx, "MET_Truth_Int_etx" );	\
    DeclareVariable( o_m_MET_Truth_Int_ety, "MET_Truth_Int_ety" );	\
    DeclareVariable( o_m_MET_Truth_IntCentral_etx, "MET_Truth_IntCentral_etx" );	\
    DeclareVariable( o_m_MET_Truth_IntCentral_ety, "MET_Truth_IntCentral_ety" );	\
    DeclareVariable( o_m_MET_Truth_IntFwd_etx, "MET_Truth_IntFwd_etx" );	\
    DeclareVariable( o_m_MET_Truth_IntFwd_ety, "MET_Truth_IntFwd_ety" );	\
    DeclareVariable( o_m_MET_Truth_IntOutCover_etx, "MET_Truth_IntOutCover_etx" );	\
    DeclareVariable( o_m_MET_Truth_IntOutCover_ety, "MET_Truth_IntOutCover_ety" );	\
    DeclareVariable( o_m_MET_Truth_IntMuons_etx, "MET_Truth_IntMuons_etx" );	\
    DeclareVariable( o_m_MET_Truth_IntMuons_ety, "MET_Truth_IntMuons_ety" );	\
    DeclareVariable( o_m_el_n, "el_n" );	\
    DeclareVariable( o_m_el_E, "el_E" );	\
    DeclareVariable( o_m_el_pt, "el_pt" );	\
    DeclareVariable( o_m_el_m, "el_m" );	\
    DeclareVariable( o_m_el_px, "el_px" );	\
    DeclareVariable( o_m_el_py, "el_py" );	\
    DeclareVariable( o_m_el_pz, "el_pz" );	\
    DeclareVariable( o_m_el_eta, "el_eta" );	\
    DeclareVariable( o_m_el_phi, "el_phi" );	\
    DeclareVariable( o_m_el_status, "el_status" );	\
    DeclareVariable( o_m_el_barcode, "el_barcode" );	\
    DeclareVariable( o_m_el_charge, "el_charge" );	\
    DeclareVariable( o_m_mu_muid_n, "mu_muid_n" );	\
    DeclareVariable( o_m_mu_muid_E, "mu_muid_E" );	\
    DeclareVariable( o_m_mu_muid_pt, "mu_muid_pt" );	\
    DeclareVariable( o_m_mu_muid_m, "mu_muid_m" );	\
    DeclareVariable( o_m_mu_muid_px, "mu_muid_px" );	\
    DeclareVariable( o_m_mu_muid_py, "mu_muid_py" );	\
    DeclareVariable( o_m_mu_muid_pz, "mu_muid_pz" );	\
    DeclareVariable( o_m_mu_muid_eta, "mu_muid_eta" );	\
    DeclareVariable( o_m_mu_muid_phi, "mu_muid_phi" );	\
    DeclareVariable( o_m_mu_muid_status, "mu_muid_status" );	\
    DeclareVariable( o_m_mu_muid_barcode, "mu_muid_barcode" );	\
    DeclareVariable( o_m_mu_muid_charge, "mu_muid_charge" );	\
    DeclareVariable( o_m_mu_staco_n, "mu_staco_n" );	\
    DeclareVariable( o_m_mu_staco_E, "mu_staco_E" );	\
    DeclareVariable( o_m_mu_staco_pt, "mu_staco_pt" );	\
    DeclareVariable( o_m_mu_staco_m, "mu_staco_m" );	\
    DeclareVariable( o_m_mu_staco_px, "mu_staco_px" );	\
    DeclareVariable( o_m_mu_staco_py, "mu_staco_py" );	\
    DeclareVariable( o_m_mu_staco_pz, "mu_staco_pz" );	\
    DeclareVariable( o_m_mu_staco_eta, "mu_staco_eta" );	\
    DeclareVariable( o_m_mu_staco_phi, "mu_staco_phi" );	\
    DeclareVariable( o_m_mu_staco_status, "mu_staco_status" );	\
    DeclareVariable( o_m_mu_staco_barcode, "mu_staco_barcode" );	\
    DeclareVariable( o_m_mu_staco_charge, "mu_staco_charge" );	\
    DeclareVariable( o_m_tau_n, "tau_n" );	\
    DeclareVariable( o_m_tau_pt, "tau_pt" );	\
    DeclareVariable( o_m_tau_m, "tau_m" );	\
    DeclareVariable( o_m_tau_eta, "tau_eta" );	\
    DeclareVariable( o_m_tau_phi, "tau_phi" );	\
    DeclareVariable( o_m_tau_status, "tau_status" );	\
    DeclareVariable( o_m_tau_barcode, "tau_barcode" );	\
    DeclareVariable( o_m_tau_charge, "tau_charge" );	\
    DeclareVariable( o_m_ph_n, "ph_n" );	\
    DeclareVariable( o_m_ph_E, "ph_E" );	\
    DeclareVariable( o_m_ph_pt, "ph_pt" );	\
    DeclareVariable( o_m_ph_m, "ph_m" );	\
    DeclareVariable( o_m_ph_px, "ph_px" );	\
    DeclareVariable( o_m_ph_py, "ph_py" );	\
    DeclareVariable( o_m_ph_pz, "ph_pz" );	\
    DeclareVariable( o_m_ph_eta, "ph_eta" );	\
    DeclareVariable( o_m_ph_phi, "ph_phi" );	\
    DeclareVariable( o_m_ph_status, "ph_status" );	\
    DeclareVariable( o_m_ph_barcode, "ph_barcode" );	\
    DeclareVariable( o_m_el_truth_n, "el_truth_n" );	\
    DeclareVariable( o_m_el_truth_E, "el_truth_E" );	\
    DeclareVariable( o_m_el_truth_pt, "el_truth_pt" );	\
    DeclareVariable( o_m_el_truth_m, "el_truth_m" );	\
    DeclareVariable( o_m_el_truth_px, "el_truth_px" );	\
    DeclareVariable( o_m_el_truth_py, "el_truth_py" );	\
    DeclareVariable( o_m_el_truth_pz, "el_truth_pz" );	\
    DeclareVariable( o_m_el_truth_eta, "el_truth_eta" );	\
    DeclareVariable( o_m_el_truth_phi, "el_truth_phi" );	\
    DeclareVariable( o_m_el_truth_status, "el_truth_status" );	\
    DeclareVariable( o_m_el_truth_barcode, "el_truth_barcode" );	\
    DeclareVariable( o_m_el_truth_charge, "el_truth_charge" );	\
    DeclareVariable( o_m_mu_muid_truth_n, "mu_muid_truth_n" );	\
    DeclareVariable( o_m_mu_muid_truth_E, "mu_muid_truth_E" );	\
    DeclareVariable( o_m_mu_muid_truth_pt, "mu_muid_truth_pt" );	\
    DeclareVariable( o_m_mu_muid_truth_m, "mu_muid_truth_m" );	\
    DeclareVariable( o_m_mu_muid_truth_px, "mu_muid_truth_px" );	\
    DeclareVariable( o_m_mu_muid_truth_py, "mu_muid_truth_py" );	\
    DeclareVariable( o_m_mu_muid_truth_pz, "mu_muid_truth_pz" );	\
    DeclareVariable( o_m_mu_muid_truth_eta, "mu_muid_truth_eta" );	\
    DeclareVariable( o_m_mu_muid_truth_phi, "mu_muid_truth_phi" );	\
    DeclareVariable( o_m_mu_muid_truth_status, "mu_muid_truth_status" );	\
    DeclareVariable( o_m_mu_muid_truth_barcode, "mu_muid_truth_barcode" );	\
    DeclareVariable( o_m_mu_muid_truth_charge, "mu_muid_truth_charge" );	\
    DeclareVariable( o_m_mu_staco_truth_n, "mu_staco_truth_n" );	\
    DeclareVariable( o_m_mu_staco_truth_E, "mu_staco_truth_E" );	\
    DeclareVariable( o_m_mu_staco_truth_pt, "mu_staco_truth_pt" );	\
    DeclareVariable( o_m_mu_staco_truth_m, "mu_staco_truth_m" );	\
    DeclareVariable( o_m_mu_staco_truth_px, "mu_staco_truth_px" );	\
    DeclareVariable( o_m_mu_staco_truth_py, "mu_staco_truth_py" );	\
    DeclareVariable( o_m_mu_staco_truth_pz, "mu_staco_truth_pz" );	\
    DeclareVariable( o_m_mu_staco_truth_eta, "mu_staco_truth_eta" );	\
    DeclareVariable( o_m_mu_staco_truth_phi, "mu_staco_truth_phi" );	\
    DeclareVariable( o_m_mu_staco_truth_status, "mu_staco_truth_status" );	\
    DeclareVariable( o_m_mu_staco_truth_barcode, "mu_staco_truth_barcode" );	\
    DeclareVariable( o_m_mu_staco_truth_charge, "mu_staco_truth_charge" );	\
    DeclareVariable( o_m_trueTau_n, "trueTau_n" );	\
    DeclareVariable( o_m_trueTau_pt, "trueTau_pt" );	\
    DeclareVariable( o_m_trueTau_m, "trueTau_m" );	\
    DeclareVariable( o_m_trueTau_eta, "trueTau_eta" );	\
    DeclareVariable( o_m_trueTau_phi, "trueTau_phi" );	\
    DeclareVariable( o_m_trueTau_status, "trueTau_status" );	\
    DeclareVariable( o_m_trueTau_barcode, "trueTau_barcode" );	\
    DeclareVariable( o_m_trueTau_charge, "trueTau_charge" );	\
    DeclareVariable( o_m_ph_truth_n, "ph_truth_n" );	\
    DeclareVariable( o_m_ph_truth_E, "ph_truth_E" );	\
    DeclareVariable( o_m_ph_truth_pt, "ph_truth_pt" );	\
    DeclareVariable( o_m_ph_truth_m, "ph_truth_m" );	\
    DeclareVariable( o_m_ph_truth_px, "ph_truth_px" );	\
    DeclareVariable( o_m_ph_truth_py, "ph_truth_py" );	\
    DeclareVariable( o_m_ph_truth_pz, "ph_truth_pz" );	\
    DeclareVariable( o_m_ph_truth_eta, "ph_truth_eta" );	\
    DeclareVariable( o_m_ph_truth_phi, "ph_truth_phi" );	\
    DeclareVariable( o_m_ph_truth_status, "ph_truth_status" );	\
    DeclareVariable( o_m_ph_truth_barcode, "ph_truth_barcode" );	\
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
    o_m_detmask0 = -999;\
    o_m_detmask1 = -999;\
    o_m_actualIntPerXing = -999;\
    o_m_averageIntPerXing = -999;\
    o_m_mc_channel_number = -999;\
    o_m_mc_event_number = -999;\
    o_m_mc_event_weight = -999;\
    o_m_pixelFlags = -999;\
    o_m_sctFlags = -999;\
    o_m_trtFlags = -999;\
    o_m_larFlags = -999;\
    o_m_tileFlags = -999;\
    o_m_muonFlags = -999;\
    o_m_fwdFlags = -999;\
    o_m_coreFlags = -999;\
    o_m_pixelError = -999;\
    o_m_sctError = -999;\
    o_m_trtError = -999;\
    o_m_larError = -999;\
    o_m_tileError = -999;\
    o_m_muonError = -999;\
    o_m_fwdError = -999;\
    o_m_coreError = -999;\
    o_m_isSimulation = -999;\
    o_m_isCalibration = -999;\
    o_m_isTestBeam = -999;\
    o_m_mcevt_n = -999;\
    o_m_mcevt_signal_process_id.clear();\
    o_m_mcevt_event_number.clear();\
    o_m_mcevt_event_scale.clear();\
    o_m_mcevt_alphaQCD.clear();\
    o_m_mcevt_alphaQED.clear();\
    o_m_mcevt_pdf_id1.clear();\
    o_m_mcevt_pdf_id2.clear();\
    o_m_mcevt_pdf_x1.clear();\
    o_m_mcevt_pdf_x2.clear();\
    o_m_mcevt_pdf_scale.clear();\
    o_m_mcevt_pdf1.clear();\
    o_m_mcevt_pdf2.clear();\
    o_m_mcevt_weight.clear();\
    o_m_mcevt_nparticle.clear();\
    o_m_mcevt_pileUpType.clear();\
    o_m_mcVxn = -999;\
    o_m_mcVxx.clear();\
    o_m_mcVxy.clear();\
    o_m_mcVxz.clear();\
    o_m_vxn = -999;\
    o_m_vxx.clear();\
    o_m_vxy.clear();\
    o_m_vxz.clear();\
    o_m_jet_AntiKt4TruthJets_n = -999;\
    o_m_jet_AntiKt4TruthJets_E.clear();\
    o_m_jet_AntiKt4TruthJets_pt.clear();\
    o_m_jet_AntiKt4TruthJets_m.clear();\
    o_m_jet_AntiKt4TruthJets_eta.clear();\
    o_m_jet_AntiKt4TruthJets_phi.clear();\
    o_m_jet_AntiKt4TruthJets_EtaOrigin.clear();\
    o_m_jet_AntiKt4TruthJets_PhiOrigin.clear();\
    o_m_jet_AntiKt4TruthJets_MOrigin.clear();\
    o_m_jet_AntiKt4TruthJets_EtaOriginEM.clear();\
    o_m_jet_AntiKt4TruthJets_PhiOriginEM.clear();\
    o_m_jet_AntiKt4TruthJets_MOriginEM.clear();\
    o_m_jet_AntiKt4TruthJets_WIDTH.clear();\
    o_m_jet_AntiKt4TruthJets_n90.clear();\
    o_m_jet_AntiKt4TruthJets_Timing.clear();\
    o_m_jet_AntiKt4TruthJets_LArQuality.clear();\
    o_m_jet_AntiKt4TruthJets_nTrk.clear();\
    o_m_jet_AntiKt4TruthJets_sumPtTrk.clear();\
    o_m_jet_AntiKt4TruthJets_OriginIndex.clear();\
    o_m_jet_AntiKt4TruthJets_HECQuality.clear();\
    o_m_jet_AntiKt4TruthJets_NegativeE.clear();\
    o_m_jet_AntiKt4TruthJets_AverageLArQF.clear();\
    o_m_jet_AntiKt4TruthJets_YFlip12.clear();\
    o_m_jet_AntiKt4TruthJets_YFlip23.clear();\
    o_m_jet_AntiKt4TruthJets_BCH_CORR_CELL.clear();\
    o_m_jet_AntiKt4TruthJets_BCH_CORR_DOTX.clear();\
    o_m_jet_AntiKt4TruthJets_BCH_CORR_JET.clear();\
    o_m_jet_AntiKt4TruthJets_BCH_CORR_JET_FORCELL.clear();\
    o_m_jet_AntiKt4TruthJets_ENG_BAD_CELLS.clear();\
    o_m_jet_AntiKt4TruthJets_N_BAD_CELLS.clear();\
    o_m_jet_AntiKt4TruthJets_N_BAD_CELLS_CORR.clear();\
    o_m_jet_AntiKt4TruthJets_BAD_CELLS_CORR_E.clear();\
    o_m_jet_AntiKt4TruthJets_NumTowers.clear();\
    o_m_jet_AntiKt4TruthJets_SamplingMax.clear();\
    o_m_jet_AntiKt4TruthJets_fracSamplingMax.clear();\
    o_m_jet_AntiKt4TruthJets_hecf.clear();\
    o_m_jet_AntiKt4TruthJets_tgap3f.clear();\
    o_m_jet_AntiKt4TruthJets_isUgly.clear();\
    o_m_jet_AntiKt4TruthJets_isBadLooseMinus.clear();\
    o_m_jet_AntiKt4TruthJets_isBadLoose.clear();\
    o_m_jet_AntiKt4TruthJets_isBadMedium.clear();\
    o_m_jet_AntiKt4TruthJets_isBadTight.clear();\
    o_m_jet_AntiKt4TruthJets_emfrac.clear();\
    o_m_jet_AntiKt4TruthJets_Offset.clear();\
    o_m_jet_AntiKt4TruthJets_EMJES.clear();\
    o_m_jet_AntiKt4TruthJets_EMJES_EtaCorr.clear();\
    o_m_jet_AntiKt4TruthJets_EMJESnooffset.clear();\
    o_m_jet_AntiKt4TruthJets_GCWJES.clear();\
    o_m_jet_AntiKt4TruthJets_GCWJES_EtaCorr.clear();\
    o_m_jet_AntiKt4TruthJets_CB.clear();\
    o_m_jet_AntiKt4TruthJets_LCJES.clear();\
    o_m_jet_AntiKt4TruthJets_emscale_E.clear();\
    o_m_jet_AntiKt4TruthJets_emscale_pt.clear();\
    o_m_jet_AntiKt4TruthJets_emscale_m.clear();\
    o_m_jet_AntiKt4TruthJets_emscale_eta.clear();\
    o_m_jet_AntiKt4TruthJets_emscale_phi.clear();\
    o_m_jet_AntiKt4TruthJets_L1_dr.clear();\
    o_m_jet_AntiKt4TruthJets_L1_matched.clear();\
    o_m_jet_AntiKt4TruthJets_L2_dr.clear();\
    o_m_jet_AntiKt4TruthJets_L2_matched.clear();\
    o_m_jet_AntiKt4TruthJets_EF_dr.clear();\
    o_m_jet_AntiKt4TruthJets_EF_matched.clear();\
    o_m_jet_AntiKt4TopoNewEM_n = -999;\
    o_m_jet_AntiKt4TopoNewEM_E.clear();\
    o_m_jet_AntiKt4TopoNewEM_pt.clear();\
    o_m_jet_AntiKt4TopoNewEM_m.clear();\
    o_m_jet_AntiKt4TopoNewEM_eta.clear();\
    o_m_jet_AntiKt4TopoNewEM_phi.clear();\
    o_m_jet_AntiKt4TopoNewEM_EtaOrigin.clear();\
    o_m_jet_AntiKt4TopoNewEM_PhiOrigin.clear();\
    o_m_jet_AntiKt4TopoNewEM_MOrigin.clear();\
    o_m_jet_AntiKt4TopoNewEM_EtaOriginEM.clear();\
    o_m_jet_AntiKt4TopoNewEM_PhiOriginEM.clear();\
    o_m_jet_AntiKt4TopoNewEM_MOriginEM.clear();\
    o_m_jet_AntiKt4TopoNewEM_WIDTH.clear();\
    o_m_jet_AntiKt4TopoNewEM_n90.clear();\
    o_m_jet_AntiKt4TopoNewEM_Timing.clear();\
    o_m_jet_AntiKt4TopoNewEM_LArQuality.clear();\
    o_m_jet_AntiKt4TopoNewEM_nTrk.clear();\
    o_m_jet_AntiKt4TopoNewEM_sumPtTrk.clear();\
    o_m_jet_AntiKt4TopoNewEM_OriginIndex.clear();\
    o_m_jet_AntiKt4TopoNewEM_HECQuality.clear();\
    o_m_jet_AntiKt4TopoNewEM_NegativeE.clear();\
    o_m_jet_AntiKt4TopoNewEM_AverageLArQF.clear();\
    o_m_jet_AntiKt4TopoNewEM_YFlip12.clear();\
    o_m_jet_AntiKt4TopoNewEM_YFlip23.clear();\
    o_m_jet_AntiKt4TopoNewEM_BCH_CORR_CELL.clear();\
    o_m_jet_AntiKt4TopoNewEM_BCH_CORR_DOTX.clear();\
    o_m_jet_AntiKt4TopoNewEM_BCH_CORR_JET.clear();\
    o_m_jet_AntiKt4TopoNewEM_BCH_CORR_JET_FORCELL.clear();\
    o_m_jet_AntiKt4TopoNewEM_ENG_BAD_CELLS.clear();\
    o_m_jet_AntiKt4TopoNewEM_N_BAD_CELLS.clear();\
    o_m_jet_AntiKt4TopoNewEM_N_BAD_CELLS_CORR.clear();\
    o_m_jet_AntiKt4TopoNewEM_BAD_CELLS_CORR_E.clear();\
    o_m_jet_AntiKt4TopoNewEM_NumTowers.clear();\
    o_m_jet_AntiKt4TopoNewEM_SamplingMax.clear();\
    o_m_jet_AntiKt4TopoNewEM_fracSamplingMax.clear();\
    o_m_jet_AntiKt4TopoNewEM_hecf.clear();\
    o_m_jet_AntiKt4TopoNewEM_tgap3f.clear();\
    o_m_jet_AntiKt4TopoNewEM_isUgly.clear();\
    o_m_jet_AntiKt4TopoNewEM_isBadLooseMinus.clear();\
    o_m_jet_AntiKt4TopoNewEM_isBadLoose.clear();\
    o_m_jet_AntiKt4TopoNewEM_isBadMedium.clear();\
    o_m_jet_AntiKt4TopoNewEM_isBadTight.clear();\
    o_m_jet_AntiKt4TopoNewEM_emfrac.clear();\
    o_m_jet_AntiKt4TopoNewEM_Offset.clear();\
    o_m_jet_AntiKt4TopoNewEM_EMJES.clear();\
    o_m_jet_AntiKt4TopoNewEM_EMJES_EtaCorr.clear();\
    o_m_jet_AntiKt4TopoNewEM_EMJESnooffset.clear();\
    o_m_jet_AntiKt4TopoNewEM_GCWJES.clear();\
    o_m_jet_AntiKt4TopoNewEM_GCWJES_EtaCorr.clear();\
    o_m_jet_AntiKt4TopoNewEM_CB.clear();\
    o_m_jet_AntiKt4TopoNewEM_LCJES.clear();\
    o_m_jet_AntiKt4TopoNewEM_emscale_E.clear();\
    o_m_jet_AntiKt4TopoNewEM_emscale_pt.clear();\
    o_m_jet_AntiKt4TopoNewEM_emscale_m.clear();\
    o_m_jet_AntiKt4TopoNewEM_emscale_eta.clear();\
    o_m_jet_AntiKt4TopoNewEM_emscale_phi.clear();\
    o_m_jet_AntiKt4TopoNewEM_L1_dr.clear();\
    o_m_jet_AntiKt4TopoNewEM_L1_matched.clear();\
    o_m_jet_AntiKt4TopoNewEM_L2_dr.clear();\
    o_m_jet_AntiKt4TopoNewEM_L2_matched.clear();\
    o_m_jet_AntiKt4TopoNewEM_EF_dr.clear();\
    o_m_jet_AntiKt4TopoNewEM_EF_matched.clear();\
    o_m_mc_n = -999;\
    o_m_mc_E.clear();\
    o_m_mc_pt.clear();\
    o_m_mc_m.clear();\
    o_m_mc_eta.clear();\
    o_m_mc_phi.clear();\
    o_m_mc_px.clear();\
    o_m_mc_py.clear();\
    o_m_mc_pz.clear();\
    o_m_mc_status.clear();\
    o_m_mc_barcode.clear();\
    o_m_mc_parents.clear();\
    o_m_mc_children.clear();\
    o_m_mc_pdgId.clear();\
    o_m_mc_charge.clear();\
    o_m_mc_vx_x.clear();\
    o_m_mc_vx_y.clear();\
    o_m_mc_vx_z.clear();\
    o_m_mc_vx_barcode.clear();\
    o_m_mc_child_index.clear();\
    o_m_mc_parent_index.clear();\
    o_m_MET_Truth_NonInt_etx = -999;\
    o_m_MET_Truth_NonInt_ety = -999;\
    o_m_MET_Truth_Int_etx = -999;\
    o_m_MET_Truth_Int_ety = -999;\
    o_m_MET_Truth_IntCentral_etx = -999;\
    o_m_MET_Truth_IntCentral_ety = -999;\
    o_m_MET_Truth_IntFwd_etx = -999;\
    o_m_MET_Truth_IntFwd_ety = -999;\
    o_m_MET_Truth_IntOutCover_etx = -999;\
    o_m_MET_Truth_IntOutCover_ety = -999;\
    o_m_MET_Truth_IntMuons_etx = -999;\
    o_m_MET_Truth_IntMuons_ety = -999;\
    o_m_el_n = -999;\
    o_m_el_E.clear();\
    o_m_el_pt.clear();\
    o_m_el_m.clear();\
    o_m_el_px.clear();\
    o_m_el_py.clear();\
    o_m_el_pz.clear();\
    o_m_el_eta.clear();\
    o_m_el_phi.clear();\
    o_m_el_status.clear();\
    o_m_el_barcode.clear();\
    o_m_el_charge.clear();\
    o_m_mu_muid_n = -999;\
    o_m_mu_muid_E.clear();\
    o_m_mu_muid_pt.clear();\
    o_m_mu_muid_m.clear();\
    o_m_mu_muid_px.clear();\
    o_m_mu_muid_py.clear();\
    o_m_mu_muid_pz.clear();\
    o_m_mu_muid_eta.clear();\
    o_m_mu_muid_phi.clear();\
    o_m_mu_muid_status.clear();\
    o_m_mu_muid_barcode.clear();\
    o_m_mu_muid_charge.clear();\
    o_m_mu_staco_n = -999;\
    o_m_mu_staco_E.clear();\
    o_m_mu_staco_pt.clear();\
    o_m_mu_staco_m.clear();\
    o_m_mu_staco_px.clear();\
    o_m_mu_staco_py.clear();\
    o_m_mu_staco_pz.clear();\
    o_m_mu_staco_eta.clear();\
    o_m_mu_staco_phi.clear();\
    o_m_mu_staco_status.clear();\
    o_m_mu_staco_barcode.clear();\
    o_m_mu_staco_charge.clear();\
    o_m_tau_n = -999;\
    o_m_tau_pt.clear();\
    o_m_tau_m.clear();\
    o_m_tau_eta.clear();\
    o_m_tau_phi.clear();\
    o_m_tau_status.clear();\
    o_m_tau_barcode.clear();\
    o_m_tau_charge.clear();\
    o_m_ph_n = -999;\
    o_m_ph_E.clear();\
    o_m_ph_pt.clear();\
    o_m_ph_m.clear();\
    o_m_ph_px.clear();\
    o_m_ph_py.clear();\
    o_m_ph_pz.clear();\
    o_m_ph_eta.clear();\
    o_m_ph_phi.clear();\
    o_m_ph_status.clear();\
    o_m_ph_barcode.clear();\
    o_m_el_truth_n = -999;\
    o_m_el_truth_E.clear();\
    o_m_el_truth_pt.clear();\
    o_m_el_truth_m.clear();\
    o_m_el_truth_px.clear();\
    o_m_el_truth_py.clear();\
    o_m_el_truth_pz.clear();\
    o_m_el_truth_eta.clear();\
    o_m_el_truth_phi.clear();\
    o_m_el_truth_status.clear();\
    o_m_el_truth_barcode.clear();\
    o_m_el_truth_charge.clear();\
    o_m_mu_muid_truth_n = -999;\
    o_m_mu_muid_truth_E.clear();\
    o_m_mu_muid_truth_pt.clear();\
    o_m_mu_muid_truth_m.clear();\
    o_m_mu_muid_truth_px.clear();\
    o_m_mu_muid_truth_py.clear();\
    o_m_mu_muid_truth_pz.clear();\
    o_m_mu_muid_truth_eta.clear();\
    o_m_mu_muid_truth_phi.clear();\
    o_m_mu_muid_truth_status.clear();\
    o_m_mu_muid_truth_barcode.clear();\
    o_m_mu_muid_truth_charge.clear();\
    o_m_mu_staco_truth_n = -999;\
    o_m_mu_staco_truth_E.clear();\
    o_m_mu_staco_truth_pt.clear();\
    o_m_mu_staco_truth_m.clear();\
    o_m_mu_staco_truth_px.clear();\
    o_m_mu_staco_truth_py.clear();\
    o_m_mu_staco_truth_pz.clear();\
    o_m_mu_staco_truth_eta.clear();\
    o_m_mu_staco_truth_phi.clear();\
    o_m_mu_staco_truth_status.clear();\
    o_m_mu_staco_truth_barcode.clear();\
    o_m_mu_staco_truth_charge.clear();\
    o_m_trueTau_n = -999;\
    o_m_trueTau_pt.clear();\
    o_m_trueTau_m.clear();\
    o_m_trueTau_eta.clear();\
    o_m_trueTau_phi.clear();\
    o_m_trueTau_status.clear();\
    o_m_trueTau_barcode.clear();\
    o_m_trueTau_charge.clear();\
    o_m_ph_truth_n = -999;\
    o_m_ph_truth_E.clear();\
    o_m_ph_truth_pt.clear();\
    o_m_ph_truth_m.clear();\
    o_m_ph_truth_px.clear();\
    o_m_ph_truth_py.clear();\
    o_m_ph_truth_pz.clear();\
    o_m_ph_truth_eta.clear();\
    o_m_ph_truth_phi.clear();\
    o_m_ph_truth_status.clear();\
    o_m_ph_truth_barcode.clear();\
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
   o_m_detmask0 = m_detmask0;\
   o_m_detmask1 = m_detmask1;\
   o_m_actualIntPerXing = m_actualIntPerXing;\
   o_m_averageIntPerXing = m_averageIntPerXing;\
   o_m_mc_channel_number = m_mc_channel_number;\
   o_m_mc_event_number = m_mc_event_number;\
   o_m_mc_event_weight = m_mc_event_weight;\
   o_m_pixelFlags = m_pixelFlags;\
   o_m_sctFlags = m_sctFlags;\
   o_m_trtFlags = m_trtFlags;\
   o_m_larFlags = m_larFlags;\
   o_m_tileFlags = m_tileFlags;\
   o_m_muonFlags = m_muonFlags;\
   o_m_fwdFlags = m_fwdFlags;\
   o_m_coreFlags = m_coreFlags;\
   o_m_pixelError = m_pixelError;\
   o_m_sctError = m_sctError;\
   o_m_trtError = m_trtError;\
   o_m_larError = m_larError;\
   o_m_tileError = m_tileError;\
   o_m_muonError = m_muonError;\
   o_m_fwdError = m_fwdError;\
   o_m_coreError = m_coreError;\
   o_m_isSimulation = m_isSimulation;\
   o_m_isCalibration = m_isCalibration;\
   o_m_isTestBeam = m_isTestBeam;\
   o_m_mcevt_n = m_mcevt_n;\
   o_m_mcevt_signal_process_id = std::vector<int>(*m_mcevt_signal_process_id);\
   o_m_mcevt_event_number = std::vector<int>(*m_mcevt_event_number);\
   o_m_mcevt_pdf_id1 = std::vector<int>(*m_mcevt_pdf_id1);\
   o_m_mcevt_pdf_id2 = std::vector<int>(*m_mcevt_pdf_id2);\
   o_m_mcevt_pdf_x1 = std::vector<double>(*m_mcevt_pdf_x1);\
   o_m_mcevt_pdf_x2 = std::vector<double>(*m_mcevt_pdf_x2);\
   o_m_mcevt_pdf_scale = std::vector<double>(*m_mcevt_pdf_scale);\
   o_m_mcevt_pdf1 = std::vector<double>(*m_mcevt_pdf1);\
   o_m_mcevt_pdf2 = std::vector<double>(*m_mcevt_pdf2);\
   o_m_mcevt_weight = std::vector<std::vector<double> >(*m_mcevt_weight);\
   o_m_mcevt_nparticle = std::vector<int>(*m_mcevt_nparticle);\
   o_m_mcevt_pileUpType = std::vector<short>(*m_mcevt_pileUpType);\
   o_m_mcVxn = m_mcVxn;\
   o_m_mcVxx = std::vector<float>(*m_mcVxx);\
   o_m_mcVxy = std::vector<float>(*m_mcVxy);\
   o_m_mcVxz = std::vector<float>(*m_mcVxz);\
   o_m_vxn = m_vxn;\
   o_m_vxx = std::vector<float>(*m_vxx);\
   o_m_vxy = std::vector<float>(*m_vxy);\
   o_m_vxz = std::vector<float>(*m_vxz);\
   o_m_jet_AntiKt4TruthJets_n = m_jet_AntiKt4TruthJets_n;\
   o_m_jet_AntiKt4TruthJets_E = std::vector<float>(*m_jet_AntiKt4TruthJets_E);\
   o_m_jet_AntiKt4TruthJets_pt = std::vector<float>(*m_jet_AntiKt4TruthJets_pt);\
   o_m_jet_AntiKt4TruthJets_m = std::vector<float>(*m_jet_AntiKt4TruthJets_m);\
   o_m_jet_AntiKt4TruthJets_eta = std::vector<float>(*m_jet_AntiKt4TruthJets_eta);\
   o_m_jet_AntiKt4TruthJets_phi = std::vector<float>(*m_jet_AntiKt4TruthJets_phi);\
   o_m_jet_AntiKt4TruthJets_EtaOrigin = std::vector<float>(*m_jet_AntiKt4TruthJets_EtaOrigin);\
   o_m_jet_AntiKt4TruthJets_PhiOrigin = std::vector<float>(*m_jet_AntiKt4TruthJets_PhiOrigin);\
   o_m_jet_AntiKt4TruthJets_MOrigin = std::vector<float>(*m_jet_AntiKt4TruthJets_MOrigin);\
   o_m_jet_AntiKt4TruthJets_EtaOriginEM = std::vector<float>(*m_jet_AntiKt4TruthJets_EtaOriginEM);\
   o_m_jet_AntiKt4TruthJets_PhiOriginEM = std::vector<float>(*m_jet_AntiKt4TruthJets_PhiOriginEM);\
   o_m_jet_AntiKt4TruthJets_MOriginEM = std::vector<float>(*m_jet_AntiKt4TruthJets_MOriginEM);\
   o_m_jet_AntiKt4TruthJets_WIDTH = std::vector<float>(*m_jet_AntiKt4TruthJets_WIDTH);\
   o_m_jet_AntiKt4TruthJets_n90 = std::vector<float>(*m_jet_AntiKt4TruthJets_n90);\
   o_m_jet_AntiKt4TruthJets_Timing = std::vector<float>(*m_jet_AntiKt4TruthJets_Timing);\
   o_m_jet_AntiKt4TruthJets_LArQuality = std::vector<float>(*m_jet_AntiKt4TruthJets_LArQuality);\
   o_m_jet_AntiKt4TruthJets_nTrk = std::vector<float>(*m_jet_AntiKt4TruthJets_nTrk);\
   o_m_jet_AntiKt4TruthJets_sumPtTrk = std::vector<float>(*m_jet_AntiKt4TruthJets_sumPtTrk);\
   o_m_jet_AntiKt4TruthJets_OriginIndex = std::vector<float>(*m_jet_AntiKt4TruthJets_OriginIndex);\
   o_m_jet_AntiKt4TruthJets_HECQuality = std::vector<float>(*m_jet_AntiKt4TruthJets_HECQuality);\
   o_m_jet_AntiKt4TruthJets_NegativeE = std::vector<float>(*m_jet_AntiKt4TruthJets_NegativeE);\
   o_m_jet_AntiKt4TruthJets_AverageLArQF = std::vector<float>(*m_jet_AntiKt4TruthJets_AverageLArQF);\
   o_m_jet_AntiKt4TruthJets_YFlip12 = std::vector<float>(*m_jet_AntiKt4TruthJets_YFlip12);\
   o_m_jet_AntiKt4TruthJets_YFlip23 = std::vector<float>(*m_jet_AntiKt4TruthJets_YFlip23);\
   o_m_jet_AntiKt4TruthJets_BCH_CORR_CELL = std::vector<float>(*m_jet_AntiKt4TruthJets_BCH_CORR_CELL);\
   o_m_jet_AntiKt4TruthJets_BCH_CORR_DOTX = std::vector<float>(*m_jet_AntiKt4TruthJets_BCH_CORR_DOTX);\
   o_m_jet_AntiKt4TruthJets_BCH_CORR_JET = std::vector<float>(*m_jet_AntiKt4TruthJets_BCH_CORR_JET);\
   o_m_jet_AntiKt4TruthJets_BCH_CORR_JET_FORCELL = std::vector<float>(*m_jet_AntiKt4TruthJets_BCH_CORR_JET_FORCELL);\
   o_m_jet_AntiKt4TruthJets_ENG_BAD_CELLS = std::vector<float>(*m_jet_AntiKt4TruthJets_ENG_BAD_CELLS);\
   o_m_jet_AntiKt4TruthJets_N_BAD_CELLS = std::vector<float>(*m_jet_AntiKt4TruthJets_N_BAD_CELLS);\
   o_m_jet_AntiKt4TruthJets_N_BAD_CELLS_CORR = std::vector<float>(*m_jet_AntiKt4TruthJets_N_BAD_CELLS_CORR);\
   o_m_jet_AntiKt4TruthJets_BAD_CELLS_CORR_E = std::vector<float>(*m_jet_AntiKt4TruthJets_BAD_CELLS_CORR_E);\
   o_m_jet_AntiKt4TruthJets_NumTowers = std::vector<float>(*m_jet_AntiKt4TruthJets_NumTowers);\
   o_m_jet_AntiKt4TruthJets_SamplingMax = std::vector<int>(*m_jet_AntiKt4TruthJets_SamplingMax);\
   o_m_jet_AntiKt4TruthJets_fracSamplingMax = std::vector<float>(*m_jet_AntiKt4TruthJets_fracSamplingMax);\
   o_m_jet_AntiKt4TruthJets_hecf = std::vector<float>(*m_jet_AntiKt4TruthJets_hecf);\
   o_m_jet_AntiKt4TruthJets_tgap3f = std::vector<float>(*m_jet_AntiKt4TruthJets_tgap3f);\
   o_m_jet_AntiKt4TruthJets_isUgly = std::vector<int>(*m_jet_AntiKt4TruthJets_isUgly);\
   o_m_jet_AntiKt4TruthJets_isBadLooseMinus = std::vector<int>(*m_jet_AntiKt4TruthJets_isBadLooseMinus);\
   o_m_jet_AntiKt4TruthJets_isBadLoose = std::vector<int>(*m_jet_AntiKt4TruthJets_isBadLoose);\
   o_m_jet_AntiKt4TruthJets_isBadMedium = std::vector<int>(*m_jet_AntiKt4TruthJets_isBadMedium);\
   o_m_jet_AntiKt4TruthJets_isBadTight = std::vector<int>(*m_jet_AntiKt4TruthJets_isBadTight);\
   o_m_jet_AntiKt4TruthJets_emfrac = std::vector<float>(*m_jet_AntiKt4TruthJets_emfrac);\
   o_m_jet_AntiKt4TruthJets_Offset = std::vector<float>(*m_jet_AntiKt4TruthJets_Offset);\
   o_m_jet_AntiKt4TruthJets_EMJES = std::vector<float>(*m_jet_AntiKt4TruthJets_EMJES);\
   o_m_jet_AntiKt4TruthJets_EMJES_EtaCorr = std::vector<float>(*m_jet_AntiKt4TruthJets_EMJES_EtaCorr);\
   o_m_jet_AntiKt4TruthJets_EMJESnooffset = std::vector<float>(*m_jet_AntiKt4TruthJets_EMJESnooffset);\
   o_m_jet_AntiKt4TruthJets_GCWJES = std::vector<float>(*m_jet_AntiKt4TruthJets_GCWJES);\
   o_m_jet_AntiKt4TruthJets_GCWJES_EtaCorr = std::vector<float>(*m_jet_AntiKt4TruthJets_GCWJES_EtaCorr);\
   o_m_jet_AntiKt4TruthJets_CB = std::vector<float>(*m_jet_AntiKt4TruthJets_CB);\
   o_m_jet_AntiKt4TruthJets_LCJES = std::vector<float>(*m_jet_AntiKt4TruthJets_LCJES);\
   o_m_jet_AntiKt4TruthJets_emscale_E = std::vector<float>(*m_jet_AntiKt4TruthJets_emscale_E);\
   o_m_jet_AntiKt4TruthJets_emscale_pt = std::vector<float>(*m_jet_AntiKt4TruthJets_emscale_pt);\
   o_m_jet_AntiKt4TruthJets_emscale_m = std::vector<float>(*m_jet_AntiKt4TruthJets_emscale_m);\
   o_m_jet_AntiKt4TruthJets_emscale_eta = std::vector<float>(*m_jet_AntiKt4TruthJets_emscale_eta);\
   o_m_jet_AntiKt4TruthJets_emscale_phi = std::vector<float>(*m_jet_AntiKt4TruthJets_emscale_phi);\
   o_m_jet_AntiKt4TruthJets_L1_dr = std::vector<float>(*m_jet_AntiKt4TruthJets_L1_dr);\
   o_m_jet_AntiKt4TruthJets_L1_matched = std::vector<int>(*m_jet_AntiKt4TruthJets_L1_matched);\
   o_m_jet_AntiKt4TruthJets_L2_dr = std::vector<float>(*m_jet_AntiKt4TruthJets_L2_dr);\
   o_m_jet_AntiKt4TruthJets_L2_matched = std::vector<int>(*m_jet_AntiKt4TruthJets_L2_matched);\
   o_m_jet_AntiKt4TruthJets_EF_dr = std::vector<float>(*m_jet_AntiKt4TruthJets_EF_dr);\
   o_m_jet_AntiKt4TruthJets_EF_matched = std::vector<int>(*m_jet_AntiKt4TruthJets_EF_matched);\
   o_m_jet_AntiKt4TopoNewEM_n = m_jet_AntiKt4TopoNewEM_n;\
   o_m_jet_AntiKt4TopoNewEM_E = std::vector<float>(*m_jet_AntiKt4TopoNewEM_E);\
   o_m_jet_AntiKt4TopoNewEM_pt = std::vector<float>(*m_jet_AntiKt4TopoNewEM_pt);\
   o_m_jet_AntiKt4TopoNewEM_m = std::vector<float>(*m_jet_AntiKt4TopoNewEM_m);\
   o_m_jet_AntiKt4TopoNewEM_eta = std::vector<float>(*m_jet_AntiKt4TopoNewEM_eta);\
   o_m_jet_AntiKt4TopoNewEM_phi = std::vector<float>(*m_jet_AntiKt4TopoNewEM_phi);\
   o_m_jet_AntiKt4TopoNewEM_EtaOrigin = std::vector<float>(*m_jet_AntiKt4TopoNewEM_EtaOrigin);\
   o_m_jet_AntiKt4TopoNewEM_PhiOrigin = std::vector<float>(*m_jet_AntiKt4TopoNewEM_PhiOrigin);\
   o_m_jet_AntiKt4TopoNewEM_MOrigin = std::vector<float>(*m_jet_AntiKt4TopoNewEM_MOrigin);\
   o_m_jet_AntiKt4TopoNewEM_EtaOriginEM = std::vector<float>(*m_jet_AntiKt4TopoNewEM_EtaOriginEM);\
   o_m_jet_AntiKt4TopoNewEM_PhiOriginEM = std::vector<float>(*m_jet_AntiKt4TopoNewEM_PhiOriginEM);\
   o_m_jet_AntiKt4TopoNewEM_MOriginEM = std::vector<float>(*m_jet_AntiKt4TopoNewEM_MOriginEM);\
   o_m_jet_AntiKt4TopoNewEM_WIDTH = std::vector<float>(*m_jet_AntiKt4TopoNewEM_WIDTH);\
   o_m_jet_AntiKt4TopoNewEM_n90 = std::vector<float>(*m_jet_AntiKt4TopoNewEM_n90);\
   o_m_jet_AntiKt4TopoNewEM_Timing = std::vector<float>(*m_jet_AntiKt4TopoNewEM_Timing);\
   o_m_jet_AntiKt4TopoNewEM_LArQuality = std::vector<float>(*m_jet_AntiKt4TopoNewEM_LArQuality);\
   o_m_jet_AntiKt4TopoNewEM_nTrk = std::vector<float>(*m_jet_AntiKt4TopoNewEM_nTrk);\
   o_m_jet_AntiKt4TopoNewEM_sumPtTrk = std::vector<float>(*m_jet_AntiKt4TopoNewEM_sumPtTrk);\
   o_m_jet_AntiKt4TopoNewEM_OriginIndex = std::vector<float>(*m_jet_AntiKt4TopoNewEM_OriginIndex);\
   o_m_jet_AntiKt4TopoNewEM_HECQuality = std::vector<float>(*m_jet_AntiKt4TopoNewEM_HECQuality);\
   o_m_jet_AntiKt4TopoNewEM_NegativeE = std::vector<float>(*m_jet_AntiKt4TopoNewEM_NegativeE);\
   o_m_jet_AntiKt4TopoNewEM_AverageLArQF = std::vector<float>(*m_jet_AntiKt4TopoNewEM_AverageLArQF);\
   o_m_jet_AntiKt4TopoNewEM_YFlip12 = std::vector<float>(*m_jet_AntiKt4TopoNewEM_YFlip12);\
   o_m_jet_AntiKt4TopoNewEM_YFlip23 = std::vector<float>(*m_jet_AntiKt4TopoNewEM_YFlip23);\
   o_m_jet_AntiKt4TopoNewEM_BCH_CORR_CELL = std::vector<float>(*m_jet_AntiKt4TopoNewEM_BCH_CORR_CELL);\
   o_m_jet_AntiKt4TopoNewEM_BCH_CORR_DOTX = std::vector<float>(*m_jet_AntiKt4TopoNewEM_BCH_CORR_DOTX);\
   o_m_jet_AntiKt4TopoNewEM_BCH_CORR_JET = std::vector<float>(*m_jet_AntiKt4TopoNewEM_BCH_CORR_JET);\
   o_m_jet_AntiKt4TopoNewEM_BCH_CORR_JET_FORCELL = std::vector<float>(*m_jet_AntiKt4TopoNewEM_BCH_CORR_JET_FORCELL);\
   o_m_jet_AntiKt4TopoNewEM_ENG_BAD_CELLS = std::vector<float>(*m_jet_AntiKt4TopoNewEM_ENG_BAD_CELLS);\
   o_m_jet_AntiKt4TopoNewEM_N_BAD_CELLS = std::vector<float>(*m_jet_AntiKt4TopoNewEM_N_BAD_CELLS);\
   o_m_jet_AntiKt4TopoNewEM_N_BAD_CELLS_CORR = std::vector<float>(*m_jet_AntiKt4TopoNewEM_N_BAD_CELLS_CORR);\
   o_m_jet_AntiKt4TopoNewEM_BAD_CELLS_CORR_E = std::vector<float>(*m_jet_AntiKt4TopoNewEM_BAD_CELLS_CORR_E);\
   o_m_jet_AntiKt4TopoNewEM_NumTowers = std::vector<float>(*m_jet_AntiKt4TopoNewEM_NumTowers);\
   o_m_jet_AntiKt4TopoNewEM_SamplingMax = std::vector<int>(*m_jet_AntiKt4TopoNewEM_SamplingMax);\
   o_m_jet_AntiKt4TopoNewEM_fracSamplingMax = std::vector<float>(*m_jet_AntiKt4TopoNewEM_fracSamplingMax);\
   o_m_jet_AntiKt4TopoNewEM_hecf = std::vector<float>(*m_jet_AntiKt4TopoNewEM_hecf);\
   o_m_jet_AntiKt4TopoNewEM_tgap3f = std::vector<float>(*m_jet_AntiKt4TopoNewEM_tgap3f);\
   o_m_jet_AntiKt4TopoNewEM_isUgly = std::vector<int>(*m_jet_AntiKt4TopoNewEM_isUgly);\
   o_m_jet_AntiKt4TopoNewEM_isBadLooseMinus = std::vector<int>(*m_jet_AntiKt4TopoNewEM_isBadLooseMinus);\
   o_m_jet_AntiKt4TopoNewEM_isBadLoose = std::vector<int>(*m_jet_AntiKt4TopoNewEM_isBadLoose);\
   o_m_jet_AntiKt4TopoNewEM_isBadMedium = std::vector<int>(*m_jet_AntiKt4TopoNewEM_isBadMedium);\
   o_m_jet_AntiKt4TopoNewEM_isBadTight = std::vector<int>(*m_jet_AntiKt4TopoNewEM_isBadTight);\
   o_m_jet_AntiKt4TopoNewEM_emfrac = std::vector<float>(*m_jet_AntiKt4TopoNewEM_emfrac);\
   o_m_jet_AntiKt4TopoNewEM_Offset = std::vector<float>(*m_jet_AntiKt4TopoNewEM_Offset);\
   o_m_jet_AntiKt4TopoNewEM_EMJES = std::vector<float>(*m_jet_AntiKt4TopoNewEM_EMJES);\
   o_m_jet_AntiKt4TopoNewEM_EMJES_EtaCorr = std::vector<float>(*m_jet_AntiKt4TopoNewEM_EMJES_EtaCorr);\
   o_m_jet_AntiKt4TopoNewEM_EMJESnooffset = std::vector<float>(*m_jet_AntiKt4TopoNewEM_EMJESnooffset);\
   o_m_jet_AntiKt4TopoNewEM_GCWJES = std::vector<float>(*m_jet_AntiKt4TopoNewEM_GCWJES);\
   o_m_jet_AntiKt4TopoNewEM_GCWJES_EtaCorr = std::vector<float>(*m_jet_AntiKt4TopoNewEM_GCWJES_EtaCorr);\
   o_m_jet_AntiKt4TopoNewEM_CB = std::vector<float>(*m_jet_AntiKt4TopoNewEM_CB);\
   o_m_jet_AntiKt4TopoNewEM_LCJES = std::vector<float>(*m_jet_AntiKt4TopoNewEM_LCJES);\
   o_m_jet_AntiKt4TopoNewEM_emscale_E = std::vector<float>(*m_jet_AntiKt4TopoNewEM_emscale_E);\
   o_m_jet_AntiKt4TopoNewEM_emscale_pt = std::vector<float>(*m_jet_AntiKt4TopoNewEM_emscale_pt);\
   o_m_jet_AntiKt4TopoNewEM_emscale_m = std::vector<float>(*m_jet_AntiKt4TopoNewEM_emscale_m);\
   o_m_jet_AntiKt4TopoNewEM_emscale_eta = std::vector<float>(*m_jet_AntiKt4TopoNewEM_emscale_eta);\
   o_m_jet_AntiKt4TopoNewEM_emscale_phi = std::vector<float>(*m_jet_AntiKt4TopoNewEM_emscale_phi);\
   o_m_jet_AntiKt4TopoNewEM_L1_dr = std::vector<float>(*m_jet_AntiKt4TopoNewEM_L1_dr);\
   o_m_jet_AntiKt4TopoNewEM_L1_matched = std::vector<int>(*m_jet_AntiKt4TopoNewEM_L1_matched);\
   o_m_jet_AntiKt4TopoNewEM_L2_dr = std::vector<float>(*m_jet_AntiKt4TopoNewEM_L2_dr);\
   o_m_jet_AntiKt4TopoNewEM_L2_matched = std::vector<int>(*m_jet_AntiKt4TopoNewEM_L2_matched);\
   o_m_jet_AntiKt4TopoNewEM_EF_dr = std::vector<float>(*m_jet_AntiKt4TopoNewEM_EF_dr);\
   o_m_jet_AntiKt4TopoNewEM_EF_matched = std::vector<int>(*m_jet_AntiKt4TopoNewEM_EF_matched);\
   o_m_mc_n = m_mc_n;\
   o_m_mc_E = std::vector<float>(*m_mc_E);\
   o_m_mc_pt = std::vector<float>(*m_mc_pt);\
   o_m_mc_m = std::vector<float>(*m_mc_m);\
   o_m_mc_eta = std::vector<float>(*m_mc_eta);\
   o_m_mc_phi = std::vector<float>(*m_mc_phi);\
   o_m_mc_px = std::vector<float>(*m_mc_px);\
   o_m_mc_py = std::vector<float>(*m_mc_py);\
   o_m_mc_pz = std::vector<float>(*m_mc_pz);\
   o_m_mc_status = std::vector<int>(*m_mc_status);\
   o_m_mc_barcode = std::vector<int>(*m_mc_barcode);\
   o_m_mc_pdgId = std::vector<int>(*m_mc_pdgId);\
   o_m_mc_charge = std::vector<float>(*m_mc_charge);\
   o_m_mc_vx_x = std::vector<float>(*m_mc_vx_x);\
   o_m_mc_vx_y = std::vector<float>(*m_mc_vx_y);\
   o_m_mc_vx_z = std::vector<float>(*m_mc_vx_z);\
   o_m_mc_vx_barcode = std::vector<int>(*m_mc_vx_barcode);\
   o_m_mc_child_index = std::vector<std::vector<int> >(*m_mc_child_index);\
   o_m_mc_parent_index = std::vector<std::vector<int> >(*m_mc_parent_index);\
   o_m_MET_Truth_NonInt_etx = m_MET_Truth_NonInt_etx;\
   o_m_MET_Truth_NonInt_ety = m_MET_Truth_NonInt_ety;\
   o_m_MET_Truth_Int_etx = m_MET_Truth_Int_etx;\
   o_m_MET_Truth_Int_ety = m_MET_Truth_Int_ety;\
   o_m_MET_Truth_IntCentral_etx = m_MET_Truth_IntCentral_etx;\
   o_m_MET_Truth_IntCentral_ety = m_MET_Truth_IntCentral_ety;\
   o_m_MET_Truth_IntFwd_etx = m_MET_Truth_IntFwd_etx;\
   o_m_MET_Truth_IntFwd_ety = m_MET_Truth_IntFwd_ety;\
   o_m_MET_Truth_IntOutCover_etx = m_MET_Truth_IntOutCover_etx;\
   o_m_MET_Truth_IntOutCover_ety = m_MET_Truth_IntOutCover_ety;\
   o_m_MET_Truth_IntMuons_etx = m_MET_Truth_IntMuons_etx;\
   o_m_MET_Truth_IntMuons_ety = m_MET_Truth_IntMuons_ety;\
   o_m_el_n = m_el_n;\
   o_m_el_E = std::vector<float>(*m_el_E);\
   o_m_el_pt = std::vector<float>(*m_el_pt);\
   o_m_el_m = std::vector<float>(*m_el_m);\
   o_m_el_px = std::vector<float>(*m_el_px);\
   o_m_el_py = std::vector<float>(*m_el_py);\
   o_m_el_pz = std::vector<float>(*m_el_pz);\
   o_m_el_eta = std::vector<float>(*m_el_eta);\
   o_m_el_phi = std::vector<float>(*m_el_phi);\
   o_m_el_status = std::vector<int>(*m_el_status);\
   o_m_el_barcode = std::vector<int>(*m_el_barcode);\
   o_m_el_charge = std::vector<int>(*m_el_charge);\
   o_m_mu_muid_n = m_mu_muid_n;\
   o_m_mu_muid_E = std::vector<float>(*m_mu_muid_E);\
   o_m_mu_muid_pt = std::vector<float>(*m_mu_muid_pt);\
   o_m_mu_muid_m = std::vector<float>(*m_mu_muid_m);\
   o_m_mu_muid_px = std::vector<float>(*m_mu_muid_px);\
   o_m_mu_muid_py = std::vector<float>(*m_mu_muid_py);\
   o_m_mu_muid_pz = std::vector<float>(*m_mu_muid_pz);\
   o_m_mu_muid_eta = std::vector<float>(*m_mu_muid_eta);\
   o_m_mu_muid_phi = std::vector<float>(*m_mu_muid_phi);\
   o_m_mu_muid_status = std::vector<int>(*m_mu_muid_status);\
   o_m_mu_muid_barcode = std::vector<int>(*m_mu_muid_barcode);\
   o_m_mu_muid_charge = std::vector<int>(*m_mu_muid_charge);\
   o_m_mu_staco_n = m_mu_staco_n;\
   o_m_mu_staco_E = std::vector<float>(*m_mu_staco_E);\
   o_m_mu_staco_pt = std::vector<float>(*m_mu_staco_pt);\
   o_m_mu_staco_m = std::vector<float>(*m_mu_staco_m);\
   o_m_mu_staco_px = std::vector<float>(*m_mu_staco_px);\
   o_m_mu_staco_py = std::vector<float>(*m_mu_staco_py);\
   o_m_mu_staco_pz = std::vector<float>(*m_mu_staco_pz);\
   o_m_mu_staco_eta = std::vector<float>(*m_mu_staco_eta);\
   o_m_mu_staco_phi = std::vector<float>(*m_mu_staco_phi);\
   o_m_mu_staco_status = std::vector<int>(*m_mu_staco_status);\
   o_m_mu_staco_barcode = std::vector<int>(*m_mu_staco_barcode);\
   o_m_mu_staco_charge = std::vector<int>(*m_mu_staco_charge);\
   o_m_tau_n = m_tau_n;\
   o_m_tau_pt = std::vector<float>(*m_tau_pt);\
   o_m_tau_m = std::vector<float>(*m_tau_m);\
   o_m_tau_eta = std::vector<float>(*m_tau_eta);\
   o_m_tau_phi = std::vector<float>(*m_tau_phi);\
   o_m_tau_status = std::vector<int>(*m_tau_status);\
   o_m_tau_barcode = std::vector<int>(*m_tau_barcode);\
   o_m_tau_charge = std::vector<int>(*m_tau_charge);\
   o_m_ph_n = m_ph_n;\
   o_m_ph_E = std::vector<float>(*m_ph_E);\
   o_m_ph_pt = std::vector<float>(*m_ph_pt);\
   o_m_ph_m = std::vector<float>(*m_ph_m);\
   o_m_ph_px = std::vector<float>(*m_ph_px);\
   o_m_ph_py = std::vector<float>(*m_ph_py);\
   o_m_ph_pz = std::vector<float>(*m_ph_pz);\
   o_m_ph_eta = std::vector<float>(*m_ph_eta);\
   o_m_ph_phi = std::vector<float>(*m_ph_phi);\
   o_m_ph_status = std::vector<int>(*m_ph_status);\
   o_m_ph_barcode = std::vector<int>(*m_ph_barcode);\
   o_m_el_truth_n = m_el_truth_n;\
   o_m_el_truth_E = std::vector<float>(*m_el_truth_E);\
   o_m_el_truth_pt = std::vector<float>(*m_el_truth_pt);\
   o_m_el_truth_m = std::vector<float>(*m_el_truth_m);\
   o_m_el_truth_px = std::vector<float>(*m_el_truth_px);\
   o_m_el_truth_py = std::vector<float>(*m_el_truth_py);\
   o_m_el_truth_pz = std::vector<float>(*m_el_truth_pz);\
   o_m_el_truth_eta = std::vector<float>(*m_el_truth_eta);\
   o_m_el_truth_phi = std::vector<float>(*m_el_truth_phi);\
   o_m_el_truth_status = std::vector<int>(*m_el_truth_status);\
   o_m_el_truth_barcode = std::vector<int>(*m_el_truth_barcode);\
   o_m_el_truth_charge = std::vector<int>(*m_el_truth_charge);\
   o_m_mu_muid_truth_n = m_mu_muid_truth_n;\
   o_m_mu_muid_truth_E = std::vector<float>(*m_mu_muid_truth_E);\
   o_m_mu_muid_truth_pt = std::vector<float>(*m_mu_muid_truth_pt);\
   o_m_mu_muid_truth_m = std::vector<float>(*m_mu_muid_truth_m);\
   o_m_mu_muid_truth_px = std::vector<float>(*m_mu_muid_truth_px);\
   o_m_mu_muid_truth_py = std::vector<float>(*m_mu_muid_truth_py);\
   o_m_mu_muid_truth_pz = std::vector<float>(*m_mu_muid_truth_pz);\
   o_m_mu_muid_truth_eta = std::vector<float>(*m_mu_muid_truth_eta);\
   o_m_mu_muid_truth_phi = std::vector<float>(*m_mu_muid_truth_phi);\
   o_m_mu_muid_truth_status = std::vector<int>(*m_mu_muid_truth_status);\
   o_m_mu_muid_truth_barcode = std::vector<int>(*m_mu_muid_truth_barcode);\
   o_m_mu_muid_truth_charge = std::vector<int>(*m_mu_muid_truth_charge);\
   o_m_mu_staco_truth_n = m_mu_staco_truth_n;\
   o_m_mu_staco_truth_E = std::vector<float>(*m_mu_staco_truth_E);\
   o_m_mu_staco_truth_pt = std::vector<float>(*m_mu_staco_truth_pt);\
   o_m_mu_staco_truth_m = std::vector<float>(*m_mu_staco_truth_m);\
   o_m_mu_staco_truth_px = std::vector<float>(*m_mu_staco_truth_px);\
   o_m_mu_staco_truth_py = std::vector<float>(*m_mu_staco_truth_py);\
   o_m_mu_staco_truth_pz = std::vector<float>(*m_mu_staco_truth_pz);\
   o_m_mu_staco_truth_eta = std::vector<float>(*m_mu_staco_truth_eta);\
   o_m_mu_staco_truth_phi = std::vector<float>(*m_mu_staco_truth_phi);\
   o_m_mu_staco_truth_status = std::vector<int>(*m_mu_staco_truth_status);\
   o_m_mu_staco_truth_barcode = std::vector<int>(*m_mu_staco_truth_barcode);\
   o_m_mu_staco_truth_charge = std::vector<int>(*m_mu_staco_truth_charge);\
   o_m_trueTau_n = m_trueTau_n;\
   o_m_trueTau_pt = std::vector<float>(*m_trueTau_pt);\
   o_m_trueTau_m = std::vector<float>(*m_trueTau_m);\
   o_m_trueTau_eta = std::vector<float>(*m_trueTau_eta);\
   o_m_trueTau_phi = std::vector<float>(*m_trueTau_phi);\
   o_m_trueTau_status = std::vector<int>(*m_trueTau_status);\
   o_m_trueTau_barcode = std::vector<int>(*m_trueTau_barcode);\
   o_m_trueTau_charge = std::vector<int>(*m_trueTau_charge);\
   o_m_ph_truth_n = m_ph_truth_n;\
   o_m_ph_truth_E = std::vector<float>(*m_ph_truth_E);\
   o_m_ph_truth_pt = std::vector<float>(*m_ph_truth_pt);\
   o_m_ph_truth_m = std::vector<float>(*m_ph_truth_m);\
   o_m_ph_truth_px = std::vector<float>(*m_ph_truth_px);\
   o_m_ph_truth_py = std::vector<float>(*m_ph_truth_py);\
   o_m_ph_truth_pz = std::vector<float>(*m_ph_truth_pz);\
   o_m_ph_truth_eta = std::vector<float>(*m_ph_truth_eta);\
   o_m_ph_truth_phi = std::vector<float>(*m_ph_truth_phi);\
   o_m_ph_truth_status = std::vector<int>(*m_ph_truth_status);\
   o_m_ph_truth_barcode = std::vector<int>(*m_ph_truth_barcode);\
  }
#endif

//end definitions DEF_FILTER

//end macro definitions
