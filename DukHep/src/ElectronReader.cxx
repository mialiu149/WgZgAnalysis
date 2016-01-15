///bin/dukhep_create_reader.py -n ElectronReader EleMacros.dat MediumPlusPlus.dat
#include "include/ElectronReader.h"
#include "include/DukHepFilter.h"
#include <iostream>

ElectronReader::ElectronReader(SCycleBaseNTuple * ownr): owner(ownr),m_idSF(0),
m_NumElectrons(0),
m_ElectronTrackPt(0),
m_ElectronTrackQoverP(0),
m_ElectronTrackEta(0),
m_ElectronTrackPhi(0),
m_ElectronTrackTheta(0),
m_ElectronTrackNPixelHits(0),
m_ElectronTrackNSCTHits(0),
m_ElectronTrackNBLayerHits(0),
m_ElectronTrackNTRTHits(0),
m_ElectronTrackNTRTHighThresholdHits(0),
m_ElectronTrackD0(0),
m_ElectronTrackD0SigWRTBeam(0),
m_ElectronTrackD0SigWRTPV(0),
m_ElectronUnbiasedTrackD0SigWRTPV(0),
m_ElectronTrackZ0(0),
m_ElectronVertexZ(0),
m_PrimaryVertexZ(0),
m_ElectronAuthor(0),
m_ElectronMedium(0),
m_ElectronTightPP(0),
m_ElectronLoosePP(0),
m_ElectronMediumPP(0),
m_ElectronOQ(0),
m_ElectronClusterE(0),
m_ElectronE(0),
m_ElectronPt(0),
m_ElectronEta(0),
m_ElectronPhi(0),
m_ElectronisEM(0),
m_ElectronClusterEta(0),
m_ElectronClusterPhi(0),
m_ElectronClusterPt(0),
m_ElectronCharge(0),
m_ElectronEFDistance(0),
m_ElectronEFIndex(0),
m_ElectronTrackz0pv(0),
m_ElectronTracksigd0pv(0),
m_ElectronTrackd0pv(0),
m_ElectronEtap(0),
m_ElectronEtas2(0),
m_ElectronEtcone20(0),
m_ElectronPtcone20(0),
m_ElectronTopoIsocone20(0),
m_ElectronEtcone30(0),
m_ElectronPtcone30(0),
m_ElectronTopoIsocone30(0),
m_ElectronEtcone40(0),
m_ElectronPtcone40(0),
m_ElectronTopoIsocone40(0),
m_ElectrondeltaphiRescaled(0),
m_ElectronED_median(0),
m_EF_e20_medium(0),
m_EF_e22_medium(0),
m_trig_EF_el_n(0),
m_trig_EF_el_EF_e20_medium(0),
m_trig_EF_el_pt(0),	
m_trig_EF_el_eta(0),	
m_trig_EF_el_phi(0),	
m_trig_EF_el_EF_e22_medium(0),	
m_L1_EM14(0),
m_L1_EM16(0),
m_el_L1_dr(0),	
m_el_L1_index(0),
m_ElectronEtHad(0),
m_ElectronEtHadOne(0),
m_ElectronF1(0),
m_ElectronEminS1(0),
m_ElectronEmaxS1(0),
m_ElectronEmax2(0),
m_ElectronE237(0),
m_ElectronE277(0),
m_ElectronWSTot(0),
m_ElectronWEta2(0),
m_ElectronDeltaEta1(0),
m_ElectronREta(0),
m_ElectronRPhi(0),
m_ElectronNTRTOutliers(0),
m_ElectronNBLSharedHits(0),
m_ElectronNBLayerOutliers(0),
m_ElectronExpectBLayerHit(0),
m_ElectronTRTHighTHitsRatio(0),
m_ElectronTRTHighTOutliersRatio(0),
m_ElectronNPixelOutliers(0),
m_ElectronNSCTOutliers(0),
m_ElectronNSiHits(0),
m_ElectronNPixelDeadSensors(0),
m_ElectronNSCTDeadSensors(0),
m_ElectronTrackIso(0),
m_ElectronPointing(0),
m_ElectronLoose(0),
m_ElectronTight(0),
m_el_refittedTrack_LMqoverp(0),	\
m_el_refittedTrack_author(0),\
m_ElectronEs0(0)
{}
void ElectronReader::ConnectVariables(std::string treename){
  owner->ConnectVariable( treename.c_str(), VarName("el_n").c_str(), m_NumElectrons );
  owner->ConnectVariable( treename.c_str(), VarName("el_trackpt").c_str(), m_ElectronTrackPt );
  owner->ConnectVariable( treename.c_str(), VarName("el_trackqoverp").c_str(), m_ElectronTrackQoverP );
  owner->ConnectVariable( treename.c_str(), VarName("el_tracketa").c_str(), m_ElectronTrackEta );
  owner->ConnectVariable( treename.c_str(), VarName("el_trackphi").c_str(), m_ElectronTrackPhi );
  owner->ConnectVariable( treename.c_str(), VarName("el_tracktheta").c_str(), m_ElectronTrackTheta );
  owner->ConnectVariable( treename.c_str(), VarName("el_vertz").c_str(), m_ElectronVertexZ );
  owner->ConnectVariable( treename.c_str(), VarName("el_nPixHits").c_str(), m_ElectronTrackNPixelHits );
  owner->ConnectVariable( treename.c_str(), VarName("el_nSCTHits").c_str(), m_ElectronTrackNSCTHits );
  owner->ConnectVariable( treename.c_str(), VarName("el_nBLHits").c_str(), m_ElectronTrackNBLayerHits );
  owner->ConnectVariable( treename.c_str(), VarName("el_nTRTHits").c_str(), m_ElectronTrackNTRTHits );
  owner->ConnectVariable( treename.c_str(), VarName("el_nTRTHighTHits").c_str(), m_ElectronTrackNTRTHighThresholdHits );
//  owner->ConnectVariable( treename.c_str(), VarName("el_trackd0_physics").c_str(), m_ElectronTrackD0 );
  owner->ConnectVariable( treename.c_str(), VarName("el_tracksigd0beam").c_str(), m_ElectronTrackD0SigWRTBeam );
  owner->ConnectVariable( treename.c_str(), VarName("el_tracksigd0pv").c_str(), m_ElectronTrackD0SigWRTPV );
  owner->ConnectVariable( treename.c_str(), VarName("el_trackz0").c_str(), m_ElectronTrackZ0 );
  owner->ConnectVariable( treename.c_str(), VarName("el_author").c_str(), m_ElectronAuthor );
//  owner->ConnectVariable( treename.c_str(), VarName("el_medium").c_str(), m_ElectronMedium );
  owner->ConnectVariable( treename.c_str(), VarName("el_tightPP").c_str(), m_ElectronTightPP );
  owner->ConnectVariable( treename.c_str(), VarName("el_loosePP").c_str(), m_ElectronLoosePP );
  owner->ConnectVariable( treename.c_str(), VarName("el_mediumPP").c_str(), m_ElectronMediumPP );
  owner->ConnectVariable( treename.c_str(), VarName("el_OQ").c_str(), m_ElectronOQ );
  owner->ConnectVariable( treename.c_str(), VarName("el_cl_E").c_str(), m_ElectronClusterE );
  owner->ConnectVariable( treename.c_str(), VarName("el_E").c_str(), m_ElectronE );
  owner->ConnectVariable( treename.c_str(), VarName("el_pt").c_str(), m_ElectronPt );
  owner->ConnectVariable( treename.c_str(), VarName("el_phi").c_str(), m_ElectronPhi );
  owner->ConnectVariable( treename.c_str(), VarName("el_eta").c_str(), m_ElectronEta );
  owner->ConnectVariable( treename.c_str(), VarName("el_cl_eta").c_str(), m_ElectronClusterEta );
  owner->ConnectVariable( treename.c_str(), VarName("el_cl_phi").c_str(), m_ElectronClusterPhi );
  owner->ConnectVariable( treename.c_str(), VarName("el_cl_pt").c_str(), m_ElectronClusterPt );
  owner->ConnectVariable( treename.c_str(), VarName("el_charge").c_str(), m_ElectronCharge );
  owner->ConnectVariable( treename.c_str(), VarName("el_isEM").c_str(), m_ElectronisEM);
//  owner->ConnectVariable( treename.c_str(), VarName("el_EF_index").c_str(), m_ElectronEFIndex );
  owner->ConnectVariable( treename.c_str(), VarName("el_trackz0pvunbiased").c_str(), m_ElectronTrackz0pv );
  owner->ConnectVariable( treename.c_str(), VarName("el_tracksigd0pvunbiased").c_str(), m_ElectronTracksigd0pv );
  owner->ConnectVariable( treename.c_str(), VarName("el_trackd0pvunbiased").c_str(), m_ElectronTrackd0pv );
 /* owner->ConnectVariable( treename.c_str(), VarName("el_trackz0pv").c_str(), m_ElectronTrackz0pv );
  owner->ConnectVariable( treename.c_str(), VarName("el_tracksigd0pv").c_str(), m_ElectronTracksigd0pv );
  owner->ConnectVariable( treename.c_str(), VarName("el_trackd0pv").c_str(), m_ElectronTrackd0pv );
  */owner->ConnectVariable( treename.c_str(), VarName("el_etap").c_str(), m_ElectronEtap );
  owner->ConnectVariable( treename.c_str(), VarName("el_etas2").c_str(), m_ElectronEtas2 );
  owner->ConnectVariable( treename.c_str(), VarName("el_deltaphiRescaled").c_str(), m_ElectrondeltaphiRescaled );
  //owner->ConnectVariable( treename.c_str(), VarName("el_Etcone20").c_str(), m_ElectronEtcone );
  //owner->ConnectVariable( treename.c_str(), VarName("el_ptcone20").c_str(), m_ElectronPtcone );
  owner->ConnectVariable( treename.c_str(), VarName("el_Etcone20").c_str(), m_ElectronEtcone20 );
  owner->ConnectVariable( treename.c_str(), VarName("el_ptcone20").c_str(), m_ElectronPtcone20 );
  owner->ConnectVariable( treename.c_str(), VarName("el_topoEtcone20").c_str(), m_ElectronTopoIsocone20 );
  owner->ConnectVariable( treename.c_str(), VarName("el_ED_median").c_str(), m_ElectronED_median );
  owner->ConnectVariable( treename.c_str(), VarName("el_Etcone30").c_str(), m_ElectronEtcone30 );
  owner->ConnectVariable( treename.c_str(), VarName("el_ptcone30").c_str(), m_ElectronPtcone30 );
  owner->ConnectVariable( treename.c_str(), VarName("el_topoEtcone30").c_str(), m_ElectronTopoIsocone30 );
  owner->ConnectVariable( treename.c_str(), VarName("el_Etcone40").c_str(), m_ElectronEtcone40 );
  owner->ConnectVariable( treename.c_str(), VarName("el_ptcone40").c_str(), m_ElectronPtcone40 );
  owner->ConnectVariable( treename.c_str(), VarName("el_topoEtcone40").c_str(), m_ElectronTopoIsocone40 );
//  owner->ConnectVariable( treename.c_str(), VarName("L1_EM14").c_str(), m_L1_EM14);
//  owner->ConnectVariable( treename.c_str(), VarName("L1_EM16").c_str(), m_L1_EM16);
  //owner->ConnectVariable( treename.c_str(), VarName("EF_e20_medium").c_str(), m_EF_e20_medium );
  //owner->ConnectVariable( treename.c_str(), VarName("EF_e22_medium").c_str(), m_EF_e22_medium );
//  owner->ConnectVariable( treename.c_str(), VarName("trig_EF_el_EF_e20_medium").c_str(), m_trig_EF_el_EF_e20_medium );
//  owner->ConnectVariable( treename.c_str(), VarName("trig_EF_el_EF_e22_medium").c_str(), m_trig_EF_el_EF_e22_medium );
//  owner->ConnectVariable( treename.c_str(), VarName("el_EF_dr").c_str(), m_ElectronEFDistance );
  owner->ConnectVariable( treename.c_str(), VarName("vxp_z").c_str(), m_PrimaryVertexZ );
  owner->ConnectVariable( treename.c_str(), VarName("el_Ethad").c_str(), m_ElectronEtHad );
  owner->ConnectVariable( treename.c_str(), VarName("el_Ethad1").c_str(), m_ElectronEtHadOne );
  owner->ConnectVariable( treename.c_str(), VarName("el_f1").c_str(), m_ElectronF1);
  owner->ConnectVariable( treename.c_str(), VarName("el_Emins1").c_str(), m_ElectronEminS1 );
  owner->ConnectVariable( treename.c_str(), VarName("el_emaxs1").c_str(), m_ElectronEmaxS1 );
  owner->ConnectVariable( treename.c_str(), VarName("el_Es0").c_str(), m_ElectronEs0 );
  owner->ConnectVariable( treename.c_str(), VarName("el_Emax2").c_str(), m_ElectronEmax2 );
  owner->ConnectVariable( treename.c_str(), VarName("el_E237").c_str(), m_ElectronE237 );
  owner->ConnectVariable( treename.c_str(), VarName("el_E233").c_str(), m_ElectronE233 );
  owner->ConnectVariable( treename.c_str(), VarName("el_E277").c_str(), m_ElectronE277 );
  owner->ConnectVariable( treename.c_str(), VarName("el_wstot").c_str(), m_ElectronWSTot );
  owner->ConnectVariable( treename.c_str(), VarName("el_weta2").c_str(), m_ElectronWEta2 );
  owner->ConnectVariable( treename.c_str(), VarName("el_deltaeta1").c_str(), m_ElectronDeltaEta1 );
  owner->ConnectVariable( treename.c_str(), VarName("el_fside").c_str(), m_ElectronFSide);
  owner->ConnectVariable( treename.c_str(), VarName("el_ws3").c_str(), m_ElectronWS3);
  owner->ConnectVariable( treename.c_str(), VarName("el_f3").c_str(), m_ElectronF3);
  owner->ConnectVariable( treename.c_str(), VarName("el_reta").c_str(), m_ElectronREta );
  owner->ConnectVariable( treename.c_str(), VarName("el_rphi").c_str(), m_ElectronRPhi );
  owner->ConnectVariable( treename.c_str(), VarName("el_nTRTOutliers").c_str(), m_ElectronNTRTOutliers );
//  owner->ConnectVariable( treename.c_str(), VarName("el_nBLSharedHits").c_str(), m_ElectronNBLSharedHits );
  owner->ConnectVariable( treename.c_str(), VarName("el_nBLayerOutliers").c_str(), m_ElectronNBLayerOutliers );
  owner->ConnectVariable( treename.c_str(), VarName("el_expectHitInBLayer").c_str(), m_ElectronExpectBLayerHit );
  owner->ConnectVariable( treename.c_str(), VarName("el_TRTHighTHitsRatio").c_str(), m_ElectronTRTHighTHitsRatio );
  owner->ConnectVariable( treename.c_str(), VarName("el_TRTHighTOutliersRatio").c_str(), m_ElectronTRTHighTOutliersRatio );
  owner->ConnectVariable( treename.c_str(), VarName("el_nPixelOutliers").c_str(), m_ElectronNPixelOutliers );
  owner->ConnectVariable( treename.c_str(), VarName("el_nSCTOutliers").c_str(), m_ElectronNSCTOutliers );
  owner->ConnectVariable( treename.c_str(), VarName("el_nSiHits").c_str(), m_ElectronNSiHits );
  owner->ConnectVariable( treename.c_str(), VarName("el_nPixelDeadSensors").c_str(),  m_ElectronNPixelDeadSensors );
  owner->ConnectVariable( treename.c_str(), VarName("el_nSCTDeadSensors").c_str(),  m_ElectronNSCTDeadSensors );
  owner->ConnectVariable( treename.c_str(), VarName("el_refittedTrack_LMqoverp").c_str(),m_el_refittedTrack_LMqoverp   );
  owner->ConnectVariable( treename.c_str(), VarName("el_refittedTrack_author").c_str(),  m_el_refittedTrack_author );
  //owner->ConnectVariable( treename.c_str(), VarName("el_nSCTDeadSensors").c_str(),  m_ElectronNSCTDeadSensors );
//  owner->ConnectVariable( treename.c_str(), VarName("el_ptcone20").c_str(), m_ElectronTrackIso );
//  owner->ConnectVariable( treename.c_str(), VarName("el_loose").c_str(), m_ElectronLoose );
 // owner->ConnectVariable( treename.c_str(), VarName("el_tight").c_str(), m_ElectronTight );
//  owner->ConnectVariable( treename.c_str(), VarName("trig_EF_el_pt").c_str(), m_trig_EF_el_pt );	
 // owner->ConnectVariable( treename.c_str(), VarName("trig_EF_el_eta").c_str(), m_trig_EF_el_eta );	
  //owner->ConnectVariable( treename.c_str(), VarName("trig_EF_el_phi").c_str(), m_trig_EF_el_phi );	
//  owner->ConnectVariable( treename.c_str(), VarName("trig_EF_el_EF_e22_medium").c_str(),m_trig_EF_el_EF_e22_medium ); 
//  owner->ConnectVariable( treename.c_str(), VarName("el_L1_dr").c_str(), m_el_L1_dr );	
//  owner->ConnectVariable( treename.c_str(), VarName("el_L1_index").c_str(), m_el_L1_index );	
  //owner->ConnectVariable( treename.c_str(), VarName("trig_EF_el_n").c_str(), m_trig_EF_el_n );	

}
void ElectronReader::DeclareVariables(){
}
void ElectronReader::Reset(){
  }
void ElectronReader::CopyToOutput(){
}

bool ElectronReader::UseElectronTrack(unsigned int il) {
  return ((m_ElectronTrackNPixelHits->at(il) + m_ElectronTrackNSCTHits->at(il) >= 4));
}
void ElectronReader::InitEnergyRescaler(egRescaler::EnergyRescalerUpgrade* m_ers){
ers = m_ers;
return;
}    
void ElectronReader::InitElectronLHTool(Root::TElectronLikelihoodTool* m_elht){
elht=m_elht;
return;
}
float ElectronReader::GetElectronTransverseMomentum(unsigned int il,float &corrE){
  
  bool useTrack = false;
  float etc;
  float et;
  float newET;

  if((m_ElectronTrackNPixelHits->at(il) + m_ElectronTrackNSCTHits->at(il)) >=4) useTrack = true;
  if(!isMC)
  {
  if(useTrack)  et = m_ElectronClusterE->at(il)/(cosh(m_ElectronTrackEta->at(il)));
  else et = m_ElectronClusterE->at(il)/(cosh(m_ElectronClusterEta->at(il)));
//corrE = m_ElectronClusterE->at(il);
  corrE = ers->applyEnergyCorrection( m_ElectronClusterEta->at(il), 
                                          m_ElectronClusterE->at(il), 
                                          egRescaler::EnergyRescalerUpgrade::Electron, 
                                          egRescaler::EnergyRescalerUpgrade::Nominal 
);
     if(useTrack) etc = corrE/cosh(m_ElectronTrackEta->at(il));
      else etc = corrE/cosh(m_ElectronClusterEta->at(il));
      newET = etc;  
  }
  else if(isMC)
  {
  //   int seed = static_cast<int>(1.e+5*fabs(m_ElectronClusterPhi->at(il)));
    // if (!seed) ++seed;
      //ers->SetRandomSeed(seed);
      ers->SetRandomSeed(1771561 + (EventNumber)+10*il);
      corrE = m_ElectronClusterE->at(il)*ers->getSmearingCorrection(m_ElectronClusterEta->at(il),m_ElectronClusterE->at(il),egRescaler::EnergyRescalerUpgrade::NOMINAL);
      //corrE = m_ElectronClusterE->at(il);
      if(useTrack) etc = corrE/cosh(m_ElectronTrackEta->at(il));
      else etc = corrE/cosh(m_ElectronClusterEta->at(il));
      newET=etc;  
}
  return newET;
}
// add isolation correction function
TLorentzVector ElectronReader::FillElectronFourMomentum(unsigned int il) {
   float E;
   float Et = GetElectronTransverseMomentum(il,E);
   TLorentzVector v;
   if (UseElectronTrack(il)) {
     TVector3 em3tmp;
     TLorentzVector em4tmp;
     em3tmp.SetMagThetaPhi(E,m_ElectronTrackTheta->at(il),m_ElectronTrackPhi->at(il));
     em4tmp.SetXYZM(em3tmp.Px(),em3tmp.Py(),em3tmp.Pz(),0); 
     v=em4tmp;
  }
  else {
    v.SetPtEtaPhiM(Et,m_ElectronClusterEta->at(il),m_ElectronClusterPhi->at(il),0);
  }  
return v;
}

TLorentzVector ElectronReader::FillElectronCluster(unsigned int il) {
   float E;
   float Et = GetElectronTransverseMomentum(il,E);
   TLorentzVector v;
   v.SetPtEtaPhiM(Et,m_ElectronClusterEta->at(il),m_ElectronClusterPhi->at(il),0);
   return v; 
} 
bool ElectronReader::IsTrackElectronExo(unsigned int il) {
  if ( (m_ElectronNSiHits->at(il) == 0) || (m_ElectronTrackPt->at(il) < 2.) ) return false;  
  return true;
}

std::vector<int> ElectronReader::ElectronObjID(unsigned int il, float etmin,std::vector<int> &Ecounter) {
      std::vector<int> ObjID;
      float corrE; 
      int author = m_ElectronAuthor->at(il);
      float etc = GetElectronTransverseMomentum(il,corrE);
      float aeta; 
      aeta = fabs(m_ElectronClusterEta->at(il)); 
      if ((author != 1) && (author != 3)) ObjID.push_back(0); else ObjID.push_back(1);//0, author
      if (etc <= etmin) ObjID.push_back(0); else ObjID.push_back(1);//1,Et
      if ((m_ElectronOQ->at(il)&1446)!=0) ObjID.push_back(0); else ObjID.push_back(1);//2,quality
      if ( aeta >= 2.47) ObjID.push_back(0); else ObjID.push_back(1);//3,eta
      if (!m_ElectronTightPP->at(il)) ObjID.push_back(0); else ObjID.push_back(1);//4,tight++
      if (!m_ElectronMediumPP->at(il)) ObjID.push_back(0); else ObjID.push_back(1);//5,medium++
      if (!m_ElectronLoosePP->at(il)) ObjID.push_back(0); else ObjID.push_back(1);//6,loose++
      if (fabs(m_ElectronTrackz0pv->at(il)*TMath::Sin(m_ElectronTrackTheta->at(il))) >= 0.5 ) ObjID.push_back(0); else ObjID.push_back(1);//7,z0
      if (fabs(m_ElectronTrackd0pv->at(il))/m_ElectronTracksigd0pv->at(il) >= 6) ObjID.push_back(0); else ObjID.push_back(1);//8,d0
      if (m_ElectronPtcone30->at(il)/etc >= 0.1) ObjID.push_back(0); else ObjID.push_back(1);//9,isolation
      if (!ElectronLH(il,0)) ObjID.push_back(0); else ObjID.push_back(1);//10,LH VeryTight
      if (!ElectronLH(il,1)) ObjID.push_back(0); else ObjID.push_back(1);//11,LH Tight
      if (!ElectronLH(il,2)) ObjID.push_back(0); else ObjID.push_back(1);//12,LH Medium
      if (!ElectronLH(il,3)) ObjID.push_back(0); else ObjID.push_back(1);//13,LH Loose
      if (!ElectronLH(il,4)) ObjID.push_back(0); else ObjID.push_back(1);//14,LH VeryLoose
  // return the vector storing obj selection bits
  return ObjID;
}

bool ElectronReader::IsGoodElectronEWKW(unsigned int il, float etmin,std::vector<int> &Ecounter,bool isejet) {
    float corrE; 
    //if (il > m_ElectronAuthor->size()) return false;  
    Ecounter.at(0)++;
    int author = m_ElectronAuthor->at(il);
    if ((author != 1) && (author != 3)) return false;
    Ecounter.at(1)++;
    float etc = GetElectronTransverseMomentum(il,corrE);
    if (etc <= etmin) return false;
    Ecounter.at(2)++;
    if ((m_ElectronOQ->at(il)&1446)!=0) return false;
    Ecounter.at(3)++;
    float aeta; aeta = fabs(m_ElectronClusterEta->at(il)); 
    //if ( aeta >= 2.47 || ( (aeta >= 1.37) && ( aeta <= 1.52 )))  return false;
    if ( aeta >= 2.47)  return false;
    Ecounter.at(4)++;
    if (!m_ElectronTightPP->at(il)) return false;
    Ecounter.at(5)++;
    if (fabs(m_ElectronTrackz0pv->at(il)*TMath::Sin(m_ElectronTrackTheta->at(il))) >= 0.5 ) return false;
    Ecounter.at(6)++;
    if (fabs(m_ElectronTrackd0pv->at(il))/m_ElectronTracksigd0pv->at(il) >= 6) return false;
    Ecounter.at(7)++;
    //if (fabs(m_ElectronTrackz0pv->at(il)) >= 2 ) return false;
    //if (fabs(m_ElectronTrackz0pv->at(il)) >= 1 ) return false; //2011
    //if (fabs(m_ElectronTrackd0pv->at(il)/m_ElectronTracksigd0pv->at(il)) >= 10) return false;//2011
    //float el_Etcone_corrected = GetElectronIso(il,1,20);
    //if(el_Etcone_corrected/etc >= 0.14) return false; //2011 
    //if(fabs(el_Etcone_corrected)/etc >= 0.15) return false;
    //if(!isejet&&el_Etcone_corrected/etc >= 0.2) return false; //2012 
    Ecounter.at(8)++;
    if(!isejet&&m_ElectronPtcone30->at(il)/etc >= 0.1) return false; //2012
    //if(m_ElectronPtcone->at(il)/etc >= 0.13) return false;//2011
    Ecounter.at(9)++;
    //std::cout<<" isolation ::"<<el_Etcone_corrected<<std::endl;
    return true;
}

//combine redundant functions: IsGoodElectronEWKW and IsGoodElectronEWKZ
bool ElectronReader::IsGoodElectronEWK(unsigned int il, float etmin,int IDtype,bool isejet) {
    float corrE; 
    int author = m_ElectronAuthor->at(il);
    if ((author != 1) && (author != 3)) return false;
    float etc = GetElectronTransverseMomentum(il,corrE);
    if (etc <= etmin) return false;
    if ((m_ElectronOQ->at(il)&1446)!=0) return false;
    float aeta; aeta = fabs(m_ElectronClusterEta->at(il)); 
    if ( aeta >= 2.47)  return false;
    if (IDtype==0 && !m_ElectronTightPP->at(il)) return false;
    if (IDtype==1 && !m_ElectronMediumPP->at(il)) return false;
    if (IDtype==2 && !m_ElectronLoosePP->at(il)) return false;
    //// set IDtype to > 2 will skip the quality check.
    if (fabs(m_ElectronTrackz0pv->at(il)*TMath::Sin(m_ElectronTrackTheta->at(il))) >= 0.5 ) return false;
    if (fabs(m_ElectronTrackd0pv->at(il))/m_ElectronTracksigd0pv->at(il) >= 6) return false;
    if(!isejet&&m_ElectronPtcone30->at(il)/etc >= 0.1) return false; //2012
    return true;
   }

float ElectronReader::GetElectronIso(int il,int method,float ConeSize)
{
  float IsoCorrected;
  float corrE; 
  float etc = GetElectronTransverseMomentum(il,corrE);
  float ED_median = m_ElectronED_median->at(il);
  if(method == 0){
  float Iso;
  if(ConeSize==20) Iso = m_ElectronEtcone20->at(il);
  if(ConeSize==30) Iso = m_ElectronEtcone30->at(il);
  if(ConeSize==40) Iso = m_ElectronEtcone40->at(il);
  IsoCorrected = CaloIsoCorrection::GetPtNPVCorrectedIsolation(npv,m_ElectronClusterE->at(il),m_ElectronEtas2->at(il),m_ElectronEtap->at(il),m_ElectronClusterEta->at(il),ConeSize,isMC,Iso,false,CaloIsoCorrection::ELECTRON); 
}
if(method ==1)
{
  float Iso;
  if(ConeSize==20) Iso = m_ElectronTopoIsocone20->at(il);
  if(ConeSize==30) Iso = m_ElectronTopoIsocone30->at(il);
  if(ConeSize==40) Iso = m_ElectronTopoIsocone40->at(il);
 IsoCorrected = GetPtEDCorrectedTopoIsolation(ED_median,m_ElectronClusterE->at(il),m_ElectronEtas2->at(il),m_ElectronEtap->at(il),m_ElectronClusterEta->at(il),ConeSize,isMC,Iso,false,CaloIsoCorrection::ELECTRON,CaloIsoCorrection::REL17);
}
return IsoCorrected;
}

bool ElectronReader::IsGoodElectronEWKZ(unsigned int il, float etmin,bool isejet)
{
  float corrE;
  if (il > m_ElectronAuthor->size()) return false;  
  float etc = GetElectronTransverseMomentum(il,corrE);
  if (etc <= etmin) return false;
  int author = m_ElectronAuthor->at(il);
  if ((author != 1) && (author != 3)) return false;
  if ((m_ElectronOQ->at(il)&1446)!=0) return false;
  float aeta = fabs(m_ElectronClusterEta->at(il)); 
// if ( aeta >= 2.47 || ( (aeta >= 1.37) && ( aeta <= 1.52 )))  return false;
  if (aeta >= 2.47 )  return false; 
  bool hasBlayer = ((m_ElectronisEM->at(il) & 0x1 << egammaPID::TrackBlayer_Electron) == 0);
  bool passBlayer = (m_ElectronExpectBLayerHit->at(il) ? hasBlayer : 1);
  //if (!(m_ElectronLoosePP->at(il)&&passBlayer)) return false;
  //if (!(m_ElectronLoosePP->at(il))) return false;
  if (!(m_ElectronMediumPP->at(il))) return false;
  //if (fabs(m_ElectronTrackz0pv->at(il)) >= 1 ) return false; //2011
  if (fabs(m_ElectronTrackz0pv->at(il)*TMath::Sin(m_ElectronTrackTheta->at(il))) >= 0.5 ) return false;
  //if (fabs(m_ElectronTrackz0pv->at(il)) >= 2 ) return false; //2012
  if (fabs(m_ElectronTrackd0pv->at(il)/m_ElectronTracksigd0pv->at(il)) >= 6)    return false;  //2012
  //if (fabs(m_ElectronTrackd0pv->at(il)/m_ElectronTracksigd0pv->at(il)) >= 10)    return false;  //2011
  float el_Etcone_corrected = GetElectronIso(il,1,20);
  //if(!isejet&&el_Etcone_corrected/etc >= 0.2) return false; //2012 
  //if(el_Etcone_corrected/etc >= 0.14) return false;  
  //std::cout<<"Z etcone_cut"<<std::endl;
  //if(!isejet&&m_ElectronPtcone20->at(il)/etc >= 0.15) return false; //2012
  if(!isejet&&m_ElectronPtcone30->at(il)/etc >= 0.1) return false; //2012
  //if(m_ElectronPtcone->at(il)/etc >= 0.13) return false;
  return true;
}

int ElectronReader::ElectronLH(unsigned int il,int OperatingPoint){
  double eta=m_ElectronEtas2->at(il);
  double eT=m_ElectronClusterE->at(il)/cosh(m_ElectronEtas2->at(il));
  double f3=m_ElectronF3->at(il);
  double Et= eT;
  double rHad=m_ElectronEtHad->at(il)/Et;
  double rHad1=m_ElectronEtHadOne->at(il)/Et;
  double Reta= m_ElectronREta->at(il);
  double w2=m_ElectronWEta2->at(il);
  double f1=m_ElectronF1->at(il);
  double el_emaxs1=m_ElectronEmaxS1->at(il);
  double el_Emax2=m_ElectronEmax2->at(il);
  double eratio=(el_emaxs1+el_Emax2 == 0.) ? 0. : (el_emaxs1-el_Emax2)/(el_emaxs1+el_Emax2);
  double deltaEta=m_ElectronDeltaEta1->at(il);
  double d0= m_ElectronTrackd0pv->at(il);
  double TRratio=m_ElectronTRTHighTOutliersRatio->at(il);
  double d0sigma=m_ElectronTracksigd0pv->at(il);
  double rphi=m_ElectronRPhi->at(il);
  double m_deltaPoverP = deltaPoverP(il);
  double deltaphires=m_ElectrondeltaphiRescaled->at(il);

  int nSi=m_ElectronNSiHits->at(il);
  int nSiDeadSensors=m_ElectronNPixelDeadSensors->at(il)+m_ElectronNSCTDeadSensors->at(il);
  int nPix=m_ElectronTrackNPixelHits->at(il);
  int nPixDeadSensors=m_ElectronNPixelDeadSensors->at(il);
  int nBlayer= m_ElectronTrackNBLayerHits->at(il);
  int nBlayerOutliers=m_ElectronNBLayerOutliers->at(il);
  int expectBlayer= m_ElectronExpectBLayerHit->at(il);
  int convBit = m_ElectronisEM->at(il) & (0x1 << 1); 

  if(OperatingPoint==0) elht->setOperatingPoint(LikeEnum::VeryTight); // If you're switching back and forth between op points!
  if(OperatingPoint==1) elht->setOperatingPoint(LikeEnum::Tight); // If you're switching back and forth between op points!
  if(OperatingPoint==2) elht->setOperatingPoint(LikeEnum::Medium); // If you're switching back and forth between op points!
  if(OperatingPoint==3) elht->setOperatingPoint(LikeEnum::Loose); // If you're switching back and forth between op points!
  if(OperatingPoint==4) elht->setOperatingPoint(LikeEnum::VeryLoose); // If you're switching back and forth between op points!
  
  double discriminant = elht->calculate(eta,eT,f3, rHad, rHad1,Reta, w2, f1, eratio,deltaEta, d0, TRratio,d0sigma,rphi,m_deltaPoverP ,deltaphires,npv);
  int isPass=0;
  bool passLH = elht->accept(discriminant,eta,eT,nSi,nSiDeadSensors,nPix,nPixDeadSensors,nBlayer, nBlayerOutliers,expectBlayer,convBit,npv);
  if (passLH) isPass=1;
  return isPass;
}
double ElectronReader::deltaPoverP(int el){
  double dpOverp = 0.;
  for (unsigned int i = 0; i<m_el_refittedTrack_LMqoverp->at(el).size();++i) {
     if((*m_el_refittedTrack_author).at(el)[i]== 4) {
       dpOverp= 1.-(m_ElectronTrackQoverP->at(el)/((*m_el_refittedTrack_LMqoverp).at(el)[i]));
     }
  }
 return dpOverp;
}
//bool ElectronReader::IsMediumPlusPlus(unsigned int il){
//  if (!owner) return false;
//  if (il >= m_ElectronClusterEta->size()) return false;
//  float eT=m_ElectronClusterE->at(il)/TMath::CosH(m_ElectronTrackEta->at(il));
//  float rhad  = DukHepFilter::safeRatio(m_ElectronEtHad->at(il),eT);
 // float rhad1 = DukHepFilter::safeRatio(m_ElectronEtHadOne->at(il),eT);
 // float emax2 = m_ElectronEmax2->at(il);
//}

std::pair<float,float> ElectronReader::GetScaleFactor(unsigned int il,int set,int runnumber) {
 int rel = 10;
//  if (m_idSF)return m_idSF->scaleFactorMedium(m_ElectronClusterEta->at(il),GetElectronTransverseMomentum(il),0,2); 
 float eta = m_ElectronClusterEta->at(il);
 float corrE; 
 float ET = GetElectronTransverseMomentum(il,corrE);
 
 std::pair<float,float> sf_error = m_idSF->scaleFactor(ET,set,0,rel,1,runnumber);
  return sf_error;
}
/*
float ElectronReader::CalcIso(unsigned int il) throw ( SError ) {
  if (not okMC) {
    std::cout << "ERROR: you must set mc flag in electron reader class." << std::endl;
    throw SError(SError::StopExecution);
  }
         
  return CaloIsoCorrection::GetPtNPVCorrectedIsolation(nPV,
						       m_ElectronClusterE->at(il),
						       m_ElectronEtaS2->at(il),
						       m_ElectronPointing->at(il),
						       m_ElectronClusterEta->at(il),
						       20,
						       isMC,
						       m_ElectronIsoCone20->at(il),
						       false,
						       CaloIsoCorrection::ELECTRON);
}

bool ElectronReader::IsGoodElectronTop(unsigned int il, float etmin) {
  if (il > m_ElectronAuthor->size()) return false;
  if (not m_ElectronTight->at(il)) return false; 
  int author = m_ElectronAuthor->at(il);
  if ((author != 1) && (author != 3)) return false;
  float etc = m_ElectronClusterE->at(il)/TMath::CosH(m_ElectronTrackEta->at(il));
  if (etc < etmin) return false;
  float aeta = TMath::Abs(m_ElectronClusterEta->at(il)); 
  if ( aeta >= 2.47 || ( (aeta >= 1.37) && ( aeta <= 1.52 )))  return false;
  if ((m_ElectronOQ->at(il)&1446)!=0) return false;
  if ( CalcIso(il) > 3500 ) return false; //!new iso cut!
  return true;
}

bool ElectronReader::IsMediumPlusPlus(unsigned int il){
  if (!owner) return false;
  if (il >= m_ElectronClusterEta->size()) return false;
  float eT=m_ElectronClusterE->at(il)/TMath::CosH(m_ElectronTrackEta->at(il));
  float rhad  = DukHepFilter::safeRatio(m_ElectronEtHad->at(il),eT);
  float rhad1 = DukHepFilter::safeRatio(m_ElectronEtHadOne->at(il),eT);
  float emax2 = m_ElectronEmax2->at(il);
  float emax  = m_ElectronEmaxS1->at(il);
  float demax = DukHepFilter::safeRatio(emax-emax2,emax+emax2);
  int ntrt = m_ElectronTrackNTRTHits->at(il);
  int ntrto = m_ElectronNTRTOutliers->at(il);
  return isMediumPlusPlus(m_ElectronClusterEta->at(il),
			  eT,
			  rhad, rhad1, 
			  m_ElectronREta->at(il),
			  m_ElectronWEta2->at(il), //is this right?
			  m_ElectronF1->at(il), 
			  m_ElectronWSTot->at(il),
			  demax, 
			  m_ElectronDeltaEta1->at(il),
			  m_ElectronTrackD0->at(il),
			  ((ntrt + ntrto) != 0) ? m_ElectronTRTHighTOutliersRatio->at(il) : 0,//fillerbug
			  ntrt, ntrto,
			  m_ElectronNSiHits->at(il),
			  m_ElectronTrackNPixelHits->at(il),
			  m_ElectronNPixelOutliers->at(il),			   
			  m_ElectronTrackNBLayerHits->at(il),
			  m_ElectronNBLayerOutliers->at(il),
			  m_ElectronExpectBLayerHit->at(il));
}
bool ElectronReader::Matching_L1_EM14(TLorentzVector lv_ele, int el_index){
    if(!m_L1_EM14) return false;
    int indexL1 = m_el_L1_index->at(el_index);
    if(indexL1 <0) return false;
  if(!m_trig_L1_emtau_L1_EM14->at(indexL1)) return false;
    double L1_eta = m_trig_L1_emtau_eta->at(indexL1);
    double L1_phi = m_trig_L1_emtau_phi->at(indexL1);
    TLorentzVector lv_L1;
    lv_L1.SetPtEtaPhiM(1.0,L1_eta,L1_phi,1.0);
    double L1_dR=lv_L1.DeltaR(lv_ele);
  
    double L1_dR= m_el_L1_dr->at(el_index);
    if(L1_dR<0.15) return true;
    return false;
}
*/
bool ElectronReader::Matching_L1_EM16(TLorentzVector lv_ele, int el_index){
    if(!m_L1_EM16) return false;
    int indexL1 = m_el_L1_index->at(el_index);
    if(indexL1 <0) return false;
/*    if(!m_trig_L1_emtau_L1_EM16->at(indexL1)) return false;
    double L1_eta = m_trig_L1_emtau_eta->at(indexL1);
    double L1_phi = m_trig_L1_emtau_phi->at(indexL1);
    TLorentzVector lv_L1;
    lv_L1.SetPtEtaPhiM(1.0,L1_eta,L1_phi,1.0);
    double L1_dR=lv_L1.DeltaR(lv_ele);
  */
    double L1_dR= m_el_L1_dr->at(el_index);
    if(L1_dR<0.15) return true;
    return false;
}
/*
bool Matching_L1_EM16_VH(TLorentzVector lv_ele, int el_index){
    int indexL1 = m_L1_index->at(el_index);
    if(indexL1 <0) return false;
    if(!m_trig_L1_emtau_L1_EM16_VH->at(indexL1)) return false;
    double L1_eta = m_trig_L1_emtau_eta->at(indexL1);
    double L1_phi = m_trig_L1_emtau_phi->at(indexL1);
    TLorentzVector lv_L1;
    lv_L1.SetPtEtaPhiM(1.0,L1_eta,L1_phi,1.0);
    double L1_dR=lv_L1.DeltaR(lv_ele);
    if(L1_dR<0.15) return true;
    return false;
}
*/
/*
bool ElectronReader::Matching_e20_medium (TLorentzVector lv_ele){
    if(!m_EF_e20_medium) return false;
    for(int j=0; j<m_trig_EF_el_n; j++)
    {
    if(!m_trig_EF_el_EF_e20_medium->at(j))   continue;
    double EF_eta = m_trig_EF_el_eta->at(j);
    double EF_phi = m_trig_EF_el_phi->at(j);
    TLorentzVector lv_EF;
    lv_EF.SetPtEtaPhiM(1.0,EF_eta,EF_phi,1.0);
    double EF_dR=lv_EF.DeltaR(lv_ele);
    if(EF_dR<0.15) return true;                                                        }
    return false;
}

bool ElectronReader::Matching_e22_medium (TLorentzVector lv_ele){    
    if(!m_EF_e22_medium) return false;
    for(int j=0; j<m_trig_EF_el_n; j++)
    {
    if(!m_trig_EF_el_EF_e22_medium->at(j))   continue;
    double EF_eta = m_trig_EF_el_eta->at(j);
    double EF_phi = m_trig_EF_el_phi->at(j);
    TLorentzVector lv_EF;
    lv_EF.SetPtEtaPhiM(1.0,EF_eta,EF_phi,1.0);
    double EF_dR=lv_EF.DeltaR(lv_ele);
    if(EF_dR<0.15) return true;                                                        }
    return false;
}
*/
/*bool ElectronReader::Matching_e22vh_medium (TLorentzVector lv_ele){
       for(int j=0; j<m_trig_EF_el_n; j++)
    {
    if(!m_trig_EF_el_EF_e22vh_medium->at(j))   continue;
    double EF_eta = m_trig_EF_el_eta->at(j);
    double EF_phi = m_trig_EF_el_phi->at(j);
    TLorentzVector lv_EF;
    lv_EF.SetPtEtaPhiM(1.0,EF_eta,EF_phi,1.0);
    double EF_dR=lv_EF.DeltaR(lv_ele);
    if(EF_dR<0.15) return true;                                                        }
    return false;
}
*/