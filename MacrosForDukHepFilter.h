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
m_jet_ObjID(0),	\
m_jet_IsLooseBadJet(0),	\
m_jet_IsHotTile(0),	\
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
UInt_t o_m_RunNumber;	\
UInt_t m_EventNumber;	\
UInt_t o_m_EventNumber;	\
Int_t m_vxp_n;	\
Int_t o_m_vxp_n;	\
std::vector<int>* m_vxp_nTracks;	\
std::vector<int> o_m_vxp_nTracks;	\
Float_t m_averageIntPerXing;	\
Float_t o_m_averageIntPerXing;	\
std::vector<double>* m_lep_Charge;	\
std::vector<double> o_m_lep_Charge;	\
std::vector<double>* m_lep_E;	\
std::vector<double> o_m_lep_E;	\
std::vector<double>* m_lep_Pt;	\
std::vector<double> o_m_lep_Pt;	\
std::vector<double>* m_lep_Phi;	\
std::vector<double> o_m_lep_Phi;	\
std::vector<double>* m_lep_Eta;	\
std::vector<double> o_m_lep_Eta;	\
std::vector<double>* m_lep_cl_E;	\
std::vector<double> o_m_lep_cl_E;	\
std::vector<double>* m_lep_cl_Pt;	\
std::vector<double> o_m_lep_cl_Pt;	\
std::vector<double>* m_lep_cl_Phi;	\
std::vector<double> o_m_lep_cl_Phi;	\
std::vector<double>* m_lep_cl_Eta;	\
std::vector<double> o_m_lep_cl_Eta;	\
std::vector<double>* m_lep_sf;	\
std::vector<double> o_m_lep_sf;	\
std::vector<std::vector<int> >* m_lep_ObjID;	\
std::vector<std::vector<int> > o_m_lep_ObjID;	\
std::vector<double>* m_lep_EtConeIso20;	\
std::vector<double> o_m_lep_EtConeIso20;	\
std::vector<double>* m_lep_PtConeIso20;	\
std::vector<double> o_m_lep_PtConeIso20;	\
std::vector<double>* m_lep_TrackIso20;	\
std::vector<double> o_m_lep_TrackIso20;	\
std::vector<double>* m_lep_TopoIso20;	\
std::vector<double> o_m_lep_TopoIso20;	\
std::vector<double>* m_lep_EtConeIso30;	\
std::vector<double> o_m_lep_EtConeIso30;	\
std::vector<double>* m_lep_PtConeIso30;	\
std::vector<double> o_m_lep_PtConeIso30;	\
std::vector<double>* m_lep_TrackIso30;	\
std::vector<double> o_m_lep_TrackIso30;	\
std::vector<double>* m_lep_TopoIso30;	\
std::vector<double> o_m_lep_TopoIso30;	\
std::vector<double>* m_lep_EtConeIso40;	\
std::vector<double> o_m_lep_EtConeIso40;	\
std::vector<double>* m_lep_PtConeIso40;	\
std::vector<double> o_m_lep_PtConeIso40;	\
std::vector<double>* m_lep_TrackIso40;	\
std::vector<double> o_m_lep_TrackIso40;	\
std::vector<double>* m_lep_TopoIso40;	\
std::vector<double> o_m_lep_TopoIso40;	\
std::vector<double>* m_ph_E;	\
std::vector<double> o_m_ph_E;	\
std::vector<double>* m_ph_Pt;	\
std::vector<double> o_m_ph_Pt;	\
std::vector<double>* m_ph_Phi;	\
std::vector<double> o_m_ph_Phi;	\
std::vector<double>* m_ph_Eta;	\
std::vector<double> o_m_ph_Eta;	\
std::vector<double>* m_ph_cl_E;	\
std::vector<double> o_m_ph_cl_E;	\
std::vector<double>* m_ph_cl_Pt;	\
std::vector<double> o_m_ph_cl_Pt;	\
std::vector<double>* m_ph_cl_Phi;	\
std::vector<double> o_m_ph_cl_Phi;	\
std::vector<double>* m_ph_cl_Eta;	\
std::vector<double> o_m_ph_cl_Eta;	\
std::vector<double>* m_ph_EtConeIso20;	\
std::vector<double> o_m_ph_EtConeIso20;	\
std::vector<double>* m_ph_PtConeIso20;	\
std::vector<double> o_m_ph_PtConeIso20;	\
std::vector<double>* m_ph_TrackIso20;	\
std::vector<double> o_m_ph_TrackIso20;	\
std::vector<double>* m_ph_TopoIso20;	\
std::vector<double> o_m_ph_TopoIso20;	\
std::vector<double>* m_ph_EtConeIso30;	\
std::vector<double> o_m_ph_EtConeIso30;	\
std::vector<double>* m_ph_PtConeIso30;	\
std::vector<double> o_m_ph_PtConeIso30;	\
std::vector<double>* m_ph_TrackIso30;	\
std::vector<double> o_m_ph_TrackIso30;	\
std::vector<double>* m_ph_TopoIso30;	\
std::vector<double> o_m_ph_TopoIso30;	\
std::vector<double>* m_ph_EtConeIso40;	\
std::vector<double> o_m_ph_EtConeIso40;	\
std::vector<double>* m_ph_PtConeIso40;	\
std::vector<double> o_m_ph_PtConeIso40;	\
std::vector<double>* m_ph_TrackIso40;	\
std::vector<double> o_m_ph_TrackIso40;	\
std::vector<double>* m_ph_TopoIso40;	\
std::vector<double> o_m_ph_TopoIso40;	\
std::vector<double>* m_dR_lep_ph;	\
std::vector<double> o_m_dR_lep_ph;	\
std::vector<double>* m_dR_lep_jet;	\
std::vector<double> o_m_dR_lep_jet;	\
std::vector<double>* m_dR_ph_jet;	\
std::vector<double> o_m_dR_ph_jet;	\
std::vector<std::vector<int> >* m_ph_ObjID;	\
std::vector<std::vector<int> > o_m_ph_ObjID;	\
std::vector<std::vector<double> >* m_ph_showershape;	\
std::vector<std::vector<double> > o_m_ph_showershape;	\
std::vector<std::vector<int> >* m_ph_conversion;	\
std::vector<std::vector<int> > o_m_ph_conversion;	\
std::vector<int>* m_ph_pdgId;	\
std::vector<int> o_m_ph_pdgId;	\
std::vector<int>* m_ph_mother;	\
std::vector<int> o_m_ph_mother;	\
Int_t m_njets;	\
Int_t o_m_njets;	\
std::vector<double>* m_jet_E;	\
std::vector<double> o_m_jet_E;	\
std::vector<double>* m_jet_Pt;	\
std::vector<double> o_m_jet_Pt;	\
std::vector<double>* m_jet_Eta;	\
std::vector<double> o_m_jet_Eta;	\
std::vector<double>* m_jet_Phi;	\
std::vector<double> o_m_jet_Phi;	\
std::vector<float>* m_Jet_em_E;	\
std::vector<float> o_m_Jet_em_E;	\
std::vector<float>* m_Jet_em_Pt;	\
std::vector<float> o_m_Jet_em_Pt;	\
std::vector<float>* m_Jet_em_Eta;	\
std::vector<float> o_m_Jet_em_Eta;	\
std::vector<float>* m_Jet_em_Phi;	\
std::vector<float> o_m_Jet_em_Phi;	\
std::vector<std::vector<int> >* m_jet_ObjID;	\
std::vector<std::vector<int> > o_m_jet_ObjID;	\
std::vector<bool>* m_jet_IsLooseBadJet;	\
std::vector<bool> o_m_jet_IsLooseBadJet;	\
std::vector<bool>* m_jet_IsHotTile;	\
std::vector<bool> o_m_jet_IsHotTile;	\
Double_t m_METx;	\
Double_t o_m_METx;	\
Double_t m_METy;	\
Double_t o_m_METy;	\
Double_t m_MET;	\
Double_t o_m_MET;	\
Double_t m_Mt;	\
Double_t o_m_Mt;	\
Double_t m_Mlg;	\
Double_t o_m_Mlg;	\
Double_t m_Ptlg;	\
Double_t o_m_Ptlg;	\
Double_t m_Etalg;	\
Double_t o_m_Etalg;	\
Double_t m_Philg;	\
Double_t o_m_Philg;	\
Double_t m_dRlg;	\
Double_t o_m_dRlg;	\
Double_t m_Mjj;	\
Double_t o_m_Mjj;	\
Double_t m_Ptjj;	\
Double_t o_m_Ptjj;	\
Double_t m_dRjj;	\
Double_t o_m_dRjj;	\
Double_t m_dYjj;	\
Double_t o_m_dYjj;	\
std::vector<int>* m_bvetos;	\
std::vector<int> o_m_bvetos;	\
std::vector<double>* m_weights;	\
std::vector<double> o_m_weights;	\
std::vector<double>* m_weights_error;	\
std::vector<double> o_m_weights_error;	\
std::vector<float>* m_el_truth_E;	\
std::vector<float> o_m_el_truth_E;	\
std::vector<float>* m_el_truth_pt;	\
std::vector<float> o_m_el_truth_pt;	\
Float_t m_MET_Truth_NonInt_etx;	\
Float_t o_m_MET_Truth_NonInt_etx;	\
Float_t m_MET_Truth_NonInt_ety;	\
Float_t o_m_MET_Truth_NonInt_ety;	\
Float_t m_MET_Truth_NonInt_phi;	\
Float_t o_m_MET_Truth_NonInt_phi;	\
Float_t m_MET_Truth_NonInt_et;	\
Float_t o_m_MET_Truth_NonInt_et;	\
Float_t m_MET_Truth_NonInt_sumet;	\
Float_t o_m_MET_Truth_NonInt_sumet;	\
std::vector<float>* m_el_truth_eta;	\
std::vector<float> o_m_el_truth_eta;	\
std::vector<float>* m_el_truth_phi;	\
std::vector<float> o_m_el_truth_phi;	\
std::vector<int>* m_el_truth_type;	\
std::vector<int> o_m_el_truth_type;	\
std::vector<int>* m_el_truth_status;	\
std::vector<int> o_m_el_truth_status;	\
std::vector<int>* m_el_truth_barcode;	\
std::vector<int> o_m_el_truth_barcode;	\
std::vector<int>* m_el_truth_mothertype;	\
std::vector<int> o_m_el_truth_mothertype;	\
std::vector<int>* m_el_truth_motherbarcode;	\
std::vector<int> o_m_el_truth_motherbarcode;	\
std::vector<int>* m_el_truth_hasHardBrem;	\
std::vector<int> o_m_el_truth_hasHardBrem;	\
std::vector<float>* m_ph_truth_E;	\
std::vector<float> o_m_ph_truth_E;	\
std::vector<float>* m_ph_truth_pt;	\
std::vector<float> o_m_ph_truth_pt;	\
std::vector<float>* m_ph_truth_eta;	\
std::vector<float> o_m_ph_truth_eta;	\
std::vector<float>* m_ph_truth_phi;	\
std::vector<float> o_m_ph_truth_phi;	\
std::vector<int>* m_ph_truth_type;	\
std::vector<int> o_m_ph_truth_type;	\
std::vector<int>* m_ph_truth_status;	\
std::vector<int> o_m_ph_truth_status;	\
std::vector<int>* m_ph_truth_barcode;	\
std::vector<int> o_m_ph_truth_barcode;	\
std::vector<int>* m_ph_truth_mothertype;	\
std::vector<int> o_m_ph_truth_mothertype;	\
std::vector<int>* m_ph_truth_motherbarcode;	\
std::vector<int> o_m_ph_truth_motherbarcode;	\
std::vector<int>* m_ph_truth_index;	\
std::vector<int> o_m_ph_truth_index;	\
std::vector<int>* m_ph_type;	\
std::vector<int> o_m_ph_type;	\
std::vector<int>* m_ph_origin;	\
std::vector<int> o_m_ph_origin;	\
UInt_t m_mc_channel_number;	\
UInt_t o_m_mc_channel_number;	\
UInt_t m_mc_event_number;	\
UInt_t o_m_mc_event_number;	\
Float_t m_mc_event_weight;	\
Float_t o_m_mc_event_weight;	\
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
Int_t m_mc_n;	\
Int_t o_m_mc_n;	\
std::vector<float>* m_mc_pt;	\
std::vector<float> o_m_mc_pt;	\
std::vector<float>* m_mc_m;	\
std::vector<float> o_m_mc_m;	\
std::vector<float>* m_mc_eta;	\
std::vector<float> o_m_mc_eta;	\
std::vector<float>* m_mc_phi;	\
std::vector<float> o_m_mc_phi;	\
std::vector<int>* m_mc_status;	\
std::vector<int> o_m_mc_status;	\
std::vector<int>* m_mc_barcode;	\
std::vector<int> o_m_mc_barcode;	\
std::vector<int>* m_mc_pdgId;	\
std::vector<int> o_m_mc_pdgId;	\
std::vector<float>* m_mc_charge;	\
std::vector<float> o_m_mc_charge;	\
std::vector<std::vector<int> >* m_mc_parents;	\
std::vector<std::vector<int> > o_m_mc_parents;	\
std::vector<std::vector<int> >* m_mc_children;	\
std::vector<std::vector<int> > o_m_mc_children;	\
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
std::vector<std::vector<int> > o_m_mc_parent_index;
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
  {    DeclareVariable( o_m_RunNumber, "RunNumber" );	\
    DeclareVariable( o_m_EventNumber, "EventNumber" );	\
    DeclareVariable( o_m_vxp_n, "vxp_n" );	\
    DeclareVariable( o_m_vxp_nTracks, "vxp_nTracks" );	\
    DeclareVariable( o_m_averageIntPerXing, "averageIntPerXing" );	\
    DeclareVariable( o_m_lep_Charge, "lep_Charge" );	\
    DeclareVariable( o_m_lep_E, "lep_E" );	\
    DeclareVariable( o_m_lep_Pt, "lep_Pt" );	\
    DeclareVariable( o_m_lep_Phi, "lep_Phi" );	\
    DeclareVariable( o_m_lep_Eta, "lep_Eta" );	\
    DeclareVariable( o_m_lep_cl_E, "lep_cl_E" );	\
    DeclareVariable( o_m_lep_cl_Pt, "lep_cl_Pt" );	\
    DeclareVariable( o_m_lep_cl_Phi, "lep_cl_Phi" );	\
    DeclareVariable( o_m_lep_cl_Eta, "lep_cl_Eta" );	\
    DeclareVariable( o_m_lep_sf, "lep_sf" );	\
    DeclareVariable( o_m_lep_ObjID, "lep_ObjID" );	\
    DeclareVariable( o_m_lep_EtConeIso20, "lep_EtConeIso20" );	\
    DeclareVariable( o_m_lep_PtConeIso20, "lep_PtConeIso20" );	\
    DeclareVariable( o_m_lep_TrackIso20, "lep_TrackIso20" );	\
    DeclareVariable( o_m_lep_TopoIso20, "lep_TopoIso20" );	\
    DeclareVariable( o_m_lep_EtConeIso30, "lep_EtConeIso30" );	\
    DeclareVariable( o_m_lep_PtConeIso30, "lep_PtConeIso30" );	\
    DeclareVariable( o_m_lep_TrackIso30, "lep_TrackIso30" );	\
    DeclareVariable( o_m_lep_TopoIso30, "lep_TopoIso30" );	\
    DeclareVariable( o_m_lep_EtConeIso40, "lep_EtConeIso40" );	\
    DeclareVariable( o_m_lep_PtConeIso40, "lep_PtConeIso40" );	\
    DeclareVariable( o_m_lep_TrackIso40, "lep_TrackIso40" );	\
    DeclareVariable( o_m_lep_TopoIso40, "lep_TopoIso40" );	\
    DeclareVariable( o_m_ph_E, "ph_E" );	\
    DeclareVariable( o_m_ph_Pt, "ph_Pt" );	\
    DeclareVariable( o_m_ph_Phi, "ph_Phi" );	\
    DeclareVariable( o_m_ph_Eta, "ph_Eta" );	\
    DeclareVariable( o_m_ph_cl_E, "ph_cl_E" );	\
    DeclareVariable( o_m_ph_cl_Pt, "ph_cl_Pt" );	\
    DeclareVariable( o_m_ph_cl_Phi, "ph_cl_Phi" );	\
    DeclareVariable( o_m_ph_cl_Eta, "ph_cl_Eta" );	\
    DeclareVariable( o_m_ph_EtConeIso20, "ph_EtConeIso20" );	\
    DeclareVariable( o_m_ph_PtConeIso20, "ph_PtConeIso20" );	\
    DeclareVariable( o_m_ph_TrackIso20, "ph_TrackIso20" );	\
    DeclareVariable( o_m_ph_TopoIso20, "ph_TopoIso20" );	\
    DeclareVariable( o_m_ph_EtConeIso30, "ph_EtConeIso30" );	\
    DeclareVariable( o_m_ph_PtConeIso30, "ph_PtConeIso30" );	\
    DeclareVariable( o_m_ph_TrackIso30, "ph_TrackIso30" );	\
    DeclareVariable( o_m_ph_TopoIso30, "ph_TopoIso30" );	\
    DeclareVariable( o_m_ph_EtConeIso40, "ph_EtConeIso40" );	\
    DeclareVariable( o_m_ph_PtConeIso40, "ph_PtConeIso40" );	\
    DeclareVariable( o_m_ph_TrackIso40, "ph_TrackIso40" );	\
    DeclareVariable( o_m_ph_TopoIso40, "ph_TopoIso40" );	\
    DeclareVariable( o_m_dR_lep_ph, "dR_lep_ph" );	\
    DeclareVariable( o_m_dR_lep_jet, "dR_lep_jet" );	\
    DeclareVariable( o_m_dR_ph_jet, "dR_ph_jet" );	\
    DeclareVariable( o_m_ph_ObjID, "ph_ObjID" );	\
    DeclareVariable( o_m_ph_showershape, "ph_showershape" );	\
    DeclareVariable( o_m_ph_conversion, "ph_conversion" );	\
    DeclareVariable( o_m_ph_pdgId, "ph_pdgId" );	\
    DeclareVariable( o_m_ph_mother, "ph_mother" );	\
    DeclareVariable( o_m_njets, "njets" );	\
    DeclareVariable( o_m_jet_E, "jet_E" );	\
    DeclareVariable( o_m_jet_Pt, "jet_Pt" );	\
    DeclareVariable( o_m_jet_Eta, "jet_Eta" );	\
    DeclareVariable( o_m_jet_Phi, "jet_Phi" );	\
    DeclareVariable( o_m_Jet_em_E, "Jet_em_E" );	\
    DeclareVariable( o_m_Jet_em_Pt, "Jet_em_Pt" );	\
    DeclareVariable( o_m_Jet_em_Eta, "Jet_em_Eta" );	\
    DeclareVariable( o_m_Jet_em_Phi, "Jet_em_Phi" );	\
    DeclareVariable( o_m_jet_ObjID, "jet_ObjID" );	\
    DeclareVariable( o_m_jet_IsLooseBadJet, "jet_IsLooseBadJet" );	\
    DeclareVariable( o_m_jet_IsHotTile, "jet_IsHotTile" );	\
    DeclareVariable( o_m_METx, "METx" );	\
    DeclareVariable( o_m_METy, "METy" );	\
    DeclareVariable( o_m_MET, "MET" );	\
    DeclareVariable( o_m_Mt, "Mt" );	\
    DeclareVariable( o_m_Mlg, "Mlg" );	\
    DeclareVariable( o_m_Ptlg, "Ptlg" );	\
    DeclareVariable( o_m_Etalg, "Etalg" );	\
    DeclareVariable( o_m_Philg, "Philg" );	\
    DeclareVariable( o_m_dRlg, "dRlg" );	\
    DeclareVariable( o_m_Mjj, "Mjj" );	\
    DeclareVariable( o_m_Ptjj, "Ptjj" );	\
    DeclareVariable( o_m_dRjj, "dRjj" );	\
    DeclareVariable( o_m_dYjj, "dYjj" );	\
    DeclareVariable( o_m_bvetos, "bvetos" );	\
    DeclareVariable( o_m_weights, "weights" );	\
    DeclareVariable( o_m_weights_error, "weights_error" );	\
    DeclareVariable( o_m_el_truth_E, "el_truth_E" );	\
    DeclareVariable( o_m_el_truth_pt, "el_truth_pt" );	\
    DeclareVariable( o_m_MET_Truth_NonInt_etx, "MET_Truth_NonInt_etx" );	\
    DeclareVariable( o_m_MET_Truth_NonInt_ety, "MET_Truth_NonInt_ety" );	\
    DeclareVariable( o_m_MET_Truth_NonInt_phi, "MET_Truth_NonInt_phi" );	\
    DeclareVariable( o_m_MET_Truth_NonInt_et, "MET_Truth_NonInt_et" );	\
    DeclareVariable( o_m_MET_Truth_NonInt_sumet, "MET_Truth_NonInt_sumet" );	\
    DeclareVariable( o_m_el_truth_eta, "el_truth_eta" );	\
    DeclareVariable( o_m_el_truth_phi, "el_truth_phi" );	\
    DeclareVariable( o_m_el_truth_type, "el_truth_type" );	\
    DeclareVariable( o_m_el_truth_status, "el_truth_status" );	\
    DeclareVariable( o_m_el_truth_barcode, "el_truth_barcode" );	\
    DeclareVariable( o_m_el_truth_mothertype, "el_truth_mothertype" );	\
    DeclareVariable( o_m_el_truth_motherbarcode, "el_truth_motherbarcode" );	\
    DeclareVariable( o_m_el_truth_hasHardBrem, "el_truth_hasHardBrem" );	\
    DeclareVariable( o_m_ph_truth_E, "ph_truth_E" );	\
    DeclareVariable( o_m_ph_truth_pt, "ph_truth_pt" );	\
    DeclareVariable( o_m_ph_truth_eta, "ph_truth_eta" );	\
    DeclareVariable( o_m_ph_truth_phi, "ph_truth_phi" );	\
    DeclareVariable( o_m_ph_truth_type, "ph_truth_type" );	\
    DeclareVariable( o_m_ph_truth_status, "ph_truth_status" );	\
    DeclareVariable( o_m_ph_truth_barcode, "ph_truth_barcode" );	\
    DeclareVariable( o_m_ph_truth_mothertype, "ph_truth_mothertype" );	\
    DeclareVariable( o_m_ph_truth_motherbarcode, "ph_truth_motherbarcode" );	\
    DeclareVariable( o_m_ph_truth_index, "ph_truth_index" );	\
    DeclareVariable( o_m_ph_type, "ph_type" );	\
    DeclareVariable( o_m_ph_origin, "ph_origin" );	\
    DeclareVariable( o_m_mc_channel_number, "mc_channel_number" );	\
    DeclareVariable( o_m_mc_event_number, "mc_event_number" );	\
    DeclareVariable( o_m_mc_event_weight, "mc_event_weight" );	\
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
    DeclareVariable( o_m_mc_n, "mc_n" );	\
    DeclareVariable( o_m_mc_pt, "mc_pt" );	\
    DeclareVariable( o_m_mc_m, "mc_m" );	\
    DeclareVariable( o_m_mc_eta, "mc_eta" );	\
    DeclareVariable( o_m_mc_phi, "mc_phi" );	\
    DeclareVariable( o_m_mc_status, "mc_status" );	\
    DeclareVariable( o_m_mc_barcode, "mc_barcode" );	\
    DeclareVariable( o_m_mc_pdgId, "mc_pdgId" );	\
    DeclareVariable( o_m_mc_charge, "mc_charge" );	\
    DeclareVariable( o_m_mc_parents, "mc_parents" );	\
    DeclareVariable( o_m_mc_children, "mc_children" );	\
    DeclareVariable( o_m_mc_vx_x, "mc_vx_x" );	\
    DeclareVariable( o_m_mc_vx_y, "mc_vx_y" );	\
    DeclareVariable( o_m_mc_vx_z, "mc_vx_z" );	\
    DeclareVariable( o_m_mc_vx_barcode, "mc_vx_barcode" );	\
    DeclareVariable( o_m_mc_child_index, "mc_child_index" );	\
    DeclareVariable( o_m_mc_parent_index, "mc_parent_index" );	\
  }
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define RESETVAR                      \
  {    o_m_RunNumber = -999;\
    o_m_EventNumber = -999;\
    o_m_vxp_n = -999;\
    o_m_vxp_nTracks.clear();\
    o_m_averageIntPerXing = -999;\
    o_m_lep_Charge.clear();\
    o_m_lep_E.clear();\
    o_m_lep_Pt.clear();\
    o_m_lep_Phi.clear();\
    o_m_lep_Eta.clear();\
    o_m_lep_cl_E.clear();\
    o_m_lep_cl_Pt.clear();\
    o_m_lep_cl_Phi.clear();\
    o_m_lep_cl_Eta.clear();\
    o_m_lep_sf.clear();\
    o_m_lep_ObjID.clear();\
    o_m_lep_EtConeIso20.clear();\
    o_m_lep_PtConeIso20.clear();\
    o_m_lep_TrackIso20.clear();\
    o_m_lep_TopoIso20.clear();\
    o_m_lep_EtConeIso30.clear();\
    o_m_lep_PtConeIso30.clear();\
    o_m_lep_TrackIso30.clear();\
    o_m_lep_TopoIso30.clear();\
    o_m_lep_EtConeIso40.clear();\
    o_m_lep_PtConeIso40.clear();\
    o_m_lep_TrackIso40.clear();\
    o_m_lep_TopoIso40.clear();\
    o_m_ph_E.clear();\
    o_m_ph_Pt.clear();\
    o_m_ph_Phi.clear();\
    o_m_ph_Eta.clear();\
    o_m_ph_cl_E.clear();\
    o_m_ph_cl_Pt.clear();\
    o_m_ph_cl_Phi.clear();\
    o_m_ph_cl_Eta.clear();\
    o_m_ph_EtConeIso20.clear();\
    o_m_ph_PtConeIso20.clear();\
    o_m_ph_TrackIso20.clear();\
    o_m_ph_TopoIso20.clear();\
    o_m_ph_EtConeIso30.clear();\
    o_m_ph_PtConeIso30.clear();\
    o_m_ph_TrackIso30.clear();\
    o_m_ph_TopoIso30.clear();\
    o_m_ph_EtConeIso40.clear();\
    o_m_ph_PtConeIso40.clear();\
    o_m_ph_TrackIso40.clear();\
    o_m_ph_TopoIso40.clear();\
    o_m_dR_lep_ph.clear();\
    o_m_dR_lep_jet.clear();\
    o_m_dR_ph_jet.clear();\
    o_m_ph_ObjID.clear();\
    o_m_ph_showershape.clear();\
    o_m_ph_conversion.clear();\
    o_m_ph_pdgId.clear();\
    o_m_ph_mother.clear();\
    o_m_njets = -999;\
    o_m_jet_E.clear();\
    o_m_jet_Pt.clear();\
    o_m_jet_Eta.clear();\
    o_m_jet_Phi.clear();\
    o_m_Jet_em_E.clear();\
    o_m_Jet_em_Pt.clear();\
    o_m_Jet_em_Eta.clear();\
    o_m_Jet_em_Phi.clear();\
    o_m_jet_ObjID.clear();\
    o_m_jet_IsLooseBadJet.clear();\
    o_m_jet_IsHotTile.clear();\
    o_m_METx = -999;\
    o_m_METy = -999;\
    o_m_MET = -999;\
    o_m_Mt = -999;\
    o_m_Mlg = -999;\
    o_m_Ptlg = -999;\
    o_m_Etalg = -999;\
    o_m_Philg = -999;\
    o_m_dRlg = -999;\
    o_m_Mjj = -999;\
    o_m_Ptjj = -999;\
    o_m_dRjj = -999;\
    o_m_dYjj = -999;\
    o_m_bvetos.clear();\
    o_m_weights.clear();\
    o_m_weights_error.clear();\
    o_m_el_truth_E.clear();\
    o_m_el_truth_pt.clear();\
    o_m_MET_Truth_NonInt_etx = -999;\
    o_m_MET_Truth_NonInt_ety = -999;\
    o_m_MET_Truth_NonInt_phi = -999;\
    o_m_MET_Truth_NonInt_et = -999;\
    o_m_MET_Truth_NonInt_sumet = -999;\
    o_m_el_truth_eta.clear();\
    o_m_el_truth_phi.clear();\
    o_m_el_truth_type.clear();\
    o_m_el_truth_status.clear();\
    o_m_el_truth_barcode.clear();\
    o_m_el_truth_mothertype.clear();\
    o_m_el_truth_motherbarcode.clear();\
    o_m_el_truth_hasHardBrem.clear();\
    o_m_ph_truth_E.clear();\
    o_m_ph_truth_pt.clear();\
    o_m_ph_truth_eta.clear();\
    o_m_ph_truth_phi.clear();\
    o_m_ph_truth_type.clear();\
    o_m_ph_truth_status.clear();\
    o_m_ph_truth_barcode.clear();\
    o_m_ph_truth_mothertype.clear();\
    o_m_ph_truth_motherbarcode.clear();\
    o_m_ph_truth_index.clear();\
    o_m_ph_type.clear();\
    o_m_ph_origin.clear();\
    o_m_mc_channel_number = -999;\
    o_m_mc_event_number = -999;\
    o_m_mc_event_weight = -999;\
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
    o_m_mc_n = -999;\
    o_m_mc_pt.clear();\
    o_m_mc_m.clear();\
    o_m_mc_eta.clear();\
    o_m_mc_phi.clear();\
    o_m_mc_status.clear();\
    o_m_mc_barcode.clear();\
    o_m_mc_pdgId.clear();\
    o_m_mc_charge.clear();\
    o_m_mc_parents.clear();\
    o_m_mc_children.clear();\
    o_m_mc_vx_x.clear();\
    o_m_mc_vx_y.clear();\
    o_m_mc_vx_z.clear();\
    o_m_mc_vx_barcode.clear();\
    o_m_mc_child_index.clear();\
    o_m_mc_parent_index.clear();\
  }
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define COPYVAR                      \
  {   o_m_RunNumber = m_RunNumber;\
   o_m_EventNumber = m_EventNumber;\
   o_m_vxp_n = m_vxp_n;\
   o_m_vxp_nTracks = std::vector<int>(*m_vxp_nTracks);\
   o_m_averageIntPerXing = m_averageIntPerXing;\
   o_m_lep_Charge = std::vector<double>(*m_lep_Charge);\
   o_m_lep_E = std::vector<double>(*m_lep_E);\
   o_m_lep_Pt = std::vector<double>(*m_lep_Pt);\
   o_m_lep_Phi = std::vector<double>(*m_lep_Phi);\
   o_m_lep_Eta = std::vector<double>(*m_lep_Eta);\
   o_m_lep_cl_E = std::vector<double>(*m_lep_cl_E);\
   o_m_lep_cl_Pt = std::vector<double>(*m_lep_cl_Pt);\
   o_m_lep_cl_Phi = std::vector<double>(*m_lep_cl_Phi);\
   o_m_lep_cl_Eta = std::vector<double>(*m_lep_cl_Eta);\
   o_m_lep_sf = std::vector<double>(*m_lep_sf);\
   o_m_lep_ObjID = std::vector<std::vector<int> >(*m_lep_ObjID);\
   o_m_lep_EtConeIso20 = std::vector<double>(*m_lep_EtConeIso20);\
   o_m_lep_PtConeIso20 = std::vector<double>(*m_lep_PtConeIso20);\
   o_m_lep_TrackIso20 = std::vector<double>(*m_lep_TrackIso20);\
   o_m_lep_TopoIso20 = std::vector<double>(*m_lep_TopoIso20);\
   o_m_lep_EtConeIso30 = std::vector<double>(*m_lep_EtConeIso30);\
   o_m_lep_PtConeIso30 = std::vector<double>(*m_lep_PtConeIso30);\
   o_m_lep_TrackIso30 = std::vector<double>(*m_lep_TrackIso30);\
   o_m_lep_TopoIso30 = std::vector<double>(*m_lep_TopoIso30);\
   o_m_lep_EtConeIso40 = std::vector<double>(*m_lep_EtConeIso40);\
   o_m_lep_PtConeIso40 = std::vector<double>(*m_lep_PtConeIso40);\
   o_m_lep_TrackIso40 = std::vector<double>(*m_lep_TrackIso40);\
   o_m_lep_TopoIso40 = std::vector<double>(*m_lep_TopoIso40);\
   o_m_ph_E = std::vector<double>(*m_ph_E);\
   o_m_ph_Pt = std::vector<double>(*m_ph_Pt);\
   o_m_ph_Phi = std::vector<double>(*m_ph_Phi);\
   o_m_ph_Eta = std::vector<double>(*m_ph_Eta);\
   o_m_ph_cl_E = std::vector<double>(*m_ph_cl_E);\
   o_m_ph_cl_Pt = std::vector<double>(*m_ph_cl_Pt);\
   o_m_ph_cl_Phi = std::vector<double>(*m_ph_cl_Phi);\
   o_m_ph_cl_Eta = std::vector<double>(*m_ph_cl_Eta);\
   o_m_ph_EtConeIso20 = std::vector<double>(*m_ph_EtConeIso20);\
   o_m_ph_PtConeIso20 = std::vector<double>(*m_ph_PtConeIso20);\
   o_m_ph_TrackIso20 = std::vector<double>(*m_ph_TrackIso20);\
   o_m_ph_TopoIso20 = std::vector<double>(*m_ph_TopoIso20);\
   o_m_ph_EtConeIso30 = std::vector<double>(*m_ph_EtConeIso30);\
   o_m_ph_PtConeIso30 = std::vector<double>(*m_ph_PtConeIso30);\
   o_m_ph_TrackIso30 = std::vector<double>(*m_ph_TrackIso30);\
   o_m_ph_TopoIso30 = std::vector<double>(*m_ph_TopoIso30);\
   o_m_ph_EtConeIso40 = std::vector<double>(*m_ph_EtConeIso40);\
   o_m_ph_PtConeIso40 = std::vector<double>(*m_ph_PtConeIso40);\
   o_m_ph_TrackIso40 = std::vector<double>(*m_ph_TrackIso40);\
   o_m_ph_TopoIso40 = std::vector<double>(*m_ph_TopoIso40);\
   o_m_dR_lep_ph = std::vector<double>(*m_dR_lep_ph);\
   o_m_dR_lep_jet = std::vector<double>(*m_dR_lep_jet);\
   o_m_dR_ph_jet = std::vector<double>(*m_dR_ph_jet);\
   o_m_ph_ObjID = std::vector<std::vector<int> >(*m_ph_ObjID);\
   o_m_ph_showershape = std::vector<std::vector<double> >(*m_ph_showershape);\
   o_m_ph_conversion = std::vector<std::vector<int> >(*m_ph_conversion);\
   o_m_ph_pdgId = std::vector<int>(*m_ph_pdgId);\
   o_m_ph_mother = std::vector<int>(*m_ph_mother);\
   o_m_njets = m_njets;\
   o_m_jet_E = std::vector<double>(*m_jet_E);\
   o_m_jet_Pt = std::vector<double>(*m_jet_Pt);\
   o_m_jet_Eta = std::vector<double>(*m_jet_Eta);\
   o_m_jet_Phi = std::vector<double>(*m_jet_Phi);\
   o_m_Jet_em_E = std::vector<float>(*m_Jet_em_E);\
   o_m_Jet_em_Pt = std::vector<float>(*m_Jet_em_Pt);\
   o_m_Jet_em_Eta = std::vector<float>(*m_Jet_em_Eta);\
   o_m_Jet_em_Phi = std::vector<float>(*m_Jet_em_Phi);\
   o_m_jet_ObjID = std::vector<std::vector<int> >(*m_jet_ObjID);\
   o_m_jet_IsLooseBadJet = std::vector<bool>(*m_jet_IsLooseBadJet);\
   o_m_jet_IsHotTile = std::vector<bool>(*m_jet_IsHotTile);\
   o_m_METx = m_METx;\
   o_m_METy = m_METy;\
   o_m_MET = m_MET;\
   o_m_Mt = m_Mt;\
   o_m_Mlg = m_Mlg;\
   o_m_Ptlg = m_Ptlg;\
   o_m_Etalg = m_Etalg;\
   o_m_Philg = m_Philg;\
   o_m_dRlg = m_dRlg;\
   o_m_Mjj = m_Mjj;\
   o_m_Ptjj = m_Ptjj;\
   o_m_dRjj = m_dRjj;\
   o_m_dYjj = m_dYjj;\
   o_m_bvetos = std::vector<int>(*m_bvetos);\
   o_m_weights = std::vector<double>(*m_weights);\
   o_m_weights_error = std::vector<double>(*m_weights_error);\
   o_m_el_truth_E = std::vector<float>(*m_el_truth_E);\
   o_m_el_truth_pt = std::vector<float>(*m_el_truth_pt);\
   o_m_MET_Truth_NonInt_etx = m_MET_Truth_NonInt_etx;\
   o_m_MET_Truth_NonInt_ety = m_MET_Truth_NonInt_ety;\
   o_m_MET_Truth_NonInt_phi = m_MET_Truth_NonInt_phi;\
   o_m_MET_Truth_NonInt_et = m_MET_Truth_NonInt_et;\
   o_m_MET_Truth_NonInt_sumet = m_MET_Truth_NonInt_sumet;\
   o_m_el_truth_eta = std::vector<float>(*m_el_truth_eta);\
   o_m_el_truth_phi = std::vector<float>(*m_el_truth_phi);\
   o_m_el_truth_type = std::vector<int>(*m_el_truth_type);\
   o_m_el_truth_status = std::vector<int>(*m_el_truth_status);\
   o_m_el_truth_barcode = std::vector<int>(*m_el_truth_barcode);\
   o_m_el_truth_mothertype = std::vector<int>(*m_el_truth_mothertype);\
   o_m_el_truth_motherbarcode = std::vector<int>(*m_el_truth_motherbarcode);\
   o_m_el_truth_hasHardBrem = std::vector<int>(*m_el_truth_hasHardBrem);\
   o_m_ph_truth_E = std::vector<float>(*m_ph_truth_E);\
   o_m_ph_truth_pt = std::vector<float>(*m_ph_truth_pt);\
   o_m_ph_truth_eta = std::vector<float>(*m_ph_truth_eta);\
   o_m_ph_truth_phi = std::vector<float>(*m_ph_truth_phi);\
   o_m_ph_truth_type = std::vector<int>(*m_ph_truth_type);\
   o_m_ph_truth_status = std::vector<int>(*m_ph_truth_status);\
   o_m_ph_truth_barcode = std::vector<int>(*m_ph_truth_barcode);\
   o_m_ph_truth_mothertype = std::vector<int>(*m_ph_truth_mothertype);\
   o_m_ph_truth_motherbarcode = std::vector<int>(*m_ph_truth_motherbarcode);\
   o_m_ph_truth_index = std::vector<int>(*m_ph_truth_index);\
   o_m_ph_type = std::vector<int>(*m_ph_type);\
   o_m_ph_origin = std::vector<int>(*m_ph_origin);\
   o_m_mc_channel_number = m_mc_channel_number;\
   o_m_mc_event_number = m_mc_event_number;\
   o_m_mc_event_weight = m_mc_event_weight;\
   o_m_mcevt_n = m_mcevt_n;\
   o_m_mcevt_signal_process_id = std::vector<int>(*m_mcevt_signal_process_id);\
   o_m_mcevt_event_number = std::vector<int>(*m_mcevt_event_number);\
   o_m_mcevt_event_scale = std::vector<double>(*m_mcevt_event_scale);\
   o_m_mcevt_alphaQCD = std::vector<double>(*m_mcevt_alphaQCD);\
   o_m_mcevt_alphaQED = std::vector<double>(*m_mcevt_alphaQED);\
   o_m_mcevt_pdf_id1 = std::vector<int>(*m_mcevt_pdf_id1);\
   o_m_mcevt_pdf_id2 = std::vector<int>(*m_mcevt_pdf_id2);\
   o_m_mcevt_pdf_x1 = std::vector<double>(*m_mcevt_pdf_x1);\
   o_m_mcevt_pdf_x2 = std::vector<double>(*m_mcevt_pdf_x2);\
   o_m_mcevt_pdf_scale = std::vector<double>(*m_mcevt_pdf_scale);\
   o_m_mcevt_pdf1 = std::vector<double>(*m_mcevt_pdf1);\
   o_m_mcevt_pdf2 = std::vector<double>(*m_mcevt_pdf2);\
   o_m_mcevt_weight = std::vector<std::vector<double> >(*m_mcevt_weight);\
   o_m_mc_n = m_mc_n;\
   o_m_mc_pt = std::vector<float>(*m_mc_pt);\
   o_m_mc_m = std::vector<float>(*m_mc_m);\
   o_m_mc_eta = std::vector<float>(*m_mc_eta);\
   o_m_mc_phi = std::vector<float>(*m_mc_phi);\
   o_m_mc_status = std::vector<int>(*m_mc_status);\
   o_m_mc_barcode = std::vector<int>(*m_mc_barcode);\
   o_m_mc_pdgId = std::vector<int>(*m_mc_pdgId);\
   o_m_mc_charge = std::vector<float>(*m_mc_charge);\
   o_m_mc_parents = std::vector<std::vector<int> >(*m_mc_parents);\
   o_m_mc_children = std::vector<std::vector<int> >(*m_mc_children);\
   o_m_mc_vx_x = std::vector<float>(*m_mc_vx_x);\
   o_m_mc_vx_y = std::vector<float>(*m_mc_vx_y);\
   o_m_mc_vx_z = std::vector<float>(*m_mc_vx_z);\
   o_m_mc_vx_barcode = std::vector<int>(*m_mc_vx_barcode);\
   o_m_mc_child_index = std::vector<std::vector<int> >(*m_mc_child_index);\
   o_m_mc_parent_index = std::vector<std::vector<int> >(*m_mc_parent_index);\
  }
#endif

//end definitions DEF_FILTER

//end macro definitions
