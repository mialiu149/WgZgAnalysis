#!/bin/bash
echo 'RootCore dir:'
echo $ROOTCOREDIR
test "x$ROOTCOREDIR" = "x" && echo "ROOTCOREDIR not set, source setup.sh" &&
#source __panda_rootCoreWorkDir/RootCore/scripts/setup.sh
source $ROOTCOREDIR/scripts/setup.sh
ls $ROOTCOREDIR/include/
cd SFrame
source setup.sh
cd ..
make distclean
make
