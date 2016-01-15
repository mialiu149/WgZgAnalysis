// Dear emacs, this is -*- c++ -*-
// $Id: ZmmgammaEventSelection.h 126811 2013-01-15 20:25:36Z mliu $

#ifndef ZmmgammaEventSelection_H
#define ZmmgammaEventSelection_H

// SFrame/DukHep include(s):
#include "DukHep/include/DukHepFilter.h"
#include "DukHep/include/MuonReader.h"
#include "DukHep/include/ElectronReader.h"
#include "DukHep/include/JetReader.h"
#include "DukHep/include/PhotonReader.h"
#include "DukHep/include/LArHole_v2_00.hpp"
#include "egammaAnalysisUtils/egammaSFclass.h"
#include "MuonEfficiencyCorrections/AnalysisMuonConfigurableScaleFactors.h"
#include "DukHep/include/AnalysisUtils.h"
#include "MuonMomentumCorrections/SmearingClass.h"
#include "plug-ins/include/SSummedVar.h"
#include "PileupReweighting/TPileupReweighting.h"
#include "math.h"
#include <iostream>
#include <ctime>
// This line determines which branches are defined.

#define DUKHEPFILTER_TYPE DEF_FILTER
#include "WgZg2012Ana/include/MacrosForDukHepFilter_wggskim.h"
#undef DUKHEPFILTER_TYPE
#define FILTER_TYPE FILTER_TRUTH
#include "WgZg2012Ana/include/TruthBlock.h"
#undef FILTER_TYPE
// This line determines which branches are defined.
#define WGZG_TYPE WGCUTFLOW
//#include "WgZg2012Ana/include/MacrosForWgCandidatesMC.h"
#include "WgZg2012Ana/include/MacrosForZgCandidates.h"
#undef WGZG_TYPE

/**
 *  @short ZmmgammaEventSelection
 *  @author atarce
 * @version $Revision: 126811 $
 */
class ZmmgammaEventSelection : public DukHepFilter {

public:
  /// Default constructor
  ZmmgammaEventSelection();
  /// Default destructor
  ~ZmmgammaEventSelection();
  
  /// Function called at the beginning of the cycle
  virtual void BeginCycle() throw( SError );
  /// Function called at the end of the cycle
  virtual void EndCycle() throw( SError ) {};
  
  /// Function called at the beginning of a new input data
  virtual void BeginInputData( const SInputData& ) throw( SError );
  /// Function called after PROOF job ends (print cutflow here, or normalize histos, for example)
  virtual void EndMasterInputData  ( const SInputData& ) throw( SError );
  
  /// Function that Selects and tallies all of Photons that pass
  void IncrementLooseCutFlow() throw ( SError );

  /// Function called after opening each new input file
  virtual void BeginInputFile( const SInputData& ) throw( SError );
  
  /// Function called for every event
  virtual void ExecuteEvent( const SInputData&, Double_t ) throw( SError );
  
  ///An example user function
  void ConnectJetVariables(const char* treename, bool isData);
  void IncrementCutFlow() throw ( SError );
  bool jetPassed(int i, std::vector<TLorentzVector> SelectedLep, std::vector<TLorentzVector> SelectedPh, float dRcut);
  TLorentzVector TLVJet(TLorentzVector tmp, int i);
  void incrementPlotZ(double pt, double Zmass);
  void TruthJetSelection(std::vector<TLorentzVector> SelectedMus, std::vector<TLorentzVector> SelectedEls,
  		std::vector<TLorentzVector> SelectedPhs, std::vector<int> GoodPhotonIndex);
  void TruthJetPlotting(std::vector<TLorentzVector> SelectedMus, std::vector<TLorentzVector> SelectedEls,
  		std::vector<TLorentzVector> SelectedPhs, std::vector<int> GoodPhotonIndex, std::vector<TLorentzVector> SelectedJets2, 
  		std::vector<int> JetIndex2);
  int TruthPhotonParticles(int i, bool fid);
  int PartonIsolation(TLorentzVector tmp);
  TLorentzVector MuonDressing(std::vector<TLorentzVector> SelectedPhs, int j);
  void ptPlot(const char * name, const char * title, std::vector<TLorentzVector> Objs);
  bool  OverlapRemovalFSR(bool isMC);
  bool DrPassed(std::vector<TLorentzVector> SelectedLep, TLorentzVector tmp, float DRcut) throw ( SError );  //bool  OverlapRemovalFSR(bool isMC) throw(SError);    
int TruthPhotons(int i,int status, bool fid);
int TruthJet(int j,  int Status);
int TruthElectrons(int i, int status, bool fid);
int TruthMuons(int i,int status, bool fid);
void TruthEvent(bool fid, std::vector<int> &Ecounter) throw ( SError );
void DataAnalysis(std::vector<TLorentzVector> SelectedPhs, std::vector<int> SelectedPhsIndex, std::vector<TLorentzVector> SelectedMus);
void ABCD(std::vector<TLorentzVector> SelectedPhs, std::vector<int> SelectedPhsIndex, std::vector<TLorentzVector> SelectedMus ,
		std::string name, int index);
bool IsFakePhoton(int index);
void ABCDPlotting(std::string prefix, double Zmass, double mass, double pt, double eta, 
		int index, std::string name, std::vector<int> GoodPhotonIndex, double correctedIso);
//long double time(int i){ return time(i);}
void CountParticles(std::vector<int> &counter, std::string particle);

void SaveData(std::vector<TLorentzVector> SelectedPhs, std::vector<int> GoodPhotonIndex, 
		std::vector<TLorentzVector> SelectedMus, std::vector<int> TightMuonIndex, double Zgamma_mass, double Zmass,double xsection_weight);


private:
  //Example of a variable that is summed over all nodes when running in PROOF mode.
  SSummedVar< std::vector<Int_t> > m_cutflow; //!
  SSummedVar< std::vector<Int_t> > m_cutflow1; //!
  SSummedVar< std::vector<int> > Mcounter;
  SSummedVar< std::vector<int> > Phcounter;
  SSummedVar< std::vector<int> > Ecounter;
  //Example private variable
  unsigned int icutflow; //!
  unsigned int icutflow1;
  //Example of a histogram pointer (not needed much in SFrame)
  TH1F * h_cutflow;
  TH1F * h_cutflow1;
  TH1F * h_Mcutflow;
  TH1F * h_Phcutflow;
  TH1F * h_Ecutflow;
  MuonReader mur;
  PhotonReader phr;
  ElectronReader er;
  JetReader jr;
  Root::TPileupReweighting* m_pileupTool;
  TLorentzVector muv1;
  TLorentzVector muv2;

int DRcut;
  //Example job property (set in the xml file)
bool isMC;
bool isdata;
bool isTruth;
bool m_prop_skipgrl; //!
  std::string m_prop_triggername1; //!
  std::string m_prop_triggername2;   
  std::string m_prop_triggername3; //!
  std::string m_prop_triggername4;
std::string m_prop_phisoname; //!
  //Example of a branch read into a local member variable
  //defining list of cuts from xml file

  bool m_isZjets;
  bool m_LeptonTrigger1;
  bool m_LeptonTrigger2; //! //!
  bool m_LeptonTrigger3;
  bool m_LeptonTrigger4;
  bool m_nPVCut;
  bool m_Trigger;
  double m_LeptonPt;
  bool m_LeptonCut;
  bool m_LeptonOSCut;
  double m_ZmassCut1;
  double m_ZmassCut2;
  double m_PhotonPt;
  bool m_PhotonIDCut;
  std::vector<float>* m_PhotonIsolation;
  double m_dRLeptonGammaCut;
  double m_dRGammaGammaCut;
  double m_PhotonIsoValue;
  Int_t           m_JetNum;
  vector<float>   *m_JetE;
  vector<float>   *m_JetPt;
  vector<float>   *m_JetM;
  vector<float>   *m_JetEta;
  vector<float>   *m_JetPhi;
  std::vector<TLorentzVector> FakedPhotons;
  std::vector<int> FakedPhotonsIndex;
 
  // Macro adding lots of variables to access the tree
  DUKEHEPHEADER_MEMBERS
  DUKEHEPHEADER_MEMBERS_TRUTH
  WGZGHEPHEADER_MEMBERS 
  // Macro adding the functions for dictionary generation
  ClassDef( ZmmgammaEventSelection, 0 );

}; // class ZmmgammaEventSelection

#endif // ZmmgammaEventSelection_H

