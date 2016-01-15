# Please provide an input file (argv[1]) with the list of dataset and a file to
# save outDs Names(to be used for dq2-get)
# names. See mc_datasets for an example.
# To Run: python submit_grid_mc.py mc_dataset mc_outputfromgrid 

from subprocess import Popen
from sys import argv, stdout, stderr

# choose your runjob script.
#runjob = 'ttRun.py'

# choose username for output dataset. Must be a string. 'username'
username = 'mliu'

# choose a version label for output dataset. This is placed at end. Must be 'string'
vlabel = 'ratio.pt1.v0'

# your must choose or change "options" below to the appropriate
# object. Blacklisted sites included. This works with my current ColorFlow/grid_build.sh file that will untar fastjet instead of 
# svn co fastjet. (Some sites do not have valid certificate to do that)
options = ['prun',
	'--bexec grid_build.sh',
        '--outputs=HTRatioCycle.Data.0.root',
        '--athenaTag=17.1.0',
        '--useRootCore',
        '--nGBPerJob=MAX',
        '--nFilesPerJob=10',
        '--extFile="ilumicalc_histograms_None_179710-191933.root,MC11c.prw.root"']

infile = open(argv[1])
outfile = open(argv[2],'w')
for line in infile:
    # ignore comments, empty lines. Lable splits the input dataset up by the period. Will put the first two secitons into output 
    #dataset name. (outDS) Dataset names are found in mc_dataset file. That files must be clean for this to work
    if not line.strip() or line.startswith("#"):
        continue

    label = '.'.join(line.split('.')[0:5])

    # make outDS name. 
    outds_str = '--outDS user.%s.%s%s' % \
            (username,line.strip().replace('/','.'), vlabel)
    outfile.write('user.%s.%s%s/\n' %(username,line.strip().replace('/','.'), vlabel)) 
    # configure final options.
    prun_options = ['--exec "grid_run_data_slim.sh %IN"',
            outds_str,
            '--inDS %s' % line.strip()]

    print ' '.join(options+prun_options)
    stdout.flush()

    # call prun...
    p = Popen(' '.join(options + prun_options), stdout=stdout,
            stderr=stderr, shell=True)
    p.wait()

    stdout.flush()
    stderr.flush()
