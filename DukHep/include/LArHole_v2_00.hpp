#ifndef __LARHOLE__
#define __LARHOLE__ 
/**
   
Purpose: LAr hole treatment

- Version 2.0 (2 December 2011):  
- Version 1.0 (23 June 2011):  based on SUSYTools-00-00-29 implementation

Usage: 
double threshold=40000;   //(40GeV threshold by default)
bool flag = LArHole::simpleVeto(...);
bool flag = LArHole::smartVeto(...);
//Remove event is flag = true 

*/
namespace LArHole
{
  
  bool IsLArHole(float eta, float phi,
		 float etamin = -0.1, float etamax = 1.5,
		 float phimin = -0.9, float phimax = -0.5);
  
  bool simpleVeto(float jet_pt, 
		     float jet_eta,                
		     float jet_phi,                
		     float jet_BCH_CORR_JET, 
		     float jet_BCH_CORR_CELL,
		     float threshold=40000.); 
  bool smartVeto(float jet_pt, 
		 float jet_eta,                
		 float jet_phi,                
		 float jet_BCH_CORR_JET, 
		 float jet_BCH_CORR_CELL,		
		 float MET, 
		 float MET_phi,
		 float threshold=10000.,
		 float frac=0.1);
}
#endif
