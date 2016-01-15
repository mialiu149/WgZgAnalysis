# $Id: BUILD.sh 126811 2013-01-15 20:25:36Z mliu $

if [ "$1" = "clean" ]; then
make distclean
exit 0
fi

if [ "x$ROOTPROOFLITE" != "x" ]; then
echo "Running on PROOF-Lite, skipping build"
exit 0
fi

#export ROOTBUILD=debug
make default
