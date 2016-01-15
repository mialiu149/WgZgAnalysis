////bin/dukhep_create_filter.py tmp.txt
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
m_EF_mu24_g20vh_loose(0),	\
m_EF_mu24_g20vh_medium(0),	\
m_trig_DB_SMK(0),	\
m_trig_Nav_n(0),	\
m_trig_Nav_chain_ChainId(0),	\
m_trig_Nav_chain_RoIType(0),	\
m_trig_Nav_chain_RoIIndex(0),	\
m_trig_RoI_EF_e_egammaContainer_egamma_Electrons(0),	\
m_trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus(0),	\
m_trig_EF_el_n(0),	\
m_trig_EF_el_E(0),	\
m_trig_EF_el_Et(0),	\
m_trig_EF_el_pt(0),	\
m_trig_EF_el_m(0),	\
m_trig_EF_el_eta(0),	\
m_trig_EF_el_phi(0),	\
m_trig_EF_el_px(0),	\
m_trig_EF_el_py(0),	\
m_trig_EF_el_pz(0),	\
m_trig_RoI_EF_mu_Muon_ROI(0),	\
m_trig_RoI_EF_mu_Muon_ROIStatus(0),	\
m_trig_RoI_EF_mu_TrigMuonEFInfoContainer(0),	\
m_trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus(0),	\
m_trig_RoI_L2_mu_CombinedMuonFeature(0),	\
m_trig_RoI_L2_mu_CombinedMuonFeatureStatus(0),	\
m_trig_RoI_L2_mu_MuonFeature(0),	\
m_trig_RoI_L2_mu_Muon_ROI(0),	\
m_trig_RoI_L2_mu_Muon_ROIStatus(0),	\
m_trig_EF_trigmuonef_track_CB_pt(0),	\
m_trig_EF_trigmuonef_track_CB_eta(0),	\
m_trig_EF_trigmuonef_track_CB_phi(0),	\
m_trig_EF_trigmuonef_track_SA_pt(0),	\
m_trig_EF_trigmuonef_track_SA_eta(0),	\
m_trig_EF_trigmugirl_track_CB_pt(0),	\
m_trig_EF_trigmugirl_track_CB_eta(0),	\
m_trig_EF_trigmugirl_track_CB_phi(0),	\
m_trig_EF_trigmuonef_track_SA_phi(0),	\
m_trig_L2_muonfeature_eta(0),	\
m_trig_L2_muonfeature_phi(0),	\
m_trig_L2_combmuonfeature_eta(0),	\
m_trig_L2_combmuonfeature_phi(0),	\
m_trig_L1_mu_eta(0),	\
m_trig_L1_mu_phi(0),	\
m_trig_L1_mu_thrName(0),	\
m_trig_RoI_EF_mu_TrigMuonEFIsolationContainer(0),	\
m_trig_RoI_EF_mu_TrigMuonEFIsolationContainerStatus(0),	\
m_trig_EF_trigmuonef_track_MuonType(0),	\
m_trig_EF_trigmuonef_EF_mu24i_tight(0),	\
m_trig_EF_trigmuonef_EF_mu36_tight(0),	\
m_trig_EF_trigmuonef_EF_mu15(0),	\
m_trig_EF_trigmuonef_EF_mu40_MSonly_barrel_tight(0)
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define DUKEHEPHEADER_MEMBERS                          \
Bool_t m_EF_mu24_g20vh_loose;	\
Bool_t o_m_EF_mu24_g20vh_loose;	\
Bool_t m_EF_mu24_g20vh_medium;	\
Bool_t o_m_EF_mu24_g20vh_medium;	\
UInt_t m_trig_DB_SMK;	\
UInt_t o_m_trig_DB_SMK;	\
Int_t m_trig_Nav_n;	\
Int_t o_m_trig_Nav_n;	\
std::vector<short>* m_trig_Nav_chain_ChainId;	\
std::vector<short> o_m_trig_Nav_chain_ChainId;	\
std::vector<std::vector<int> >* m_trig_Nav_chain_RoIType;	\
std::vector<std::vector<int> > o_m_trig_Nav_chain_RoIType;	\
std::vector<std::vector<int> >* m_trig_Nav_chain_RoIIndex;	\
std::vector<std::vector<int> > o_m_trig_Nav_chain_RoIIndex;	\
std::vector<std::vector<int> >* m_trig_RoI_EF_e_egammaContainer_egamma_Electrons;	\
std::vector<std::vector<int> > o_m_trig_RoI_EF_e_egammaContainer_egamma_Electrons;	\
std::vector<std::vector<int> >* m_trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus;	\
std::vector<std::vector<int> > o_m_trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus;	\
Int_t m_trig_EF_el_n;	\
Int_t o_m_trig_EF_el_n;	\
std::vector<float>* m_trig_EF_el_E;	\
std::vector<float> o_m_trig_EF_el_E;	\
std::vector<float>* m_trig_EF_el_Et;	\
std::vector<float> o_m_trig_EF_el_Et;	\
std::vector<float>* m_trig_EF_el_pt;	\
std::vector<float> o_m_trig_EF_el_pt;	\
std::vector<float>* m_trig_EF_el_m;	\
std::vector<float> o_m_trig_EF_el_m;	\
std::vector<float>* m_trig_EF_el_eta;	\
std::vector<float> o_m_trig_EF_el_eta;	\
std::vector<float>* m_trig_EF_el_phi;	\
std::vector<float> o_m_trig_EF_el_phi;	\
std::vector<float>* m_trig_EF_el_px;	\
std::vector<float> o_m_trig_EF_el_px;	\
std::vector<float>* m_trig_EF_el_py;	\
std::vector<float> o_m_trig_EF_el_py;	\
std::vector<float>* m_trig_EF_el_pz;	\
std::vector<float> o_m_trig_EF_el_pz;	\
std::vector<int>* m_trig_RoI_EF_mu_Muon_ROI;	\
std::vector<int> o_m_trig_RoI_EF_mu_Muon_ROI;	\
std::vector<int>* m_trig_RoI_EF_mu_Muon_ROIStatus;	\
std::vector<int> o_m_trig_RoI_EF_mu_Muon_ROIStatus;	\
std::vector<std::vector<int> >* m_trig_RoI_EF_mu_TrigMuonEFInfoContainer;	\
std::vector<std::vector<int> > o_m_trig_RoI_EF_mu_TrigMuonEFInfoContainer;	\
std::vector<std::vector<int> >* m_trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus;	\
std::vector<std::vector<int> > o_m_trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus;	\
std::vector<int>* m_trig_RoI_L2_mu_CombinedMuonFeature;	\
std::vector<int> o_m_trig_RoI_L2_mu_CombinedMuonFeature;	\
std::vector<int>* m_trig_RoI_L2_mu_CombinedMuonFeatureStatus;	\
std::vector<int> o_m_trig_RoI_L2_mu_CombinedMuonFeatureStatus;	\
std::vector<int>* m_trig_RoI_L2_mu_MuonFeature;	\
std::vector<int> o_m_trig_RoI_L2_mu_MuonFeature;	\
std::vector<int>* m_trig_RoI_L2_mu_Muon_ROI;	\
std::vector<int> o_m_trig_RoI_L2_mu_Muon_ROI;	\
std::vector<int>* m_trig_RoI_L2_mu_Muon_ROIStatus;	\
std::vector<int> o_m_trig_RoI_L2_mu_Muon_ROIStatus;	\
std::vector<std::vector<float> >* m_trig_EF_trigmuonef_track_CB_pt;	\
std::vector<std::vector<float> > o_m_trig_EF_trigmuonef_track_CB_pt;	\
std::vector<std::vector<float> >* m_trig_EF_trigmuonef_track_CB_eta;	\
std::vector<std::vector<float> > o_m_trig_EF_trigmuonef_track_CB_eta;	\
std::vector<std::vector<float> >* m_trig_EF_trigmuonef_track_CB_phi;	\
std::vector<std::vector<float> > o_m_trig_EF_trigmuonef_track_CB_phi;	\
std::vector<std::vector<float> >* m_trig_EF_trigmuonef_track_SA_pt;	\
std::vector<std::vector<float> > o_m_trig_EF_trigmuonef_track_SA_pt;	\
std::vector<std::vector<float> >* m_trig_EF_trigmuonef_track_SA_eta;	\
std::vector<std::vector<float> > o_m_trig_EF_trigmuonef_track_SA_eta;	\
std::vector<std::vector<float> >* m_trig_EF_trigmugirl_track_CB_pt;	\
std::vector<std::vector<float> > o_m_trig_EF_trigmugirl_track_CB_pt;	\
std::vector<std::vector<float> >* m_trig_EF_trigmugirl_track_CB_eta;	\
std::vector<std::vector<float> > o_m_trig_EF_trigmugirl_track_CB_eta;	\
std::vector<std::vector<float> >* m_trig_EF_trigmugirl_track_CB_phi;	\
std::vector<std::vector<float> > o_m_trig_EF_trigmugirl_track_CB_phi;	\
std::vector<std::vector<float> >* m_trig_EF_trigmuonef_track_SA_phi;	\
std::vector<std::vector<float> > o_m_trig_EF_trigmuonef_track_SA_phi;	\
std::vector<float>* m_trig_L2_muonfeature_eta;	\
std::vector<float> o_m_trig_L2_muonfeature_eta;	\
std::vector<float>* m_trig_L2_muonfeature_phi;	\
std::vector<float> o_m_trig_L2_muonfeature_phi;	\
std::vector<float>* m_trig_L2_combmuonfeature_eta;	\
std::vector<float> o_m_trig_L2_combmuonfeature_eta;	\
std::vector<float>* m_trig_L2_combmuonfeature_phi;	\
std::vector<float> o_m_trig_L2_combmuonfeature_phi;	\
std::vector<float>* m_trig_L1_mu_eta;	\
std::vector<float> o_m_trig_L1_mu_eta;	\
std::vector<float>* m_trig_L1_mu_phi;	\
std::vector<float> o_m_trig_L1_mu_phi;	\
std::vector<string>* m_trig_L1_mu_thrName;	\
std::vector<string> o_m_trig_L1_mu_thrName;	\
std::vector<std::vector<int> >* m_trig_RoI_EF_mu_TrigMuonEFIsolationContainer;	\
std::vector<std::vector<int> > o_m_trig_RoI_EF_mu_TrigMuonEFIsolationContainer;	\
std::vector<std::vector<int> >* m_trig_RoI_EF_mu_TrigMuonEFIsolationContainerStatus;	\
std::vector<std::vector<int> > o_m_trig_RoI_EF_mu_TrigMuonEFIsolationContainerStatus;	\
std::vector<std::vector<int> >* m_trig_EF_trigmuonef_track_MuonType;	\
std::vector<std::vector<int> > o_m_trig_EF_trigmuonef_track_MuonType;	\
std::vector<int>* m_trig_EF_trigmuonef_EF_mu24i_tight;	\
std::vector<int> o_m_trig_EF_trigmuonef_EF_mu24i_tight;	\
std::vector<int>* m_trig_EF_trigmuonef_EF_mu36_tight;	\
std::vector<int> o_m_trig_EF_trigmuonef_EF_mu36_tight;	\
std::vector<int>* m_trig_EF_trigmuonef_EF_mu15;	\
std::vector<int> o_m_trig_EF_trigmuonef_EF_mu15;	\
std::vector<int>* m_trig_EF_trigmuonef_EF_mu40_MSonly_barrel_tight;	\
std::vector<int> o_m_trig_EF_trigmuonef_EF_mu40_MSonly_barrel_tight;
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define CONNECT( stringTREENAME )                      \
  {    ConnectVariable( (stringTREENAME), "EF_mu24_g20vh_loose", m_EF_mu24_g20vh_loose );	\
    ConnectVariable( (stringTREENAME), "EF_mu24_g20vh_medium", m_EF_mu24_g20vh_medium );	\
    ConnectVariable( (stringTREENAME), "trig_DB_SMK", m_trig_DB_SMK );	\
    ConnectVariable( (stringTREENAME), "trig_Nav_n", m_trig_Nav_n );	\
    ConnectVariable( (stringTREENAME), "trig_Nav_chain_ChainId", m_trig_Nav_chain_ChainId );	\
    ConnectVariable( (stringTREENAME), "trig_Nav_chain_RoIType", m_trig_Nav_chain_RoIType );	\
    ConnectVariable( (stringTREENAME), "trig_Nav_chain_RoIIndex", m_trig_Nav_chain_RoIIndex );	\
    ConnectVariable( (stringTREENAME), "trig_RoI_EF_e_egammaContainer_egamma_Electrons", m_trig_RoI_EF_e_egammaContainer_egamma_Electrons );	\
    ConnectVariable( (stringTREENAME), "trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus", m_trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus );	\
    ConnectVariable( (stringTREENAME), "trig_EF_el_n", m_trig_EF_el_n );	\
    ConnectVariable( (stringTREENAME), "trig_EF_el_E", m_trig_EF_el_E );	\
    ConnectVariable( (stringTREENAME), "trig_EF_el_Et", m_trig_EF_el_Et );	\
    ConnectVariable( (stringTREENAME), "trig_EF_el_pt", m_trig_EF_el_pt );	\
    ConnectVariable( (stringTREENAME), "trig_EF_el_m", m_trig_EF_el_m );	\
    ConnectVariable( (stringTREENAME), "trig_EF_el_eta", m_trig_EF_el_eta );	\
    ConnectVariable( (stringTREENAME), "trig_EF_el_phi", m_trig_EF_el_phi );	\
    ConnectVariable( (stringTREENAME), "trig_EF_el_px", m_trig_EF_el_px );	\
    ConnectVariable( (stringTREENAME), "trig_EF_el_py", m_trig_EF_el_py );	\
    ConnectVariable( (stringTREENAME), "trig_EF_el_pz", m_trig_EF_el_pz );	\
    ConnectVariable( (stringTREENAME), "trig_RoI_EF_mu_Muon_ROI", m_trig_RoI_EF_mu_Muon_ROI );	\
    ConnectVariable( (stringTREENAME), "trig_RoI_EF_mu_Muon_ROIStatus", m_trig_RoI_EF_mu_Muon_ROIStatus );	\
    ConnectVariable( (stringTREENAME), "trig_RoI_EF_mu_TrigMuonEFInfoContainer", m_trig_RoI_EF_mu_TrigMuonEFInfoContainer );	\
    ConnectVariable( (stringTREENAME), "trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus", m_trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus );	\
    ConnectVariable( (stringTREENAME), "trig_RoI_L2_mu_CombinedMuonFeature", m_trig_RoI_L2_mu_CombinedMuonFeature );	\
    ConnectVariable( (stringTREENAME), "trig_RoI_L2_mu_CombinedMuonFeatureStatus", m_trig_RoI_L2_mu_CombinedMuonFeatureStatus );	\
    ConnectVariable( (stringTREENAME), "trig_RoI_L2_mu_MuonFeature", m_trig_RoI_L2_mu_MuonFeature );	\
    ConnectVariable( (stringTREENAME), "trig_RoI_L2_mu_Muon_ROI", m_trig_RoI_L2_mu_Muon_ROI );	\
    ConnectVariable( (stringTREENAME), "trig_RoI_L2_mu_Muon_ROIStatus", m_trig_RoI_L2_mu_Muon_ROIStatus );	\
    ConnectVariable( (stringTREENAME), "trig_EF_trigmuonef_track_CB_pt", m_trig_EF_trigmuonef_track_CB_pt );	\
    ConnectVariable( (stringTREENAME), "trig_EF_trigmuonef_track_CB_eta", m_trig_EF_trigmuonef_track_CB_eta );	\
    ConnectVariable( (stringTREENAME), "trig_EF_trigmuonef_track_CB_phi", m_trig_EF_trigmuonef_track_CB_phi );	\
    ConnectVariable( (stringTREENAME), "trig_EF_trigmuonef_track_SA_pt", m_trig_EF_trigmuonef_track_SA_pt );	\
    ConnectVariable( (stringTREENAME), "trig_EF_trigmuonef_track_SA_eta", m_trig_EF_trigmuonef_track_SA_eta );	\
    ConnectVariable( (stringTREENAME), "trig_EF_trigmugirl_track_CB_pt", m_trig_EF_trigmugirl_track_CB_pt );	\
    ConnectVariable( (stringTREENAME), "trig_EF_trigmugirl_track_CB_eta", m_trig_EF_trigmugirl_track_CB_eta );	\
    ConnectVariable( (stringTREENAME), "trig_EF_trigmugirl_track_CB_phi", m_trig_EF_trigmugirl_track_CB_phi );	\
    ConnectVariable( (stringTREENAME), "trig_EF_trigmuonef_track_SA_phi", m_trig_EF_trigmuonef_track_SA_phi );	\
    ConnectVariable( (stringTREENAME), "trig_L2_muonfeature_eta", m_trig_L2_muonfeature_eta );	\
    ConnectVariable( (stringTREENAME), "trig_L2_muonfeature_phi", m_trig_L2_muonfeature_phi );	\
    ConnectVariable( (stringTREENAME), "trig_L2_combmuonfeature_eta", m_trig_L2_combmuonfeature_eta );	\
    ConnectVariable( (stringTREENAME), "trig_L2_combmuonfeature_phi", m_trig_L2_combmuonfeature_phi );	\
    ConnectVariable( (stringTREENAME), "trig_L1_mu_eta", m_trig_L1_mu_eta );	\
    ConnectVariable( (stringTREENAME), "trig_L1_mu_phi", m_trig_L1_mu_phi );	\
    ConnectVariable( (stringTREENAME), "trig_L1_mu_thrName", m_trig_L1_mu_thrName );	\
    ConnectVariable( (stringTREENAME), "trig_RoI_EF_mu_TrigMuonEFIsolationContainer", m_trig_RoI_EF_mu_TrigMuonEFIsolationContainer );	\
    ConnectVariable( (stringTREENAME), "trig_RoI_EF_mu_TrigMuonEFIsolationContainerStatus", m_trig_RoI_EF_mu_TrigMuonEFIsolationContainerStatus );	\
    ConnectVariable( (stringTREENAME), "trig_EF_trigmuonef_track_MuonType", m_trig_EF_trigmuonef_track_MuonType );	\
    ConnectVariable( (stringTREENAME), "trig_EF_trigmuonef_EF_mu24i_tight", m_trig_EF_trigmuonef_EF_mu24i_tight );	\
    ConnectVariable( (stringTREENAME), "trig_EF_trigmuonef_EF_mu36_tight", m_trig_EF_trigmuonef_EF_mu36_tight );	\
    ConnectVariable( (stringTREENAME), "trig_EF_trigmuonef_EF_mu15", m_trig_EF_trigmuonef_EF_mu15 );	\
    ConnectVariable( (stringTREENAME), "trig_EF_trigmuonef_EF_mu40_MSonly_barrel_tight", m_trig_EF_trigmuonef_EF_mu40_MSonly_barrel_tight );	\
  }
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define DECLARE( stringTREENAME )                      \
  {    DeclareVariable( o_m_EF_mu24_g20vh_loose, "EF_mu24_g20vh_loose" );	\
    DeclareVariable( o_m_EF_mu24_g20vh_medium, "EF_mu24_g20vh_medium" );	\
    DeclareVariable( o_m_trig_DB_SMK, "trig_DB_SMK" );	\
    DeclareVariable( o_m_trig_Nav_n, "trig_Nav_n" );	\
    DeclareVariable( o_m_trig_Nav_chain_ChainId, "trig_Nav_chain_ChainId" );	\
    DeclareVariable( o_m_trig_Nav_chain_RoIType, "trig_Nav_chain_RoIType" );	\
    DeclareVariable( o_m_trig_Nav_chain_RoIIndex, "trig_Nav_chain_RoIIndex" );	\
    DeclareVariable( o_m_trig_RoI_EF_e_egammaContainer_egamma_Electrons, "trig_RoI_EF_e_egammaContainer_egamma_Electrons" );	\
    DeclareVariable( o_m_trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus, "trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus" );	\
    DeclareVariable( o_m_trig_EF_el_n, "trig_EF_el_n" );	\
    DeclareVariable( o_m_trig_EF_el_E, "trig_EF_el_E" );	\
    DeclareVariable( o_m_trig_EF_el_Et, "trig_EF_el_Et" );	\
    DeclareVariable( o_m_trig_EF_el_pt, "trig_EF_el_pt" );	\
    DeclareVariable( o_m_trig_EF_el_m, "trig_EF_el_m" );	\
    DeclareVariable( o_m_trig_EF_el_eta, "trig_EF_el_eta" );	\
    DeclareVariable( o_m_trig_EF_el_phi, "trig_EF_el_phi" );	\
    DeclareVariable( o_m_trig_EF_el_px, "trig_EF_el_px" );	\
    DeclareVariable( o_m_trig_EF_el_py, "trig_EF_el_py" );	\
    DeclareVariable( o_m_trig_EF_el_pz, "trig_EF_el_pz" );	\
    DeclareVariable( o_m_trig_RoI_EF_mu_Muon_ROI, "trig_RoI_EF_mu_Muon_ROI" );	\
    DeclareVariable( o_m_trig_RoI_EF_mu_Muon_ROIStatus, "trig_RoI_EF_mu_Muon_ROIStatus" );	\
    DeclareVariable( o_m_trig_RoI_EF_mu_TrigMuonEFInfoContainer, "trig_RoI_EF_mu_TrigMuonEFInfoContainer" );	\
    DeclareVariable( o_m_trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus, "trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus" );	\
    DeclareVariable( o_m_trig_RoI_L2_mu_CombinedMuonFeature, "trig_RoI_L2_mu_CombinedMuonFeature" );	\
    DeclareVariable( o_m_trig_RoI_L2_mu_CombinedMuonFeatureStatus, "trig_RoI_L2_mu_CombinedMuonFeatureStatus" );	\
    DeclareVariable( o_m_trig_RoI_L2_mu_MuonFeature, "trig_RoI_L2_mu_MuonFeature" );	\
    DeclareVariable( o_m_trig_RoI_L2_mu_Muon_ROI, "trig_RoI_L2_mu_Muon_ROI" );	\
    DeclareVariable( o_m_trig_RoI_L2_mu_Muon_ROIStatus, "trig_RoI_L2_mu_Muon_ROIStatus" );	\
    DeclareVariable( o_m_trig_EF_trigmuonef_track_CB_pt, "trig_EF_trigmuonef_track_CB_pt" );	\
    DeclareVariable( o_m_trig_EF_trigmuonef_track_CB_eta, "trig_EF_trigmuonef_track_CB_eta" );	\
    DeclareVariable( o_m_trig_EF_trigmuonef_track_CB_phi, "trig_EF_trigmuonef_track_CB_phi" );	\
    DeclareVariable( o_m_trig_EF_trigmuonef_track_SA_pt, "trig_EF_trigmuonef_track_SA_pt" );	\
    DeclareVariable( o_m_trig_EF_trigmuonef_track_SA_eta, "trig_EF_trigmuonef_track_SA_eta" );	\
    DeclareVariable( o_m_trig_EF_trigmugirl_track_CB_pt, "trig_EF_trigmugirl_track_CB_pt" );	\
    DeclareVariable( o_m_trig_EF_trigmugirl_track_CB_eta, "trig_EF_trigmugirl_track_CB_eta" );	\
    DeclareVariable( o_m_trig_EF_trigmugirl_track_CB_phi, "trig_EF_trigmugirl_track_CB_phi" );	\
    DeclareVariable( o_m_trig_EF_trigmuonef_track_SA_phi, "trig_EF_trigmuonef_track_SA_phi" );	\
    DeclareVariable( o_m_trig_L2_muonfeature_eta, "trig_L2_muonfeature_eta" );	\
    DeclareVariable( o_m_trig_L2_muonfeature_phi, "trig_L2_muonfeature_phi" );	\
    DeclareVariable( o_m_trig_L2_combmuonfeature_eta, "trig_L2_combmuonfeature_eta" );	\
    DeclareVariable( o_m_trig_L2_combmuonfeature_phi, "trig_L2_combmuonfeature_phi" );	\
    DeclareVariable( o_m_trig_L1_mu_eta, "trig_L1_mu_eta" );	\
    DeclareVariable( o_m_trig_L1_mu_phi, "trig_L1_mu_phi" );	\
    DeclareVariable( o_m_trig_L1_mu_thrName, "trig_L1_mu_thrName" );	\
    DeclareVariable( o_m_trig_RoI_EF_mu_TrigMuonEFIsolationContainer, "trig_RoI_EF_mu_TrigMuonEFIsolationContainer" );	\
    DeclareVariable( o_m_trig_RoI_EF_mu_TrigMuonEFIsolationContainerStatus, "trig_RoI_EF_mu_TrigMuonEFIsolationContainerStatus" );	\
    DeclareVariable( o_m_trig_EF_trigmuonef_track_MuonType, "trig_EF_trigmuonef_track_MuonType" );	\
    DeclareVariable( o_m_trig_EF_trigmuonef_EF_mu24i_tight, "trig_EF_trigmuonef_EF_mu24i_tight" );	\
    DeclareVariable( o_m_trig_EF_trigmuonef_EF_mu36_tight, "trig_EF_trigmuonef_EF_mu36_tight" );	\
    DeclareVariable( o_m_trig_EF_trigmuonef_EF_mu15, "trig_EF_trigmuonef_EF_mu15" );	\
    DeclareVariable( o_m_trig_EF_trigmuonef_EF_mu40_MSonly_barrel_tight, "trig_EF_trigmuonef_EF_mu40_MSonly_barrel_tight" );	\
  }
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define RESETVAR                      \
  {    o_m_EF_mu24_g20vh_loose = -999;\
    o_m_EF_mu24_g20vh_medium = -999;\
    o_m_trig_DB_SMK = -999;\
    o_m_trig_Nav_n = -999;\
    o_m_trig_Nav_chain_ChainId.clear();\
    o_m_trig_Nav_chain_RoIType.clear();\
    o_m_trig_Nav_chain_RoIIndex.clear();\
    o_m_trig_RoI_EF_e_egammaContainer_egamma_Electrons.clear();\
    o_m_trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus.clear();\
    o_m_trig_EF_el_n = -999;\
    o_m_trig_EF_el_E.clear();\
    o_m_trig_EF_el_Et.clear();\
    o_m_trig_EF_el_pt.clear();\
    o_m_trig_EF_el_m.clear();\
    o_m_trig_EF_el_eta.clear();\
    o_m_trig_EF_el_phi.clear();\
    o_m_trig_EF_el_px.clear();\
    o_m_trig_EF_el_py.clear();\
    o_m_trig_EF_el_pz.clear();\
    o_m_trig_RoI_EF_mu_Muon_ROI.clear();\
    o_m_trig_RoI_EF_mu_Muon_ROIStatus.clear();\
    o_m_trig_RoI_EF_mu_TrigMuonEFInfoContainer.clear();\
    o_m_trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus.clear();\
    o_m_trig_RoI_L2_mu_CombinedMuonFeature.clear();\
    o_m_trig_RoI_L2_mu_CombinedMuonFeatureStatus.clear();\
    o_m_trig_RoI_L2_mu_MuonFeature.clear();\
    o_m_trig_RoI_L2_mu_Muon_ROI.clear();\
    o_m_trig_RoI_L2_mu_Muon_ROIStatus.clear();\
    o_m_trig_EF_trigmuonef_track_CB_pt.clear();\
    o_m_trig_EF_trigmuonef_track_CB_eta.clear();\
    o_m_trig_EF_trigmuonef_track_CB_phi.clear();\
    o_m_trig_EF_trigmuonef_track_SA_pt.clear();\
    o_m_trig_EF_trigmuonef_track_SA_eta.clear();\
    o_m_trig_EF_trigmugirl_track_CB_pt.clear();\
    o_m_trig_EF_trigmugirl_track_CB_eta.clear();\
    o_m_trig_EF_trigmugirl_track_CB_phi.clear();\
    o_m_trig_EF_trigmuonef_track_SA_phi.clear();\
    o_m_trig_L2_muonfeature_eta.clear();\
    o_m_trig_L2_muonfeature_phi.clear();\
    o_m_trig_L2_combmuonfeature_eta.clear();\
    o_m_trig_L2_combmuonfeature_phi.clear();\
    o_m_trig_L1_mu_eta.clear();\
    o_m_trig_L1_mu_phi.clear();\
    o_m_trig_L1_mu_thrName.clear();\
    o_m_trig_RoI_EF_mu_TrigMuonEFIsolationContainer.clear();\
    o_m_trig_RoI_EF_mu_TrigMuonEFIsolationContainerStatus.clear();\
    o_m_trig_EF_trigmuonef_track_MuonType.clear();\
    o_m_trig_EF_trigmuonef_EF_mu24i_tight.clear();\
    o_m_trig_EF_trigmuonef_EF_mu36_tight.clear();\
    o_m_trig_EF_trigmuonef_EF_mu15.clear();\
    o_m_trig_EF_trigmuonef_EF_mu40_MSonly_barrel_tight.clear();\
  }
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define COPYVAR                      \
  {   o_m_EF_mu24_g20vh_loose = m_EF_mu24_g20vh_loose;\
   o_m_EF_mu24_g20vh_medium = m_EF_mu24_g20vh_medium;\
   o_m_trig_DB_SMK = m_trig_DB_SMK;\
   o_m_trig_Nav_n = m_trig_Nav_n;\
   o_m_trig_Nav_chain_ChainId = std::vector<short>(*m_trig_Nav_chain_ChainId);\
   o_m_trig_Nav_chain_RoIType = std::vector<std::vector<int> >(*m_trig_Nav_chain_RoIType);\
   o_m_trig_Nav_chain_RoIIndex = std::vector<std::vector<int> >(*m_trig_Nav_chain_RoIIndex);\
   o_m_trig_RoI_EF_e_egammaContainer_egamma_Electrons = std::vector<std::vector<int> >(*m_trig_RoI_EF_e_egammaContainer_egamma_Electrons);\
   o_m_trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus = std::vector<std::vector<int> >(*m_trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus);\
   o_m_trig_EF_el_n = m_trig_EF_el_n;\
   o_m_trig_EF_el_E = std::vector<float>(*m_trig_EF_el_E);\
   o_m_trig_EF_el_Et = std::vector<float>(*m_trig_EF_el_Et);\
   o_m_trig_EF_el_pt = std::vector<float>(*m_trig_EF_el_pt);\
   o_m_trig_EF_el_m = std::vector<float>(*m_trig_EF_el_m);\
   o_m_trig_EF_el_eta = std::vector<float>(*m_trig_EF_el_eta);\
   o_m_trig_EF_el_phi = std::vector<float>(*m_trig_EF_el_phi);\
   o_m_trig_EF_el_px = std::vector<float>(*m_trig_EF_el_px);\
   o_m_trig_EF_el_py = std::vector<float>(*m_trig_EF_el_py);\
   o_m_trig_EF_el_pz = std::vector<float>(*m_trig_EF_el_pz);\
   o_m_trig_RoI_EF_mu_Muon_ROI = std::vector<int>(*m_trig_RoI_EF_mu_Muon_ROI);\
   o_m_trig_RoI_EF_mu_Muon_ROIStatus = std::vector<int>(*m_trig_RoI_EF_mu_Muon_ROIStatus);\
   o_m_trig_RoI_EF_mu_TrigMuonEFInfoContainer = std::vector<std::vector<int> >(*m_trig_RoI_EF_mu_TrigMuonEFInfoContainer);\
   o_m_trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus = std::vector<std::vector<int> >(*m_trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus);\
   o_m_trig_RoI_L2_mu_CombinedMuonFeature = std::vector<int>(*m_trig_RoI_L2_mu_CombinedMuonFeature);\
   o_m_trig_RoI_L2_mu_CombinedMuonFeatureStatus = std::vector<int>(*m_trig_RoI_L2_mu_CombinedMuonFeatureStatus);\
   o_m_trig_RoI_L2_mu_MuonFeature = std::vector<int>(*m_trig_RoI_L2_mu_MuonFeature);\
   o_m_trig_RoI_L2_mu_Muon_ROI = std::vector<int>(*m_trig_RoI_L2_mu_Muon_ROI);\
   o_m_trig_RoI_L2_mu_Muon_ROIStatus = std::vector<int>(*m_trig_RoI_L2_mu_Muon_ROIStatus);\
   o_m_trig_EF_trigmuonef_track_CB_pt = std::vector<std::vector<float> >(*m_trig_EF_trigmuonef_track_CB_pt);\
   o_m_trig_EF_trigmuonef_track_CB_eta = std::vector<std::vector<float> >(*m_trig_EF_trigmuonef_track_CB_eta);\
   o_m_trig_EF_trigmuonef_track_CB_phi = std::vector<std::vector<float> >(*m_trig_EF_trigmuonef_track_CB_phi);\
   o_m_trig_EF_trigmuonef_track_SA_pt = std::vector<std::vector<float> >(*m_trig_EF_trigmuonef_track_SA_pt);\
   o_m_trig_EF_trigmuonef_track_SA_eta = std::vector<std::vector<float> >(*m_trig_EF_trigmuonef_track_SA_eta);\
   o_m_trig_EF_trigmugirl_track_CB_pt = std::vector<std::vector<float> >(*m_trig_EF_trigmugirl_track_CB_pt);\
   o_m_trig_EF_trigmugirl_track_CB_eta = std::vector<std::vector<float> >(*m_trig_EF_trigmugirl_track_CB_eta);\
   o_m_trig_EF_trigmugirl_track_CB_phi = std::vector<std::vector<float> >(*m_trig_EF_trigmugirl_track_CB_phi);\
   o_m_trig_EF_trigmuonef_track_SA_phi = std::vector<std::vector<float> >(*m_trig_EF_trigmuonef_track_SA_phi);\
   o_m_trig_L2_muonfeature_eta = std::vector<float>(*m_trig_L2_muonfeature_eta);\
   o_m_trig_L2_muonfeature_phi = std::vector<float>(*m_trig_L2_muonfeature_phi);\
   o_m_trig_L2_combmuonfeature_eta = std::vector<float>(*m_trig_L2_combmuonfeature_eta);\
   o_m_trig_L2_combmuonfeature_phi = std::vector<float>(*m_trig_L2_combmuonfeature_phi);\
   o_m_trig_L1_mu_eta = std::vector<float>(*m_trig_L1_mu_eta);\
   o_m_trig_L1_mu_phi = std::vector<float>(*m_trig_L1_mu_phi);\
   o_m_trig_L1_mu_thrName = std::vector<string>(*m_trig_L1_mu_thrName);\
   o_m_trig_RoI_EF_mu_TrigMuonEFIsolationContainer = std::vector<std::vector<int> >(*m_trig_RoI_EF_mu_TrigMuonEFIsolationContainer);\
   o_m_trig_RoI_EF_mu_TrigMuonEFIsolationContainerStatus = std::vector<std::vector<int> >(*m_trig_RoI_EF_mu_TrigMuonEFIsolationContainerStatus);\
   o_m_trig_EF_trigmuonef_track_MuonType = std::vector<std::vector<int> >(*m_trig_EF_trigmuonef_track_MuonType);\
   o_m_trig_EF_trigmuonef_EF_mu24i_tight = std::vector<int>(*m_trig_EF_trigmuonef_EF_mu24i_tight);\
   o_m_trig_EF_trigmuonef_EF_mu36_tight = std::vector<int>(*m_trig_EF_trigmuonef_EF_mu36_tight);\
   o_m_trig_EF_trigmuonef_EF_mu15 = std::vector<int>(*m_trig_EF_trigmuonef_EF_mu15);\
   o_m_trig_EF_trigmuonef_EF_mu40_MSonly_barrel_tight = std::vector<int>(*m_trig_EF_trigmuonef_EF_mu40_MSonly_barrel_tight);\
  }
#endif

//end definitions DEF_FILTER

//end macro definitions
