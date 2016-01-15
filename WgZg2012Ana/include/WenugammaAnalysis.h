// Dear emacs, this is -*- c++ -*-
// $Id: WenugammaAnalysis.h 138845 2013-03-02 19:49:37Z mliu $

#ifndef WenugammaAnalysis_H
#define WenugammaAnalysis_H

// SFrame/DukHep include(s):
#include "DukHep/include/DukHepFilter.h"
#include "DukHep/include/AnalysisUtils.h"
#include "plug-ins/include/SSummedVar.h"
#include "math.h"
#include <string>
// This line determines which branches are defined.

#define DUKHEPFILTER_TYPE DEF_FILTER
#include "WgZg2012Ana/include/MacrosForWenugammaAnalysis.h"
#undef DUKHEPFILTER_TYPE

#define OUTPUT_TYPE WG_FILTER
#include "WgZg2012Ana/include/MacrosForWenugammaAnalysisOutput.h"
#undef OUTPUT_TYPE WG_FILTER

/**
 *  @short WenugammaAnalysis
 *  @author atarce
 * @version $Revision: 138845 $
 */
class WenugammaAnalysis : public DukHepFilter {

public:
  /// Default constructor
  WenugammaAnalysis();
  /// Default destructor
  ~WenugammaAnalysis();
  
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
  /// FSR veto
  int  OverlapRemovalFSR(bool isMC);    

private:
  //Example of a variable that is summed over all nodes when running in PROOF mode.
  SSummedVar< std::vector<Int_t> > m_cutflow; //!

  //Example private variable
  unsigned int icutflow; //!

  //Example of a histogram pointer (not needed much in SFrame)
  TH1F * h_cutflow;

  //Example job property (set in the xml file)
  bool m_prop_skipgrl; //!
  std::string m_prop_triggername; //!
  std::string m_prop_filter; //!
  std::string m_prop_stream; //!
  double m_LumiNom;
  int m_FSRveto;
  //Example of a branch read into a local member variable
  bool m_LeptonTrigger; //!
  // Macro adding lots of variables to access the tree
  DUKEHEPHEADER_MEMBERS 
  WGOUTPUT_MEMBERS  
  //DUKEHEPHEADER_MEMBERS_TRUTH 
  // Macro adding the functions for dictionary generation
  ClassDef( WenugammaAnalysis, 0 );

}; // class WenugammaAnalysis

#endif // WenugammaAnalysis_H

