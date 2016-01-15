// Dear emacs, this is -*- c++ -*-
// $Id: WgZg2012Ana_LinkDef.h 137956 2013-02-25 12:07:24Z mliu $
#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ nestedclass;
//#pragma link C++ class Cintex;
#pragma link C++ class vector<bool>;
#pragma link C++ class vector<char>;
#pragma link C++ class vector<unsigned int>;
#pragma link C++ class vector<vector<unsigned int> >;
#pragma link C++ class vector<bool>;
#pragma link C++ class vector<bool>;
#pragma link C++ class vector<bool>;
#pragma link C++ class vector<bool>;
#pragma link C++ class vector<string>;

// Add the declarations of your cycles, and any other classes for which you
// want to generate a dictionary, here. The usual format is:
//
// #pragma link C++ class MySuperClass+;
#pragma link C++ class DataSkim+;
//#pragma link C++ class xAODtest+;
#pragma link C++ class DataMuonSkim+;
//#pragma link C++ class ZeegammaEventSelection+;
#pragma link C++ class WgEventSelection+;
#pragma link C++ class WggEventSelection+;
#pragma link C++ class ZmmgammaEventSelection+;
#pragma link C++ class WenugammaAnalysis+;

#endif // __CINT__
