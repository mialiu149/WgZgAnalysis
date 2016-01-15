////bin/dukhep_create_reader.py -n JetReader ../Macros/JetMacros.dat
#include "include/JetReader.h"
JetReader::JetReader(SCycleBaseNTuple * ownr, const char* collname): owner(ownr), cname(collname),
m_JetPt(0),
m_JetEta(0),
m_JetPhi(0),
m_JetE(0),
m_JetPtEM(0),
m_JetEtaEM(0),
m_JetPhiEM(0),
m_JetEEM(0),
m_JetPt_d3pd(0),
m_JetEta_d3pd(0),
m_JetPhi_d3pd(0),
m_JetE_d3pd(0),
m_JetM(0),
m_JetsumPtTrk(0),
m_JetLArQuality(0),
m_JetNegativeE(0),
m_Jetemfrac(0),
m_Jethecf(0),
m_JetTiming(0),
m_JetfracSamplingMax(0),
m_JetSamplingMax(0),
m_JetHECQuality(0),
m_JetAverageLArQF(0),
m_JetAx(0),
m_JetAy(0),
m_JetAz(0),
m_JetAe(0),
m_JetMET_wpx(0),
m_JetMET_wpy(0),
m_JetMET_wet(0),
m_JetMET_statusWord(0),
m_Rho(0),
m_JetWeightSV0(0),
m_JetIsBad(0),
m_JetjvtxfFull(0),
m_Jetjvtxf(0),
m_JetBCH_CORR_JET(0),
m_JetBCH_CORR_CELL(0)
{std::cout << "JetReader: Collection name is " << cname << std::endl; }

std::string JetReader::VarName(const char * s){
  std::string tmp(s); 
  if (tmp.find("jet_")==0) {
    std::string tmp1(s);
    tmp1 = tmp.replace(0,3,cname);
    return std::string(tmp1); 
  }
  return std::string(s);
};    

void JetReader::ConnectVariables(std::string treename){
  owner->ConnectVariable( treename.c_str(), VarName("jet_constscale_pt").c_str(), m_JetPt );
  owner->ConnectVariable( treename.c_str(), VarName("jet_constscale_eta").c_str(), m_JetEta );
  owner->ConnectVariable( treename.c_str(), VarName("jet_constscale_phi").c_str(), m_JetPhi );
  owner->ConnectVariable( treename.c_str(), VarName("jet_constscale_E").c_str(), m_JetE );
  owner->ConnectVariable( treename.c_str(), VarName("jet_emscale_pt").c_str(), m_JetPtEM );
  owner->ConnectVariable( treename.c_str(), VarName("jet_emscale_eta").c_str(), m_JetEtaEM );
  owner->ConnectVariable( treename.c_str(), VarName("jet_emscale_phi").c_str(), m_JetPhiEM );
  owner->ConnectVariable( treename.c_str(), VarName("jet_emscale_E").c_str(), m_JetEEM );
  owner->ConnectVariable( treename.c_str(), VarName("jet_constscale_m").c_str(), m_JetM );
  owner->ConnectVariable( treename.c_str(), VarName("jet_eta").c_str(), m_JetEta_d3pd );
  owner->ConnectVariable( treename.c_str(), VarName("jet_phi").c_str(), m_JetPhi_d3pd );
  owner->ConnectVariable( treename.c_str(), VarName("jet_E").c_str(), m_JetE_d3pd );
  owner->ConnectVariable( treename.c_str(), VarName("jet_pt").c_str(), m_JetPt_d3pd );
  owner->ConnectVariable( treename.c_str(), VarName("jet_ActiveAreaPx").c_str(), m_JetAx );
  owner->ConnectVariable( treename.c_str(), VarName("jet_ActiveAreaPy").c_str(), m_JetAy );
  owner->ConnectVariable( treename.c_str(), VarName("jet_ActiveAreaPz").c_str(), m_JetAz );
  owner->ConnectVariable( treename.c_str(), VarName("jet_ActiveAreaE").c_str(), m_JetAe );
  owner->ConnectVariable( treename.c_str(), VarName("Eventshape_rhoKt4LC").c_str(), m_Rho );
  owner->ConnectVariable( treename.c_str(), VarName("jet_sumPtTrk_pv0_500MeV").c_str(), m_JetsumPtTrk );
  owner->ConnectVariable( treename.c_str(), VarName("jet_LArQuality").c_str(), m_JetLArQuality );
  owner->ConnectVariable( treename.c_str(), VarName("jet_NegativeE").c_str(), m_JetNegativeE );
  owner->ConnectVariable( treename.c_str(), VarName("jet_emfrac").c_str(), m_Jetemfrac );
  owner->ConnectVariable( treename.c_str(), VarName("jet_hecf").c_str(), m_Jethecf );
  owner->ConnectVariable( treename.c_str(), VarName("jet_Timing").c_str(), m_JetTiming );
  owner->ConnectVariable( treename.c_str(), VarName("jet_MET_wpx").c_str(), m_JetMET_wpx );
  owner->ConnectVariable( treename.c_str(), VarName("jet_MET_wpy").c_str(), m_JetMET_wpy );
  owner->ConnectVariable( treename.c_str(), VarName("jet_MET_wet").c_str(), m_JetMET_wet );
  owner->ConnectVariable( treename.c_str(), VarName("jet_MET_statusWord").c_str(), m_JetMET_statusWord );
  owner->ConnectVariable( treename.c_str(), VarName("jet_fracSamplingMax").c_str(), m_JetfracSamplingMax );
  owner->ConnectVariable( treename.c_str(), VarName("jet_SamplingMax").c_str(), m_JetSamplingMax );
  owner->ConnectVariable( treename.c_str(), VarName("jet_AverageLArQF").c_str(), m_JetAverageLArQF );
  owner->ConnectVariable( treename.c_str(), VarName("jet_HECQuality").c_str(), m_JetHECQuality );
  owner->ConnectVariable( treename.c_str(), VarName("jet_jvtxfFull").c_str(), m_JetjvtxfFull );
  owner->ConnectVariable( treename.c_str(), VarName("jet_jvtxf").c_str(), m_Jetjvtxf );
//owner->ConnectVariable( treename.c_str(), VarName("jet_flavor_weight_SV0").c_str(), m_JetWeightSV0 );
  //owner->ConnectVariable( treename.c_str(), VarName("jet_isUgly").c_str(), m_JetIsUgly );
 owner->ConnectVariable( treename.c_str(), VarName("jet_isBadLoose").c_str(), m_JetIsBad );
  owner->ConnectVariable( treename.c_str(), VarName("jet_BCH_CORR_JET").c_str(), m_JetBCH_CORR_JET );
  owner->ConnectVariable( treename.c_str(), VarName("jet_BCH_CORR_CELL").c_str(), m_JetBCH_CORR_CELL);

}
void JetReader::DeclareVariables(){
  /*owner->DeclareVariable( o_m_JetPt, "jet_pt" );
  owner->DeclareVariable( o_m_JetEta, "jet_eta" );
  owner->DeclareVariable( o_m_JetPhi, "jet_phi" );
  owner->DeclareVariable( o_m_JetE, "jet_E" );
*/
}
void JetReader::Reset(){
/* 
o_m_JetPt.clear();
 o_m_JetEta.clear();
 o_m_JetPhi.clear();
 o_m_JetE.clear();
*/  
}
void JetReader::CopyToOutput(){
/* o_m_JetPt = std::vector<float>(*m_JetPt);
 o_m_JetEta = std::vector<float>(*m_JetEta);
 o_m_JetPhi = std::vector<float>(*m_JetPhi);
 o_m_JetE = std::vector<float>(*m_JetE);
*/
}

void JetReader::InitCalibTool(JetAnalysisCalib::JetCalibrationTool *jes)
{
  myJES = jes;
}
//I believe this is the validated way to correct a jet
TLorentzVector JetReader::CorrectedJet(int jeti, bool mc, float npv,float mu){
	SetMC(mc);
	return CorrectedJet(jeti,npv,mu);
}

TLorentzVector JetReader::CorrectedJet(int jeti, float npv,float mu)
{
       double Eraw    = m_JetE->at(jeti);
       double pt      = m_JetPt->at(jeti);
       double eta     = m_JetEta->at(jeti);
       double phi     = m_JetPhi->at(jeti);
       double m       = m_JetM->at(jeti);
       double Ax      = m_JetAx->at(jeti);
       double Ay      = m_JetAy->at(jeti);
       double Az      = m_JetAz->at(jeti);
       double Ae      = m_JetAe->at(jeti);
       double rho     = m_Rho;
       TLorentzVector jet;
       //myJES->SetSeed(EventNumber +100*jeti);
       jet = myJES->ApplyJetAreaOffsetEtaJES(Eraw,eta,phi,m,Ax,Ay,Az,Ae,rho,mu,npv);
     //jet.SetPtEtaPhiE(pt,eta,phi,Eraw);
       return jet; 
}

std::vector<int> JetReader::JetObjID(int jeti,bool mc, float npv,float mu)
{
   std::vector<int> JetObjID;
   TLorentzVector jet = CorrectedJet(jeti,npv,mu);

   double jetE=jet.E();
   double jetPt=jet.Pt();
   double jetPhi=jet.Phi();
   double jetEta=fabs(m_JetEta->at(jeti));

   if(jetPt<30000) JetObjID.push_back(0);else JetObjID.push_back(1);
   if(jetEta>4.5) JetObjID.push_back(0);else JetObjID.push_back(1);
   if(!(fabs(m_Jetjvtxf->at(jeti))>0.5||jetEta>2.4||jetPt>50000)) JetObjID.push_back(0); else JetObjID.push_back(1);
   //if(IsLooserBadJet(m_JetPt->at(jeti),m_JetEta->at(jeti),jeti)) JetObjID.push_back(0); else JetObjID.push_back(1);
   if(IsLooserBadJet(jetPt,jetEta,jeti)) JetObjID.push_back(0); else JetObjID.push_back(1);
 
   return JetObjID;
}

bool JetReader::IsSelectedJet(int jeti,bool mc, float npv,float mu,std::vector<int> &Jetcounter)
{
   TLorentzVector jet = CorrectedJet(jeti,npv,mu);
   double jetE=jet.E();
   double jetPt=jet.Pt();
   double jetPhi=jet.Phi();
   double jetEta=fabs(m_JetEta->at(jeti));
   //double jetEta=fabs(jet.Eta());
   Jetcounter.at(0)++;
   if(jetPt<30000) return false;
   Jetcounter.at(1)++;
   if(jetEta>4.5) return false;
   bool passJVF = false;
   Jetcounter.at(2)++;
   if(fabs(m_Jetjvtxf->at(jeti))>0.5||jetEta>2.4||jetPt>50000) passJVF=true;
   if (!passJVF) return false;
   Jetcounter.at(3)++;
   return true;
}

bool JetReader::IsLooserBadJet(float pt, float  eta,
         int i){
	
float sumPtTrk;
sumPtTrk = m_JetsumPtTrk->at(i);
float LArQuality = m_JetLArQuality->at(i);
float NegativeE = m_JetNegativeE->at(i);
float emfrac = m_Jetemfrac->at(i);
		float hecf = m_Jethecf->at(i);
		float Timing = m_JetTiming->at(i);
		float fracSamplingMax = m_JetfracSamplingMax->at(i);
		float HECQuality = m_JetHECQuality->at(i);
		float AverageLArQF = m_JetAverageLArQF->at(i);
		
/*
All the unit should be MeV.
The pT should be container variables without smearing
*/
float chf      = pt != 0 ? sumPtTrk/pt : 0 ;
float LArQmean = AverageLArQF / 65535. ;
// HEC spike
if( hecf>0.5 && fabs(HECQuality)>0.5 && LArQmean>0.8)           return true;
if( fabs(NegativeE)>60000./*MeV*/)                              return true;
// EM coherent noise
if( emfrac>0.95 && fabs(LArQuality)>0.8 && LArQmean>0.8 && fabs(eta)<2.8 )   return true;
// Cosmics and Beam background
if( emfrac<0.05 && chf<0.05 && fabs(eta)<2. )             return true;
if( emfrac<0.05 && fabs(eta)>2. )                         return true;
if( fracSamplingMax>0.99&&fabs(eta)<2)                    return true;
//return false;
return false;
}

//hot tile
//---------isHotTile-----------
bool JetReader::isHotTile(int RunNumber,int il)
{
  float j_fmax = m_JetfracSamplingMax->at(il);
  float j_smax = m_JetSamplingMax->at(il);
  float jeteta = m_JetEta->at(il);
  float jetphi = m_JetPhi->at(il);

  if (isData){
    if (RunNumber == 202660 || 
    RunNumber == 202668 || 
    RunNumber == 202712 || 
    RunNumber == 202740 || 
    RunNumber == 202965 || 
    RunNumber == 202987 || 
    RunNumber == 202991 || 
    RunNumber == 203027){
      bool _etaphi28=false; 
      if(jeteta>-0.2 && jeteta<-0.1 && jetphi>2.65 && jetphi< 2.75 ) _etaphi28=true; 
      if (j_fmax>0.6 && j_smax==13 && _etaphi28)
    return true;
    }
  }
  return false;
} 
