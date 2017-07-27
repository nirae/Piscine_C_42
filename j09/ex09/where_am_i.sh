#! /bin/sh

A=`ifconfig | grep inet' ' | cut -d ' ' -f 2`

if [ -n "$A" ]
then
	ifconfig | grep inet' ' | cut -d ' ' -f 2
else 
	echo "Je suis perdu!"
fi
