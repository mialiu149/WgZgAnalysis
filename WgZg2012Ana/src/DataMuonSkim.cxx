// Local include(s):
// $Id: DataMuonSkim.cxx 136621 2013-02-15 20:03:13Z mliu $
#include "../include/DataMuonSkim.h"

ClassImp( DataMuonSkim );

DataMuonSkim::DataMuonSkim()
  : DukHepFilter(), 
    m_cutflow( "cutflow", this ),
    icutflow(0), h_cutflow(0),
    //Macro initializing the stl vectors that access the tree 
    INIT_NULLS_CTOR
{
  //example job properties (sends data to your job via the xml file)
  DeclareProperty( "IgnoreGRL", m_prop_skipgrl );
  DeclareProperty( "TriggerName", m_prop_triggername );
  SetLogName( GetName() );
}

DataMuonSkim::~DataMuonSkim() {
}

void DataMuonSkim::BeginCycle() throw( SError ) {
  DukHepFilter::setupGRL();  
  return;
}

void DataMuonSkim::BeginInputData( const SInputData& ) throw( SError ) {
  //say something
  m_logger << DEBUG << "Hello from BeginInputData." << SLogger::endmsg;
  //macro of commands to set up the output tree (delete if you don't want an output tree)
  DECLARE("dummy")
    ;
  //do any needed initialization here.
  m_cutflow->resize(3,0); 
  h_cutflow = Book(TH1F("cf","Cut flow",3,-0.5,-2.5 ));  
  return;
}

void DataMuonSkim::BeginInputFile( const SInputData& inputData ) throw( SError ) {
  int intype = STree::INPUT_TREE & STree::EVENT_TREE;
  if  (! inputData.GetTrees(intype) ) {
    m_logger << ERROR << "DataMuonSkim needs an input tree!" << SLogger::endmsg; 
    throw SError( SError::SkipCycle );
  } else if  (inputData.GetTrees(intype)->size() != 1) {
    m_logger << ERROR << "DataMuonSkim got too many (" << inputData.GetTrees(intype)->size() 
	     << ")input trees."  << SLogger::endmsg; 
    throw SError( SError::SkipCycle );    
  } else {
    TString treename(inputData.GetTrees(intype)->at(0).treeName);
    //macro of commands to read the input tree
    CONNECT( treename.Data() )   
      ;
    //You might want to read some special branches for this analysis.  You can add them via
    //ConnectVariable( treename.Data(), "branch_name", member_variable );
    //This example allows you to change the trigger via the xml file
    ConnectVariable( treename.Data(), m_prop_triggername.c_str(), m_LeptonTrigger  );
  }
  return;
}

///An example user function
void DataMuonSkim::IncrementCutFlow() throw ( SError ) {
  if (icutflow < m_cutflow->size())
    ( *m_cutflow )[ icutflow ]++;
  else 
    m_logger << WARNING << "Resize your cut flow! " << SLogger::endmsg;
  h_cutflow->Fill(icutflow++);
}

///Main analysis function: this is executed for every entry in the tree.
void DataMuonSkim::ExecuteEvent( const SInputData &inputData, Double_t ) throw( SError ) {
  icutflow=0;
  //macro of commands to clear the output tree vectors. (delete if you don't want an output tree)
  RESETVAR
    ;  
  // Start making cuts here.  When a cut is failed, throw a SkipEvent error.
  m_logger << VERBOSE << "/** event passed all-events cut    **/" << SLogger::endmsg;
  IncrementCutFlow();
  if( !( m_prop_skipgrl ) && (( inputData.GetType() == "data" ) || ( inputData.GetType() == "Data" ))) {
    if ( ! testGRL(m_RunNumber,m_lbn) )  throw SError( SError::SkipEvent );
  }
  m_logger << VERBOSE << "/** event passed goodrun cut   **/" << SLogger::endmsg;
  IncrementCutFlow();
   if (m_vxp_n < 1 || m_vxp_nTracks->at(0)< 3) throw SError(SError::SkipEvent);
 
  int tight_muon = 0;
  int medium_muon = 0;

  for(int i = 0;i<m_mu_staco_n;i++)
  {
  float eta = fabs(m_mu_staco_eta->at(i));
  if(m_mu_staco_pt->at(i)>7000&&m_mu_staco_tight->at(i)&&eta<2.7) tight_muon++;
  if(m_mu_staco_pt->at(i)>7000&&m_mu_staco_medium->at(i)&&eta<2.7) medium_muon++;
  }

 // if(tight_el<1||medium_el>1) throw SError( SError::SkipEvent ); 
 int calo_muon =0;
 for(int i = 0;i<m_mu_calo_n;i++)
{
  float eta = fabs(m_mu_calo_eta->at(i));
if(m_mu_calo_pt->at(i)>7000&&m_mu_calo_medium->at(i)&&eta<2.7) calo_muon++;
}
  if(medium_muon<1||(calo_muon+medium_muon)<2) throw SError( SError::SkipEvent ); 
  //if(tight_muon<1) throw SError( SError::SkipEvent ); 
  int goodph = 0;
  for(int i =0;i<m_ph_n;i++)
  {
  float eta = m_ph_eta->at(i);
  if(m_ph_pt->at(i)>10000&&m_ph_loose->at(i)&&eta<2.5) goodph++;  
  }     
  if(goodph<1) throw SError(SError::SkipEvent);
  m_logger << VERBOSE << "/** event passed trigger cut   **/" << SLogger::endmsg;
  IncrementCutFlow();
  //all cuts passed! make plots or calculations
//  Book(TH1F("nEle_passed","Number of electrons in good events;N",5,-0.5,4.5))->Fill(m_NumElectrons);
  /*std::vector<float>::const_iterator ept = m_ElectronClusterPt->begin();
  int nEle23 = 0;
  for ( ; ept  != m_ElectronClusterPt->end(); ++ept) {
    if ((*ept) > 23000 ) ++nEle23;
  }
  Book(TH1F("nEle","Number of electrons with p_{T} > 23 GeV in good events;N",5,-0.5,4.5))->Fill(nEle23);
*/
  //macro of commands to copy variables to the output tree (delete if you don't want an output tree)
  COPYVAR
    ;  
  return;
}


void DataMuonSkim::EndMasterInputData( const SInputData& ) throw( SError ) {
  m_logger << INFO << "End of input data." << SLogger::endmsg;
  if ( m_cutflow->size() == 3 ) {
    m_logger << INFO << "(C0)  Number of input events:                " << ( *m_cutflow )[ 0 ] << SLogger::endmsg;
    m_logger << INFO << "(C1)  Number of events passing goodrun flag: " << ( *m_cutflow )[ 1 ] << SLogger::endmsg;
    m_logger << INFO << "(C2)  Number of events passing trigger:      " << ( *m_cutflow )[ 2 ] << SLogger::endmsg;
  } else {
    m_logger << WARNING << "It looks like your job didn't run." << SLogger::endmsg;
  }
   return;
}
