 ###########################################################################
 # @Project: SFramePanda - ROOT-based analysis framework for ATLAS         #
 # Top level Makefile for compiling SFrame on the grid                     #
 ###########################################################################

DIRS = SFrame DukHep  WgZg2012Ana 


all:: 
	@ for dir in $(DIRS); \
	do (cd $$dir; make); \
	done
clean:: 
	@ for dir in $(DIRS); \
	do (cd $$dir; make clean); \
	done
distclean:: 
	@ for dir in $(DIRS); \
	do (cd $$dir; make distclean); \
	done

