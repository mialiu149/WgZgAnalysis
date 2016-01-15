////DukHep/bin/dukhep_create_filter.py DukHep/branches.txt
#undef WGOUTPUT_MEMBERS
#undef DECLARE_WGOUTPUT
#undef RESETVAR_WGOUTPUT
#undef COPYVAR_WGOUTPUT

#define WG_FILTER 1
//begin macro definitions

#if OUTPUT_TYPE == WG_FILTER
#define WGOUTPUT_MEMBERS                          \
Int_t o_m_RunNumber;	\
Int_t o_m_EventNumber;	\
Double_t o_m_averageIntPerXing;	\
Int_t o_m_njets;	\
Double_t o_m_lumi_weight;	\
Double_t o_m_pileup_weight;	\
Double_t o_m_mc_event_weight;	\
Int_t o_m_bveto70;	\
Int_t o_m_bveto80;	\
Int_t o_m_bveto85;	\
Int_t o_m_bvetotruth;	\
Int_t o_m_fsrvetotruth;\
Int_t o_m_el_region;	\
Int_t o_m_ph_region;	\
Int_t o_m_truthregion;	\
Double_t o_m_jet0_E;	\
Double_t o_m_jet0_Pt;	\
Double_t o_m_jet0_Eta;	\
Double_t o_m_jet0_Phi;	\
Double_t o_m_jet1_E;	\
Double_t o_m_jet1_Pt;	\
Double_t o_m_jet1_Eta;	\
Double_t o_m_jet1_Phi;	\
Int_t o_m_lep_Charge;	\
Double_t o_m_lep_E;	\
Double_t o_m_lep_Pt;	\
Double_t o_m_lep_Eta;	\
Double_t o_m_lep_Phi;	\
Double_t o_m_lep_sf;	\
Double_t o_m_lep_iso;	\
Double_t o_m_ph_E;	\
Double_t o_m_ph_Pt;	\
Double_t o_m_ph_Eta;	\
Double_t o_m_ph_Phi;	\
Int_t    o_m_ph_istight;\
Int_t    o_m_ph_nontight_def1;\
Int_t    o_m_ph_nontight_def2;\
Int_t    o_m_ph_nontight_def3;\
Int_t    o_m_ph_nontight_def4;\
Int_t    o_m_ph_nontight_def5;\
Int_t    o_m_ph_nontight_def6;\
Int_t    o_m_ph_nontight_def7;\
Double_t o_m_ph_iso_cone20;	\
Double_t o_m_ph_iso_cone30;	\
Double_t o_m_ph_iso_cone40;	\
Int_t o_m_ph_pdgId;	\
Int_t o_m_ph_mother;	\
Double_t o_m_METx;	\
Double_t o_m_METy;	\
Double_t o_m_MET;	\
Double_t o_m_Mt;	\
Double_t o_m_Mt_Wg;	\
Double_t o_m_Mlg;	\
Double_t o_m_Ptlg;	\
Double_t o_m_dRlg;	\
Double_t o_m_dRlj0;	\
Double_t o_m_dRlj1;	\
Double_t o_m_dYgj0;	\
Double_t o_m_dRgj1;	\
Double_t o_m_dRgj0;	\
Double_t o_m_dYgj1;	\
Double_t o_m_Mjj;	\
Double_t o_m_Ptjj;	\
Double_t o_m_dYjj;	\
Double_t o_m_dRjj;	\
Double_t o_m_Mlgj0;	\
Double_t o_m_Mlgj1;	\
Double_t o_m_Ptlgj0;	\
Double_t o_m_Ptlgj1;	\
Double_t o_m_Mlgjj;	\
Double_t o_m_Ptlgjj;	\
Double_t o_m_dYj0_lg;	\
Double_t o_m_dYj1_lg;	\
Double_t o_m_pt_balance;	\
Double_t o_m_pt_balance_noMET;	\
Double_t o_m_lg_Centrality;	\
Double_t o_m_l_Centrality;	\
Double_t o_m_weight;
#endif

#if OUTPUT_TYPE == WG_FILTER
#define DECLARE_WGOUTPUT( stringTREENAME )                      \
  {    DeclareVariable( o_m_RunNumber, "RunNumber" );	\
    DeclareVariable( o_m_EventNumber, "EventNumber" );	\
    DeclareVariable( o_m_njets, "njets" );	\
    DeclareVariable( o_m_lumi_weight, "lumi_weight" );	\
    DeclareVariable( o_m_pileup_weight, "pileup_weight" );	\
    DeclareVariable( o_m_mc_event_weight, "mc_event_weight" );	\
    DeclareVariable( o_m_bveto70, "bveto70" );	\
    DeclareVariable( o_m_bveto80, "bveto80" );	\
    DeclareVariable( o_m_bveto85, "bveto85" );	\
    DeclareVariable( o_m_bvetotruth, "bvetotruth" );	\
    DeclareVariable( o_m_fsrvetotruth, "fsr_veto" );	\
    DeclareVariable( o_m_el_region, "el_region" );	\
    DeclareVariable( o_m_ph_region, "ph_region" );	\
    DeclareVariable( o_m_truthregion, "truthregion" );	\
    DeclareVariable( o_m_averageIntPerXing, "averageIntPerXing" );	\
    DeclareVariable( o_m_jet0_E, "jet_leading_E" );	\
    DeclareVariable( o_m_jet0_Pt, "jet_leading_Pt" );	\
    DeclareVariable( o_m_jet0_Eta, "jet_leading_Eta" );	\
    DeclareVariable( o_m_jet0_Phi, "jet_leading_Phi" );	\
    DeclareVariable( o_m_jet1_E, "jet_subleading_E" );	\
    DeclareVariable( o_m_jet1_Pt, "jet_subleading_Pt" );	\
    DeclareVariable( o_m_jet1_Eta, "jet_subleading_Eta" );	\
    DeclareVariable( o_m_jet1_Phi, "jet_subleading_Phi" );	\
    DeclareVariable( o_m_lep_Charge, "lep_Charge" );	\
    DeclareVariable( o_m_lep_E, "lep_E" );	\
    DeclareVariable( o_m_lep_Pt, "lep_Pt" );	\
    DeclareVariable( o_m_lep_Eta, "lep_Eta" );	\
    DeclareVariable( o_m_lep_Phi, "lep_Phi" );	\
    DeclareVariable( o_m_lep_sf, "lep_sf" );	\
    DeclareVariable( o_m_lep_iso, "lep_iso" );	\
    DeclareVariable( o_m_ph_E, "ph_E" );	\
    DeclareVariable( o_m_ph_Pt, "ph_Pt" );	\
    DeclareVariable( o_m_ph_Eta, "ph_Eta" );	\
    DeclareVariable( o_m_ph_Phi, "ph_Phi" );	\
    DeclareVariable( o_m_ph_istight, "ph_istight" );	\
    DeclareVariable( o_m_ph_nontight_def1, "o_m_ph_nontight_def1" );	\
    DeclareVariable( o_m_ph_nontight_def2, "o_m_ph_nontight_def2" );	\
    DeclareVariable( o_m_ph_nontight_def3, "o_m_ph_nontight_def3" );	\
    DeclareVariable( o_m_ph_nontight_def4, "o_m_ph_nontight_def4" );	\
    DeclareVariable( o_m_ph_nontight_def5, "o_m_ph_nontight_def5" );	\
    DeclareVariable( o_m_ph_nontight_def6, "o_m_ph_nontight_def6" );	\
    DeclareVariable( o_m_ph_nontight_def7, "o_m_ph_nontight_def7" );	\
    DeclareVariable( o_m_ph_iso_cone20, "ph_iso_cone20" );	\
    DeclareVariable( o_m_ph_iso_cone30, "ph_iso_cone30" );	\
    DeclareVariable( o_m_ph_iso_cone40, "ph_iso_cone40" );	\
    DeclareVariable( o_m_ph_pdgId, "ph_pdgId" );	\
    DeclareVariable( o_m_ph_mother, "ph_mother" );	\
    DeclareVariable( o_m_METx, "METx" );	\
    DeclareVariable( o_m_METy, "METy" );	\
    DeclareVariable( o_m_MET, "MET" );	\
    DeclareVariable( o_m_Mt, "Mt" );	\
    DeclareVariable( o_m_Mlg, "Mlg" );	\
    DeclareVariable( o_m_Mt_Wg, "Mt_Wg" );	\
    DeclareVariable( o_m_Ptlg, "Ptlg" );	\
    DeclareVariable( o_m_dRlg, "dRlg" );	\
    DeclareVariable( o_m_dRlj0, "dRlj0" );	\
    DeclareVariable( o_m_dRlj1, "dRlj1" );	\
    DeclareVariable( o_m_dYgj0, "dYgj0" );	\
    DeclareVariable( o_m_dYgj1, "dYgj1" );	\
    DeclareVariable( o_m_dRgj0, "dRgj0" );	\
    DeclareVariable( o_m_dRgj1, "dRgj1" );	\
    DeclareVariable( o_m_Mjj, "Mjj" );	\
    DeclareVariable( o_m_Ptjj, "Ptjj" );	\
    DeclareVariable( o_m_dYjj, "dYjj" );	\
    DeclareVariable( o_m_dRjj, "dRjj" );	\
    DeclareVariable( o_m_Mlgj0, "Mlgj0" );	\
    DeclareVariable( o_m_Mlgj1, "Mlgj1" );	\
    DeclareVariable( o_m_Ptlgj0, "Ptlgj0" );	\
    DeclareVariable( o_m_Ptlgj1, "Ptlgj1" );	\
    DeclareVariable( o_m_Mlgjj, "Mlgjj" );	\
    DeclareVariable( o_m_Ptlgjj, "Ptlgjj" );	\
    DeclareVariable( o_m_dYj0_lg, "dYj0_lg" );	\
    DeclareVariable( o_m_dYj1_lg, "dYj1_lg" );	\
    DeclareVariable( o_m_pt_balance, "pt_balance" );	\
    DeclareVariable( o_m_pt_balance_noMET, "pt_balance_noMET" );	\
    DeclareVariable( o_m_lg_Centrality, "lg_Centrality" );	\
    DeclareVariable( o_m_l_Centrality, "l_Centrality" );	\
    DeclareVariable( o_m_weight, "weight" );	\
  }
#endif


#if OUTPUT_TYPE == WG_FILTER
#define RESETVAR_WGOUTPUT                      \
  {    o_m_RunNumber = -999;\
    o_m_EventNumber = -999;\
    o_m_njets = -999;\
    o_m_lumi_weight = -999;\
    o_m_pileup_weight = -999;\
    o_m_mc_event_weight = -999;\
    o_m_bveto70 = -999;\
    o_m_bveto80 = -999;\
    o_m_bveto85 = -999;\
    o_m_bvetotruth = -999;\
    o_m_fsrvetotruth = -999;\
    o_m_el_region = -999;\
    o_m_ph_region = -999;\
    o_m_truthregion = -999;\
    o_m_averageIntPerXing = -999;\
    o_m_jet0_E = -999;\
    o_m_jet0_Pt = -999;\
    o_m_jet0_Eta = -999;\
    o_m_jet0_Phi = -999;\
    o_m_jet1_E = -999;\
    o_m_jet1_Pt = -999;\
    o_m_jet1_Eta = -999;\
    o_m_jet1_Phi = -999;\
    o_m_lep_Charge = -999;\
    o_m_lep_E = -999;\
    o_m_lep_Pt = -999;\
    o_m_lep_Eta = -999;\
    o_m_lep_Phi = -999;\
    o_m_lep_sf = -999;\
    o_m_lep_iso = -999;\
    o_m_ph_E = -999;\
    o_m_ph_Pt = -999;\
    o_m_ph_Eta = -999;\
    o_m_ph_Phi = -999;\
    o_m_ph_istight = -999;\
    o_m_ph_nontight_def1 = -999;\
    o_m_ph_nontight_def2 = -999;\
    o_m_ph_nontight_def3 = -999;\
    o_m_ph_nontight_def4 = -999;\
    o_m_ph_nontight_def5 = -999;\
    o_m_ph_nontight_def6 = -999;\
    o_m_ph_iso_cone20 = -999;\
    o_m_ph_iso_cone30 = -999;\
    o_m_ph_iso_cone40 = -999;\
    o_m_ph_pdgId = -999;\
    o_m_ph_mother = -999;\
    o_m_METx = -999;\
    o_m_METy = -999;\
    o_m_MET = -999;\
    o_m_Mt = -999;\
    o_m_Mlg = -999;\
    o_m_Mt_Wg = -999;\
    o_m_Ptlg = -999;\
    o_m_dRlg = -999;\
    o_m_dRlj0 = -999;\
    o_m_dRlj1 = -999;\
    o_m_dYgj0 = -999;\
    o_m_dRgj0 = -999;\
    o_m_dYgj1 = -999;\
    o_m_dRgj1 = -999;\
    o_m_Mjj = -999;\
    o_m_Ptjj = -999;\
    o_m_dYjj = -999;\
    o_m_dRjj = -999;\
    o_m_Mlgj0 = -999;\
    o_m_Mlgj1 = -999;\
    o_m_Ptlgj0 = -999;\
    o_m_Ptlgj1 = -999;\
    o_m_Mlgjj = -999;\
    o_m_Ptlgjj = -999;\
    o_m_dYj0_lg = -999;\
    o_m_dYj1_lg = -999;\
    o_m_pt_balance = -999;\
    o_m_pt_balance_noMET = -999;\
    o_m_lg_Centrality = -999;\
    o_m_l_Centrality = -999;\
    o_m_weight = -999;\
  }
#endif


#if OUTPUT_TYPE == WG_FILTER
#define COPYVAR_WGOUTPUT                    \
  {   o_m_RunNumber = m_RunNumber;\
   o_m_EventNumber = m_EventNumber;\
   o_m_averageIntPerXing = m_averageIntPerXing;\
  }
#endif

//end definitions DEF_FILTER

//end macro definitions
