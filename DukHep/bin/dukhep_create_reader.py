#!/usr/bin/env python
# $Id: dukhep_create_reader.py 126811 2013-01-15 20:25:36Z mliu $

def main():
  import sys
  import os.path
  import optparse
  import dukheputils

  # Print some welcome message before doing anything else:
  print ">>"
  print ">> %s : create or update header file from configuration" % \
        os.path.basename( sys.argv[ 0 ] )
  print ">>"
  print ""


  # Parse the command line parameters:
  thecmd = sys.argv
  parser = optparse.OptionParser( usage="%prog [options] configurationFile.dat <configurationFile2.dat> <...>" )
  parser.add_option( "-n", "--name", dest="classname", action="store",
                     type="string", default="TestReader",
                     help="Name of the class to create or modify" )

  ( options, args ) = parser.parse_args()

  import os.path
  configtuple = []
  if not args:
    parser.print_help()
    sys.exit(1)
    
  for configName in args:
    if not os.path.exists( configName ):
      print "Configuration file %s not found!" % configName
      print """Please create this file. Example:
      rw\tph_n\tUint_t*\tm_NumPhotons\t\t             <<< copy to output
      rw\tph_tight\tstd::vector<int>*\tm_PhotonTight <<< copy to output
      r \tph_tight\tstd::vector<int>*\tm_PhotonLoose <<< just read
      \tph_tight\tstd::vector<int>*\tm_PhotonLoose <<< ignore
      """
      sys.exit(1)
      pass
        
    inf = open( configName, "r" )
    for line in inf:
      s = line.split()
      if (len(s) == 5) and s[3].endswith('>*'):
        s[2]+=' '+s[3]
        del s[3]
        pass
      if (len(s) == 4) and (s[0] in "rwr"):  (flags,rootname,type,realname) = tuple(s)
      else :        
        if (len(s) > 4) or (len(s) <3): print "Parse error:",line
        continue
      if not rootname in (datums[0] for datums in configtuple):
        configtuple.append((rootname,type,realname,('w' in flags)))
      else:
        print 'branch "%s" already in configuration, skipping' % rootname
        pass
      pass
    inf.close()
    pass

  fileName = options.classname + '.h'
  srcName = options.classname + '.cxx'  
  if os.path.exists( fileName ):
    print "File \"" + fileName + "\" already exists!"
    sys.exit(1)
    pass
  # Write the hdr file.
  klass = options.classname
  
  fc = dukheputils.readerconfig()
  f = open(fileName,"w")
  f.write("////%s\n" % " ".join(thecmd))
  macroname =(klass).upper()
  f.write("#ifndef %s\n#define %s 1\n" % (macroname,macroname) )
  f.write("#include <vector>\n")
  f.write("#include <string>\n")
  f.write('#include "core/include/SCycleBaseNTuple.h"\n\n')
  a="""
class %s {
  public:
    %s(SCycleBaseNTuple * owner);
    virtual ~%s(){};
    std::string VarName(const char * s) {return std::string(s);};
    void ConnectVariables(std::string treename);
    void DeclareVariables();
    void Reset();
    void CopyToOutput();

    //define your getters here
  public:
    SCycleBaseNTuple * owner;    
    """ 
  f.write(a % (klass, klass, klass))
  f.write(fc.classMembers(configtuple))
  f.write('};\n #endif\n')
  f.close()
  # Write the src file.
  if os.path.exists( srcName ):
    print "File \"" + srcName + "\" already exists!"
    sys.exit(1)
    pass
  f = open(srcName,"w")
  f.write("////%s\n" % " ".join(thecmd))
  f.write('#include "include/%s.h"\n' % klass)
  f.write(klass+"::"+klass)
  f.write(fc.construct(configtuple))
  f.write("void "+klass)
  f.write(fc.connectVariables(configtuple))
  f.write("void "+klass)
  f.write(fc.declareVariables(configtuple))
  f.write("void "+klass)
  f.write(fc.resetVariables(configtuple))
  f.write("void "+klass)
  f.write(fc.cloneVariables(configtuple))
  pass

# Call the main function:
if __name__ == "__main__":
  main()
