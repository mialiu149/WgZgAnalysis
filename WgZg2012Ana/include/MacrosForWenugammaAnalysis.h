////DukHep/bin/dukhep_create_filter.py DukHep/branches.txt
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
m_vxp_n(0),	\
m_vxp_nTracks(0),	\
m_averageIntPerXing(0),	\
m_lep_Charge(0),	\
m_lep_E(0),	\
m_lep_Pt(0),	\
m_lep_Phi(0),	\
m_lep_Eta(0),	\
m_lep_cl_E(0),	\
m_lep_cl_Pt(0),	\
m_lep_cl_Phi(0),	\
m_lep_cl_Eta(0),	\
m_lep_sf(0),	\
m_lep_ObjID(0),	\
m_lep_EtConeIso20(0),	\
m_lep_PtConeIso20(0),	\
m_lep_TrackIso20(0),	\
m_lep_TopoIso20(0),	\
m_lep_EtConeIso30(0),	\
m_lep_PtConeIso30(0),	\
m_lep_TrackIso30(0),	\
m_lep_TopoIso30(0),	\
m_lep_EtConeIso40(0),	\
m_lep_PtConeIso40(0),	\
m_lep_TrackIso40(0),	\
m_lep_TopoIso40(0),	\
m_ph_E(0),	\
m_ph_Pt(0),	\
m_ph_Phi(0),	\
m_ph_Eta(0),	\
m_ph_cl_E(0),	\
m_ph_cl_Pt(0),	\
m_ph_cl_Phi(0),	\
m_ph_cl_Eta(0),	\
m_ph_EtConeIso20(0),	\
m_ph_PtConeIso20(0),	\
m_ph_TrackIso20(0),	\
m_ph_TopoIso20(0),	\
m_ph_EtConeIso30(0),	\
m_ph_PtConeIso30(0),	\
m_ph_TrackIso30(0),	\
m_ph_TopoIso30(0),	\
m_ph_EtConeIso40(0),	\
m_ph_PtConeIso40(0),	\
m_ph_TrackIso40(0),	\
m_ph_TopoIso40(0),	\
m_dR_lep_ph(0),	\
m_dR_lep_jet(0),	\
m_dR_ph_jet(0),	\
m_ph_ObjID(0),	\
m_ph_showershape(0),	\
m_ph_conversion(0),	\
m_ph_pdgId(0),	\
m_ph_mother(0),	\
m_njets(0),	\
m_jet_E(0),	\
m_jet_Pt(0),	\
m_jet_Eta(0),	\
m_jet_Phi(0),	\
m_Jet_em_E(0),	\
m_Jet_em_Pt(0),	\
m_Jet_em_Eta(0),	\
m_Jet_em_Phi(0),	\
m_jet_IsLooseBadJet(0),	\
m_jet_IsHotTile(0),	\
m_jet_ObjID(0),	\
m_METx(0),	\
m_METy(0),	\
m_MET(0),	\
m_Mt(0),	\
m_Mlg(0),	\
m_Ptlg(0),	\
m_Etalg(0),	\
m_Philg(0),	\
m_dRlg(0),	\
m_Mjj(0),	\
m_Ptjj(0),	\
m_dRjj(0),	\
m_dYjj(0),	\
m_bvetos(0),	\
m_weights(0),	\
m_weights_error(0),	\
m_el_truth_E(0),	\
m_el_truth_pt(0),	\
m_MET_Truth_NonInt_etx(0),	\
m_MET_Truth_NonInt_ety(0),	\
m_MET_Truth_NonInt_phi(0),	\
m_MET_Truth_NonInt_et(0),	\
m_MET_Truth_NonInt_sumet(0),	\
m_el_truth_eta(0),	\
m_el_truth_phi(0),	\
m_el_truth_type(0),	\
m_el_truth_status(0),	\
m_el_truth_barcode(0),	\
m_el_truth_mothertype(0),	\
m_el_truth_motherbarcode(0),	\
m_el_truth_hasHardBrem(0),	\
m_ph_truth_E(0),	\
m_ph_truth_pt(0),	\
m_ph_truth_eta(0),	\
m_ph_truth_phi(0),	\
m_ph_truth_type(0),	\
m_ph_truth_status(0),	\
m_ph_truth_barcode(0),	\
m_ph_truth_mothertype(0),	\
m_ph_truth_motherbarcode(0),	\
m_ph_truth_index(0),	\
m_ph_type(0),	\
m_ph_origin(0),	\
m_mc_channel_number(0),	\
m_mc_event_number(0),	\
m_mc_event_weight(0),	\
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
m_mc_n(0),	\
m_mc_pt(0),	\
m_mc_m(0),	\
m_mc_eta(0),	\
m_mc_phi(0),	\
m_mc_status(0),	\
m_mc_barcode(0),	\
m_mc_pdgId(0),	\
m_mc_charge(0),	\
m_mc_parents(0),	\
m_mc_children(0),	\
m_mc_vx_x(0),	\
m_mc_vx_y(0),	\
m_mc_vx_z(0),	\
m_mc_vx_barcode(0),	\
m_mc_child_index(0),	\
m_mc_parent_index(0)
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define DUKEHEPHEADER_MEMBERS                          \
UInt_t m_RunNumber;	\
UInt_t m_EventNumber;	\
Int_t m_vxp_n;	\
std::vector<int>* m_vxp_nTracks;	\
Float_t m_averageIntPerXing;	\
std::vector<double>* m_lep_Charge;	\
std::vector<double>* m_lep_E;	\
std::vector<double>* m_lep_Pt;	\
std::vector<double>* m_lep_Phi;	\
std::vector<double>* m_lep_Eta;	\
std::vector<double>* m_lep_cl_E;	\
std::vector<double>* m_lep_cl_Pt;	\
std::vector<double>* m_lep_cl_Phi;	\
std::vector<double>* m_lep_cl_Eta;	\
std::vector<double>* m_lep_sf;	\
std::vector<std::vector<int> >* m_lep_ObjID;	\
std::vector<double>* m_lep_EtConeIso20;	\
std::vector<double>* m_lep_PtConeIso20;	\
std::vector<double>* m_lep_TrackIso20;	\
std::vector<double>* m_lep_TopoIso20;	\
std::vector<double>* m_lep_EtConeIso30;	\
std::vector<double>* m_lep_PtConeIso30;	\
std::vector<double>* m_lep_TrackIso30;	\
std::vector<double>* m_lep_TopoIso30;	\
std::vector<double>* m_lep_EtConeIso40;	\
std::vector<double>* m_lep_PtConeIso40;	\
std::vector<double>* m_lep_TrackIso40;	\
std::vector<double>* m_lep_TopoIso40;	\
std::vector<double>* m_ph_E;	\
std::vector<double>* m_ph_Pt;	\
std::vector<double>* m_ph_Phi;	\
std::vector<double>* m_ph_Eta;	\
std::vector<double>* m_ph_cl_E;	\
std::vector<double>* m_ph_cl_Pt;	\
std::vector<double>* m_ph_cl_Phi;	\
std::vector<double>* m_ph_cl_Eta;	\
std::vector<double>* m_ph_EtConeIso20;	\
std::vector<double>* m_ph_PtConeIso20;	\
std::vector<double>* m_ph_TrackIso20;	\
std::vector<double>* m_ph_TopoIso20;	\
std::vector<double>* m_ph_EtConeIso30;	\
std::vector<double>* m_ph_PtConeIso30;	\
std::vector<double>* m_ph_TrackIso30;	\
std::vector<double>* m_ph_TopoIso30;	\
std::vector<double>* m_ph_EtConeIso40;	\
std::vector<double>* m_ph_PtConeIso40;	\
std::vector<double>* m_ph_TrackIso40;	\
std::vector<double>* m_ph_TopoIso40;	\
std::vector<double>* m_dR_lep_ph;	\
std::vector<double>* m_dR_lep_jet;	\
std::vector<double>* m_dR_ph_jet;	\
std::vector<std::vector<int> >* m_ph_ObjID;	\
std::vector<std::vector<double> >* m_ph_showershape;	\
std::vector<std::vector<int> >* m_ph_conversion;	\
std::vector<int>* m_ph_pdgId;	\
std::vector<int>* m_ph_mother;	\
Int_t m_njets;	\
std::vector<double>* m_jet_E;	\
std::vector<double>* m_jet_Pt;	\
std::vector<double>* m_jet_Eta;	\
std::vector<double>* m_jet_Phi;	\
std::vector<float>* m_Jet_em_E;	\
std::vector<float>* m_Jet_em_Pt;	\
std::vector<float>* m_Jet_em_Eta;	\
std::vector<float>* m_Jet_em_Phi;	\
std::vector<bool>* m_jet_IsLooseBadJet;	\
std::vector<bool>* m_jet_IsHotTile;	\
std::vector<std::vector<int> >* m_jet_ObjID;	\
Double_t m_METx;	\
Double_t m_METy;	\
Double_t m_MET;	\
Double_t m_Mt;	\
Double_t m_Mlg;	\
Double_t m_Ptlg;	\
Double_t m_Etalg;	\
Double_t m_Philg;	\
Double_t m_dRlg;	\
Double_t m_Mjj;	\
Double_t m_Ptjj;	\
Double_t m_dRjj;	\
Double_t m_dYjj;	\
std::vector<int>* m_bvetos;	\
std::vector<double>* m_weights;	\
std::vector<double>* m_weights_error;	\
std::vector<float>* m_el_truth_E;	\
std::vector<float>* m_el_truth_pt;	\
Float_t m_MET_Truth_NonInt_etx;	\
Float_t m_MET_Truth_NonInt_ety;	\
Float_t m_MET_Truth_NonInt_phi;	\
Float_t m_MET_Truth_NonInt_et;	\
Float_t m_MET_Truth_NonInt_sumet;	\
std::vector<float>* m_el_truth_eta;	\
std::vector<float>* m_el_truth_phi;	\
std::vector<int>* m_el_truth_type;	\
std::vector<int>* m_el_truth_status;	\
std::vector<int>* m_el_truth_barcode;	\
std::vector<int>* m_el_truth_mothertype;	\
std::vector<int>* m_el_truth_motherbarcode;	\
std::vector<int>* m_el_truth_hasHardBrem;	\
std::vector<float>* m_ph_truth_E;	\
std::vector<float>* m_ph_truth_pt;	\
std::vector<float>* m_ph_truth_eta;	\
std::vector<float>* m_ph_truth_phi;	\
std::vector<int>* m_ph_truth_type;	\
std::vector<int>* m_ph_truth_status;	\
std::vector<int>* m_ph_truth_barcode;	\
std::vector<int>* m_ph_truth_mothertype;	\
std::vector<int>* m_ph_truth_motherbarcode;	\
std::vector<int>* m_ph_truth_index;	\
std::vector<int>* m_ph_type;	\
std::vector<int>* m_ph_origin;	\
UInt_t m_mc_channel_number;	\
UInt_t m_mc_event_number;	\
Float_t m_mc_event_weight;	\
Int_t m_mcevt_n;	\
std::vector<int>* m_mcevt_signal_process_id;	\
std::vector<int>* m_mcevt_event_number;	\
std::vector<double>* m_mcevt_event_scale;	\
std::vector<double>* m_mcevt_alphaQCD;	\
std::vector<double>* m_mcevt_alphaQED;	\
std::vector<int>* m_mcevt_pdf_id1;	\
std::vector<int>* m_mcevt_pdf_id2;	\
std::vector<double>* m_mcevt_pdf_x1;	\
std::vector<double>* m_mcevt_pdf_x2;	\
std::vector<double>* m_mcevt_pdf_scale;	\
std::vector<double>* m_mcevt_pdf1;	\
std::vector<double>* m_mcevt_pdf2;	\
std::vector<std::vector<double> >* m_mcevt_weight;	\
Int_t m_mc_n;	\
std::vector<float>* m_mc_pt;	\
std::vector<float>* m_mc_m;	\
std::vector<float>* m_mc_eta;	\
std::vector<float>* m_mc_phi;	\
std::vector<int>* m_mc_status;	\
std::vector<int>* m_mc_barcode;	\
std::vector<int>* m_mc_pdgId;	\
std::vector<float>* m_mc_charge;	\
std::vector<std::vector<int> >* m_mc_parents;	\
std::vector<std::vector<int> >* m_mc_children;	\
std::vector<float>* m_mc_vx_x;	\
std::vector<float>* m_mc_vx_y;	\
std::vector<float>* m_mc_vx_z;	\
std::vector<int>* m_mc_vx_barcode;	\
std::vector<std::vector<int> >* m_mc_child_index;	\
std::vector<std::vector<int> >* m_mc_parent_index;
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define CONNECT( stringTREENAME )                      \
  {    ConnectVariable( (stringTREENAME), "RunNumber", m_RunNumber );	\
    ConnectVariable( (stringTREENAME), "EventNumber", m_EventNumber );	\
    ConnectVariable( (stringTREENAME), "vxp_n", m_vxp_n );	\
    ConnectVariable( (stringTREENAME), "vxp_nTracks", m_vxp_nTracks );	\
    ConnectVariable( (stringTREENAME), "averageIntPerXing", m_averageIntPerXing );	\
    ConnectVariable( (stringTREENAME), "lep_Charge", m_lep_Charge );	\
    ConnectVariable( (stringTREENAME), "lep_E", m_lep_E );	\
    ConnectVariable( (stringTREENAME), "lep_Pt", m_lep_Pt );	\
    ConnectVariable( (stringTREENAME), "lep_Phi", m_lep_Phi );	\
    ConnectVariable( (stringTREENAME), "lep_Eta", m_lep_Eta );	\
    ConnectVariable( (stringTREENAME), "lep_cl_E", m_lep_cl_E );	\
    ConnectVariable( (stringTREENAME), "lep_cl_Pt", m_lep_cl_Pt );	\
    ConnectVariable( (stringTREENAME), "lep_cl_Phi", m_lep_cl_Phi );	\
    ConnectVariable( (stringTREENAME), "lep_cl_Eta", m_lep_cl_Eta );	\
    ConnectVariable( (stringTREENAME), "lep_sf", m_lep_sf );	\
    ConnectVariable( (stringTREENAME), "lep_ObjID", m_lep_ObjID );	\
    ConnectVariable( (stringTREENAME), "lep_EtConeIso20", m_lep_EtConeIso20 );	\
    ConnectVariable( (stringTREENAME), "lep_PtConeIso20", m_lep_PtConeIso20 );	\
    ConnectVariable( (stringTREENAME), "lep_TrackIso20", m_lep_TrackIso20 );	\
    ConnectVariable( (stringTREENAME), "lep_TopoIso20", m_lep_TopoIso20 );	\
    ConnectVariable( (stringTREENAME), "lep_EtConeIso30", m_lep_EtConeIso30 );	\
    ConnectVariable( (stringTREENAME), "lep_PtConeIso30", m_lep_PtConeIso30 );	\
    ConnectVariable( (stringTREENAME), "lep_TrackIso30", m_lep_TrackIso30 );	\
    ConnectVariable( (stringTREENAME), "lep_TopoIso30", m_lep_TopoIso30 );	\
    ConnectVariable( (stringTREENAME), "lep_EtConeIso40", m_lep_EtConeIso40 );	\
    ConnectVariable( (stringTREENAME), "lep_PtConeIso40", m_lep_PtConeIso40 );	\
    ConnectVariable( (stringTREENAME), "lep_TrackIso40", m_lep_TrackIso40 );	\
    ConnectVariable( (stringTREENAME), "lep_TopoIso40", m_lep_TopoIso40 );	\
    ConnectVariable( (stringTREENAME), "ph_E", m_ph_E );	\
    ConnectVariable( (stringTREENAME), "ph_Pt", m_ph_Pt );	\
    ConnectVariable( (stringTREENAME), "ph_Phi", m_ph_Phi );	\
    ConnectVariable( (stringTREENAME), "ph_Eta", m_ph_Eta );	\
    ConnectVariable( (stringTREENAME), "ph_cl_E", m_ph_cl_E );	\
    ConnectVariable( (stringTREENAME), "ph_cl_Pt", m_ph_cl_Pt );	\
    ConnectVariable( (stringTREENAME), "ph_cl_Phi", m_ph_cl_Phi );	\
    ConnectVariable( (stringTREENAME), "ph_cl_Eta", m_ph_cl_Eta );	\
    ConnectVariable( (stringTREENAME), "ph_EtConeIso20", m_ph_EtConeIso20 );	\
    ConnectVariable( (stringTREENAME), "ph_PtConeIso20", m_ph_PtConeIso20 );	\
    ConnectVariable( (stringTREENAME), "ph_TrackIso20", m_ph_TrackIso20 );	\
    ConnectVariable( (stringTREENAME), "ph_TopoIso20", m_ph_TopoIso20 );	\
    ConnectVariable( (stringTREENAME), "ph_EtConeIso30", m_ph_EtConeIso30 );	\
    ConnectVariable( (stringTREENAME), "ph_PtConeIso30", m_ph_PtConeIso30 );	\
    ConnectVariable( (stringTREENAME), "ph_TrackIso30", m_ph_TrackIso30 );	\
    ConnectVariable( (stringTREENAME), "ph_TopoIso30", m_ph_TopoIso30 );	\
    ConnectVariable( (stringTREENAME), "ph_EtConeIso40", m_ph_EtConeIso40 );	\
    ConnectVariable( (stringTREENAME), "ph_PtConeIso40", m_ph_PtConeIso40 );	\
    ConnectVariable( (stringTREENAME), "ph_TrackIso40", m_ph_TrackIso40 );	\
    ConnectVariable( (stringTREENAME), "ph_TopoIso40", m_ph_TopoIso40 );	\
    ConnectVariable( (stringTREENAME), "dR_lep_ph", m_dR_lep_ph );	\
    ConnectVariable( (stringTREENAME), "dR_lep_jet", m_dR_lep_jet );	\
    ConnectVariable( (stringTREENAME), "dR_ph_jet", m_dR_ph_jet );	\
    ConnectVariable( (stringTREENAME), "ph_ObjID", m_ph_ObjID );	\
    ConnectVariable( (stringTREENAME), "ph_showershape", m_ph_showershape );	\
    ConnectVariable( (stringTREENAME), "ph_conversion", m_ph_conversion );	\
    ConnectVariable( (stringTREENAME), "ph_pdgId", m_ph_pdgId );	\
    ConnectVariable( (stringTREENAME), "ph_mother", m_ph_mother );	\
    ConnectVariable( (stringTREENAME), "njets", m_njets );	\
    ConnectVariable( (stringTREENAME), "jet_E", m_jet_E );	\
    ConnectVariable( (stringTREENAME), "jet_Pt", m_jet_Pt );	\
    ConnectVariable( (stringTREENAME), "jet_Eta", m_jet_Eta );	\
    ConnectVariable( (stringTREENAME), "jet_Phi", m_jet_Phi );	\
    ConnectVariable( (stringTREENAME), "Jet_em_E", m_Jet_em_E );	\
    ConnectVariable( (stringTREENAME), "Jet_em_Pt", m_Jet_em_Pt );	\
    ConnectVariable( (stringTREENAME), "Jet_em_Eta", m_Jet_em_Eta );	\
    ConnectVariable( (stringTREENAME), "Jet_em_Phi", m_Jet_em_Phi );	\
    ConnectVariable( (stringTREENAME), "jet_ObjID", m_jet_ObjID );	\
    ConnectVariable( (stringTREENAME), "jet_IsLooseBadJet", m_jet_IsLooseBadJet );	\
    ConnectVariable( (stringTREENAME), "jet_IsHotTile", m_jet_IsHotTile );	\
    ConnectVariable( (stringTREENAME), "METx", m_METx );	\
    ConnectVariable( (stringTREENAME), "METy", m_METy );	\
    ConnectVariable( (stringTREENAME), "MET", m_MET );	\
    ConnectVariable( (stringTREENAME), "Mt", m_Mt );	\
    ConnectVariable( (stringTREENAME), "Mlg", m_Mlg );	\
    ConnectVariable( (stringTREENAME), "Ptlg", m_Ptlg );	\
    ConnectVariable( (stringTREENAME), "Etalg", m_Etalg );	\
    ConnectVariable( (stringTREENAME), "Philg", m_Philg );	\
    ConnectVariable( (stringTREENAME), "dRlg", m_dRlg );	\
    ConnectVariable( (stringTREENAME), "Mjj", m_Mjj );	\
    ConnectVariable( (stringTREENAME), "Ptjj", m_Ptjj );	\
    ConnectVariable( (stringTREENAME), "dRjj", m_dRjj );	\
    ConnectVariable( (stringTREENAME), "dYjj", m_dYjj );	\
    ConnectVariable( (stringTREENAME), "bvetos", m_bvetos );	\
    ConnectVariable( (stringTREENAME), "weights", m_weights );	\
    ConnectVariable( (stringTREENAME), "weights_error", m_weights_error );	\
    ConnectVariable( (stringTREENAME), "el_truth_E", m_el_truth_E );	\
    ConnectVariable( (stringTREENAME), "el_truth_pt", m_el_truth_pt );	\
    ConnectVariable( (stringTREENAME), "MET_Truth_NonInt_etx", m_MET_Truth_NonInt_etx );	\
    ConnectVariable( (stringTREENAME), "MET_Truth_NonInt_ety", m_MET_Truth_NonInt_ety );	\
    ConnectVariable( (stringTREENAME), "MET_Truth_NonInt_phi", m_MET_Truth_NonInt_phi );	\
    ConnectVariable( (stringTREENAME), "MET_Truth_NonInt_et", m_MET_Truth_NonInt_et );	\
    ConnectVariable( (stringTREENAME), "MET_Truth_NonInt_sumet", m_MET_Truth_NonInt_sumet );	\
    ConnectVariable( (stringTREENAME), "el_truth_eta", m_el_truth_eta );	\
    ConnectVariable( (stringTREENAME), "el_truth_phi", m_el_truth_phi );	\
    ConnectVariable( (stringTREENAME), "el_truth_type", m_el_truth_type );	\
    ConnectVariable( (stringTREENAME), "el_truth_status", m_el_truth_status );	\
    ConnectVariable( (stringTREENAME), "el_truth_barcode", m_el_truth_barcode );	\
    ConnectVariable( (stringTREENAME), "el_truth_mothertype", m_el_truth_mothertype );	\
    ConnectVariable( (stringTREENAME), "el_truth_motherbarcode", m_el_truth_motherbarcode );	\
    ConnectVariable( (stringTREENAME), "el_truth_hasHardBrem", m_el_truth_hasHardBrem );	\
    ConnectVariable( (stringTREENAME), "ph_truth_E", m_ph_truth_E );	\
    ConnectVariable( (stringTREENAME), "ph_truth_pt", m_ph_truth_pt );	\
    ConnectVariable( (stringTREENAME), "ph_truth_eta", m_ph_truth_eta );	\
    ConnectVariable( (stringTREENAME), "ph_truth_phi", m_ph_truth_phi );	\
    ConnectVariable( (stringTREENAME), "ph_truth_type", m_ph_truth_type );	\
    ConnectVariable( (stringTREENAME), "ph_truth_status", m_ph_truth_status );	\
    ConnectVariable( (stringTREENAME), "ph_truth_barcode", m_ph_truth_barcode );	\
    ConnectVariable( (stringTREENAME), "ph_truth_mothertype", m_ph_truth_mothertype );	\
    ConnectVariable( (stringTREENAME), "ph_truth_motherbarcode", m_ph_truth_motherbarcode );	\
    ConnectVariable( (stringTREENAME), "ph_truth_index", m_ph_truth_index );	\
    ConnectVariable( (stringTREENAME), "ph_type", m_ph_type );	\
    ConnectVariable( (stringTREENAME), "ph_origin", m_ph_origin );	\
    ConnectVariable( (stringTREENAME), "mc_channel_number", m_mc_channel_number );	\
    ConnectVariable( (stringTREENAME), "mc_event_number", m_mc_event_number );	\
    ConnectVariable( (stringTREENAME), "mc_event_weight", m_mc_event_weight );	\
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
    ConnectVariable( (stringTREENAME), "mc_n", m_mc_n );	\
    ConnectVariable( (stringTREENAME), "mc_pt", m_mc_pt );	\
    ConnectVariable( (stringTREENAME), "mc_m", m_mc_m );	\
    ConnectVariable( (stringTREENAME), "mc_eta", m_mc_eta );	\
    ConnectVariable( (stringTREENAME), "mc_phi", m_mc_phi );	\
    ConnectVariable( (stringTREENAME), "mc_status", m_mc_status );	\
    ConnectVariable( (stringTREENAME), "mc_barcode", m_mc_barcode );	\
    ConnectVariable( (stringTREENAME), "mc_pdgId", m_mc_pdgId );	\
    ConnectVariable( (stringTREENAME), "mc_charge", m_mc_charge );	\
    ConnectVariable( (stringTREENAME), "mc_parents", m_mc_parents );	\
    ConnectVariable( (stringTREENAME), "mc_children", m_mc_children );	\
    ConnectVariable( (stringTREENAME), "mc_vx_x", m_mc_vx_x );	\
    ConnectVariable( (stringTREENAME), "mc_vx_y", m_mc_vx_y );	\
    ConnectVariable( (stringTREENAME), "mc_vx_z", m_mc_vx_z );	\
    ConnectVariable( (stringTREENAME), "mc_vx_barcode", m_mc_vx_barcode );	\
    ConnectVariable( (stringTREENAME), "mc_child_index", m_mc_child_index );	\
    ConnectVariable( (stringTREENAME), "mc_parent_index", m_mc_parent_index );	\
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
