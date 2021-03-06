// Dear emacs, this is -*- c++ -*-
// $Id: DataMuonSkim.h 126811 2013-01-15 20:25:36Z mliu $

#ifndef DataMuonSkim_H
#define DataMuonSkim_H

// SFrame/DukHep include(s):
#include "DukHep/include/DukHepFilter.h"
#include "plug-ins/include/SSummedVar.h"
#include "math.h"
// This line determines which branches are defined.
#define DUKHEPFILTER_TYPE DEF_FILTER
//#include "WgZg2012Ana/include/MacrosForDukHepFilter_tiny_data11_L_M.h"
#include "WgZg2012Ana/include/MacrosForDukHepFilter_tiny_data12_mu.h"
#undef DUKHEPFILTER_TYPE

/**
 *  @short DataMuonSkim
 *  @author atarce
 * @version $Revision: 126811 $
 */
class DataMuonSkim : public DukHepFilter {

public:
  /// Default constructor
  DataMuonSkim();
  /// Default destructor
  ~DataMuonSkim();
  
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
  //Example of a branch read into a local member variable
  bool m_LeptonTrigger; //!

  // Macro adding lots of variables to access the tree
  DUKEHEPHEADER_MEMBERS  
  // Macro adding the functions for dictionary generation
  ClassDef( DataMuonSkim, 0 );

}; // class DataMuonSkim

#endif // DataMuonSkim_H

