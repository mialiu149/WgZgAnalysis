from subprocess import Popen
from sys import argv, stdout, stderr

infile = open(argv[1])
outfile = open(argv[2],'w')

for line in infile:
    if not line.strip() or line.startswith("#"):
       continue
    s='<In FileName="'+line.strip()+'" Lumi="1"/> \n'
    outfile.write(s) 
