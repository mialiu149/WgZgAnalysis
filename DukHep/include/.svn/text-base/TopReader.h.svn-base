////bin/dukhep_create_reader.py -n TopReader ../Macros/TopMacros.dat
#ifndef TOPREADER
#define TOPREADER 1
#include <vector>
#include <string>
#include "core/include/SCycleBaseNTuple.h"


class TopReader {
  public:
    TopReader(SCycleBaseNTuple * owner);
    virtual ~TopReader(){};
    std::string VarName(const char * s) {return std::string(s);};
    int NumVerticesWithNTrack(int mintrk) {
      int nPV(0);
      for (std::vector<int>::const_iterator it = m_PrimaryVertexNumTracks->begin(); it != m_PrimaryVertexNumTracks->end(); ++it) {
	if(*it >= mintrk) nPV++;
      }
      return nPV;      
  }

    void ConnectVariables(std::string treename);
    void DeclareVariables();
    void Reset();
    void CopyToOutput();

    //define your getters here
  public:
    SCycleBaseNTuple * owner;    
      UInt_t m_RunNumber;
  UInt_t o_m_RunNumber;
  UInt_t m_EventNumber;
  UInt_t o_m_EventNumber;
  UInt_t m_LumiBlock;
  UInt_t o_m_LumiBlock;
  std::vector<int>* m_PrimaryVertexType;
  std::vector<int> o_m_PrimaryVertexType;
  std::vector<int>* m_PrimaryVertexNumTracks;
  std::vector<int> o_m_PrimaryVertexNumTracks;
  float m_MetForTopAna;
  float o_m_MetForTopAna;
  float m_MetForTopAnaPhi;
  float o_m_MetForTopAnaPhi;
  float m_MetForTopAnaSumEt;
  float o_m_MetForTopAnaSumEt;
  Int_t m_NumPrimaryVertices;
  Int_t o_m_NumPrimaryVertices;
  Int_t m_NumTopElectrons;
  Int_t m_NumTopMuons;
  Int_t m_NumTopJets;
  std::vector<int>* m_IndexTopElectron;
  std::vector<int>* m_IndexTopMuon;
  std::vector<int>* m_IndexTopJet;
  std::vector<int>* m_UseTopJet;
  std::vector<int>* m_TopEleInTrigger;
  std::vector<int>* m_TopMuInTrigger;
  std::vector<int>* m_OverlapEleMu;
};
 #endif
