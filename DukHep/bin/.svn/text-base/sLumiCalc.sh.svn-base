########## sframeLumiCalc.

#2011 recommended
lumitag=OflLumi-7TeV-001
trig=L1_EM14

usage()
{
cat <<EOF
usage: ${0##*/} [options] config.xml
Get the luminosity of the sample in an xml configuration file.

OPTIONS:
      -t <trig> set the trigger (default is $trig )
      -l <tag> set luminosity tag (default is $lumitag )
EOF
}
if [ ${#} == 0 ]; then
    usage
    exit 1
fi

while getopts "ht:l:" OPTION
do
     case $OPTION in
         h)
             usage
             exit 1
             ;;
	 t)
             trig=$OPTARG
             ;;
	 l)
             lumitag=$OPTARG
             ;;
         ?)
             usage
             exit
             ;;
     esac
done

while [ ${#} != 1 ]; do
    shift
done


iLumiCalc.exe +V -t $trig --d3pd_dir=Lumi --lumitag=${lumitag} \
`grep -o 'FileName="[^[:space:]]*"'  ${1} | sed 's#FileName="#--root=#; s#"##'`
