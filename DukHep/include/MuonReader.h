////bin/dukhep_create_reader.py -n MuonReader ../Macros/MuonReaderMacro.dat
#ifndef MUONREADER
#define MUONREADER 1
#include <vector>
#include <string>
#include <iostream>
#include "DukHep/include/DukHepFilter.h"
#include "core/include/SCycleBaseNTuple.h"
#include "TLorentzVector.h"
#include <math.h>
#include "MuonIsolationCorrection/CorrectCaloIso.h"
#include "MuonMomentumCorrections/SmearingClass.h"
#include "MuonEfficiencyCorrections/AnalysisMuonConfigurableScaleFactors.h"
class MuonReader {
  public:
  MuonReader(SCycleBaseNTuple * o, const char* collname="mu");
    virtual ~MuonReader(){};
    void SetColl(const char * collname) {
      cname = std::string(collname);
      std::cout << "Using muon collection name " << cname << std::endl;
    };
    std::string VarName(const char * s) {
      std::string tmp(s); 
      if ((tmp.find("mu_")==0) && (tmp.find("staco")!=3) && (tmp.find("muid")!=3))
	return std::string(tmp.replace(0,2,cname)); 
      return std::string(s);
    }
    void ConnectVariables(std::string treename);
    void DeclareVariables();
    void Reset();
    void CopyToOutput();
    void SetMC(bool is) {isMC = is; okMC=true;};
    void SetNPV(int pv) {npv = pv;}; //DO THIS ALWAYS
    void SetEventNumber(int EN) {EventNumber = EN;}; //DO THIS ALWAYS
    //define your getters here
    bool IsGoodMuon(unsigned int il, float etmin=25000);
    bool IsGoodMuon_EWK(int,unsigned int il, float etmin,std::vector<int>& Mucounter);
    bool IsGoodMuon_calo(int,unsigned int il, float etmin,std::vector<int>& Mucounter);
    bool IsGoodMuon_2012(unsigned int il, float etmin, std::vector<int>& Mucounter);
    bool IsGoodMuon_Hww(unsigned int il,float etmin = 15000); 
    int CountGoodMuons(float etmin=25000)
    {int count(0), i(0); for (; i<m_NumMuons; ++i) if (IsGoodMuon(i,etmin)) ++count; return count;}

//bool IsGoodMuon_Calo(int il,float etmin);
    int CountGoodMuons_Hww(float etmin=15000)
    {int count(0), i(0); for (; i<m_NumMuons; ++i) if (IsGoodMuon_Hww(i,etmin)) ++count; return count;}

/*    bool OppsiteSignMuon(int MuonIndex1, int MuonIndex2)
    { 
    if(m_MuonCharge->at(MuonIndex1) == m_MuonCharge->at(MuonIndex2)) return false;
    return true;
    }    
  */  float GetDeltaR(unsigned int il, float othereta, float otherphi) {
      return DukHepFilter::deltaREtaPhi(m_MuonEta->at(il)-othereta,m_MuonPhi->at(il)-otherphi);
    }
float dR(float aeta, float aphi, float beta, float bphi);
    float GetMuonTransverseMomentum(unsigned int il) { return m_MuonPt->at(il); };
    float GetMuonPt(unsigned int il); //Analysis::AnalysisMuonConfigurableScaleFactors* m_MCPsf);
    std::pair<float,float> GetScaleFactor(unsigned int il,int set,int runnumber);

    void FillMuonFourMomentum(unsigned int il, TLorentzVector & vl)    { 
vl.SetPtEtaPhiM(GetMuonPt(il) ,m_MuonEta->at(il),m_MuonPhi->at(il), 105.66);};
   
 bool MuonMatchesTrigger(unsigned int il) {
      return true;
    }
 private:
    bool isMC,okMC;
    int npv;
    int EventNumber;

  public:
//Analysis::AnalysisMuonConfigurableScaleFactors m_MCPsf;
    SCycleBaseNTuple * owner;    
    std::string cname;
    int MuonIndex1;
  int MuonIndex2;
  MuonSmear::SmearingClass* mcp_smear;
  Analysis::AnalysisMuonConfigurableScaleFactors* m_MCPsf;
  std::vector<int>* m_MuonAuthor;
  std::vector<int> o_m_MuonAuthor;
  std::vector<float>* m_MuonEta;
  std::vector<float> o_m_MuonEta;
  std::vector<float>* m_MuonIsoPtCone;
  std::vector<float>* m_MuonIsoEtCone;
  std::vector<float>* m_MuonE;
  std::vector<float> o_m_MuonE;
  std::vector<float>* m_MuonPt;
  std::vector<float> o_m_MuonPt;
  std::vector<float>* m_MuonPhi;
  std::vector<int>* m_MuonTight;
  std::vector<float> o_m_MuonPhi;
  std::vector<int>* m_MuonExpectBLayerHit;
  std::vector<int>* m_MuonBLayerHits;
  std::vector<int>* m_MuonNumPixelHits;
  std::vector<int>* m_MuonNumPixelDeadSensors;
  std::vector<int>* m_MuonNumSCTHits;
  std::vector<int>* m_MuonNumSCTDeadSensors;
  std::vector<int>* m_MuonNumPixHoles;
  std::vector<int>* m_MuonNumSCTHoles;
  std::vector<int>* m_MuonNumTRTHits;
  std::vector<int>* m_MuonNumTRTOutliers;
  std::vector<unsigned short>* m_MuoncaloMuonIdTag;
  std::vector<double>* m_MuoncaloLRLikelihood;	
  Int_t jet_AntiKt4LCTopo_n;
  Int_t m_NumMuons;
  Int_t o_m_NumMuons;
  Int_t EventNum;  
  std::vector<int>* v_NumTracks;
  std::vector<int>* v_Track_Num;
  std::vector<float>* m_MuonZ0;
  std::vector<float>* m_MuonTrackTheta;
  std::vector<float>* m_MuonD0;
  std::vector<float>* m_MuonM;
  std::vector<float>* m_MuonPx;
  std::vector<float>* m_MuonPy;
  std::vector<float>* m_MuonPz;
  std::vector<float>* m_MuonCharge;
  std::vector<unsigned short>* m_MuonAllAuthor;
  std::vector<float>* m_MuonSigD0unbiased;
  std::vector<float>* m_MuonD0unbiased;
  std::vector<float>* m_MuonZ0unbiased;
  std::vector<float>* m_MuonMeQoverp;
  std::vector<float>* m_MuonMeTheta;
  std::vector<float>* m_MuonIdQoverp;
  std::vector<float>* m_MuonIdTheta;
  std::vector<float>* m_MuonIdPhi;
  std::vector<float>* m_MuonCovD0;  
  std::vector<int>* m_MuonisCombinedMuon;
  UInt_t m_LarError;
  UInt_t m_TileError;
  UInt_t m_CoreFlags;
 
};
 #endif
