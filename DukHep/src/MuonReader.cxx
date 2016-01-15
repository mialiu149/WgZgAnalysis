#include "include/MuonReader.h"
#include "include/DukHepFilter.h"
#include <iostream>

MuonReader::MuonReader(SCycleBaseNTuple * ownr, const char * collname): owner(ownr), cname(collname),
mcp_smear(0),
m_MCPsf(0),
m_MuonAuthor(0),
m_MuonEta(0),
m_MuonIsoPtCone(0),
m_MuonIsoEtCone(0),
m_MuonTight(0),
m_MuonE(0),
m_MuonPt(0),
m_MuonPhi(0),
m_MuonExpectBLayerHit(0),
m_MuonBLayerHits(0),
m_MuonNumPixelHits(0),
m_MuonNumPixelDeadSensors(0),
m_MuonNumSCTHits(0),
m_MuonNumSCTDeadSensors(0),
m_MuonNumPixHoles(0),
m_MuonNumSCTHoles(0),
m_MuonNumTRTHits(0),
m_MuonNumTRTOutliers(0),
//m_MuoncaloMuonIdTag(0),
//m_MuoncaloLRLikelihood(0),
m_NumMuons(0),
m_MuonZ0(0),
m_MuonTrackTheta(0),
m_MuonD0(0),
m_MuonisCombinedMuon(0), 
m_MuonCovD0(0),
m_MuonM(0),
m_MuonCharge(0),
m_MuonAllAuthor(0),
m_MuonSigD0unbiased(0),
m_MuonD0unbiased(0),
m_MuonZ0unbiased(0),
m_MuonMeQoverp(0),
m_MuonMeTheta(0),
m_MuonIdQoverp(0),
m_MuonIdTheta(0),
m_MuonIdPhi(0)
{std::cout << "MuonReader: Collection name is " << cname << std::endl;}

void MuonReader::ConnectVariables(std::string treename){
  owner->ConnectVariable( treename.c_str(), VarName("mu_author").c_str(), m_MuonAuthor );
  owner->ConnectVariable( treename.c_str(), VarName("mu_eta").c_str(), m_MuonEta );
  owner->ConnectVariable( treename.c_str(), VarName("mu_ptcone20").c_str(), m_MuonIsoPtCone );
  owner->ConnectVariable( treename.c_str(), VarName("mu_etcone20").c_str(), m_MuonIsoEtCone );
  owner->ConnectVariable( treename.c_str(), VarName("mu_E").c_str(), m_MuonE );
  owner->ConnectVariable( treename.c_str(), VarName("mu_tight").c_str(), m_MuonTight );
  owner->ConnectVariable( treename.c_str(), VarName("mu_pt").c_str(), m_MuonPt );
  owner->ConnectVariable( treename.c_str(), VarName("mu_phi").c_str(), m_MuonPhi );
  owner->ConnectVariable( treename.c_str(), VarName("mu_expectBLayerHit").c_str(), m_MuonExpectBLayerHit );
  owner->ConnectVariable( treename.c_str(), VarName("mu_nBLHits").c_str(), m_MuonBLayerHits );
  owner->ConnectVariable( treename.c_str(), VarName("mu_nPixHits").c_str(), m_MuonNumPixelHits );
  owner->ConnectVariable( treename.c_str(), VarName("mu_nPixelDeadSensors").c_str(), m_MuonNumPixelDeadSensors );
  owner->ConnectVariable( treename.c_str(), VarName("mu_nSCTHits").c_str(), m_MuonNumSCTHits );
  owner->ConnectVariable( treename.c_str(), VarName("mu_nSCTDeadSensors").c_str(), m_MuonNumSCTDeadSensors );
  owner->ConnectVariable( treename.c_str(), VarName("mu_nPixHoles").c_str(), m_MuonNumPixHoles );
  owner->ConnectVariable( treename.c_str(), VarName("mu_nSCTHoles").c_str(), m_MuonNumSCTHoles );
  owner->ConnectVariable( treename.c_str(), VarName("mu_nTRTHits").c_str(), m_MuonNumTRTHits );
  owner->ConnectVariable( treename.c_str(), VarName("mu_nTRTOutliers").c_str(), m_MuonNumTRTOutliers );
  owner->ConnectVariable( treename.c_str(), VarName("mu_caloMuonIdTag").c_str(), m_MuoncaloMuonIdTag );
  owner->ConnectVariable( treename.c_str(), VarName("mu_caloLRLikelihood").c_str(), m_MuoncaloLRLikelihood );
  owner->ConnectVariable( treename.c_str(), VarName("mu_n").c_str(), m_NumMuons );
  owner->ConnectVariable( treename.c_str(), VarName("mu_id_z0_exPV").c_str(), m_MuonZ0 );
  owner->ConnectVariable( treename.c_str(), VarName("mu_id_d0_exPV").c_str(), m_MuonD0 );
  owner->ConnectVariable( treename.c_str(), VarName("mu_charge").c_str(), m_MuonCharge );
//  owner->ConnectVariable( treename.c_str(), VarName("mu_allauthor").c_str(), m_MuonAllAuthor );
  owner->ConnectVariable( treename.c_str(), VarName("mu_me_qoverp").c_str(), m_MuonMeQoverp );
  owner->ConnectVariable( treename.c_str(), VarName("mu_id_qoverp").c_str(), m_MuonIdQoverp );
  owner->ConnectVariable( treename.c_str(), VarName("mu_id_theta").c_str(), m_MuonIdTheta );
  owner->ConnectVariable( treename.c_str(), VarName("mu_id_phi").c_str(), m_MuonIdPhi );
  owner->ConnectVariable( treename.c_str(), VarName("mu_me_theta").c_str(), m_MuonMeTheta );
  owner->ConnectVariable( treename.c_str(), VarName("mu_trackz0pvunbiased").c_str(), m_MuonZ0unbiased);
  owner->ConnectVariable( treename.c_str(), VarName("mu_tracktheta").c_str(), m_MuonTrackTheta);
  owner->ConnectVariable( treename.c_str(), VarName("mu_trackd0pvunbiased").c_str(), m_MuonD0unbiased);
  owner->ConnectVariable( treename.c_str(), VarName("mu_tracksigd0pvunbiased").c_str(), m_MuonSigD0unbiased);
  owner->ConnectVariable( treename.c_str(), VarName("mu_id_cov_d0_exPV").c_str(), m_MuonCovD0);
  owner->ConnectVariable( treename.c_str(), VarName("mu_isCombinedMuon").c_str(), m_MuonisCombinedMuon);

}

void MuonReader::DeclareVariables(){
  owner->DeclareVariable( o_m_MuonAuthor, "mu_author" );
  owner->DeclareVariable( o_m_MuonEta, "mu_eta" );
  owner->DeclareVariable( o_m_MuonE, "mu_E" );
  owner->DeclareVariable( o_m_MuonPt, "mu_pt" );
  owner->DeclareVariable( o_m_MuonPhi, "mu_phi" );
  owner->DeclareVariable( o_m_NumMuons, "mu_n" );
}
void MuonReader::Reset(){
 o_m_MuonAuthor.clear();
 o_m_MuonEta.clear();
 o_m_MuonE.clear();
 o_m_MuonPt.clear();
 o_m_MuonPhi.clear();
 o_m_NumMuons= -999;
  }
void MuonReader::CopyToOutput(){
 o_m_MuonAuthor = std::vector<int>(*m_MuonAuthor);
 o_m_MuonEta = std::vector<float>(*m_MuonEta);
 o_m_MuonE = std::vector<float>(*m_MuonE);
 o_m_MuonPt = std::vector<float>(*m_MuonPt);
 o_m_MuonPhi = std::vector<float>(*m_MuonPhi);
 o_m_NumMuons = m_NumMuons;
  }
bool MuonReader::IsGoodMuon(unsigned int il, float etmin) {
  if (m_MuonAuthor->at(il) != 12) return false;
  if (GetMuonTransverseMomentum(il) <= etmin) return false;
  float eta = TMath::Abs(m_MuonEta->at(il));
  if (!(eta < 2.4)) return false;
  if ( not ( !m_MuonExpectBLayerHit->at(il) || 0 != m_MuonBLayerHits->at(il) )) return false;
  if (m_MuonNumPixelHits->at(il) + m_MuonNumPixelDeadSensors->at(il) < 2) return false;
  if (m_MuonNumSCTHits->at(il) + m_MuonNumSCTDeadSensors->at(il) < 6) return false;
  if (m_MuonNumPixHoles->at(il) + m_MuonNumSCTHoles->at(il) > 1) return false;
  float n = m_MuonNumTRTHits->at(il) + m_MuonNumTRTOutliers->at(il);
  if (eta < 1.9) {
    if (not ((n > 5) && (m_MuonNumTRTOutliers->at(il)/n < 0.9))) return false;
  } else {
    if ((n > 5) && (m_MuonNumTRTOutliers->at(il)/n >= 0.9)) return false;
  }
  if (m_MuonIsoPtCone->at(il) >= 4000 || m_MuonIsoEtCone->at(il) >= 4000) return false;
  return true;
}

bool MuonReader::IsGoodMuon_EWK(int npv,unsigned int il, float etmin, std::vector<int> &Mucounter) {
//  Mucounter.at(0)++;
  if (m_MuonAuthor->at(il) != 6||!(m_MuonisCombinedMuon->at(il)==1)) return false;
 // Mucounter.at(1)++;
  if (GetMuonTransverseMomentum(il) <= etmin) return false;
///  Mucounter.at(2)++;
  float eta = TMath::Abs(m_MuonEta->at(il));
  if (!(eta < 2.5)) return false;
 // Mucounter.at(3)++;
  if ( not ( !m_MuonExpectBLayerHit->at(il) || 0 != m_MuonBLayerHits->at(il) )) return false;
 // Mucounter.at(4)++;
  if (m_MuonNumPixelHits->at(il) + m_MuonNumPixelDeadSensors->at(il) < 1) return false;
 // Mucounter.at(5)++;
  if (m_MuonNumSCTHits->at(il) + m_MuonNumSCTDeadSensors->at(il) < 5) return false;
 // Mucounter.at(6)++;
  if (m_MuonNumPixHoles->at(il) + m_MuonNumSCTHoles->at(il) > 2) return false;
 // Mucounter.at(7)++;
  float n = m_MuonNumTRTHits->at(il) + m_MuonNumTRTOutliers->at(il);
  if (eta < 1.9) {
    if (not ((n > 5) && (m_MuonNumTRTOutliers->at(il)/n < 0.9))) return false;
  } else {
    if ((n > 5) && (m_MuonNumTRTOutliers->at(il)/n >= 0.9)) return false;
  }
 // Mucounter.at(8)++;
  //float etconecor30Rel_org = m_MuonIsoEtCone->at(il)/m_MuonPt->at(il);
  //CorrectCaloIso muonIsoTool;
  //float etconecor20Rel = muonIsoTool.CorrectEtConeRel(m_MuonPt->at(il),etconecor30Rel_org,npv,m_MuonEta->at(il), "cone20Comb2012");
  //float etconecor30Rel=etconecor30Rel_org; 
  if (m_MuonIsoPtCone->at(il)/m_MuonPt->at(il) >= 0.1) return false;
 // Mucounter.at(9)++;
  if (fabs(m_MuonZ0->at(il)*sin(m_MuonTrackTheta->at(il))) > 2 ) return false;
 // Mucounter.at(10)++;
  if (fabs(m_MuonD0->at(il) / sqrt(m_MuonCovD0->at(il))) >= 3.0 ) return false;
 // Mucounter.at(11)++;
  return true;
}
//
//std::pair<float,float> MuonReader::GetScaleFactor(unsigned int il,int set,int runnumber) {
// int rel = 10;
////  if (m_idSF)return m_idSF->scaleFactorMedium(m_ElectronClusterEta->at(il),GetElectronTransverseMomentum(il),0,2); 
//TLorentzVector tmp;
//FillMuonFourMomentum(il, TLorentzVector tmp);    
// float ET = tmp.Et();
// 
// std::pair<float,float> sf_error = m_MCPsf->scaleFactor(ET,set,0,rel,1,runnumber);
//  return sf_error;
//}

//bool MuonReader::IsGoodMuon_Calo(int il,float etmin)
bool MuonReader::IsGoodMuon_calo(int npv,unsigned int il, float etmin, std::vector<int> &Mucounter) {
{
float pt = m_MuonPt->at(il);
float eta = fabs(m_MuonEta->at(il)); 
//int author = m_MuonAuthor->at(il);
Mucounter.at(0)++;
if(pt<etmin) return false;
Mucounter.at(1)++;
//if(author!=16) return false;
Mucounter.at(2)++;
if(eta>0.1) return false;
Mucounter.at(3)++;
//if(m_MuoncaloMuonIdTag->at(il)<10||m_MuoncaloLRLikelihood->at(il)<0.9) return false;
Mucounter.at(4)++;
if(!m_MuonTight->at(il)) return false;
Mucounter.at(5)++;
  if ( not ( !m_MuonExpectBLayerHit->at(il) || 0 != m_MuonBLayerHits->at(il) )) return false;
  Mucounter.at(6)++;
  if (m_MuonNumPixelHits->at(il) + m_MuonNumPixelDeadSensors->at(il) < 1) return false;
  Mucounter.at(7)++;
  if (m_MuonNumSCTHits->at(il) + m_MuonNumSCTDeadSensors->at(il) < 5) return false;
  Mucounter.at(8)++;
  if (m_MuonNumPixHoles->at(il) + m_MuonNumSCTHoles->at(il) > 2) return false;
  Mucounter.at(9)++;
  float n = m_MuonNumTRTHits->at(il) + m_MuonNumTRTOutliers->at(il);
  if (eta < 1.9) {
    if (not ((n > 5) && (m_MuonNumTRTOutliers->at(il)/n < 0.9))) return false;
  } else {
    if ((n > 5) && (m_MuonNumTRTOutliers->at(il)/n >= 0.9)) return false;
  }
  Mucounter.at(10)++;
  if(fabs(m_MuonZ0->at(il)) >  10||fabs(m_MuonD0->at(il))/sqrt(m_MuonCovD0->at(il)) > 10) return false;

  if (m_MuonIsoEtCone->at(il)/pt >  0.15|| m_MuonIsoPtCone->at(il)/pt > 0.1) return false;
return true;
}
}

//
//This is my current Muon Selection and it has been validated by the Zgg group
//
bool MuonReader::IsGoodMuon_2012(unsigned int il, float etmin, std::vector<int> &Mucounter) {
  Mucounter.at(0)++;
  if (m_MuonAuthor->at(il) != 6) return false;
  if (m_MuonisCombinedMuon->at(il) != 1) return false;
  Mucounter.at(1)++;
  if(!m_MuonTight->at(il))
    return false;
 Mucounter.at(2)++;
 float eta = TMath::Abs(m_MuonEta->at(il));
  if (!(eta < 2.47)) return false;
  Mucounter.at(3)++;
  float mu_pt = GetMuonPt(il);
  if (mu_pt <= etmin) return false;
  Mucounter.at(4)++;
  if ( not ( !m_MuonExpectBLayerHit->at(il) || 0 != m_MuonBLayerHits->at(il) )) return false;
  Mucounter.at(5)++;
  if (m_MuonNumPixelHits->at(il) + m_MuonNumPixelDeadSensors->at(il) < 1) return false;
  Mucounter.at(6)++;
  if (m_MuonNumSCTHits->at(il) + m_MuonNumSCTDeadSensors->at(il) < 5) return false;
  Mucounter.at(7)++;
  if (m_MuonNumPixHoles->at(il) + m_MuonNumSCTHoles->at(il) > 2) return false;
  Mucounter.at(8)++;
  float n = m_MuonNumTRTHits->at(il) + m_MuonNumTRTOutliers->at(il);
  if (eta < 1.9 && eta>.1) {
    if (not ((n > 5) && (m_MuonNumTRTOutliers->at(il)/n < 0.9))) return false;
  } else {
    if ((n > 5) && (m_MuonNumTRTOutliers->at(il)/n >= 0.9)) return false;
  }
  Mucounter.at(9)++;
  float etconecor30Rel_org = m_MuonIsoEtCone->at(il)/m_MuonPt->at(il);
  if (fabs(m_MuonZ0unbiased->at(il)) >= 2. ) return false;
  Mucounter.at(10)++;
  if (fabs(m_MuonD0unbiased->at(il) / m_MuonSigD0unbiased->at(il)) >= 3.5 ) return false;
  Mucounter.at(11)++;

/*
  CorrectCaloIso muonIsoTool;
  unsigned int nVtx = 0;
  for(unsigned int v=0;v<v_NumTracks->size();v++){
    if(v_NumTracks->at(v) >= 3)
      ++nVtx;
  }
  if(nVtx < 1)
    return false;
  float isoConeRel = m_MuonIsoEtCone->at(il)/mu_pt;
  float etconecorRel = muonIsoTool.CorrectEtConeRel(mu_pt,
                                                    isoConeRel,
                                                    nVtx,
                                                    m_MuonEta->at(il),
                                                    "cone20Comb2012");
  if(etconecorRel >= 0.3)
    return false;
*/

if(m_MuonIsoEtCone->at(il)/mu_pt >= 0.3)
 return false;
  Mucounter.at(12)++;
  if(m_MuonIsoPtCone->at(il)/mu_pt >= 0.15)
    return false;
  Mucounter.at(13)++;

  return true;
}
float  MuonReader::GetMuonPt(unsigned int il){ //Analysis::AnalysisMuonConfigurableScaleFactors* m_MCPsf){

 double ptcb = m_MuonPt->at(il);    
double charge = m_MuonCharge->at(il);
//  TLorentzVector tmp;
//  FillMuonFourMomentum(il,ptcb,tmp);
double mu_pt;
//double sf=m_MCPsf->scaleFactor(charge,tmp);
//  float mu_pt = m_MuonPt->at(il)*sf;
	 if(isMC){
    double eta = m_MuonEta->at(il);
      double ptid;
 if(m_MuonIdQoverp->at(il) != 0.) ptid = sin(m_MuonIdTheta->at(il))/fabs(m_MuonIdQoverp->at(il));
else{
ptid = 0.;
}
      double ptms;
if(m_MuonMeQoverp->at(il) != 0.) ptms =  sin(m_MuonMeTheta->at(il))/fabs(m_MuonMeQoverp->at(il));
else{
ptms = 0.;
}   
   mcp_smear->SetSeed(EventNumber,il);
   mcp_smear->Event(ptms,ptid,ptcb,eta);
    mu_pt = mcp_smear->pTCB();
  return mu_pt;
  }
  return ptcb;
}

float MuonReader::dR(float aeta, float aphi, float beta, float bphi){
  // difference in eta for A and B
  float deta = fabs(aeta-beta);
  /*
    difference in phi for A and B
    NOTE: Since phi 'wraps' at 2pi, we want the shortest distance for dphi
  */
  float dphi = fabs(aphi-bphi);
  float Pi = 3.14159;
  if(dphi > Pi)
    dphi = 2*Pi - dphi;
  // return Delta-R
  return sqrt(deta*deta + dphi*dphi);
}

/*
bool MuonReader::IsGoodMuon_Hww(unsigned int il, float etmin) {
  float pt = m_MuonPt->at(il);
//float pt = GetMuonTransverseMomentum(il);
  float eta = fabs(m_MuonEta->at(il));

  if (m_MuonisCombinedMuon->at(il) == 0) return false;
  if (pt <= etmin) return false;
  if (eta >= 2.4) return false;
  
  if ( not ( !m_MuonExpectBLayerHit->at(il) || 0 != m_MuonBLayerHits->at(il) )) return false;
  if (m_MuonNumPixelHits->at(il) + m_MuonNumPixelDeadSensors->at(il) < 2) return false;
  if (m_MuonNumSCTHits->at(il) + m_MuonNumSCTDeadSensors->at(il) < 6) return false;
  if (m_MuonNumPixHoles->at(il) + m_MuonNumSCTHoles->at(il) >2 ) return false;
  float n = m_MuonNumTRTHits->at(il) + m_MuonNumTRTOutliers->at(il);
  if (eta < 1.9) {
    if (not ((n > 5) && (m_MuonNumTRTOutliers->at(il)/n < 0.9))) return false;
  } else {
    if ((n > 5) && (m_MuonNumTRTOutliers->at(il)/n > 0.9)) return false;
  }
  if(fabs(m_MuonZ0->at(il)) >  10||fabs(m_MuonD0->at(il))/sqrt(m_MuonCovD0->at(il)) > 10) return false;

  if (m_MuonIsoEtCone20->at(il)/pt >  0.15|| m_MuonIsoPtCone20->at(il)/pt > 0.1) return false;
  return true;
}
*/

