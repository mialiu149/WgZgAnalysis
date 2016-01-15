// Dear emacs, this is -*- c++ -*-
// $Id: DukHepFilter.h 140825 2013-03-18 17:32:22Z mliu $
#ifndef DukHepFilter_H
#define DukHepFilter_H

// SFrame include(s):
#include "core/include/SCycleBase.h" //import?
#include "plug-ins/include/SSummedVar.h"

#include "GoodRunsLists/TGoodRunsListReader.h"
#include "GoodRunsLists/TGoodRunsListWriter.h"
#include "GoodRunsLists/TGoodRunsList.h"
#include "PileupReweighting/TPileupReweighting.h"
#include "egammaAnalysisUtils/VertexPositionReweightingTool.h"
#include "egammaAnalysisUtils/EnergyRescaler.h"
#include "egammaAnalysisUtils/EnergyRescalerUpgrade.h"
#include "MuonIsolationCorrection/CorrectCaloIso.h"
#include "MuonMomentumCorrections/SmearingClass.h"
#include "MuonEfficiencyCorrections/AnalysisMuonConfigurableScaleFactors.h"
#include "ApplyJetCalibration/ApplyJetCalibration.h"
#include "ElectronPhotonSelectorTools/TElectronLikelihoodTool.h"
using namespace Root;
using namespace MuonSmear;
using namespace Analysis;
using namespace egRescaler ;
using namespace JetAnalysisCalib;
//using namespace Root;
#include "TH1.h"
#include <iostream>

class DukHepFilter : 
  public SCycleBase {
public:
  /// Default constructor
  DukHepFilter();
  /// Default destructor
  virtual ~DukHepFilter() {};
  virtual void BeginCycle() throw( SError ) {};
  virtual void EndCycle() throw( SError ) {};
  virtual void BeginInputData( const SInputData& ) throw( SError ) {};
  virtual void EndInputData  ( const SInputData& ) throw( SError ) {};
  virtual void BeginInputFile( const SInputData& ) throw( SError ) {};
  virtual void ExecuteEvent( const SInputData&, Double_t ) throw( SError ) {};
  virtual void BeginMasterInputData( const SInputData& ) throw( SError ) {};
  virtual void EndMasterInputData( const SInputData& ) throw( SError ) {};
  virtual void IncrementCutFlow(bool externalcut, double w=1.) throw ( SError );

protected:
  /// Cutflow
  SSummedVar< std::vector<Int_t> > m_cutflow; //!
  TH1F * h_p, *h_n;
  unsigned int icutflow; 
  /// GRL
  TGoodRunsListReader m_grl_reader;
  TGoodRunsListWriter m_grl_writer;
  TGoodRunsList m_grl;
  std::string m_jo_grl;
  std::string o_m_jo_grl;
  void setupGRL() throw (SError);
  void setupGRLOut() throw (SError);
  void setupPileupTool(int) throw (SError);
  void setupPileupWeights() throw (SError);
  void setupEnergyRescaler() throw (SError);
  void setupJetCalibTool() throw(SError);
  void setupMuonSmearing() throw(SError);
  void setupMuonSF() throw(SError);
  void setMC(bool) throw(SError);
  void setupElectronLHTool() throw(SError);
public:  
  MuonSmear::SmearingClass* mcp_smear;
  Analysis::AnalysisMuonConfigurableScaleFactors* m_MCPsf;
  /// Pileup
  TPileupReweighting* m_pileupTool;
  std::string m_jo_mudata, m_jo_mumc; 
  //common utilities for Duke analysis
  egRescaler::EnergyRescalerUpgrade* m_Rescaler;
  JetAnalysisCalib::JetCalibrationTool* m_JES;
  Root::TElectronLikelihoodTool* tool;
  bool m_isMC;
  static float aquad(float a, float b); 
  static float binErr(float n, float d);
  static float deltaREtaPhi(float de, float dp); 
  static float safeRatio(float n, float d) {return (d != 0) ? n/d : 0.; };
  bool testGRL(int r,int l) {
//TDOMParser xmlparser;
//xmlparser.SetReplaceEntities(kTRUE);
//int parseError = xmlparser.ParseFile("data12_8TeV.periodAllYear_DetStatus-v46-pro13_CoolRunQuery-00-04-08_WZjets_allchannels.xml");
//if(parseError) {std::cout<<"loading grl failed"<<std::endl;} return false;
 return m_grl.HasRunLumiBlock(r,l);};
 void writexml(){
 m_grl_writer.WriteXMLFile();
}
  //int egammaOQ(bool isElectron, double myEta, double myPhi);
  //GetPtCorrectedIsolation(el_cl_E,  el_etas2, el_etap, el_cl_eta, 20, true, data, el_EtCone20, false, CaloIsoCorrection::ELECTRON);  
private:

  ClassDef( DukHepFilter, 0 );
  
}; // class DukHepFilter

#endif // DukHepFilter_H

