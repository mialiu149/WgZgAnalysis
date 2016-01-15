////bin/dukhep_create_reader.py -n PullReader ../Macros/StructureExtras.dat
#include "include/PullReader.h"

PullReader::PullReader(SCycleBaseNTuple * ownr, const char * collname, const char * tcollname): owner(ownr), cname(collname), tcname(tcollname), sister(0),
m_JetPt(0),
m_JetEta(0),
m_JetPhi(0),
m_JetE(0),
m_JetPullMag(0),
m_JetPullPhi(0),
m_NumTruth(0),
m_TruthStatus(0),
m_TruthPdgId(0),
m_TruthBarcode(0),
m_TruthParents(0),
m_TruthChildren(0),
m_TruthParentIndex(0),
m_TruthChildIndex(0),
m_TruthPt(0),
m_TruthEta(0),
m_TruthPhi(0),
m_TruthMass(0),
m_NumTruthJets(0),
m_TruthJetPt(0),
m_TruthJetEta(0),
m_TruthJetPhi(0),
m_TruthJetE(0),
m_TruthJetPullMag(0),
m_TruthJetPullPhi(0)
{std::cout << "PullReader: default collection names are " << cname << ", " << tcname << std::endl;}

std::string PullReader::VarName(const char *s) {
  std::string tmp(s); 
  if (tmp.find("jetforpull")==0) {
    std::cout << "PullReader: replacing jetforpull with " << cname << " in " << tmp << std::endl;	
    return std::string(tmp.replace(0,10,cname)); 
  } else if (tmp.find("tj6")==0) {
    std::cout << "PullReader: replacing tj6 with " << tcname << " in " << tmp << std::endl;
    return std::string(tmp.replace(0,3,tcname));
  }
  return std::string(s);
};    

void PullReader::ConnectVariables(std::string treename){
  if (sister == 0) {		
    owner->ConnectVariable( treename.c_str(), VarName("jetforpull_pt").c_str(), m_JetPt );
    owner->ConnectVariable( treename.c_str(), VarName("jetforpull_eta").c_str(), m_JetEta );
    owner->ConnectVariable( treename.c_str(), VarName("jetforpull_phi").c_str(), m_JetPhi );
    owner->ConnectVariable( treename.c_str(), VarName("jetforpull_E").c_str(), m_JetE );
  }
  owner->ConnectVariable( treename.c_str(), VarName("jetforpull_PullMag").c_str(), m_JetPullMag );
  owner->ConnectVariable( treename.c_str(), VarName("jetforpull_PullPhi").c_str(), m_JetPullPhi );
  owner->ConnectVariable( treename.c_str(), VarName("mc_n").c_str(), m_NumTruth );
  owner->ConnectVariable( treename.c_str(), VarName("mc_status").c_str(), m_TruthStatus );
  owner->ConnectVariable( treename.c_str(), VarName("mc_pdgId").c_str(), m_TruthPdgId );
  owner->ConnectVariable( treename.c_str(), VarName("mc_barcode").c_str(), m_TruthBarcode );
  owner->ConnectVariable( treename.c_str(), VarName("mc_parents").c_str(), m_TruthParents );
  owner->ConnectVariable( treename.c_str(), VarName("mc_children").c_str(), m_TruthChildren );
  owner->ConnectVariable( treename.c_str(), VarName("mc_parent_index").c_str(), m_TruthParentIndex );
  owner->ConnectVariable( treename.c_str(), VarName("mc_child_index").c_str(), m_TruthChildIndex );
  owner->ConnectVariable( treename.c_str(), VarName("mc_pt").c_str(), m_TruthPt );
  owner->ConnectVariable( treename.c_str(), VarName("mc_eta").c_str(), m_TruthEta );
  owner->ConnectVariable( treename.c_str(), VarName("mc_phi").c_str(), m_TruthPhi );
  owner->ConnectVariable( treename.c_str(), VarName("mc_m").c_str(), m_TruthMass );
  owner->ConnectVariable( treename.c_str(), VarName("tj6_n").c_str(), m_NumTruthJets );
  owner->ConnectVariable( treename.c_str(), VarName("tj6_pt").c_str(), m_TruthJetPt );
  owner->ConnectVariable( treename.c_str(), VarName("tj6_eta").c_str(), m_TruthJetEta );
  owner->ConnectVariable( treename.c_str(), VarName("tj6_phi").c_str(), m_TruthJetPhi );
  owner->ConnectVariable( treename.c_str(), VarName("tj6_E").c_str(), m_TruthJetE );
  owner->ConnectVariable( treename.c_str(), VarName("tj6_PullMag").c_str(), m_TruthJetPullMag );
  owner->ConnectVariable( treename.c_str(), VarName("tj6_PullPhi").c_str(), m_TruthJetPullPhi );
}
void PullReader::DeclareVariables(){
  owner->DeclareVariable( o_m_JetPt, "jetforpull_pt" );
  owner->DeclareVariable( o_m_JetEta, "jetforpull_eta" );
  owner->DeclareVariable( o_m_JetPhi, "jetforpull_phi" );
  owner->DeclareVariable( o_m_JetE, "jetforpull_E" );
  owner->DeclareVariable( o_m_JetPullMag, "jetforpull_PullMag" );
  owner->DeclareVariable( o_m_JetPullPhi, "jetforpull_PullPhi" );
  owner->DeclareVariable( o_m_NumTruth, "mc_n" );
  owner->DeclareVariable( o_m_TruthPdgId, "mc_pdgId" );
  owner->DeclareVariable( o_m_TruthParentIndex, "mc_parent_index" );
  owner->DeclareVariable( o_m_TruthPt, "mc_pt" );
  owner->DeclareVariable( o_m_TruthEta, "mc_eta" );
  owner->DeclareVariable( o_m_TruthPhi, "mc_phi" );
  owner->DeclareVariable( o_m_TruthMass, "mc_m" );
  owner->DeclareVariable( o_m_NumTruthJets, "tj6_n" );
  owner->DeclareVariable( o_m_TruthJetPt, "tj6_pt" );
  owner->DeclareVariable( o_m_TruthJetEta, "tj6_eta" );
  owner->DeclareVariable( o_m_TruthJetPhi, "tj6_phi" );
  owner->DeclareVariable( o_m_TruthJetE, "tj6_E" );
  owner->DeclareVariable( o_m_TruthJetPullMag, "tj6_PullMag" );
  owner->DeclareVariable( o_m_TruthJetPullPhi, "tj6_PullPhi" );
}
void PullReader::Reset(){
 o_m_JetPt.clear();
 o_m_JetEta.clear();
 o_m_JetPhi.clear();
 o_m_JetE.clear();
 o_m_JetPullMag.clear();
 o_m_JetPullPhi.clear();
 o_m_NumTruth= -999;
 o_m_TruthPdgId.clear();
 o_m_TruthParentIndex.clear();
 o_m_TruthPt.clear();
 o_m_TruthEta.clear();
 o_m_TruthPhi.clear();
 o_m_TruthMass.clear();
 o_m_NumTruthJets= -999;
 o_m_TruthJetPt.clear();
 o_m_TruthJetEta.clear();
 o_m_TruthJetPhi.clear();
 o_m_TruthJetE.clear();
 o_m_TruthJetPullMag.clear();
 o_m_TruthJetPullPhi.clear();
  }
void PullReader::CopyToOutput(){
 o_m_JetPt = std::vector<float>(*(JetPt()));
 o_m_JetEta = std::vector<float>(*(JetEta()));
 o_m_JetPhi = std::vector<float>(*(JetPhi()));
 o_m_JetE = std::vector<float>(*(JetE()));
 o_m_JetPullMag = std::vector<float>(*m_JetPullMag);
 o_m_JetPullPhi = std::vector<float>(*m_JetPullPhi);
 o_m_NumTruth = m_NumTruth;
 o_m_TruthPdgId = std::vector<int>(*m_TruthPdgId);
 o_m_TruthParentIndex = std::vector<std::vector<int> >(*m_TruthParentIndex);
 o_m_TruthPt = std::vector<float>(*m_TruthPt);
 o_m_TruthEta = std::vector<float>(*m_TruthEta);
 o_m_TruthPhi = std::vector<float>(*m_TruthPhi);
 o_m_TruthMass = std::vector<float>(*m_TruthMass);
 o_m_NumTruthJets = m_NumTruthJets;
 o_m_TruthJetPt = std::vector<float>(*m_TruthJetPt);
 o_m_TruthJetEta = std::vector<float>(*m_TruthJetEta);
 o_m_TruthJetPhi = std::vector<float>(*m_TruthJetPhi);
 o_m_TruthJetE = std::vector<float>(*m_TruthJetE);
 o_m_TruthJetPullMag = std::vector<float>(*m_TruthJetPullMag);
 o_m_TruthJetPullPhi = std::vector<float>(*m_TruthJetPullPhi);
}

