#this file returns infomation from AMI query, needs an inputfile list
from pyAMI import * 
from subprocess import Popen
from sys import argv, stdout, stderr
#availabe information from GetDataSetInfo [u'triggerConfig', u'beamType',
#u'AMITag', u'TransformationPackage', u'autoConfiguration',
#u'logicalDatasetName', u'approx_crossSection', u'totalEvents', u'added_comment',
#u'dataType', u'preInclude', u'version', u'preExec', u'nFiles',
#u'geometryVersion', u'prodsysStatus', u'datasetNumber']#
#query for one file info  'amiCommand GetDatasetInfo
#-logicalDatasetName=mc11_7TeV.108081.PythiaPhotonJet_Unbinned35.merge.AOD.e964_s1299_s1300_r3043_r2993/
#'
##>row 0
'''
     ->       logicalDatasetName = mc12_8TeV.146438.AlpgenJimmy_AUET2CTEQ6L1_WgammaNp2_LeptonPhotonFilter.evgen.EVNT.e1260
     ->       nFiles = 580
     ->       totalEvents = 2900000
     ->       dataType = EVNT
     ->       PDF = CTEQ6L1 - LO with LO alpha_s
     ->       TransformationPackage = 17.2.2.4
     ->       ecmEnergy = 8000
     ->       prodsysStatus = ALL EVENTS AVAILABLE
     ->       version = e1260
     ->       datasetNumber = 146438
     ->       generatorName = Photos+Herwig+Jimmy+Tauola+Alpgen
     ->       geometryVersion = 
     ->       triggerConfig = 
     ->       conditionsTag = 
     ->       generatorTune = AUET2 CTEQ6L1
     ->       keywords = EW, leptonic, gamma, W
     ->       crossSection_mean =   2.1390E-02
     ->       GenFiltEff_mean =   5.4461E-01
     ->       added_comment = 
     ->       crossSection_type = num
     ->       crossSection_min = .0207398
     ->       crossSection_max = .0220355
     ->       crossSection_unit = nano barn
     ->       crossSection_desc = cross-section in nano barn returned by prodDB
'''
def GetInfoFromAMI(fname,keyname):
    infile = open(fname)
    keyInfo=[]
    for line in infile:
        if not line.strip() or line.startswith("#"):
           continue
        try: 
           #amiCommand=["GetDatasetInfo","-logicalDatasetName=%s"%line.strip()]
           amiCommand = []
    # The command is sent in a vector. The first element MUST be the command name 
           result=amiclient.execute(amiCommand) 
           resultDict=result.getDict()
           el_key=resultDict.keys()
           row_key=resultDict[el_key[0]].keys()
           number=resultDict[el_key[0]][row_key[0]][keyname]
           keySingleValue=float(number)
           print line,keySingleValue
           keyInfo.append(keySingleValue)
        except Exception, msg:      
               print msg 
    return keyInfo

def GetInfoFromAMIMC(MCname,keyname):
    try: 
       amiclient=AMI()
       amiCommand=["GetDatasetInfo","-logicalDatasetName=%s"%MCname.strip()]
    # The command is sent in a vector. The first element MUST be the command name 
       result=amiclient.execute(amiCommand) 
       resultDict=result.getDict()
       el_key=resultDict.keys()
       row_key=resultDict[el_key[0]].keys()
       number=resultDict[el_key[0]][row_key[0]][keyname]
       keySingleValue=float(number)
       return keySingleValue
    except Exception, msg:      
           print msg 

def main():
    fname=argv[1]
    keyname='crossSection_mean'
    keyInfo=GetInfoFromAMI(fname,keyname)
    print (keyInfo)
    keyname='GenFiltEff_mean'
    keyInfo=GetInfoFromAMI(fname,keyname)
    print (keyInfo)
    #print type(keyInfo[0])
if __name__ == "__main__":
        main()
