////bin/dukhep_create_reader.py -n JetReader ../Macros/JetMacros.dat
#ifndef JETREADER
#define JETREADER 1
#include <vector>
#include <string>
#include <iostream>
#include "DukHep/include/DukHepFilter.h"
#include "core/include/SCycleBaseNTuple.h"
#include "TLorentzVector.h"
#include "ApplyJetCalibration/ApplyJetCalibration.h"
class JetReader {
  public:
  JetReader(SCycleBaseNTuple * o, const char * collname="jet");
    virtual ~JetReader(){};
    void SetColl(const char * collname) {
      cname = std::string(collname);
      std::cout << "Using jet collection name " << cname << std::endl;
    };
    std::string VarName(const char * s); 
    void ConnectVariables(std::string treename);
    void DeclareVariables();
    void SetMC(bool isMC){
    	isData = !isMC;
    }
    void SetAugust(bool isAugust){
    	August = isAugust;
    }
    void Reset();
    void CopyToOutput();
    void InitCalibTool(JetAnalysisCalib::JetCalibrationTool *myJES); 
    void InitCalibTool(TString string1,TString string2, bool mc); 
    bool isHotTile(int RunNumber,int il); 
    TLorentzVector CorrectedJet(int jeti,float npv,float mu);
    TLorentzVector CorrectedJet(int jeti,bool mc, float npv,float mu);
    //bool IsSelectedJet(int jeti,float npv,float mu,std::vector<int>&);
    bool IsSelectedJet(int jeti, bool mc, float npv,float mu,std::vector<int> &Jetcounter);
    std::vector<int> JetObjID(int jeti, bool mc, float npv,float mu);
    //define your getters here
    void FillFourMomentum(unsigned int il, TLorentzVector & vl) 
    { vl.SetPtEtaPhiE(m_JetPt->at(il),m_JetEta->at(il),m_JetPhi->at(il),m_JetE->at(il));}
    int GetNearestJet(float eta, float phi, float drmin) {
      int imin(-1);
      for (unsigned int i=0; i< m_JetEta->size(); ++i) { 
	float d(DukHepFilter::deltaREtaPhi(eta-(*m_JetEta)[i],phi - (*m_JetPhi)[i]));
	if (d < drmin) { drmin=d; imin=i; }
      }
      return imin;
    }
    int GetNearestJet(float eta, float phi, float en, float drmin, float demin) {
      int imin(-1);
      for (unsigned int i=0; i< m_JetEta->size(); ++i) { 
	if (fabs(en - (*m_JetE)[i]) > demin) continue;
	float d(DukHepFilter::deltaREtaPhi(eta-(*m_JetEta)[i],phi - (*m_JetPhi)[i]));
	if (d < drmin) { drmin=d; imin=i; }
      }
      return imin;
    }
     bool IsLooserBadJet(float pt,float eta, int i);
     void SetEventNumber(int EN) {EventNumber=EN;}; //DO THIS ALWAYS
  private:
    int EventNumber;
  public:
    SCycleBaseNTuple * owner;    
    std::string cname;
    JetAnalysisCalib::JetCalibrationTool* myJES;
   bool isData;
   bool August;
    Int_t m_NumJets; //BAD
    Int_t o_m_NumJets;
    std::vector<float>* m_JetsumPtTrk;
    std::vector<float>* m_JetPt;
    std::vector<float>* m_JetEta;
    std::vector<float>* m_JetPhi;
    std::vector<float>* m_JetE;
    std::vector<float>* m_JetPtEM;
    std::vector<float>* m_JetEtaEM;
    std::vector<float>* m_JetPhiEM;
    std::vector<float>* m_JetEEM;
    std::vector<float>* m_JetPt_d3pd;
    std::vector<float>* m_JetEta_d3pd;
    std::vector<float>* m_JetPhi_d3pd;
    std::vector<float>* m_JetE_d3pd;
    std::vector<float>* m_JetM;
    std::vector<float>* m_JetLArQuality;
    std::vector<float>* m_JetNegativeE;
    std::vector<float>* m_Jetemfrac;
    std::vector<float>* m_Jethecf;
    std::vector<float>* m_JetTiming;
    std::vector<float>* m_JetfracSamplingMax;
    std::vector<float>* m_JetSamplingMax;
    std::vector<float>* m_JetHECQuality;
    std::vector<float>* m_JetAverageLArQF;
    float m_Rho;
    std::vector<std::vector<float> >* m_JetMET_wpx;
    std::vector<std::vector<float> >* m_JetMET_wpy;
    std::vector<std::vector<float> >* m_JetMET_wet;
    std::vector<std::vector<unsigned int> >* m_JetMET_statusWord;
    std::vector<float>* m_JetAx;
    std::vector<float>* m_JetAy;
    std::vector<float>* m_JetAz;
    std::vector<float>* m_JetAe;
    std::vector<float>* m_JetWeightSV0;
    std::vector<int>* m_JetIsBad;
    std::vector<float>* m_JetBCH_CORR_JET;
    std::vector<float>* m_JetBCH_CORR_CELL;
    std::vector<std::vector<float> >* m_JetjvtxfFull;	
    std::vector<float >* m_Jetjvtxf;	
};
 #endif
