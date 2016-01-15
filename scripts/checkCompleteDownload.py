#!/usr/bin/env python
import os,sys,subprocess

'''Take a list of dataset names (n.b. not dataset container names)
from command line input and check that the number of files registered
to each dataset is equal to the number of files found in the local
directory of the same name'''

status = 0
for i in sys.argv[1:]:
    p = 0
    try:
        p = subprocess.Popen(['rucio-ls','-f',str(i).rstrip('/')],
stdout=subprocess.PIPE)
    except:
        p = subprocess.Popen(['dq2-ls','-f',str(i).rstrip('/')],
stdout=subprocess.PIPE)
#    p = subprocess.Popen(['ls',str(i)], stdout=subprocess.PIPE)
    out,err = p.communicate()
    nsets = 0
    for j in out.splitlines():
        if j[0:3]!='[ ]':
            continue
        if j.count('root') > 0:
            nsets = nsets + 1
    dirlist = []
    try:
        dirlist = os.listdir(str(i))
    except:
        print str(i)+': FAIL'
        status = 1
        continue
    if nsets != len(dirlist):
        print str(i)+': FAIL'
        status = 1
    else:
        print str(i)+': OK'

sys.exit(status)
