#undef WGZGHEPHEADER_MEMBERS
#undef DECLARE_WG
#undef COPYVAR_WG
#undef RESETVAR_WG

#define WGCUTFLOW 1
//begin macro definitions

#if WGZG_TYPE == WGCUTFLOW
#define WGZGHEPHEADER_MEMBERS                          \
Float_t o_m_METx;	\
Float_t o_m_METy;\
Float_t o_m_MET;\
Float_t o_m_Mllg;\
Float_t o_m_Mll;\
std::vector<double> o_m_TightLeptons_E;\
std::vector<double> o_m_GoodPhotons_E;\
std::vector<double> o_m_GoodPhotons_Pt;\
std::vector<double> o_m_TightLeptons_Pt;\
std::vector<double> o_m_TightLeptons_Eta;\
std::vector<double> o_m_GoodPhotons_Eta;\
std::vector<double> o_m_TightLeptons_Phi;\
std::vector<double> o_m_GoodPhotons_Phi;\
std::vector<double> o_m_TightLeptons_Charge;\
std::vector<double> o_m_TightLeptonsEtConeIso20;\
std::vector<double> o_m_TightLeptonsPtConeIso20;\
std::vector<double> o_m_TightLeptonsTrackIso20;\
std::vector<double> o_m_TightLeptonsTopoIso20;\
std::vector<double> o_m_TightLeptonsScale;\
std::vector<double> o_m_GoodPhotonPtConeIso20;\
std::vector<double> o_m_GoodPhotonEtConeIso20;\
std::vector<double> o_m_GoodPhotonTrackIso20;\
std::vector<double> o_m_GoodPhotonTopoIso20;\
std::vector<double> o_m_TightLeptonsEtConeIso30;\
std::vector<double> o_m_TightLeptonsPtConeIso30;\
std::vector<double> o_m_TightLeptonsTrackIso30;\
std::vector<double> o_m_TightLeptonsTopoIso30;\
std::vector<double> o_m_GoodPhotonPtConeIso30;\
std::vector<double> o_m_GoodPhotonEtConeIso30;\
std::vector<double> o_m_GoodPhotonTrackIso30;\
std::vector<double> o_m_GoodPhotonTopoIso30;\
std::vector<double> o_m_TightLeptonsEtConeIso40;\
std::vector<double> o_m_TightLeptonsPtConeIso40;\
std::vector<double> o_m_TightLeptonsTrackIso40;\
std::vector<double> o_m_TightLeptonsTopoIso40;\
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
    DeclareVariable( o_m_Mllg, "mllg" );	\
    DeclareVariable( o_m_Mll, "mll" );	\
    DeclareVariable( o_m_TightLeptons_Charge,"lep_Charge" );	\
    DeclareVariable( o_m_TightLeptons_E,"lep_E" );	\
    DeclareVariable( o_m_GoodPhotons_E,"ph_E" );	\
    DeclareVariable( o_m_TightLeptons_Pt,"lep_Pt" );	\
    DeclareVariable( o_m_GoodPhotons_Pt,"ph_Pt" );	\
    DeclareVariable( o_m_TightLeptons_Phi,"lep_Phi" );	\
    DeclareVariable( o_m_GoodPhotons_Phi,"ph_Phi" );	\
    DeclareVariable( o_m_TightLeptons_Eta,"lep_Eta" );	\
    DeclareVariable( o_m_TightLeptonsScale,"lep_sf" );	\
    DeclareVariable( o_m_GoodPhotons_Eta,"ph_Eta" );	\
    DeclareVariable( o_m_TightLeptonsEtConeIso20,"lep_EtConeIso20" );	\
    DeclareVariable( o_m_TightLeptonsPtConeIso20,"lep_PtConeIso20" );	\
    DeclareVariable( o_m_TightLeptonsTrackIso20,"lep_TrackIso20" );	\
    DeclareVariable( o_m_TightLeptonsTopoIso20,"lep_TopoIso20" );	\
    DeclareVariable( o_m_GoodPhotonEtConeIso20,"ph_EtConeIso20" );	\
    DeclareVariable( o_m_GoodPhotonPtConeIso20,"ph_PtConeIso20" );	\
    DeclareVariable( o_m_GoodPhotonTrackIso20,"ph_TrackIso20" );	\
    DeclareVariable( o_m_GoodPhotonTopoIso20,"ph_TopoIso20" );	\
    DeclareVariable( o_m_TightLeptonsEtConeIso30,"lep_EtConeIso30" );	\
    DeclareVariable( o_m_TightLeptonsPtConeIso30,"lep_PtConeIso30" );	\
    DeclareVariable( o_m_TightLeptonsTrackIso30,"lep_TrackIso30" );	\
    DeclareVariable( o_m_TightLeptonsTopoIso30,"lep_TopoIso30" );	\
    DeclareVariable( o_m_GoodPhotonEtConeIso30,"ph_EtConeIso30" );	\
    DeclareVariable( o_m_GoodPhotonPtConeIso30,"ph_PtConeIso30" );	\
    DeclareVariable( o_m_GoodPhotonTrackIso30,"ph_TrackIso30" );	\
    DeclareVariable( o_m_GoodPhotonTopoIso30,"ph_TopoIso30" );	\
    DeclareVariable( o_m_TightLeptonsEtConeIso40,"lep_EtConeIso40" );	\
    DeclareVariable( o_m_TightLeptonsPtConeIso40,"lep_PtConeIso40" );	\
    DeclareVariable( o_m_TightLeptonsTrackIso40,"lep_TrackIso40" );	\
    DeclareVariable( o_m_TightLeptonsTopoIso40,"lep_TopoIso40" );	\
    DeclareVariable( o_m_GoodPhotonEtConeIso40,"ph_EtConeIso40" );	\
    DeclareVariable( o_m_GoodPhotonPtConeIso40,"ph_PtConeIso40" );	\
    DeclareVariable( o_m_GoodPhotonTrackIso40,"ph_TrackIso40" );	\
    DeclareVariable( o_m_GoodPhotonTopoIso40,"ph_TopoIso40" );	\
    DeclareVariable( o_m_GoodPhotons_showershape,"ph_showershape" );	\
    DeclareVariable( o_m_GoodPhotons_conversion,"ph_conversion" );	\
    DeclareVariable( o_m_nJets,"nJets" );	\
    DeclareVariable( o_m_JetE,"jet_E" );	\
    DeclareVariable( o_m_JetPt,"jet_Pt" );	\
    DeclareVariable( o_m_JetEta,"jet_Eta" );	\
    DeclareVariable( o_m_JetPhi,"jet_Phi" );	\
    DeclareVariable( o_m_weights, "weights" );	\
    DeclareVariable( o_m_weights_error, "weights_error" );	\
  }
#endif

#if WGZG_TYPE == WGCUTFLOW
#define RESETVAR_WG                      \
  { o_m_METx= -999;  \
    o_m_METy = -999;  \
    o_m_MET = -999;   \
    o_m_Mllg = -999;  \
    o_m_Mll = -999;  \
    o_m_TightLeptons_E.clear(); \
    o_m_TightLeptons_Pt.clear(); \
    o_m_TightLeptons_Eta.clear();\
    o_m_TightLeptons_Phi.clear();\
    o_m_TightLeptonsScale.clear();\
    o_m_TightLeptonsEtConeIso20.clear();\
    o_m_TightLeptonsPtConeIso20.clear();\
    o_m_TightLeptonsTrackIso20.clear();\
    o_m_TightLeptonsTopoIso20.clear();\
    o_m_GoodPhotonEtConeIso20.clear();\
    o_m_GoodPhotonPtConeIso20.clear();\
    o_m_GoodPhotonTrackIso20.clear();\
    o_m_GoodPhotonTopoIso20.clear();\
    o_m_TightLeptonsEtConeIso30.clear();\
    o_m_TightLeptonsPtConeIso30.clear();\
    o_m_TightLeptonsTrackIso30.clear();\
    o_m_TightLeptonsTopoIso30.clear();\
    o_m_GoodPhotonEtConeIso30.clear();\
    o_m_GoodPhotonPtConeIso30.clear();\
    o_m_GoodPhotonTrackIso30.clear();\
    o_m_GoodPhotonTopoIso30.clear();\
    o_m_TightLeptonsEtConeIso40.clear();\
    o_m_TightLeptonsPtConeIso40.clear();\
    o_m_TightLeptonsTrackIso40.clear();\
    o_m_TightLeptonsTopoIso40.clear();\
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
