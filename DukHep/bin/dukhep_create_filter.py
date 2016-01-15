#!/usr/bin/env python
# $Id: dukhep_create_filter.py 126811 2013-01-15 20:25:36Z mliu $

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
  parser.add_option( "-f", "--filename", dest="outfile", action="store",
                     type="string", default="MacrosForDukHepFilter",
                     help="Name of the header file to create or modify" )
  parser.add_option( "-t", "--type", dest="filtertype", action="store",
                     type="string", default="DEF_FILTER",
                     help="Name of the filter type you are defining" )

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

  if options.outfile.endswith('.h'):
    fileName = options.outfile
  else:
    fileName = options.outfile + '.h'  
  if os.path.exists( fileName ):
    gotnewfile=False
    print "File \"" + fileName + "\" already exists"
    print " Moving \"" + fileName + "\" to \"" + \
          fileName + ".backup\""
    import shutil
    shutil.copy( fileName, fileName + ".backup" )
    pass
  else:
    gotnewfile=True
    pass
  
  # Write the hdr file. one file should contain all of the optional definitions
  fc = dukheputils.filterconfig(filtertype=options.filtertype, newfile=gotnewfile)
  if gotnewfile:    
    f = open(fileName,"w")
    f.write("////%s\n" % " ".join(thecmd))
    f.write("#undef INIT_NULLS_CTOR\n#undef DUKEHEPHEADER_MEMBERS\n#undef CONNECT\n#undef DECLARE\n#undef RESETVAR\n#undef COPYVAR\n\n")    
    f.write("#define %s 1\n" % options.filtertype)
    f.write("//begin macro definitions\n")
    for macro in fc.macros(configtuple):
      f.write(macro)
      f.write('\n')
      pass
    f.write("//end definitions %s\n" % options.filtertype)
    f.write('\n')
    f.write("//end macro definitions\n")
    f.close()
  else:   
    macroIter = fc.macros(configtuple)
    import fileinput
    import re
    counter=0
    findcounter = re.compile("#define \w+ (\d*)")
    inserting=False
    for line in fileinput.input(fileName,inplace=1):      
      m=findcounter.match(line)
      if (m and m.groups()[0]): counter = int(m.groups()[0])
      if line.startswith("//end macro"): inserting=True
      if line.startswith('//begin macro'): print "#define %s %d" % (options.filtertype, counter+1)
      else:        
        if inserting: 
          for macro in macroIter: 
            print macro,
            print "\n"
          print ("//end definitions %s\n" % options.filtertype),
          pass
        inserting=False
        pass
      print line,
      pass #file loop
    pass #no newfile
  print "Done."
  pass

# Call the main function:
if __name__ == "__main__":
  main()
