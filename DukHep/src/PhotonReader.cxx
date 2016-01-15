///bin/dukhep_create_reader.py -n PhotonReader EleMacros.dat MediumPlusPlus.dat
#include "include/PhotonReader.h"
#include "include/DukHepFilter.h"
#include <utility>
#include <iostream>
#include <ctime>

PhotonReader::PhotonReader(SCycleBaseNTuple * ownr): owner(ownr),m_idSF(0),
m_converted_tool("$ROOTCOREDIR/../egammaAnalysisUtils/share/conversion.root"),
m_NumPhotons(0),
m_PhotonIsoCone20(0),
m_PhotonIsoCone30(0),
m_PhotonIsoCone40(0),
m_PhotonPtCone20(0),
m_PhotonPtCone30(0),
m_PhotonPtCone40(0),
m_PhotonTopoCone20(0),
m_PhotonTopoCone30(0),
m_PhotonTopoCone40(0),
m_PhotonED_median(0),
m_PhotonIsoCone40_ED_corrected(0),
m_PhotonAuthor(0),
m_PhotonMedium(0),
m_PhotonIsConv(0),
m_PhotonOQ(0),
m_PhotonPt(0),
m_PhotonEta(0),
m_PhotonPhi(0),
m_PhotonE(0),
m_PhotonRconv(0),
m_PhotonClusterE(0),
m_PhotonClusterEta(0),
m_PhotonClusterPhi(0),
m_PhotonClusterPt(0),
m_PhotonCharge(0),
m_PhotonEFDistance(0),
m_PhotonEFIndex(0),
m_EFPhotonPassed(0),
m_PhotonEtHad(0),
m_PhotonEtHadOne(0),
m_PhotonF1(0),
m_Photonfside(0),
m_Photonws3(0),
m_PhotonEminS1(0),
m_PhotonEmaxS1(0),
m_PhotonEmax2(0),
m_PhotonE233(0),
m_PhotonE237(0),
m_PhotonE277(0),
m_PhotonWSTot(0),
m_PhotonWEta2(0),
m_PhotonDeltaEta1(0),
m_PhotonREta(0),
m_PhotonRPhi(0),
m_PhotonEtaS2(0),
m_PhotonPointing(0),
m_PhotonTopoEtCone60(0),
m_PhotonLoose(0),
m_PhotonIsEM(0), 
m_PhotonTight(0)
{}
void PhotonReader::ConnectVariables(std::string treename){
  owner->ConnectVariable( treename.c_str(), VarName("ph_n").c_str(), m_NumPhotons );
  owner->ConnectVariable( treename.c_str(), VarName("ph_Etcone20").c_str(), m_PhotonIsoCone20 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_Etcone30").c_str(), m_PhotonIsoCone30 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_Etcone40").c_str(), m_PhotonIsoCone40 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_ptcone20").c_str(), m_PhotonPtCone20 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_ptcone30").c_str(), m_PhotonPtCone30 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_ptcone40").c_str(), m_PhotonPtCone40 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_topoEtcone20").c_str(), m_PhotonTopoCone20 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_topoEtcone30").c_str(), m_PhotonTopoCone30 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_topoEtcone40").c_str(), m_PhotonTopoCone40 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_ED_median").c_str(), m_PhotonED_median );
  owner->ConnectVariable( treename.c_str(), VarName("ph_Etcone40_ED_corrected").c_str(), m_PhotonIsoCone40_ED_corrected );
  owner->ConnectVariable( treename.c_str(), VarName("ph_author").c_str(), m_PhotonAuthor );
//  owner->ConnectVariable( treename.c_str(), VarName("ph_medium").c_str(), m_PhotonMedium );
  owner->ConnectVariable( treename.c_str(), VarName("ph_isConv").c_str(), m_PhotonIsConv );
  owner->ConnectVariable( treename.c_str(), VarName("ph_OQ").c_str(), m_PhotonOQ );
  owner->ConnectVariable( treename.c_str(), VarName("ph_cl_E").c_str(), m_PhotonClusterE );
  owner->ConnectVariable( treename.c_str(), VarName("ph_pt").c_str(), m_PhotonPt );
  owner->ConnectVariable( treename.c_str(), VarName("ph_eta").c_str(), m_PhotonEta );
  owner->ConnectVariable( treename.c_str(), VarName("ph_phi").c_str(), m_PhotonPhi );
  owner->ConnectVariable( treename.c_str(), VarName("ph_E").c_str(), m_PhotonE );
  owner->ConnectVariable( treename.c_str(), VarName("ph_Rconv").c_str(), m_PhotonRconv );
  owner->ConnectVariable( treename.c_str(), VarName("ph_cl_eta").c_str(), m_PhotonClusterEta );
  owner->ConnectVariable( treename.c_str(), VarName("ph_cl_phi").c_str(), m_PhotonClusterPhi );
  owner->ConnectVariable( treename.c_str(), VarName("ph_cl_pt").c_str(), m_PhotonClusterPt );
//  owner->ConnectVariable( treename.c_str(), VarName("ph_EF_index").c_str(), m_PhotonEFIndex );
//  owner->ConnectVariable( treename.c_str(), VarName("trig_EF_ph_EF_e20_medium").c_str(), m_EFPhotonPassed );
  //owner->ConnectVariable( treename.c_str(), VarName("ph_EF_dr").c_str(), m_PhotonEFDistance );
  owner->ConnectVariable( treename.c_str(), VarName("ph_Ethad").c_str(), m_PhotonEtHad );
  owner->ConnectVariable( treename.c_str(), VarName("ph_topoEtcone60").c_str(), m_PhotonTopoEtCone60 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_Ethad1").c_str(), m_PhotonEtHadOne );
  owner->ConnectVariable( treename.c_str(), VarName("ph_f1").c_str(), m_PhotonF1);
  owner->ConnectVariable( treename.c_str(), VarName("ph_Emins1").c_str(), m_PhotonEminS1 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_emaxs1").c_str(), m_PhotonEmaxS1 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_Emax2").c_str(), m_PhotonEmax2 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_E233").c_str(), m_PhotonE233 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_E237").c_str(), m_PhotonE237 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_E277").c_str(), m_PhotonE277 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_fside").c_str(), m_Photonfside );
  owner->ConnectVariable( treename.c_str(), VarName("ph_ws3").c_str(), m_Photonws3 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_wstot").c_str(), m_PhotonWSTot );
  owner->ConnectVariable( treename.c_str(), VarName("ph_weta2").c_str(), m_PhotonWEta2 );
//  owner->ConnectVariable( treename.c_str(), VarName("ph_deltaeta1").c_str(), m_PhotonDeltaEta1 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_reta").c_str(), m_PhotonREta );
  owner->ConnectVariable( treename.c_str(), VarName("ph_rphi").c_str(), m_PhotonRPhi);
//  owner->ConnectVariable( treename.c_str(), VarName("ph_ptcone20").c_str(), m_PhotonTrackIso );
  owner->ConnectVariable( treename.c_str(), VarName("ph_etas2").c_str(), m_PhotonEtaS2 );
  owner->ConnectVariable( treename.c_str(), VarName("ph_etap").c_str(), m_PhotonPointing );
  owner->ConnectVariable( treename.c_str(), VarName("ph_loose").c_str(), m_PhotonLoose );
  owner->ConnectVariable( treename.c_str(), VarName("ph_tight").c_str(), m_PhotonTight );
  owner->ConnectVariable( treename.c_str(), VarName("ph_isEM").c_str(), m_PhotonIsEM );
}
void PhotonReader::DeclareVariables(){
}
void PhotonReader::Reset(){
  }
void PhotonReader::CopyToOutput(){
}
void PhotonReader::InitEnergyRescaler(egRescaler::EnergyRescalerUpgrade* m_ers){
phrs = m_ers;
return;
}     

void PhotonReader::DR(std::vector<int> &Phcounter){
Phcounter.at(7)++;
}

void PhotonReader::Loose(std::vector<int> &Phcounter){
Phcounter.at(6)++;
}

TLorentzVector PhotonReader::PhotonFourVector(int il) {
    TLorentzVector photon;
    double ph_smeared_E;   
    double et = m_PhotonClusterE->at(il)/cosh(m_PhotonEtaS2->at(il));
    //ConvertedPhotonScaleTool converted_tool("$ROOTCOREDIR/../egammaAnalysisUtils/share/conversion.root");
    if(isMC) {
     //int seed = static_cast<int>(1.e+5*fabs(m_PhotonClusterPhi->at(il)));
     //if (!seed) ++seed;
     //phrs->SetRandomSeed(seed);
      //phrs->SetRandomSeed(1771561 + (EventNumber)+10*il);
     phrs->SetRandomSeed(EventNumber+100*il);
     double cluster_eta = m_PhotonEtaS2->at(il); // example with D3PD
     double cluster_energy = m_PhotonClusterE->at(il)*phrs->getSmearingCorrection(m_PhotonClusterEta->at(il),m_PhotonClusterE->at(il),egRescaler::EnergyRescalerUpgrade::NOMINAL); // example with D3PD
     double cluster_energy_corrected = cluster_energy;
     if (m_PhotonIsConv->at(il)== 1) {
     double conversion_radius = m_PhotonRconv->at(il); // example with D3PD
     double converted_scale = m_converted_tool.Scale(cluster_eta,cluster_energy,conversion_radius);
     cluster_energy_corrected = cluster_energy*converted_scale; 
     }
    ph_smeared_E = cluster_energy_corrected;
  }
  else if(!isMC) {
  if(!m_PhotonIsConv->at(il)) { 
    double cl_eta = m_PhotonClusterEta->at(il);
    double cl_E = m_PhotonClusterE->at(il);
    double ph_smeared_E_tmp = phrs->applyEnergyCorrection(cl_eta,cl_E,egRescaler::EnergyRescalerUpgrade::Unconverted,egRescaler::EnergyRescalerUpgrade::Nominal);
    ph_smeared_E = ph_smeared_E_tmp;
  }
   else {
   double ph_smeared_E_tmp = phrs->applyEnergyCorrection(m_PhotonClusterEta->at(il),m_PhotonClusterE->at(il),egRescaler::EnergyRescalerUpgrade::Converted,egRescaler::EnergyRescalerUpgrade::Nominal);
   ph_smeared_E = ph_smeared_E_tmp;
   }
 }

  double ph_pt = ph_smeared_E/cosh(m_PhotonEtaS2->at(il));
  double ph_eta = m_PhotonClusterEta->at(il);
  double ph_phi = m_PhotonClusterPhi->at(il);
  photon.SetPtEtaPhiM(ph_pt,ph_eta,ph_phi,0);
  return photon;
}

double PhotonReader::CorrectedIso(int il,int method,float ConeSize)
{
  TLorentzVector photon = PhotonFourVector(il); 
  double ph_smeared_E = photon.E();
  double ph_Iso_corrected = 0;
  double ED_median = m_PhotonED_median->at(il);
if(method == 0){
  double Iso;
  if(ConeSize==20) Iso = m_PhotonIsoCone20->at(il);
  if(ConeSize==30) Iso = m_PhotonIsoCone30->at(il);
  if(ConeSize==40) Iso = m_PhotonIsoCone40->at(il);
  ph_Iso_corrected = CaloIsoCorrection::GetPtEDCorrectedIsolation(m_PhotonIsoCone40->at(il),m_PhotonIsoCone40_ED_corrected->at(il),ph_smeared_E,m_PhotonEtaS2->at(il),m_PhotonPointing->at(il),m_PhotonClusterEta->at(il),ConeSize,isMC,Iso,m_PhotonIsConv->at(il),CaloIsoCorrection::PHOTON);
} 
if(method==1)
{
  double Iso;
  if(ConeSize==20) Iso = m_PhotonTopoCone20->at(il);
  if(ConeSize==30) Iso = m_PhotonTopoCone30->at(il);
  if(ConeSize==40) Iso = m_PhotonTopoCone40->at(il);
ph_Iso_corrected = CaloIsoCorrection::GetPtEDCorrectedTopoIsolation(ED_median,m_PhotonClusterE->at(il),m_PhotonEtaS2->at(il),m_PhotonPointing->at(il),m_PhotonClusterEta->at(il),ConeSize,isMC,Iso,m_PhotonIsConv->at(il),CaloIsoCorrection::PHOTON,CaloIsoCorrection::REL17);
}
return ph_Iso_corrected;
}

std::vector<int> PhotonReader::PhotonObjID(int il,float etmin)    
{
std::vector<int> PhObjID;
TLorentzVector photon = PhotonFourVector(il); 
double ph_pt = photon.Pt();
double aeta = fabs(m_PhotonEtaS2->at(il));
double correction = photon.E()/m_PhotonClusterE->at(il);

if (ph_pt < etmin) PhObjID.push_back(0); else PhObjID.push_back(1);//ph_id: 0
if(!(m_PhotonOQ->at(il)&34214)==0) PhObjID.push_back(0);else PhObjID.push_back(1);//ph_id: 1
if ( ( (m_PhotonOQ->at(il)&134217728)!=0 && (m_PhotonREta->at(il)>0.98||m_PhotonRPhi->at(il)>1.0||(m_PhotonOQ->at(il)&67108864)!=0) ) ) PhObjID.push_back(0);else PhObjID.push_back(1);////ph_id: 2
if ( aeta >= 2.37 || ( (aeta >= 1.37) && ( aeta <= 1.52 ))) PhObjID.push_back(0);else PhObjID.push_back(1);////ph_id: 3
if( !((m_PhotonIsEM->at(il) & 0x800000) ==0)) PhObjID.push_back(0);else PhObjID.push_back(1);
////ph_id: 4
FudgeMCTool fudgePhoton;
fudgePhoton.SetPreselection(14);

double eta2=m_PhotonEtaS2->at(il);
double rhad1=m_PhotonEtHadOne->at(il)/ph_pt;
double rhad=m_PhotonEtHad->at(il)/ph_pt;
double e277= m_PhotonE277->at(il); // ben uses smeared
double reta=m_PhotonREta->at(il);
double rphi=m_PhotonRPhi->at(il) ;
double weta2=m_PhotonWEta2->at(il);
double f1=m_PhotonF1->at(il);
double fside=m_Photonfside->at(il);
double wtot=m_PhotonWSTot->at(il);
double w1 = m_Photonws3->at(il);
double m_emax2=m_PhotonEmax2->at(il);
double m_emin2 = m_PhotonEminS1->at(il);
double m_emax1 = m_PhotonEmaxS1->at(il);
double deltae = (m_emax2-m_emin2)*correction;  
double eratio = (m_emax1+m_emax2)==0. ? 0 : (m_emax1-m_emax2)/(m_emax1+m_emax2);

if(isMC)
{
fudgePhoton.FudgeShowers( ph_pt,eta2,rhad1,rhad,e277,reta,rphi,weta2,f1,fside,wtot,w1,deltae,eratio,m_PhotonIsConv->at(il),14);
}
PhotonIDTool GammaSelection = PhotonIDTool(ph_pt,eta2,rhad1,rhad,e277,reta,rphi,weta2,f1,fside,wtot,w1,deltae,eratio,m_PhotonIsConv->at(il) );
unsigned int newisEM = GammaSelection.isEM(4,2012);
bool isLoose = !(newisEM & 392194); 
int bit17 = (newisEM >> 17) & 1; // DeltaE
int bit18 = (newisEM >> 18) & 1; // Wtot
int bit19 = (newisEM >> 19) & 1; // Fracm
int bit20 = (newisEM >> 20) & 1; // Weta1c
int bit21 = (newisEM >> 21) & 1; // DEmaxs1
bool passtight = GammaSelection.PhotonCutsTight(2012);
PhObjID.push_back(isLoose);//ph_id: 5
PhObjID.push_back(bit17);//ph_id: 6
PhObjID.push_back(bit18);//ph_id: 7  does not use
PhObjID.push_back(bit19);//ph_id: 8
PhObjID.push_back(bit20);//ph_id: 9
PhObjID.push_back(bit21);//ph_id: 10
PhObjID.push_back(passtight); //ph_id: 11
if(CorrectedIso(il,1,40) > 4000) PhObjID.push_back(0); else PhObjID.push_back(1);//ph_id: 12
return PhObjID;
}


bool PhotonReader::IsGoodPhoton(int il,float etmin,bool isBkgStudy,std::vector<int> &Phcounter)    
{
  Phcounter.at(0)++;
  TLorentzVector photon = PhotonFourVector(il); 
  double ph_pt = photon.Pt();
  double aeta = fabs(m_PhotonEtaS2->at(il));
  double correction = photon.E()/m_PhotonClusterE->at(il);

  if (ph_pt < etmin) return false;
  Phcounter.at(1)++;
  if(!(m_PhotonOQ->at(il)&34214)==0) return false;
  Phcounter.at(2)++;
  if ( ( (m_PhotonOQ->at(il)&134217728)!=0 && (m_PhotonREta->at(il)>0.98||m_PhotonRPhi->at(il)>1.0||(m_PhotonOQ->at(il)&67108864)!=0) ) ) return false;
  Phcounter.at(3)++;
  if ( aeta >= 2.37 || ( (aeta >= 1.37) && ( aeta <= 1.52 )))  return false;
  Phcounter.at(4)++;
  if( !((m_PhotonIsEM->at(il) & 0x800000) ==0)) return false;
  Phcounter.at(5)++;

  FudgeMCTool fudgePhoton;
  fudgePhoton.SetPreselection(14);

  double eta2=m_PhotonEtaS2->at(il);
  double rhad1=m_PhotonEtHadOne->at(il)/ph_pt;
  double rhad=m_PhotonEtHad->at(il)/ph_pt;
  double e277= m_PhotonE277->at(il); // ben uses smeared
  double reta=m_PhotonREta->at(il);
  double rphi=m_PhotonRPhi->at(il) ;
  double weta2=m_PhotonWEta2->at(il);
  double f1=m_PhotonF1->at(il);
  double fside=m_Photonfside->at(il);
  double wtot=m_PhotonWSTot->at(il);
  double w1 = m_Photonws3->at(il);
  double m_emax2=m_PhotonEmax2->at(il);
  double m_emin2 = m_PhotonEminS1->at(il);
  double m_emax1 = m_PhotonEmaxS1->at(il);
  double deltae = (m_emax2-m_emin2)*correction;  
  double eratio = (m_emax1+m_emax2)==0. ? 0 : (m_emax1-m_emax2)/(m_emax1+m_emax2);

  if(isMC){
    fudgePhoton.FudgeShowers( ph_pt,eta2,rhad1,rhad,e277,reta,rphi,weta2,f1,fside,wtot,w1,deltae,eratio,m_PhotonIsConv->at(il),14);
  }
  PhotonIDTool GammaSelection = PhotonIDTool(ph_pt,eta2,rhad1,rhad,e277,reta,rphi,weta2,f1,fside,wtot,w1,deltae,eratio,m_PhotonIsConv->at(il) );
  //int map =2;
  bool passtight = GammaSelection.PhotonCutsTight(2012);
  unsigned int newisEM = GammaSelection.isEM(4,2012);
  bool isLoose = !(newisEM & 392194); 
  bool passLoose =GammaSelection.PhotonCutsLoose(4);
//  if(!isBkgStudy&&!passtight) return false;
  if(!passLoose) return false;
  Phcounter.at(6)++;
//  if(!isBkgStudy&&CorrectedIso(il,1,40)>4000) return false;//photon to be isolated
  //if(fabs(ph_Etcone30_corrected)> 6000) return false;
  return true;
}

std::vector<double> PhotonReader::PhotonShowerShapes(int il)
{
TLorentzVector photon = PhotonFourVector(il); 
double ph_pt = photon.Pt();
std::vector<double> showershapes;
FudgeMCTool fudgePhoton;
fudgePhoton.SetPreselection(14);
double eta2=m_PhotonEtaS2->at(il);
double rhad1=m_PhotonEtHadOne->at(il)/ph_pt;
double rhad=m_PhotonEtHad->at(il)/ph_pt;
double e277= m_PhotonE277->at(il);
double reta=m_PhotonREta->at(il);
double rphi=m_PhotonRPhi->at(il) ;
double weta2=m_PhotonWEta2->at(il);
double f1=m_PhotonF1->at(il);
double fside=m_Photonfside->at(il);
double wtot=m_PhotonWSTot->at(il);
double w1 = m_Photonws3->at(il);
double m_emax2=m_PhotonEmax2->at(il);
double m_emin2 = m_PhotonEminS1->at(il);
double m_emax1 = m_PhotonEmaxS1->at(il);
double deltae = m_emax2-m_emin2;  
double eratio = (m_emax1+m_emax2)==0. ? 0 : (m_emax1-m_emax2)/(m_emax1+m_emax2);
if(isMC)
{fudgePhoton.FudgeShowers( ph_pt,eta2,rhad1,rhad,e277,reta,rphi,weta2,f1,fside,wtot,w1,deltae,eratio,m_PhotonIsConv->at(il),14);
}
//PhotonIDTool GammaSelection = PhotonIDTool(ph_pt,eta2,rhad1,rhad,e277,reta,rphi,weta2,f1,fside,wtot,w1,deltae,eratio,m_PhotonIsConv->at(il) );
showershapes.push_back(eta2);
showershapes.push_back(rhad1);
showershapes.push_back(rhad);
showershapes.push_back(e277);
showershapes.push_back(reta);
showershapes.push_back(rphi);
showershapes.push_back(weta2);
showershapes.push_back(f1);
showershapes.push_back(fside);
showershapes.push_back(wtot);
showershapes.push_back(w1);
showershapes.push_back(deltae);
showershapes.push_back(eratio);
showershapes.push_back(m_PhotonIsConv->at(il));
return showershapes;
}

bool PhotonReader::IsTightPhoton(int il){
  TLorentzVector photon = PhotonFourVector(il);
double ph_pt = photon.Pt();
double ph_Et = photon.Et();
double eta2=m_PhotonEtaS2->at(il);
double rhad1=m_PhotonEtHadOne->at(il)/ph_pt;
double rhad=m_PhotonEtHad->at(il)/ph_pt;
double e277= m_PhotonE277->at(il);
double reta=m_PhotonREta->at(il);
double rphi=m_PhotonRPhi->at(il) ;
double weta2=m_PhotonWEta2->at(il);
double f1=m_PhotonF1->at(il);
double fside=m_Photonfside->at(il);
double wtot=m_PhotonWSTot->at(il);
double w1 = m_Photonws3->at(il);
double m_emax2=m_PhotonEmax2->at(il);
double m_emin2 = m_PhotonEminS1->at(il);
double m_emax1 = m_PhotonEmaxS1->at(il);
double deltae = m_emax2-m_emin2;
int isConv = m_PhotonIsConv->at(il);
double eratio = (m_emax1+m_emax2)==0. ? 0 : (m_emax1-m_emax2)/(m_emax1+m_emax2);
if(isMC)
{
	FudgeMCTool fudgePhoton(ph_Et, eta2,  isConv, 13);
	fudgePhoton.FudgeShowers( ph_pt,eta2,rhad1,rhad,e277,reta,rphi,weta2,f1,fside,wtot,w1,deltae,eratio,isConv,-999);
}
PhotonIDTool GammaSelection = PhotonIDTool(ph_pt,eta2,rhad1,rhad,e277,reta,rphi,weta2,f1,fside,wtot,w1,deltae,eratio,isConv );
//int map =2;
if(GammaSelection.PhotonCutsTight(2012)) return true;

return false;

}
//
// THis is my method to determine whether a Photon is AntiTight, for the 
//ABCD method.  It is the current definition for the Zgg group
//
bool PhotonReader::IsAntiTightPhoton(int il){
//  TLorentzVector photon;
//  PhotonFourVector(il,photon);
//double ph_pt = photon.Pt();
//double ph_Et = photon.Et();
//double eta2=m_PhotonEtaS2->at(il);
//double rhad1=m_PhotonEtHadOne->at(il)/ph_pt;
//double rhad=m_PhotonEtHad->at(il)/ph_pt;
//double e277= m_PhotonE277->at(il);
//double reta=m_PhotonREta->at(il);
//double rphi=m_PhotonRPhi->at(il) ;
//double weta2=m_PhotonWEta2->at(il);
//double f1=m_PhotonF1->at(il);
//double fside=m_Photonfside->at(il);
//double wtot=m_PhotonWSTot->at(il);
//double w1 = m_Photonws3->at(il);
//double m_emax2=m_PhotonEmax2->at(il);
//double m_emin2 = m_PhotonEminS1->at(il);
//double m_emax1 = m_PhotonEmaxS1->at(il);
//double deltae = m_emax2-m_emin2;
//int isConv = m_PhotonIsConv->at(il);
//double eratio = (m_emax1+m_emax2)==0. ? 0 : (m_emax1-m_emax2)/(m_emax1+m_emax2);
//if(isMC)
//{
//	FudgeMCTool fudgePhoton(ph_Et, eta2,  isConv, 13);
//	fudgePhoton.FudgeShowers( ph_pt,eta2,rhad1,rhad,e277,reta,rphi,weta2,f1,fside,wtot,w1,deltae,eratio,isConv,-999);
//}
//PhotonIDTool GammaSelection = PhotonIDTool(ph_pt,eta2,rhad1,rhad,e277,reta,rphi,weta2,f1,fside,wtot,w1,deltae,eratio,isConv );
////int map =2;
//int isEM = GammaSelection.isEM(4,12);
int isEM = m_PhotonIsEM->at(il);

int isEMcut = isEM & 130050;
if((isEM& 130050)) return false;

int bit17 = (isEM >> 17) & 1; // DeltaE
int bit18 = (isEM >> 18) & 1; // Wtot
int bit19 = (isEM >> 19) & 1; // Fracm
int bit20 = (isEM >> 20) & 1; // Weta1c
int bit21 = (isEM >> 21) & 1; // DEmaxs1

bool isLoose = ((bit18+bit21)<1);
bool isNotTight = ((bit20 + bit19 + bit17) > 0);

return (isLoose&&isNotTight);

}
//Finds whether a Photon is Loose
bool PhotonReader::IsLoosePhoton(int il){
TLorentzVector photon = PhotonFourVector(il);
double ph_pt = photon.Pt();
double ph_Et = photon.Et();
double eta2=m_PhotonEtaS2->at(il);
double rhad1=m_PhotonEtHadOne->at(il)/ph_pt;
double rhad=m_PhotonEtHad->at(il)/ph_pt;
double e277= m_PhotonE277->at(il);
double reta=m_PhotonREta->at(il);
double rphi=m_PhotonRPhi->at(il) ;
double weta2=m_PhotonWEta2->at(il);
double f1=m_PhotonF1->at(il);
double fside=m_Photonfside->at(il);
double wtot=m_PhotonWSTot->at(il);
double w1 = m_Photonws3->at(il);
double m_emax2=m_PhotonEmax2->at(il);
double m_emin2 = m_PhotonEminS1->at(il);
double m_emax1 = m_PhotonEmaxS1->at(il);
double deltae = m_emax2-m_emin2;
int isConv = m_PhotonIsConv->at(il);
double eratio = (m_emax1+m_emax2)==0. ? 0 : (m_emax1-m_emax2)/(m_emax1+m_emax2);
if(isMC)
{
	FudgeMCTool fudgePhoton(ph_Et, eta2,  isConv, 13);
	fudgePhoton.FudgeShowers( ph_pt,eta2,rhad1,rhad,e277,reta,rphi,weta2,f1,fside,wtot,w1,deltae,eratio,isConv,-999);
}
PhotonIDTool GammaSelection = PhotonIDTool(ph_pt,eta2,rhad1,rhad,e277,reta,rphi,weta2,f1,fside,wtot,w1,deltae,eratio,isConv );
//int map =2;
return GammaSelection.PhotonCutsLoose(4);

}

//
