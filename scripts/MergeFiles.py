import sys
import os
import commands

samples = os.listdir('.')

for sample in samples:
    if sample.startswith('user'):
       cmd = 'hadd -f '+sample.strip().split('.')[3]+'.root '+' user.mliu.mc12_8TeV.'+sample.strip().split('.')[3]+'*/*root*'
       print 'going to do this ', cmd
       (status,output) = commands.getstatusoutput(cmd)
       if status:
          sys.stderr.write(output)
          sys.exit(1)
