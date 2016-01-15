////bin/dukhep_create_filter.py Macro.dat
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
m_lbn(0),	\
m_bcid(0),	\
m_vxp_n(0),	\
m_vxp_nTracks(0),\
m_MET_RefFinal_etx_ForwardReg(0),	\
m_MET_RefFinal_etx_EndCapReg(0),	\
m_MET_RefFinal_etx_CentralReg(0),	\
m_MET_RefFinal_ety_ForwardReg(0),	\
m_MET_RefFinal_ety_EndCapReg(0),	\
m_MET_RefFinal_ety_CentralReg(0)
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define DUKEHEPHEADER_MEMBERS                          \
UInt_t m_RunNumber;	\
UInt_t o_m_RunNumber;	\
UInt_t m_EventNumber;	\
UInt_t o_m_EventNumber;	\
UInt_t m_lbn;	\
UInt_t m_bcid;	\
Int_t m_vxp_n;	\
Int_t o_m_vxp_n;	\
std::vector<int>* m_vxp_nTracks;\
std::vector<int>* o_m_vxp_nTracks;\
Float_t m_MET_RefFinal_etx_ForwardReg;	\
Float_t o_m_MET_RefFinal_etx_ForwardReg;	\
Float_t m_MET_RefFinal_etx_EndCapReg;	\
Float_t o_m_MET_RefFinal_etx_EndCapReg;	\
Float_t m_MET_RefFinal_etx_CentralReg;	\
Float_t o_m_MET_RefFinal_etx_CentralReg;	\
Float_t m_MET_RefFinal_ety_ForwardReg;	\
Float_t o_m_MET_RefFinal_ety_ForwardReg;	\
Float_t m_MET_RefFinal_ety_EndCapReg;	\
Float_t o_m_MET_RefFinal_ety_EndCapReg;	\
Float_t m_MET_RefFinal_ety_CentralReg;	\
Float_t o_m_MET_RefFinal_ety_CentralReg;
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define CONNECT( stringTREENAME )                      \
  {    ConnectVariable( (stringTREENAME), "RunNumber", m_RunNumber );	\
    ConnectVariable( (stringTREENAME), "EventNumber", m_EventNumber );	\
    ConnectVariable( (stringTREENAME), "lbn", m_lbn );	\
    ConnectVariable( (stringTREENAME), "bcid", m_bcid );	\
    ConnectVariable( (stringTREENAME), "vxp_n", m_vxp_n );	\
    ConnectVariable( (stringTREENAME), "vxp_nTracks", m_vxp_nTracks );	\
    ConnectVariable( (stringTREENAME), "MET_RefFinal_etx_ForwardReg", m_MET_RefFinal_etx_ForwardReg );	\
    ConnectVariable( (stringTREENAME), "MET_RefFinal_etx_EndCapReg", m_MET_RefFinal_etx_EndCapReg );	\
    ConnectVariable( (stringTREENAME), "MET_RefFinal_etx_CentralReg", m_MET_RefFinal_etx_CentralReg );	\
    ConnectVariable( (stringTREENAME), "MET_RefFinal_ety_ForwardReg", m_MET_RefFinal_ety_ForwardReg );	\
    ConnectVariable( (stringTREENAME), "MET_RefFinal_ety_EndCapReg", m_MET_RefFinal_ety_EndCapReg );	\
    ConnectVariable( (stringTREENAME), "MET_RefFinal_ety_CentralReg", m_MET_RefFinal_ety_CentralReg );	\
  }
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define DECLARE( stringTREENAME )                      \
  {  
    DeclareVariable( o_m_RunNumber, "RunNumber" );	\
    DeclareVariable( o_m_EventNumber, "EventNumber" );	\
    DeclareVariable( o_m_vxp_n, "vxp_n" );	\
    DeclareVariable( o_m_vxp_nTracks, "vxp_nTracks" );	\
    DeclareVariable( o_m_MET_RefFinal_etx_ForwardReg, "MET_RefFinal_etx_ForwardReg" );	\
    DeclareVariable( o_m_MET_RefFinal_etx_EndCapReg, "MET_RefFinal_etx_EndCapReg" );	\
    DeclareVariable( o_m_MET_RefFinal_etx_CentralReg, "MET_RefFinal_etx_CentralReg" );	\
    DeclareVariable( o_m_MET_RefFinal_ety_ForwardReg, "MET_RefFinal_ety_ForwardReg" );	\
    DeclareVariable( o_m_MET_RefFinal_ety_EndCapReg, "MET_RefFinal_ety_EndCapReg" );	\
    DeclareVariable( o_m_MET_RefFinal_ety_CentralReg, "MET_RefFinal_ety_CentralReg" );	\
  }
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define RESETVAR                      \
  { 
    o_m_RunNumber = -999;\
    o_m_EventNumber = -999;\
    o_m_vxp_n = -999;\
    o_m_vxp_nTracks = -999;\ 
    o_m_MET_RefFinal_etx_ForwardReg = -999;\
    o_m_MET_RefFinal_etx_EndCapReg = -999;\
    o_m_MET_RefFinal_etx_CentralReg = -999;\
    o_m_MET_RefFinal_ety_ForwardReg = -999;\
    o_m_MET_RefFinal_ety_EndCapReg = -999;\
    o_m_MET_RefFinal_ety_CentralReg = -999;\
  }
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define COPYVAR                      \
  {  
   o_m_RunNumber = m_RunNumber;\
   o_m_EventNumber = m_EventNumber;\
   o_m_vxp_n = m_vxp_n;\
   o_m_vxp_nTracks = m_vxp_nTracks;\ 
   o_m_MET_RefFinal_etx_ForwardReg = m_MET_RefFinal_etx_ForwardReg;\
   o_m_MET_RefFinal_etx_EndCapReg = m_MET_RefFinal_etx_EndCapReg;\
   o_m_MET_RefFinal_etx_CentralReg = m_MET_RefFinal_etx_CentralReg;\
   o_m_MET_RefFinal_ety_ForwardReg = m_MET_RefFinal_ety_ForwardReg;\
   o_m_MET_RefFinal_ety_EndCapReg = m_MET_RefFinal_ety_EndCapReg;\
   o_m_MET_RefFinal_ety_CentralReg = m_MET_RefFinal_ety_CentralReg;\
  }
#endif

//end definitions DEF_FILTER

//end macro definitions
