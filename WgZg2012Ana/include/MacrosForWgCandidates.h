#undef WGZGHEPHEADER_MEMBERS
#undef DECLARE_WG
#undef COPYVAR_WG
#undef CONNECT_WG
#undef RESETVAR_WG

#define WGCUTFLOW 1
//begin macro definitions

#if WGZG_TYPE == WGCUTFLOW
#define WGZGHEPHEADER_MEMBERS                          \
std::vector<double> o_m_Lepton_E;\
std::vector<double> o_m_Lepton_Pt;\
std::vector<double> o_m_Lepton_Eta;\
std::vector<double> o_m_Lepton_Phi;\
std::vector<double> o_m_LeptonClusterE;\
std::vector<double> o_m_LeptonClusterPt;\
std::vector<double> o_m_LeptonClusterEta;\
std::vector<double> o_m_LeptonClusterPhi;\
std::vector<double> o_m_Lepton_Charge;\
std::vector<double> o_m_LeptonEtConeIso20;\
std::vector<double> o_m_LeptonPtConeIso20;\
std::vector<double> o_m_LeptonTrackIso20;\
std::vector<double> o_m_LeptonTopoIso20;\
std::vector<double> o_m_LeptonEtConeIso30;\
std::vector<double> o_m_LeptonPtConeIso30;\
std::vector<double> o_m_LeptonTrackIso30;\
std::vector<double> o_m_LeptonTopoIso30;\
std::vector<double> o_m_LeptonEtConeIso40;\
std::vector<double> o_m_LeptonPtConeIso40;\
std::vector<double> o_m_LeptonTrackIso40;\
std::vector<double> o_m_LeptonTopoIso40;\
std::vector<double> o_m_LeptonScale;\
std::vector<std::vector<int> > o_m_LeptonObjID;\
std::vector<double> o_m_Photon_E;\
std::vector<double> o_m_Photon_Pt;\
std::vector<double> o_m_Photon_Eta;\
std::vector<double> o_m_Photon_Phi;\
std::vector<double> o_m_PhotonClusterE;\
std::vector<double> o_m_PhotonClusterPt;\
std::vector<double> o_m_PhotonClusterEta;\
std::vector<double> o_m_PhotonClusterPhi;\
std::vector<double> o_m_PhotonPtConeIso20;\
std::vector<double> o_m_PhotonEtConeIso20;\
std::vector<double> o_m_PhotonTrackIso20;\
std::vector<double> o_m_PhotonTopoIso20;\
std::vector<double> o_m_PhotonPtConeIso30;\
std::vector<double> o_m_PhotonEtConeIso30;\
std::vector<double> o_m_PhotonTrackIso30;\
std::vector<double> o_m_PhotonTopoIso30;\
std::vector<double> o_m_PhotonPtConeIso40;\
std::vector<double> o_m_PhotonEtConeIso40;\
std::vector<double> o_m_PhotonTrackIso40;\
std::vector<double> o_m_PhotonTopoIso40;\
std::vector<int> o_m_PhotonPDGID;\
std::vector<int> o_m_PhotonMother;\
std::vector<std::vector<double> > o_m_Photon_showershape;\
std::vector<std::vector<int> > o_m_Photon_conversion;\
std::vector<std::vector<int> > o_m_PhotonObjID;\
std::vector<double> o_m_dR_lep_ph;\
Int_t               o_m_nJets;\
std::vector<double> o_m_JetE;\
std::vector<double> o_m_JetPt;\
std::vector<double> o_m_JetEta;\
std::vector<double> o_m_JetPhi;\
std::vector<bool> o_m_JetIsLooserBadJet;\
std::vector<bool> o_m_JetIsHotTile;\
std::vector<float> o_m_Jet_em_E;\
std::vector<float> o_m_Jet_em_Pt;\
std::vector<float> o_m_Jet_em_Eta;\
std::vector<float> o_m_Jet_em_Phi;\
std::vector<double> o_m_dR_lep_jet;\
std::vector<double> o_m_dR_ph_jet;\
std::vector<std::vector<int> > o_m_JetObjID;\
Double_t o_m_METx;	\
Double_t o_m_METy;\
Double_t o_m_MET;\
Double_t o_m_Mt;\
Double_t o_m_Mlg;\
Double_t o_m_Ptlg;\
Double_t o_m_Etalg;\
Double_t o_m_Philg;\
Double_t o_m_dRlg;\
Double_t o_m_Mjj;\
Double_t o_m_Ptjj;\
Double_t o_m_dRjj;\
Double_t o_m_dYjj;\
std::vector<int> o_m_BjetVeto;\
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
    DeclareVariable( o_m_Lepton_Charge,"lep_Charge" );	\
    DeclareVariable( o_m_Lepton_E,"lep_E" );	\
    DeclareVariable( o_m_Lepton_Pt,"lep_Pt" );	\
    DeclareVariable( o_m_Lepton_Phi,"lep_Phi" );	\
    DeclareVariable( o_m_Lepton_Eta,"lep_Eta" );	\
    DeclareVariable( o_m_LeptonClusterE,"lep_cl_E" );	\
    DeclareVariable( o_m_LeptonClusterPt,"lep_cl_Pt" );	\
    DeclareVariable( o_m_LeptonClusterPhi,"lep_cl_Phi" );	\
    DeclareVariable( o_m_LeptonClusterEta,"lep_cl_Eta" );	\
    DeclareVariable( o_m_LeptonScale,"lep_sf" );	\
    DeclareVariable( o_m_LeptonObjID,"lep_ObjID" );	\
    DeclareVariable( o_m_LeptonEtConeIso20,"lep_EtConeIso20" );	\
    DeclareVariable( o_m_LeptonPtConeIso20,"lep_PtConeIso20" );	\
    DeclareVariable( o_m_LeptonTrackIso20,"lep_TrackIso20" );	\
    DeclareVariable( o_m_LeptonTopoIso20,"lep_TopoIso20" );	\
    DeclareVariable( o_m_LeptonEtConeIso30,"lep_EtConeIso30" );	\
    DeclareVariable( o_m_LeptonPtConeIso30,"lep_PtConeIso30" );	\
    DeclareVariable( o_m_LeptonTrackIso30,"lep_TrackIso30" );	\
    DeclareVariable( o_m_LeptonTopoIso30,"lep_TopoIso30" );	\
    DeclareVariable( o_m_LeptonEtConeIso40,"lep_EtConeIso40" );	\
    DeclareVariable( o_m_LeptonPtConeIso40,"lep_PtConeIso40" );	\
    DeclareVariable( o_m_LeptonTrackIso40,"lep_TrackIso40" );	\
    DeclareVariable( o_m_LeptonTopoIso40,"lep_TopoIso40" );	\
    DeclareVariable( o_m_Photon_E,"ph_E" );	\
    DeclareVariable( o_m_Photon_Pt,"ph_Pt" );	\
    DeclareVariable( o_m_Photon_Phi,"ph_Phi" );	\
    DeclareVariable( o_m_Photon_Eta,"ph_Eta" );	\
    DeclareVariable( o_m_PhotonClusterE,"ph_cl_E" );	\
    DeclareVariable( o_m_PhotonClusterPt,"ph_cl_Pt" );	\
    DeclareVariable( o_m_PhotonClusterPhi,"ph_cl_Phi" );	\
    DeclareVariable( o_m_PhotonClusterEta,"ph_cl_Eta" );	\
    DeclareVariable( o_m_PhotonEtConeIso20,"ph_EtConeIso20" );	\
    DeclareVariable( o_m_PhotonPtConeIso20,"ph_PtConeIso20" );	\
    DeclareVariable( o_m_PhotonTrackIso20,"ph_TrackIso20" );	\
    DeclareVariable( o_m_PhotonTopoIso20,"ph_TopoIso20" );	\
    DeclareVariable( o_m_PhotonEtConeIso30,"ph_EtConeIso30" );	\
    DeclareVariable( o_m_PhotonPtConeIso30,"ph_PtConeIso30" );	\
    DeclareVariable( o_m_PhotonTrackIso30,"ph_TrackIso30" );	\
    DeclareVariable( o_m_PhotonTopoIso30,"ph_TopoIso30" );	\
    DeclareVariable( o_m_PhotonEtConeIso40,"ph_EtConeIso40" );	\
    DeclareVariable( o_m_PhotonPtConeIso40,"ph_PtConeIso40" );	\
    DeclareVariable( o_m_PhotonTrackIso40,"ph_TrackIso40" );	\
    DeclareVariable( o_m_PhotonTopoIso40,"ph_TopoIso40" );	\
    DeclareVariable( o_m_dR_lep_ph,"dR_lep_ph" );	\
    DeclareVariable( o_m_dR_lep_jet,"dR_lep_jet" );	\
    DeclareVariable( o_m_dR_ph_jet,"dR_ph_jet" );	\
    DeclareVariable( o_m_PhotonObjID,"ph_ObjID" );	\
    DeclareVariable( o_m_Photon_showershape,"ph_showershape" );	\
    DeclareVariable( o_m_Photon_conversion,"ph_conversion" );	\
    DeclareVariable( o_m_PhotonPDGID,"ph_pdgId" );	\
    DeclareVariable( o_m_PhotonMother,"ph_mother" );	\
    DeclareVariable( o_m_nJets,"njets" );	\
    DeclareVariable( o_m_JetE,"jet_E" );	\
    DeclareVariable( o_m_JetPt,"jet_Pt" );	\
    DeclareVariable( o_m_JetEta,"jet_Eta" );	\
    DeclareVariable( o_m_JetPhi,"jet_Phi" );	\
    DeclareVariable( o_m_Jet_em_E,"Jet_em_E" );	\
    DeclareVariable( o_m_Jet_em_Pt,"Jet_em_Pt" );	\
    DeclareVariable( o_m_Jet_em_Eta,"Jet_em_Eta" );	\
    DeclareVariable( o_m_Jet_em_Phi,"Jet_em_Phi" );	\
    DeclareVariable( o_m_JetObjID,"jet_ObjID" );	\
    DeclareVariable( o_m_JetIsLooserBadJet,"jet_IsLooseBadJet" );	\
    DeclareVariable( o_m_JetIsHotTile,"jet_IsHotTile" );	\
    DeclareVariable( o_m_METx, "METx" );	\
    DeclareVariable( o_m_METy, "METy" );	\
    DeclareVariable( o_m_MET, "MET" );	\
    DeclareVariable( o_m_Mt,"Mt" );	\
    DeclareVariable( o_m_Mlg, "Mlg" );	\
    DeclareVariable( o_m_Ptlg, "Ptlg" );	\
    DeclareVariable( o_m_Etalg, "Etalg" );	\
    DeclareVariable( o_m_Philg, "Philg" );	\
    DeclareVariable( o_m_dRlg, "dRlg" );	\
    DeclareVariable( o_m_Mjj, "Mjj" );	\
    DeclareVariable( o_m_Ptjj, "Ptjj" );	\
    DeclareVariable( o_m_dRjj, "dRjj" );	\
    DeclareVariable( o_m_dYjj, "dYjj" );	\
    DeclareVariable( o_m_BjetVeto, "bvetos" );	\
    DeclareVariable( o_m_weights, "weights" );	\
    DeclareVariable( o_m_weights_error, "weights_error" );	\
  }
#endif

#if WGZG_TYPE == WGCUTFLOW
#define RESETVAR_WG                      \
  { o_m_METx= -999;\
    o_m_METy = -999;\
    o_m_MET = -999;\
    o_m_Mt = -999;\
    o_m_Mlg = -999;\
    o_m_Ptlg = -999;\
    o_m_Etalg  = -999;\
    o_m_Philg = -999;\
    o_m_dRlg = -999;\
    o_m_Mjj = -999;\
    o_m_nJets = -999;\
    o_m_Ptjj = -999;\
    o_m_dRjj = -999;\
    o_m_dYjj = -999;\
    o_m_Lepton_E.clear();\
    o_m_LeptonObjID.clear();\
    o_m_PhotonObjID.clear();\
    o_m_JetObjID.clear();\
    o_m_Lepton_E.clear();\
    o_m_Lepton_Pt.clear();\
    o_m_Lepton_Eta.clear();\
    o_m_Lepton_Phi.clear();\
    o_m_LeptonClusterE.clear();\
    o_m_LeptonClusterPt.clear();\
    o_m_LeptonClusterEta.clear();\
    o_m_LeptonClusterPhi.clear();\
    o_m_LeptonScale.clear();\
    o_m_LeptonEtConeIso20.clear();\
    o_m_LeptonPtConeIso20.clear();\
    o_m_LeptonTrackIso20.clear();\
    o_m_LeptonTopoIso20.clear();\
    o_m_PhotonEtConeIso20.clear();\
    o_m_PhotonPtConeIso20.clear();\
    o_m_PhotonTrackIso20.clear();\
    o_m_PhotonTopoIso20.clear();\
    o_m_LeptonEtConeIso30.clear();\
    o_m_LeptonPtConeIso30.clear();\
    o_m_LeptonTrackIso30.clear();\
    o_m_LeptonTopoIso30.clear();\
    o_m_PhotonEtConeIso30.clear();\
    o_m_PhotonPtConeIso30.clear();\
    o_m_PhotonTrackIso30.clear();\
    o_m_PhotonTopoIso30.clear();\
    o_m_LeptonEtConeIso40.clear();\
    o_m_LeptonPtConeIso40.clear();\
    o_m_LeptonTrackIso40.clear();\
    o_m_LeptonTopoIso40.clear();\
    o_m_PhotonEtConeIso40.clear();\
    o_m_PhotonPtConeIso40.clear();\
    o_m_PhotonTrackIso40.clear();\
    o_m_PhotonTopoIso40.clear();\
    o_m_dR_lep_ph.clear();\
    o_m_dR_lep_jet.clear();\
    o_m_dR_ph_jet.clear();\
    o_m_Photon_E.clear();\
    o_m_Photon_Pt.clear();\
    o_m_Photon_Phi.clear();\
    o_m_Photon_Eta.clear();\
    o_m_PhotonClusterE.clear();\
    o_m_PhotonClusterPt.clear();\
    o_m_PhotonClusterEta.clear();\
    o_m_PhotonClusterPhi.clear();\
    o_m_Photon_showershape.clear();\
    o_m_PhotonPDGID.clear();\
    o_m_PhotonMother.clear();\
    o_m_JetE.clear();\
    o_m_JetPt.clear();\
    o_m_JetPhi.clear();\
    o_m_JetEta.clear();\
    o_m_JetIsLooserBadJet.clear();\
    o_m_JetIsHotTile.clear();\
    o_m_Jet_em_E.clear();\
    o_m_Jet_em_Pt.clear();\
    o_m_Jet_em_Phi.clear();\
    o_m_Jet_em_Eta.clear();\
    o_m_BjetVeto.clear();\
    o_m_weights.clear();\
    o_m_weights_error.clear();\
}
#endif

#if WGZG_TYPE == WGCUTFLOW
#define CONNECT_WG ( stringTREENAME )                      \
  {    ConnectVariable( (stringTREENAME), "RunNumber", m_RunNumber );	\
    ConnectVariable( (stringTREENAME), "EventNumber", m_EventNumber );	\
    ConnectVariable( (stringTREENAME), "averageIntPerXing", m_averageIntPerXing );	\
  }
#endif

#if WGZG_TYPE == WGCUTFLOW
#define COPYVAR_WG                      \
  {o_m_RunNumber = m_RunNumber;\
   o_m_EventNumber = m_EventNumber;\
   o_m_averageIntPerXing = m_averageIntPerXing;\
  }
#endif
//end definitions DEF_FILTER
//end macro definitions
