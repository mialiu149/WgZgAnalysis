#This script takes a txt file for a list of datasets on the grid, downloads them to a specific 
# Run as DownloadMergeDataset.py listofdatasets.txt destination.txt all/skipdq2/
#from subprocess import Popen
from sys import argv, stdout, stderr
import os,sys,subprocess

## check total file size
def FileSizeOnGrid(dataset):
    p = 0
    try:
        p = subprocess.Popen(['rucio-ls','-fH',dataset],
stdout=subprocess.PIPE)
    except:
        p = subprocess.Popen(['dq2-ls','-fH',dataset],
stdout=subprocess.PIPE)
    #out,err = p.communicate()
    #for line in p.stdout:3
    #    sys.stdout.write(line)
    #    logfile.write(line)
    size=0
    unit=0
    for line in p.stdout:
        if line.startswith('total size'):
           splitline=line.split()
           size=float(splitline[2])
           unit=splitline[3]
    p.wait()
    return size,unit
    #print out
    #print err
## check that there is enough space on local disk.
def CheckQuota():
    proc=subprocess.Popen(['df','-h'],stdout=subprocess.PIPE)
    available=0
    for line in proc.stdout:
        if line.startswith('/dev/mapper/VGdata-LVdata'):
           splitline=line.split()
           available=splitline[3]
    return available
def DQ2Get(dataset,dir):
    #logfile=open(dir+dataset.replace('/','.log'),'w')
#    chdir=subprocess.Popen(['cd',dir],stdout=subprocess.PIPE)
#    chdir.wait()
    os.chdir(dir)
    proc=subprocess.Popen(['dq2-get',dataset],stdout=subprocess.PIPE)
    #for line in p.stdout:
    #    sys.stdout.write(line)
    #    logfile.write(line)
    proc.wait()
    
## check if the number of root files local equal to the one on grid to make sure all files are downloaded and check all the files that are downloaded are complete.
#def CheckDownloadComplete():
## parse file according to file size and hadd them
#def ParseAndHadd(): 
## main function 
if __name__=='__main__':
#   available=CheckQuota()
#   sizes=[]
#   filelist=open('grid_out.txt')
#   for line in filelist.readlines(): 
   #     dataset='user.mliu.mc12_8TeV.129171.Pythia8_AU2CTEQ6L1_gammajet_DP35.merge.wenug.skim.v5/'
#        dataset=line.strip()
#        size,unit=FileSizeOnGrid(dataset)
#        sizes.append(size)
#   totalsize=sum(sizes)
#   print 'space left on disk :',available
#   print 'data set to download : ',totalsize,unit
#   if totalsize*2 > available:
#      print 'not enough space for all datasets plus hadded files'
   dataset='user.mliu.mc12_8TeV.117360.AcerMCPythia_AUET2BCTEQ6L1_singletop_tchan_e.merge.wenug.skim.v5/'
   dest='/data/dukhep07/a/users/mliu/data/MC12/singletop'
   #DQ2Get(dataset,dest)
   size,unit=FileSizeOnGrid(dataset)
   print size
