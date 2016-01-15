hh = lambda d: """
// Dear emacs, this is -*- c++ -*-
// $Id: dukheputils.py 126811 2013-01-15 20:25:36Z mliu $
#ifndef DukHepExample_H
#define DukHepExample_H

// SFrame include(s):
#include "DukHep/include/DukHepFilter.h"
#define DUKHEPFILTER_TYPE DEF_FILTER //default! Change if needed!!
#include "DukHep/include/MacrosForDukHepFilter.h"

/**
 *  @short DukHep Analysis Skeleton.
 *  @author atarce
 *  @version $Revision: 126811 $
 */
class DukHepExample : public DukHepFilter {

public:
   /// Default constructor
   DukHepExample();
   /// Default destructor
   ~DukHepExample();

   /// Function called at the beginning of the cycle
   virtual void BeginCycle() throw( SError );
   /// Function called at the end of the cycle
   virtual void EndCycle() throw( SError );

   /// Function called at the beginning of a new input data
   virtual void BeginInputData( const SInputData& ) throw( SError );
   /// Function called after finishing to process an input data
   virtual void EndInputData  ( const SInputData& ) throw( SError );

   /// Function called after opening each new input file
   virtual void BeginInputFile( const SInputData& ) throw( SError );

   /// Function called for every event
   virtual void ExecuteEvent( const SInputData&, Double_t ) throw( SError );

private:
  // Macro adding d3pd branch pointers
  DUKEHEPHEADER_MEMBERS
  ;
  // Name of the d3pd in the file
  std::string m_jo_treename;

   // Macro adding the functions for dictionary generation
   ClassDef( DukHepExample, 0 );

}; // class DukHepExample

#endif // DukHepExample_H
""".replace("DukHepExample",d);

cc=lambda d:"""// $Id: dukheputils.py 126811 2013-01-15 20:25:36Z mliu $

// base class definition (Makefile.common must have ../ in include path):
#include "include/DukHepExample.h"

ClassImp( DukHepExample );

DukHepExample::DukHepExample()
  : DukHepFilter(),
    INIT_NULLS_CTOR
{
  DeclareProperty( "TreeName", m_jo_treename );
  SetLogName( GetName() );
}

DukHepExample::~DukHepExample() {}

void DukHepExample::BeginCycle() throw( SError ) {   return; }

void DukHepExample::EndCycle() throw( SError ) {  return; }

void DukHepExample::BeginInputData( const SInputData& ) throw( SError ) {
  //This declares the variables that go in the output tree
  DECLARE()
    ;
  //This is a good place to book histograms
  return;
}

void DukHepExample::EndInputData( const SInputData& ) throw( SError ) {   return; }

void DukHepExample::BeginInputFile( const SInputData& ) throw( SError ) {
  CONNECT( m_jo_treename.c_str() )   
    ;
  //connect any mutable branches (e.g. trigger or MET) which are set by job options
   return;
}

void DukHepExample::ExecuteEvent( const SInputData&, Double_t ) throw( SError ) {
  RESETVAR
    ;
  //put your event selection here.
  if (false) throw SError( SError::SkipEvent );
  m_logger << DEBUG << "Event passed.  Copying variables to output tree." << SLogger::endmsg;
  COPYVAR
    ;
  return;
}
""".replace("DukHepExample",d)

class cycleconfig:
    def __init__(self,header,type,treename):
        self.header = header
        self.type = type
        self.treename = treename
        pass
    """Class that updates a cycle."""
    def update_hh(self):
        yield "#define DUKHEPFILTER_TYPE %s\n#include \"DukHep/include/%s\"#undef DUKHEPFILTER_TYPE\n\n" % (self.header, self.type)
        yield "  // Macro adding lots of variables to access the tree\n  DUKEHEPHEADER_MEMBERS\n\n"
        pass
    def update_cc(self,match):
        if (match == ('SCycleBase') or match == ('DukHepFilter')):
            return ",\n  INIT_NULLS_CTOR \n" 
        elif (match == 'BeginInputData'):
            return "//macro of commands to make the output tree\n  DECLARE(\"dummy\")\n    ;\n" 
        elif (match == 'BeginInputFile'):
            return "//macro of commands to read the input tree\n  CONNECT( %s )\n    ;  \n" % self.treename
        elif (match == 'ExecuteEvent'):
            return "//macro of commands to read the input tree\n  RESETVAR\n    ;  \n"
        elif (match == 'return'):
            return "//macro of commands to read the input tree\n  COPYVAR\n     ;  \n"
        return "";
    pass #class
    

class filterconfig:
    """Class that makes or updates a filter."""
    def __init__(self, filtertype='Default', newfile=True):
        self.new_file=newfile
        self.filter_type=filtertype
        self.new_defs=[ "DUKEHEPHEADER_MEMBERS", "INIT_NULLS_CTOR", "CONNECT", "DECLARE", "RESETVAR", "COPYVAR" ]
        pass
    def vpointer(self,outvart): return (outvart.startswith("std::") and outvart.endswith("*"))
    def doublevpointer(self,outvart): return (outvart.startswith("std::vector<std::vector") and outvart.endswith("*"))
    def macros(self, rootTypeRealWrite):
        """Generator function giving the next block to insert"""
        yield self.headerInit(rootTypeRealWrite)
        yield self.headerMembers(rootTypeRealWrite)
        yield self.connectVariables(rootTypeRealWrite)    
        yield self.declareVariables(rootTypeRealWrite)
        yield self.resetVariables(rootTypeRealWrite)
        yield self.cloneVariables(rootTypeRealWrite)
        pass
    def ifstring(self):
        return '\n#if DUKHEPFILTER_TYPE == %s\n' % self.filter_type  
    def headerInit(self, rootTypeRealWrite):
        outstring = self.ifstring() +  "#define INIT_NULLS_CTOR		\\\n"
        for c in rootTypeRealWrite:
            outstring+=('%s(0),\t\\\n' % c[2])            
            pass
        return outstring[:-4]+'\n#endif\n'
        pass
    
    def headerMembers(self, rootTypeRealWrite):
        outstring = self.ifstring() +  "#define DUKEHEPHEADER_MEMBERS                          \\\n"
        for c in rootTypeRealWrite:
            outstring+=('%s %s;\t\\\n' % (c[1],c[2]))
            if c[3]:
                outvart = c[1]
                if self.vpointer(outvart): outvart = outvart[:-1]
                outstring+=('%s o_%s;\t\\\n' % (outvart,c[2]))
                pass
            pass
        return outstring[:-3]+'\n#endif\n'
      
    def connectVariables(self, rootTypeRealWrite):
        outstring = self.ifstring() + "#define CONNECT( stringTREENAME )                      \\\n  {"
        for c in rootTypeRealWrite:
            outstring+=('    ConnectVariable( (stringTREENAME), "%s", %s );\t\\\n' % (c[0],c[2]))
            pass
        outstring+=('  }\n#endif\n');
        return outstring

    def declareVariables(self, rootTypeRealWrite):
        outstring = self.ifstring() + "#define DECLARE( stringTREENAME )                      \\\n  {"
        for c in rootTypeRealWrite:
            if not c[3]: continue
            outstring+=('    DeclareVariable( o_%s, "%s" );\t\\\n' % (c[2],c[0]))
            pass
        outstring+=('  }\n#endif\n');    
        return outstring
    
    def resetVariables(self, rootTypeRealWrite):
        outstring = self.ifstring() + "#define RESETVAR                      \\\n  {"
        for c in rootTypeRealWrite:
            if not c[3]: continue
            if self.vpointer(c[1]):
                outstring+=('    o_%s.clear();\\\n' % (c[2]))
            else: outstring+=('    o_%s = -999;\\\n' % (c[2]))
            pass
        outstring+=('  }\n#endif\n');    
        return outstring

    def cloneVariables(self, rootTypeRealWrite):
        outstring = self.ifstring() + "#define COPYVAR                      \\\n  {"
        for c in rootTypeRealWrite:      
            if not c[3]: continue
            if not self.vpointer(c[1]):
                outstring+=('   o_%s = %s;\\\n' % (c[2],c[2]))
            else:        
                outstring+=('   o_%s = %s(*%s);\\\n' % (c[2],c[1][:-1],c[2]))
                pass
            pass
        outstring+=('  }\n#endif\n');    
        return outstring       
    pass #class
    
class readerconfig:
    """Class that makes or updates a reader."""
    def __init__(self):        
        pass
    def vpointer(self,outvart): return (outvart.startswith("std::") and outvart.endswith("*"))
    def doublevpointer(self,outvart): return (outvart.startswith("std::vector<std::vector") and outvart.endswith("*"))
    def construct(self, rootTypeRealWrite):
        outstring="(SCycleBaseNTuple * ownr): owner(ownr),\n"
        for c in rootTypeRealWrite:
            outstring+=('%s(0),\n' % c[2])            
            pass
        return outstring[:-2]+"\n{}\n"
        pass
    
    def classMembers(self, rootTypeRealWrite):
        outstring=""
        for c in rootTypeRealWrite:
            outstring+=('  %s %s;\n' % (c[1],c[2]))
            if c[3]:
                outvart = c[1]
                if self.vpointer(outvart): outvart = outvart[:-1]
                outstring+=('  %s o_%s;\n' % (outvart,c[2]))
                pass
            pass
        return outstring
      
    def connectVariables(self, rootTypeRealWrite):
        outstring="::ConnectVariables(std::string treename){\n"
        for c in rootTypeRealWrite:
            outstring+=('  owner->ConnectVariable( treename.c_str(), VarName("%s").c_str(), %s );\n' % (c[0],c[2]))
            pass
        outstring+=('}\n');
        return outstring

    def declareVariables(self, rootTypeRealWrite):
        outstring = "::DeclareVariables(){\n"
        for c in rootTypeRealWrite:
            if not c[3]: continue
            outstring+=('  owner->DeclareVariable( o_%s, "%s" );\n' % (c[2],c[0]))
            pass
        outstring+=('}\n');    
        return outstring
    
    def resetVariables(self, rootTypeRealWrite):
        outstring = "::Reset(){\n"
        for c in rootTypeRealWrite:
            if not c[3]: continue
            if self.vpointer(c[1]):
                outstring+=(' o_%s.clear();\n' % (c[2]))
            else: outstring+=(' o_%s= -999;\n' % (c[2]))
            pass
        outstring+=('  }\n');    
        return outstring

    def cloneVariables(self, rootTypeRealWrite):
        outstring = "::CopyToOutput(){\n"
        for c in rootTypeRealWrite:      
            if not c[3]: continue
            if not self.vpointer(c[1]):
                outstring+=(' o_%s = %s;\n' % (c[2],c[2]))
            else:        
                outstring+=(' o_%s = %s(*%s);\n' % (c[2],c[1][:-1],c[2]))
                pass
            pass
        outstring+=('  }\n');    
        return outstring       
    pass #class
    
