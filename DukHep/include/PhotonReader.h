////bin/dukhep_create_reader.py -n PhotonReader EleMacros.dat MediumPlusPlus.dat
#ifndef PHOTONREADER
#define PHOTONREADER 1
#include <vector>
#include <string>
#include <map>
#include "TLorentzVector.h"
#include <TH1.h>
#include "core/include/SCycleBaseNTuple.h"
#include "egammaAnalysisUtils/egammaSFclass.h"
#include "egammaAnalysisUtils/CaloIsoCorrection.h"
#include "egammaAnalysisUtils/EnergyRescaler.h"
#include "egammaAnalysisUtils/EnergyRescalerUpgrade.h"
#include "egammaAnalysisUtils/FudgeMCTool.h"
#include "egammaAnalysisUtils/ConvertedPhotonScaleTool.h"
#include "egammaAnalysisUtils/PhotonIDTool.h"
class PhotonReader {
  public:
    PhotonReader(SCycleBaseNTuple * o);
    virtual ~PhotonReader(){};
    std::string VarName(const char * s) {return std::string(s);};
    void ConnectVariables(std::string treename);
    void DeclareVariables();
    void Reset();
    void CopyToOutput();
    //define your getters here
    std::vector<double> PhotonShowerShapes(int il);
    void InitEnergyRescaler(egRescaler::EnergyRescalerUpgrade*); 
    void SetMC(bool is) {isMC = is; okMC=true;};
    void SetNPV(int pv) {npv = pv;}; //DO THIS ALWAYS
    void SetEventNumber(int EN) {EventNumber = EN;}; //DO THIS ALWAYS
    bool UsePhotonTrack(unsigned int il);
    float GetPhotonTransverseMomentum(unsigned int il);
    void DR(std::vector<int> &Phcounter);
    void Loose(std::vector<int> &Phcounter);
    bool IsGoodPhotonExo(unsigned int il, float etmin);
    bool IsGoodPhoton(int il, float etmin,bool isBkgStudy,std::vector<int> &Phcounter);
    std::vector<int> PhotonObjID(int il, float etmin);
    bool IsTightPhoton(int il);
    bool IsLoosePhoton(int il);
    bool IsAntiTightPhoton(int il);
    bool IsTrackPhotonExo(unsigned int il);
    bool IsSidebandPhotonExo(unsigned int il, float etmin);
    std::pair<float,float> GetIDScaleFactor(unsigned int il);
    float CalcIso(unsigned int il) throw ( SError );    
    TLorentzVector PhotonFourVector(int il);
    TLorentzVector PhotonCluster(int il);
    double CorrectedIso(int il,int method,float ConeSize);
    bool IsGoodPhotonTop(unsigned int il, float ptmin);  
//    int CountGoodTopPhotons(float etmin=25000)
//    {int count(0); for (int i=0; i<m_NumPhotons; ++i) if (IsGoodElectronTop(i,etmin)) ++count; return count;}
    bool PhotonMatchesTrigger(unsigned int il) {
      if (m_PhotonEFDistance->at(il) > 0.15) return false;
      int matched=m_PhotonEFIndex->at(il);
      if ((matched < 0)||(matched >= int(m_EFPhotonPassed->size()))) return false;
      if (not m_EFPhotonPassed->at(matched)) return false;
      return true;
    }
    bool IsMediumPlusPlus(unsigned int il);
    bool IsIsolatedExo(unsigned int il);
    
  private:
    bool isMC,okMC;
    int npv;
    int EventNumber;
  public:
    SCycleBaseNTuple * owner;    
    egammaSFclass * m_idSF;
    egRescaler::EnergyRescalerUpgrade* phrs;
    ConvertedPhotonScaleTool m_converted_tool;

  Int_t m_NumPhotons;
  std::vector<float>* m_PhotonTrackPt;
  std::vector<float>* m_PhotonTrackQoverP;
  std::vector<float>* m_PhotonTrackEta;
  std::vector<float>* m_PhotonTrackPhi;
  std::vector<float>* m_PhotonTrackTheta;
  std::vector<float>* m_PhotonVertexZ;
  std::vector<int>* m_PhotonTrackNPixelHits;
  std::vector<int>* m_PhotonTrackNSCTHits;
  std::vector<int>* m_PhotonTrackNBLayerHits;
  std::vector<int>* m_PhotonTrackNTRTHits;
  std::vector<int>* m_PhotonTrackNTRTHighThresholdHits;
  std::vector<float>* m_PhotonTrackD0;
  std::vector<float>* m_PhotonTrackD0SigWRTBeam;
  std::vector<float>* m_PhotonTrackD0SigWRTPV;
  std::vector<float>* m_PhotonUnbiasedTrackD0SigWRTPV;
  std::vector<float>* m_PhotonTrackZ0;
  std::vector<float>* m_PhotonRconv;
  std::vector<float>* m_PhotonIsoCone20;
  std::vector<float>* m_PhotonIsoCone30;
  std::vector<float>* m_PhotonIsoCone40;
  std::vector<float>* m_PhotonPtCone20;
  std::vector<float>* m_PhotonPtCone30;
  std::vector<float>* m_PhotonPtCone40;
  std::vector<float>* m_PhotonTopoCone20;
  std::vector<float>* m_PhotonTopoCone30;
  std::vector<float>* m_PhotonTopoCone40;
  std::vector<float>* m_PhotonED_median;
  std::vector<float>* m_PhotonTopoEtCone60;
  std::vector<float>* m_PhotonIsoCone40_ED_corrected;
  std::vector<int>* m_PhotonAuthor;
  std::vector<int>* m_PhotonMedium;
  std::vector<int>* m_PhotonIsConv;
  std::vector<unsigned int>* m_PhotonOQ;
  std::vector<float>* m_PhotonClusterE;
  std::vector<float>* m_PhotonPt;
  std::vector<float>* m_PhotonEta;
  std::vector<float>* m_PhotonPhi;
  std::vector<float>* m_PhotonE;
  std::vector<float>* m_PhotonClusterEta;
  std::vector<float>* m_PhotonClusterPhi;
  std::vector<float>* m_PhotonClusterPt;
  std::vector<float>* m_PhotonCharge;
  std::vector<float>* m_PhotonEFDistance;
  std::vector<int>* m_PhotonEFIndex;
  std::vector<int>* m_EFPhotonPassed;
  std::vector<float>* m_PrimaryVertexZ;
  std::vector<float>* m_PhotonEtHad;
  std::vector<float>* m_PhotonEtHadOne;
  std::vector<float>* m_PhotonF1;
  std::vector<float>* m_PhotonEminS1;
  std::vector<float>* m_PhotonEmaxS1;
  std::vector<float>* m_PhotonEmax2;
  std::vector<float>* m_PhotonE233;
  std::vector<float>* m_PhotonE237;
  std::vector<float>* m_PhotonE277;
  std::vector<float>* m_PhotonWSTot;
  std::vector<float>* m_PhotonWEta2;
  std::vector<float>* m_Photonfside;
  std::vector<float>* m_Photonws3;
  std::vector<float>* m_PhotonDeltaEta1;
  std::vector<float>* m_PhotonREta;
  std::vector<float>* m_PhotonRPhi;
  std::vector<int>* m_PhotonNTRTOutliers;
  std::vector<int>* m_PhotonNBLSharedHits;
  std::vector<int>* m_PhotonNBLayerOutliers;
  std::vector<int>* m_PhotonExpectBLayerHit;
  std::vector<float>* m_PhotonTRTHighTHitsRatio;
  std::vector<float>* m_PhotonTRTHighTOutliersRatio;
  std::vector<int>* m_PhotonNPixelOutliers;
  std::vector<int>* m_PhotonNSCTOutliers;
  std::vector<int>* m_PhotonNSiHits;
  std::vector<float>* m_PhotonTrackIso;
  std::vector<float>* m_PhotonEtaS2;
  std::vector<float>* m_PhotonPointing;
  std::vector<int>* m_PhotonLoose;
  std::vector<int>* m_PhotonTight;
  std::vector<unsigned int>* m_PhotonIsEM;
};
#endif
