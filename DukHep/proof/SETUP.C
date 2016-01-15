// $Id: SETUP.C 126811 2013-01-15 20:25:36Z mliu $

int SETUP() {
   /// Add all the additional libraries here that this package
   /// depends on. (With the same command that loads this package's library...)
  if( gSystem->Load( "libPhysics" ) == -1 ) return -1;
  if( gSystem->Load( "libGoodRunsLists" ) == -1 ) return -1;
  if( gSystem->Load( "libDukHep" ) == -1 ) return -1;
  return 0;
}
