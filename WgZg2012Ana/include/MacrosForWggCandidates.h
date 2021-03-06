#undef WGZGHEPHEADER_MEMBERS
#undef DECLARE_WG
#undef COPYVAR_WG
#undef CONNECT_WG
#undef RESETVAR_WG

#define WGCUTFLOW 1
//begin macro definitions

#if WGZG_TYPE == WGCUTFLOW
#define WGZGHEPHEADER_MEMBERS                          \
Float_t o_m_METx;	\
Float_t o_m_METy;\
Float_t o_m_MET;\
Float_t o_m_dRgg;\
Float_t o_m_Ptlgg;\
Float_t o_m_PtlggMET;\
Float_t o_m_PtlggMETx;\
Float_t o_m_PtlggMETy;\
Float_t o_m_Ptgg;\
Float_t o_m_Philgg;\
Float_t o_m_Phigg;\
Float_t o_m_Etalgg;\
Float_t o_m_Etagg;\
std::vector<double> o_m_TightLeptons_E;\
std::vector<double> o_m_MediumLeptons_E;\
std::vector<double> o_m_GoodPhotons_E;\
std::vector<double> o_m_TightLeptons_Pt;\
std::vector<double> o_m_MediumLeptons_Pt;\
std::vector<double> o_m_GoodPhotons_Pt;\
std::vector<double> o_m_TightLeptons_Eta;\
std::vector<double> o_m_MediumLeptons_Eta;\
std::vector<double> o_m_GoodPhotons_Eta;\
std::vector<double> o_m_TightLeptons_Phi;\
std::vector<double> o_m_MediumLeptons_Phi;\
std::vector<double> o_m_GoodPhotons_Phi;\
std::vector<double> o_m_TightLeptons_Charge;\
std::vector<double> o_m_MediumLeptons_Charge;\
std::vector<double> o_m_TightLeptonsEtConeIso20;\
std::vector<double> o_m_TightLeptonsPtConeIso20;\
std::vector<double> o_m_TightLeptonsTrackIso20;\
std::vector<double> o_m_TightLeptonsTopoIso20;\
std::vector<double> o_m_TightLeptonsScale;\
std::vector<double> o_m_MediumLeptonsEtConeIso20;\
std::vector<double> o_m_MediumLeptonsTopoIso20;\
std::vector<double> o_m_MediumLeptonsPtConeIso20;\
std::vector<double> o_m_MediumLeptonsTrackIso20;\
std::vector<double> o_m_MediumLeptonsScale;\
std::vector<double> o_m_GoodPhotonPtConeIso20;\
std::vector<double> o_m_GoodPhotonEtConeIso20;\
std::vector<double> o_m_GoodPhotonTrackIso20;\
std::vector<double> o_m_GoodPhotonTopoIso20;\
std::vector<double> o_m_TightLeptonsEtConeIso30;\
std::vector<double> o_m_TightLeptonsPtConeIso30;\
std::vector<double> o_m_TightLeptonsTrackIso30;\
std::vector<double> o_m_TightLeptonsTopoIso30;\
std::vector<double> o_m_MediumLeptonsEtConeIso30;\
std::vector<double> o_m_MediumLeptonsTopoIso30;\
std::vector<double> o_m_MediumLeptonsPtConeIso30;\
std::vector<double> o_m_MediumLeptonsTrackIso30;\
std::vector<double> o_m_GoodPhotonPtConeIso30;\
std::vector<double> o_m_GoodPhotonEtConeIso30;\
std::vector<double> o_m_GoodPhotonTrackIso30;\
std::vector<double> o_m_GoodPhotonTopoIso30;\
std::vector<double> o_m_TightLeptonsEtConeIso40;\
std::vector<double> o_m_TightLeptonsPtConeIso40;\
std::vector<double> o_m_TightLeptonsTrackIso40;\
std::vector<double> o_m_TightLeptonsTopoIso40;\
std::vector<double> o_m_MediumLeptonsEtConeIso40;\
std::vector<double> o_m_MediumLeptonsTopoIso40;\
std::vector<double> o_m_MediumLeptonsPtConeIso40;\
std::vector<double> o_m_MediumLeptonsTrackIso40;\
std::vector<double> o_m_GoodPhotonPtConeIso40;\
std::vector<double> o_m_GoodPhotonEtConeIso40;\
std::vector<double> o_m_GoodPhotonTrackIso40;\
std::vector<double> o_m_GoodPhotonTopoIso40;\
std::vector<std::vector<double> > o_m_GoodPhotons_showershape;\
std::vector<std::vector<int> > o_m_GoodPhotons_conversion;\
Int_t              o_m_nJets;\
std::vector<double> o_m_JetE;\
std::vector<double> o_m_JetPt;\
std::vector<double> o_m_JetEta;\
std::vector<double> o_m_JetPhi;\
Float_t o_m_Mll;\
Float_t o_m_Mllg;\
std::vector<double> o_m_Mlg;\
std::vector<double> o_m_Ptlg;\
std::vector<double> o_m_Philg;\
std::vector<double> o_m_Etalg;\
std::vector<double> o_m_dRlg;\
Float_t o_m_Mt;\
Float_t o_m_Mgg;\
Float_t o_m_Mlgg;\
std::vector<double> o_m_weights;\
std::vector<double> o_m_weights_error;
#endif

#if WGZG_TYPE == WGCUTFLOW
#define DECLARE_WG( stringTREENAME )                      \
  {  DeclareVariable( o_m_RunNumber, "RunNumber" );	\
    DeclareVariable( o_m_EventNumber, "EventNumber" );	\
    DeclareVariable( o_m_vxp_n, "vxp_n" );	\
    DeclareVariable( o_m_vxp_nTracks, "vxp_nTracks" );	\
    DeclareVariable( o_m_averageIntPerXing, "averageIntPerXing" );	\
    DeclareVariable( o_m_METx, "METx" );	\
    DeclareVariable( o_m_METy, "METy" );	\
    DeclareVariable( o_m_MET, "MET" );	\
    DeclareVariable( o_m_Mlgg, "Mlgg" );	\
    DeclareVariable( o_m_Mgg, "Mgg" );	\
    DeclareVariable( o_m_Ptlgg, "Ptlgg" );	\
    DeclareVariable( o_m_PtlggMET, "PtlggMET" );	\
    DeclareVariable( o_m_PtlggMETx, "PtlggMETx" );	\
    DeclareVariable( o_m_PtlggMETy, "PtlggMETy" );	\
    DeclareVariable( o_m_Ptgg, "Ptgg" );	\
    DeclareVariable( o_m_Ptlg, "Ptlg" );	\
    DeclareVariable( o_m_Philgg, "Philgg" );	\
    DeclareVariable( o_m_Phigg, "Phigg" );	\
    DeclareVariable( o_m_Philg, "Philg" );	\
    DeclareVariable( o_m_Etalgg, "Etalgg" );	\
    DeclareVariable( o_m_Etagg, "Etagg" );	\
    DeclareVariable( o_m_Etalg, "Etalg" );	\
    DeclareVariable( o_m_dRgg, "dRgg" );	\
    DeclareVariable( o_m_dRlg, "dRlg" );	\
    DeclareVariable( o_m_TightLeptons_Charge,"tightlep_Charge" );	\
    DeclareVariable( o_m_MediumLeptons_Charge,"mediumlep_Charge" );	\
    DeclareVariable( o_m_TightLeptons_E,"tightLep_E" );	\
    DeclareVariable( o_m_MediumLeptons_E,"mediumLep_E" );	\
    DeclareVariable( o_m_GoodPhotons_E,"ph_E" );	\
    DeclareVariable( o_m_TightLeptons_Pt,"tightlep_Pt" );	\
    DeclareVariable( o_m_MediumLeptons_Pt,"mediumlep_Pt" );	\
    DeclareVariable( o_m_GoodPhotons_Pt,"ph_Pt" );	\
    DeclareVariable( o_m_TightLeptons_Phi,"tightlep_Phi" );	\
    DeclareVariable( o_m_MediumLeptons_Phi,"mediumlep_Phi" );	\
    DeclareVariable( o_m_GoodPhotons_Phi,"ph_Phi" );	\
    DeclareVariable( o_m_TightLeptons_Eta,"tightlep_Eta" );	\
    DeclareVariable( o_m_TightLeptonsScale,"tightlep_sf" );	\
    DeclareVariable( o_m_MediumLeptonsScale,"mediumlep_sf" );	\
    DeclareVariable( o_m_MediumLeptons_Eta,"mediumlep_Eta" );	\
    DeclareVariable( o_m_GoodPhotons_Eta,"ph_Eta" );	\
    DeclareVariable( o_m_TightLeptonsEtConeIso20,"tightlep_EtConeIso20" );	\
    DeclareVariable( o_m_TightLeptonsPtConeIso20,"tightlep_PtConeIso20" );	\
    DeclareVariable( o_m_TightLeptonsTrackIso20,"tightlep_TrackIso20" );	\
    DeclareVariable( o_m_TightLeptonsTopoIso20,"tightlep_TopoIso20" );	\
    DeclareVariable( o_m_MediumLeptonsEtConeIso20,"mediumlep_EtConeIso20" );	\
    DeclareVariable( o_m_MediumLeptonsPtConeIso20,"mediumlep_PtConeIso20" );	\
    DeclareVariable( o_m_MediumLeptonsTrackIso20,"mediumlep_TrackIso20" );	\
    DeclareVariable( o_m_MediumLeptonsTopoIso20,"mediumlep_TopoIso20" );	\
    DeclareVariable( o_m_GoodPhotonEtConeIso20,"ph_EtConeIso20" );	\
    DeclareVariable( o_m_GoodPhotonPtConeIso20,"ph_PtConeIso20" );	\
    DeclareVariable( o_m_GoodPhotonTrackIso20,"ph_TrackIso20" );	\
    DeclareVariable( o_m_GoodPhotonTopoIso20,"ph_TopoIso20" );	\
    DeclareVariable( o_m_TightLeptonsEtConeIso30,"tightlep_EtConeIso30" );	\
    DeclareVariable( o_m_TightLeptonsPtConeIso30,"tightlep_PtConeIso30" );	\
    DeclareVariable( o_m_TightLeptonsTrackIso30,"tightlep_TrackIso30" );	\
    DeclareVariable( o_m_TightLeptonsTopoIso30,"tightlep_TopoIso30" );	\
    DeclareVariable( o_m_MediumLeptonsEtConeIso30,"mediumlep_EtConeIso30" );	\
    DeclareVariable( o_m_MediumLeptonsPtConeIso30,"mediumlep_PtConeIso30" );	\
    DeclareVariable( o_m_MediumLeptonsTrackIso30,"mediumlep_TrackIso30" );	\
    DeclareVariable( o_m_MediumLeptonsTopoIso30,"mediumlep_TopoIso30" );	\
    DeclareVariable( o_m_GoodPhotonEtConeIso30,"ph_EtConeIso30" );	\
    DeclareVariable( o_m_GoodPhotonPtConeIso30,"ph_PtConeIso30" );	\
    DeclareVariable( o_m_GoodPhotonTrackIso30,"ph_TrackIso30" );	\
    DeclareVariable( o_m_GoodPhotonTopoIso30,"ph_TopoIso30" );	\
    DeclareVariable( o_m_TightLeptonsEtConeIso40,"tightlep_EtConeIso40" );	\
    DeclareVariable( o_m_TightLeptonsPtConeIso40,"tightlep_PtConeIso40" );	\
    DeclareVariable( o_m_TightLeptonsTrackIso40,"tightlep_TrackIso40" );	\
    DeclareVariable( o_m_TightLeptonsTopoIso40,"tightlep_TopoIso40" );	\
    DeclareVariable( o_m_MediumLeptonsEtConeIso40,"mediumlep_EtConeIso40" );	\
    DeclareVariable( o_m_MediumLeptonsPtConeIso40,"mediumlep_PtConeIso40" );	\
    DeclareVariable( o_m_MediumLeptonsTrackIso40,"mediumlep_TrackIso40" );	\
    DeclareVariable( o_m_MediumLeptonsTopoIso40,"mediumlep_TopoIso40" );	\
    DeclareVariable( o_m_GoodPhotonEtConeIso40,"ph_EtConeIso40" );	\
    DeclareVariable( o_m_GoodPhotonPtConeIso40,"ph_PtConeIso40" );	\
    DeclareVariable( o_m_GoodPhotonTrackIso40,"ph_TrackIso40" );	\
    DeclareVariable( o_m_GoodPhotonTopoIso40,"ph_TopoIso40" );	\
    DeclareVariable( o_m_GoodPhotons_showershape,"ph_showershape" );	\
    DeclareVariable( o_m_GoodPhotons_conversion,"ph_conversion" );	\
    DeclareVariable( o_m_nJets,"nJets" );	\
    DeclareVariable( o_m_JetE,"JetE" );	\
    DeclareVariable( o_m_JetPt,"JetPt" );	\
    DeclareVariable( o_m_JetEta,"JetEta" );	\
    DeclareVariable( o_m_JetPhi,"JetPhi" );	\
    DeclareVariable( o_m_Mll,"Mll" );	\
    DeclareVariable( o_m_Mllg,"Mllg" );	\
    DeclareVariable( o_m_Mlg,"Mlg" );	\
    DeclareVariable( o_m_Mt,"Mt" );	\
    DeclareVariable( o_m_weights, "weights" );	\
    DeclareVariable( o_m_weights_error, "weights_error" );	\
  }
#endif

#if WGZG_TYPE == WGCUTFLOW
#define RESETVAR_WG                      \
  { o_m_METx= -999;\
    o_m_METy = -999;\
    o_m_MET = -999;\
    o_m_Mgg = -999;\
    o_m_Mlgg = -999;\
    o_m_dRgg = -999;\
    o_m_Ptgg = -999;\
    o_m_Ptlgg = -999;\
    o_m_PtlggMET = -999;\
    o_m_PtlggMETx = -999;\
    o_m_PtlggMETy = -999;\
    o_m_Phigg = -999;\
    o_m_Philgg = -999;\
    o_m_Etagg = -999;\
    o_m_Etalgg = -999;\
    o_m_nJets = -999;\
    o_m_Mll = -999;\
    o_m_Mllg = -999;\
    o_m_Mt = -999;\
    o_m_Mlg.clear();\
    o_m_Ptlg.clear();\
    o_m_Philg.clear();\
    o_m_Etalg.clear();\
    o_m_dRlg.clear();\
    o_m_TightLeptons_E.clear();\
    o_m_TightLeptons_Pt.clear();\
    o_m_TightLeptons_Eta.clear();\
    o_m_TightLeptons_Phi.clear();\
    o_m_TightLeptonsScale.clear();\
    o_m_MediumLeptons_E.clear();\
    o_m_MediumLeptons_Pt.clear();\
    o_m_MediumLeptons_Eta.clear();\
    o_m_MediumLeptons_Phi.clear();\
    o_m_MediumLeptonsScale.clear();\
    o_m_TightLeptonsEtConeIso20.clear();\
    o_m_TightLeptonsPtConeIso20.clear();\
    o_m_TightLeptonsTrackIso20.clear();\
    o_m_TightLeptonsTopoIso20.clear();\
    o_m_MediumLeptonsPtConeIso20.clear();\
    o_m_MediumLeptonsEtConeIso20.clear();\
    o_m_MediumLeptonsTrackIso20.clear();\
    o_m_MediumLeptonsTopoIso20.clear();\
    o_m_GoodPhotonEtConeIso20.clear();\
    o_m_GoodPhotonPtConeIso20.clear();\
    o_m_GoodPhotonTrackIso20.clear();\
    o_m_GoodPhotonTopoIso20.clear();\
    o_m_TightLeptonsEtConeIso30.clear();\
    o_m_TightLeptonsPtConeIso30.clear();\
    o_m_TightLeptonsTrackIso30.clear();\
    o_m_TightLeptonsTopoIso30.clear();\
    o_m_MediumLeptonsPtConeIso30.clear();\
    o_m_MediumLeptonsEtConeIso30.clear();\
    o_m_MediumLeptonsTrackIso30.clear();\
    o_m_MediumLeptonsTopoIso30.clear();\
    o_m_GoodPhotonEtConeIso30.clear();\
    o_m_GoodPhotonPtConeIso30.clear();\
    o_m_GoodPhotonTrackIso30.clear();\
    o_m_GoodPhotonTopoIso30.clear();\
    o_m_TightLeptonsEtConeIso40.clear();\
    o_m_TightLeptonsPtConeIso40.clear();\
    o_m_TightLeptonsTrackIso40.clear();\
    o_m_TightLeptonsTopoIso40.clear();\
    o_m_MediumLeptonsPtConeIso40.clear();\
    o_m_MediumLeptonsEtConeIso40.clear();\
    o_m_MediumLeptonsTrackIso40.clear();\
    o_m_MediumLeptonsTopoIso40.clear();\
    o_m_GoodPhotonEtConeIso40.clear();\
    o_m_GoodPhotonPtConeIso40.clear();\
    o_m_GoodPhotonTrackIso40.clear();\
    o_m_GoodPhotonTopoIso40.clear();\
    o_m_GoodPhotons_E.clear();\
    o_m_GoodPhotons_Pt.clear();\
    o_m_GoodPhotons_Phi.clear();\
    o_m_GoodPhotons_Eta.clear();\
    o_m_GoodPhotons_showershape.clear();\
    o_m_JetE.clear();\
    o_m_JetPt.clear();\
    o_m_JetPhi.clear();\
    o_m_JetEta.clear();\
    o_m_weights.clear();\
    o_m_weights_error.clear();\
}
#endif

#if WGZG_TYPE == WGCUTFLOW
#define CONNECT_WG ( stringTREENAME )                      \
  {    ConnectVariable( (stringTREENAME), "RunNumber", m_RunNumber );	\
    ConnectVariable( (stringTREENAME), "EventNumber", m_EventNumber );	\
    ConnectVariable( (stringTREENAME), "vxp_n", m_vxp_n );	\
    ConnectVariable( (stringTREENAME), "vxp_nTracks", m_vxp_nTracks );	\
    ConnectVariable( (stringTREENAME), "averageIntPerXing", m_averageIntPerXing );	\
  }
#endif

#if WGZG_TYPE == WGCUTFLOW
#define COPYVAR_WG                      \
  {o_m_RunNumber = m_RunNumber;\
   o_m_EventNumber = m_EventNumber;\
   o_m_vxp_n = m_vxp_n;\
   o_m_vxp_nTracks = std::vector<int> (*m_vxp_nTracks);\
   o_m_averageIntPerXing = m_averageIntPerXing;\
  }
#endif
//end definitions DEF_FILTER

//end macro definitions
