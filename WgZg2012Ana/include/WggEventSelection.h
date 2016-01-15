// Dear emacs, this is -*- c++ -*-
// $Id: WggEventSelection.h.h 140825 2013-03-18 17:32:22Z mliu $
#ifndef WggEventSelection_H
#define WggEventSelection_H

// SFrame/DukHep include(s):
#include "DukHep/include/DukHepFilter.h"
#include "DukHep/include/ElectronReader.h"
#include "DukHep/include/MuonReader.h"
#include "DukHep/include/JetReader.h"
#include "DukHep/include/PhotonReader.h"
#include "MissingETUtility/METUtility.h"
#include "egammaAnalysisUtils/egammaSFclass.h"
#include "DukHep/include/LArHole_v2_00.hpp"
#include "egammaAnalysisUtils/EnergyRescalerUpgrade.h"
#include "plug-ins/include/SSummedVar.h"
#include "PileupReweighting/TPileupReweighting.h"
#include "egammaAnalysisUtils/VertexPositionReweightingTool.h"
#include "DukHep/include/AnalysisUtils.h"
#include "math.h"

#define DUKHEPFILTER_TYPE DEF_FILTER
#include "WgZg2012Ana/include/MacrosForDukHepFilter_wggskim.h"
#undef DUKHEPFILTER_TYPE

#define FILTER_TYPE FILTER_TRUTH
#include "WgZg2012Ana/include/TruthBlock.h"
#undef FILTER_TYPE

// This line determines which branches are defined.
#define WGZG_TYPE WGCUTFLOW
//#include "WgZg2012Ana/include/MacrosForWgCandidatesMC.h"
#include "WgZg2012Ana/include/MacrosForWgCandidatesMC.h"
#undef WGZG_TYPE 

/**
 *  @short WggEventSelection.h
 *  @author atarce
 * @version $Revision: 140825 $
 */
class WggEventSelection : public DukHepFilter {

public:
  /// Default constructor
  WggEventSelection();
  /// Default destructor
  ~WggEventSelection();
  
  /// Function called at the beginning of the cycle
  virtual void BeginCycle() throw( SError );
  /// Function called at the end of the cycle
  virtual void EndCycle() throw( SError ) {};
  
  /// Function called at the beginning of a new input data
  virtual void BeginInputData( const SInputData& ) throw( SError );
  /// Function called after PROOF job ends (print cutflow here, or normalize histos, for example)
  virtual void EndMasterInputData  ( const SInputData& ) throw( SError );
  
  /// Function called after opening each new input file
  virtual void BeginInputFile( const SInputData& ) throw( SError );
  
  /// Function called for every event
  virtual void ExecuteEvent( const SInputData&, Double_t ) throw( SError );
  
  ///An example user function
  void IncrementCutFlow() throw ( SError );
  int  OverlapRemovalFSR(bool isMC);    
  float METcorrection(const std::vector<TLorentzVector>&,const std::vector<TLorentzVector>&,const std::vector<TLorentzVector>&,const std::vector<TLorentzVector>&);
  vector<float> XY(float,float);
private:
  //Example of a variable that is summed over all nodes when running in PROOF mode.
  SSummedVar< std::vector<float> > m_cutflow; //!
  SSummedVar< std::vector<int> > Mcounter;
  SSummedVar< std::vector<int> > Ecounter;
  SSummedVar< std::vector<int> > Phcounter;
  SSummedVar< std::vector<int> > Jetcounter;
  //Example private variable
  unsigned int icutflow; //!

  //Example of a histogram pointer (not needed much in SFrame)
  TH1F * h_cutflow;
  TH1F * h_Ecutflow;
  TH1F * h_Phcutflow;
  TH1F * h_Mcutflow;
  TH1F * h_Jetcutflow;
  ElectronReader er;
  PhotonReader phr;
  MuonReader mur;
  JetReader jr;
  Root::TPileupReweighting* m_pileupTool;
  VertexPositionReweightingTool* ZVertexTool;
  egRescaler::EnergyRescalerUpgrade* m_Rescaler;
  METUtility* m_METutil;
  //TPileupReweighting m_pileupTool;
  //Example job property (set in the xml file)
  bool m_prop_skipgrl; //!
  std::string m_prop_triggername1; //!
  std::string m_prop_triggername2; //!
  std::string m_prop_phisoname;
  std::string m_prop_bkgstudy;
   
  //Example of a branch read into a local member variable
  bool m_isBkgStudy;
  bool m_isWjets;
  bool m_LeptonTrigger1; //!
  bool m_LeptonTrigger2; //!
  bool m_nPVCut;
  bool m_Trigger;
  int m_FSRveto;
  double m_LeptonPt;
  bool m_LeptonCut;
  bool m_LeptonVeto;
  double m_MetCut;
  double m_MtCut;
  double m_PhotonPt;
  bool m_PhotonIDCut;
  double m_dRLeptonGammaCut;
  double m_PhotonIsoValue;  
// Macro adding lots of variables to access the tree
  DUKEHEPHEADER_MEMBERS  
  DUKEHEPHEADER_MEMBERS_TRUTH 
  WGZGHEPHEADER_MEMBERS                          
  // Macro adding the functions for dictionary generation
  ClassDef( WggEventSelection, 0 );
}; // class WggEventSelection

#endif // WggEventSelection.h_H

