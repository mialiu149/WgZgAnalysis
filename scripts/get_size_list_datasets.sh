#!/bin/bash

### arg 1 datacontainers list file
### or nothing if datasets_list.txt exists

#for i in `cat $1`; do dq2-ls -f $i | grep "total size" >> size_lo.txt; done

if [ ! -f ./datasets_list.txt ]
then
    echo the datasets file does not exist
    for i in `cat $1`; do dq2-list-datasets-container $i >> datasets_list.txt; done
fi


if [ ! -f ./all_files.txt ]
then
    echo the file does not exist
    for i in `cat datasets_list.txt`; do dq2-ls -f $i >> all_files.txt; done
fi

grep "total files" all_files.txt > nb_files.txt

grep "total size" all_files.txt > size_files.txt

ss=$(awk -F" " 'BEGIN {tot=0;} 
	{tot+=$3} 
	END { print tot}' size_files.txt )
echo $ss
total_size=$(units -t "$ss bytes" TB)

nb_files=$(awk -F" " 'BEGIN {tot=0;} 
	{tot+=$3} 
	END { print tot}' nb_files.txt )
echo -------------------
echo nb of files: $nb_files
echo total size: $total_size

awk -F" " '$1=="[" {print $3","}' all_files.txt > files_list.txt

nb=$(cat files_list.txt | wc -l)
if [ ! "$nb_files" = "$nb" ]
then 
	echo Pas bon
else
	echo OK
fi
