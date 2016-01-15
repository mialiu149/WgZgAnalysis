#include "../include/DukHepFilter.h"
#include "TVector2.h"
#include "TString.h"
#include "math.h"

ClassImp( DukHepFilter );

DukHepFilter::DukHepFilter()
  : SCycleBase(),
    m_cutflow("cuts",this),
    h_p(0), h_n(0)
{ 
  DeclareProperty( "GoodRunList", m_jo_grl);
  DeclareProperty( "GoodRunListOut", o_m_jo_grl);
  DeclareProperty( "MuDataLocation", m_jo_mudata); //path/to/file.root/histname
  DeclareProperty( "MuMCLocation", m_jo_mumc);     //path/to/file.root/histname
  m_logger << VERBOSE << "DukHepFilter based class." << SLogger::endmsg;
};

float DukHepFilter::aquad(float a, float b) { return sqrt(a*a + b*b); };
float DukHepFilter::binErr(float n, float d) { if (d == 0.) return 0; return sqrt(n*(d-n)/(d*d*d)); }
float DukHepFilter::deltaREtaPhi(float de, float dp) { return aquad(de,TVector2::Phi_mpi_pi(dp)); };

void DukHepFilter::IncrementCutFlow(bool externalcut, double w) throw ( SError ) {
  if (externalcut) {
    if (icutflow < m_cutflow->size()) ( *m_cutflow )[ icutflow ]++;
    else m_logger << WARNING << "Resize your cut flow! " << SLogger::endmsg;
    if (!h_n || !h_p) 
      m_logger << WARNING << "make your cut flow histograms! " << SLogger::endmsg;
    else
      ((w < 0) ? h_n : h_p)->Fill(icutflow,w);
  }
  ++icutflow;
  return;
}
void DukHepFilter::setupMuonSmearing() throw (SError){
mcp_smear = new MuonSmear::SmearingClass();
mcp_smear->SetAlgoSmearRelDir("Data12","staco","q_pT","Rel17.2","/afs/cern.ch/work/m/mliu/private/packages/RootCore/../MuonMomentumCorrections/share/");
mcp_smear->UseScale(1);
mcp_smear->UseImprovedCombine();
}
void DukHepFilter::setupMuonSF() throw (SError){

m_MCPsf = new Analysis::AnalysisMuonConfigurableScaleFactors("/afs/cern.ch/work/m/mliu/private/packages/RootCore/../MuonEfficiencyCorrections/share/","STACO_CB_2012_SF.txt","GeV",Analysis::AnalysisMuonConfigurableScaleFactors::AverageOverRuns);
m_MCPsf->Initialise();
}
void DukHepFilter::setupPileupWeights() throw (SError) {
  m_logger << INFO << "Configuring PileupMuTool." << SLogger::endmsg;

  std::size_t found=m_jo_mudata.find_last_of('/');
  if (found == std::string::npos) {
    m_logger << WARNING << "Problem in PileupMuTool: can't parse " << m_jo_mudata << SLogger::endmsg;
    return;
  }
  TString datafilename(m_jo_mudata.substr(0,found));
  TString datahistname(m_jo_mudata.substr(found+1));

  found=m_jo_mumc.find_last_of('/');
  if (found == std::string::npos) {
    m_logger << WARNING << "Problem in PileupMuTool: can't parse " << m_jo_mumc << SLogger::endmsg;
    return;
  }
  TString mcfilename(m_jo_mumc.substr(0,found));
  TString mchistname(m_jo_mumc.substr(found+1));

  int isbad = m_pileupTool->initialize( datafilename, datahistname, mcfilename, mchistname );
  if (isbad) {
    m_logger << WARNING << "Problem in PileupMuTool: init returns " << isbad << SLogger::endmsg;
  }    
}
void DukHepFilter::setupGRL() throw (SError) {
  m_grl_reader.AddXMLFile(m_jo_grl.c_str());
  bool check = m_grl_reader.Interpret();
  if(!check) {
    m_logger << WARNING << "Problem in GRL reader" << SLogger::endmsg;
  } else {
    m_logger << INFO << "GRL read from " << m_jo_grl << SLogger::endmsg;
  }
  m_grl = m_grl_reader.GetMergedGoodRunsList();
  m_grl.Summary(false);
};

void DukHepFilter::setupPileupTool(int channel_number) throw(SError){
  m_pileupTool = new Root::TPileupReweighting("PileupReweightingTool");
//m_pileupTool->UsePeriodConfig("MC12a");
  m_pileupTool->SetUnrepresentedDataAction(2);
 // m_pileupTool->SetDataScaleFactors(1/1.11);
  m_pileupTool->AddConfigFile("$ROOTCOREBIN/../PileupReweighting/share/mc12ab_defaults.prw.root");
  m_pileupTool->AddLumiCalcFile("$SFRAME_DIR/../ilumicalc_2012_AllYear_All_Good_Reproc.root"); 
  m_pileupTool->SetDefaultChannel(channel_number); 
  m_pileupTool->Initialize();
}

void DukHepFilter::setupEnergyRescaler() throw (SError){
  m_Rescaler = new egRescaler::EnergyRescalerUpgrade();
  m_Rescaler->Init("$ROOTCOREBIN/../egammaAnalysisUtils/share/EnergyRescalerData.root","2012","es2012");
}

void DukHepFilter::setupJetCalibTool() throw(SError)
{
  TString jetAlgo="AntiKt4LCTopo";
  std::string path = "$ROOTCOREBIN/../";
  std::string JES_config_file = path+"ApplyJetCalibration/data/CalibrationConfigs/JES_Full2012dataset_Preliminary_Jan13.config"; 
  m_JES = new JetAnalysisCalib::JetCalibrationTool(jetAlgo,JES_config_file,!m_isMC);//
}

void DukHepFilter::setMC(bool isMC) throw(SError)
{
m_isMC = isMC;
}

void DukHepFilter::setupGRLOut() throw(SError)
{
m_grl_writer.SetGoodRunsList(m_grl);
m_grl_writer.SetFilename(o_m_jo_grl.c_str());
}

void DukHepFilter::setupElectronLHTool() throw(SError) {
 tool = new Root::TElectronLikelihoodTool();
 tool->setPDFFileName("$ROOTCOREBIN/../ElectronPhotonSelectorTools/data/ElectronLikelihoodPdfs.root"); // use this root file!
 tool->setOperatingPoint(LikeEnum::Loose);
 tool->initialize();
}

