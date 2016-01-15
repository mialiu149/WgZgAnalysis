// $Id: SETUP.C 126811 2013-01-15 20:25:36Z mliu $

int SETUP() {

   /// Add all the additional libraries here that this package
   /// depends on. (With the same command that loads this package's library...)
//   if( gSystem->Load( "libSFrameCore" ) == -1 ) return -1;
//   if( gSystem->Load( "libSFramePlugIns" ) == -1 ) return -1;
//   if( gSystem->Load( "libSFrameCintex" ) == -1 ) return -1;
   if( gSystem->Load( "libWgZg2012Ana" ) == -1 ) return -1;
   //gEnv->SetValue( "ProofServ.Sandbox", "lite://tmp/mliu/");
/* 
  if( gSystem->Load( "libDukHep" ) == -1 ) return -1;
   if( gSystem->Load( "libGoodRunsLists" ) == -1 ) return -1;
   if( gSystem->Load( "libPileupReweighting" ) == -1 ) return -1;
   if( gSystem->Load( "libReweightUtils" ) == -1 ) return -1;
   if( gSystem->Load( "libMuonEfficiencyCorrections" ) == -1 ) return -1;
   if( gSystem->Load( "libMuonMomentumCorrections" ) == -1 ) return -1;
   if( gSystem->Load( "libegammaAnalysisUtils" ) == -1 ) return -1;
   if( gSystem->Load( "libegammaEvent" ) == -1 ) return -1;
   if( gSystem->Load( "libTrigMuonEfficiency" ) == -1 ) return -1;
   if( gSystem->Load( "libMuonIsolationCorrection" ) == -1 ) return -1;
*/
   return 0;
}
