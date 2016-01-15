import os.path
import time
import sys
import optparse
import ROOT
import re
from subprocess import Popen
import subprocess
from sys import argv, stdout, stderr
outfile = open('MC12_Wg_NTUP_COMMON', "w" )
samples = open('MC12_Wg_p1328.txt')
for line in samples:
    runnumber=line.strip().split('.')[1]
    cmd_find_ntup_common=str('rucio-ls mc12_8TeV.'+runnumber+'*NTUP_COMMON*/')
    print cmd_find_ntup_common
    p = Popen(cmd_find_ntup_common,stdout=subprocess.PIPE,shell=True)
    p.wait()
    out, err = p.communicate()
    #print out.split()
    outfile.write(out.split()[-1].replace('mc12_8TeV:','')+'\n')
    stdout.flush()
