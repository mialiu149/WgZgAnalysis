////DukHep/bin/dukhep_create_filter.py DukHep/truth_block.txt
#undef INIT_NULLS_CTOR_TRUTH
#undef DUKEHEPHEADER_MEMBERS_TRUTH
#undef CONNECTTRUTH
#undef DECLARETRUTH
#undef RESETVARTRUTH
#undef COPYVARTRUTH

#define FILTER_TRUTH 1
//begin macro definitions

#if FILTER_TYPE == FILTER_TRUTH
#define INIT_NULLS_CTOR_TRUTH	       \
m_el_truth_E(0),	\
m_el_truth_pt(0),	\
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
m_ph_origin(0),\
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
m_mc_child_index(0),    \
m_MET_Truth_NonInt_etx(0),	\
m_MET_Truth_NonInt_ety(0),	\
m_MET_Truth_NonInt_phi(0),	\
m_MET_Truth_NonInt_et(0),	\
m_MET_Truth_NonInt_sumet(0),	\
m_mc_parent_index(0)
#endif


#if FILTER_TYPE == FILTER_TRUTH
#define DUKEHEPHEADER_MEMBERS_TRUTH                      \
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
std::vector<float>* m_el_truth_E;	\
std::vector<float> o_m_el_truth_E;	\
std::vector<float>* m_el_truth_pt;	\
std::vector<float> o_m_el_truth_pt;	\
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
std::vector<int> o_m_ph_origin; \
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
std::vector<std::vector<int> > o_m_mc_child_index;      \
std::vector<std::vector<int> >* m_mc_parent_index;	\
std::vector<std::vector<int> > o_m_mc_parent_index;
#endif


#if FILTER_TYPE == FILTER_TRUTH
#define CONNECTTRUTH( stringTREENAME )                      \
  {    ConnectVariable( (stringTREENAME), "el_truth_E", m_el_truth_E );	\
    ConnectVariable( (stringTREENAME), "MET_Truth_NonInt_etx", m_MET_Truth_NonInt_etx );	\
    ConnectVariable( (stringTREENAME), "MET_Truth_NonInt_ety", m_MET_Truth_NonInt_ety );	\
    ConnectVariable( (stringTREENAME), "MET_Truth_NonInt_phi", m_MET_Truth_NonInt_phi );	\
    ConnectVariable( (stringTREENAME), "MET_Truth_NonInt_et", m_MET_Truth_NonInt_et );	\
    ConnectVariable( (stringTREENAME), "MET_Truth_NonInt_sumet", m_MET_Truth_NonInt_sumet );	\
    ConnectVariable( (stringTREENAME), "el_truth_pt", m_el_truth_pt );	\
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
    ConnectVariable( (stringTREENAME), "mc_vx_x", m_mc_vx_x );	\
    ConnectVariable( (stringTREENAME), "mc_vx_y", m_mc_vx_y );	\
    ConnectVariable( (stringTREENAME), "mc_vx_z", m_mc_vx_z );	\
    ConnectVariable( (stringTREENAME), "mc_vx_barcode", m_mc_vx_barcode );	\
    ConnectVariable( (stringTREENAME), "mc_child_index", m_mc_child_index );	\
    ConnectVariable( (stringTREENAME), "mc_parent_index", m_mc_parent_index );	\
  }
#endif


#if FILTER_TYPE == FILTER_TRUTH
#define DECLARETRUTH( stringTREENAME )                      \
  {    DeclareVariable( o_m_el_truth_E, "el_truth_E" );	\
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
    DeclareVariable( o_m_mc_vx_x, "mc_vx_x" );	\
    DeclareVariable( o_m_mc_vx_y, "mc_vx_y" );	\
    DeclareVariable( o_m_mc_vx_z, "mc_vx_z" );	\
    DeclareVariable( o_m_mc_vx_barcode, "mc_vx_barcode" );	\
    DeclareVariable( o_m_mc_child_index, "mc_child_index" );	\
    DeclareVariable( o_m_mc_parent_index, "mc_parent_index" );	\
  }
#endif


#if FILTER_TYPE == FILTER_TRUTH
#define RESETVARTRUTH                      \
  {    o_m_el_truth_E.clear();\
    o_m_MET_Truth_NonInt_etx = -999;\
    o_m_MET_Truth_NonInt_ety = -999;\
    o_m_MET_Truth_NonInt_phi = -999;\
    o_m_MET_Truth_NonInt_et = -999;\
    o_m_MET_Truth_NonInt_sumet = -999;\
    o_m_el_truth_pt.clear();\
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
    o_m_mc_children.clear();\
    o_m_mc_vx_x.clear();\
    o_m_mc_vx_y.clear();\
    o_m_mc_vx_z.clear();\
    o_m_mc_vx_barcode.clear();\
    o_m_mc_child_index.clear();\
    o_m_mc_parent_index.clear();\
  }
#endif


#if FILTER_TYPE == FILTER_TRUTH
#define COPYVARTRUTH                      \
  {   o_m_el_truth_E = std::vector<float>(*m_el_truth_E);\
   o_m_MET_Truth_NonInt_etx = m_MET_Truth_NonInt_etx;\
   o_m_MET_Truth_NonInt_ety = m_MET_Truth_NonInt_ety;\
   o_m_MET_Truth_NonInt_phi = m_MET_Truth_NonInt_phi;\
   o_m_MET_Truth_NonInt_et = m_MET_Truth_NonInt_et;\
   o_m_MET_Truth_NonInt_sumet = m_MET_Truth_NonInt_sumet;\
   o_m_el_truth_pt = std::vector<float>(*m_el_truth_pt);\
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
