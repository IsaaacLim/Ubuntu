#!/usr/bin/env bash
# File: simpleif.sh

echo "Start program"

if [[ $1 -eq 4 ]]
then
	echo "$1 is my favorite number"
elif [[ $1 -gt 4 ]]
then
	echo "$1 is a great number"
else
	echo "You entered $1, not what I was looking for."
fi

echo "End Program"

# The argument input needs to be 4 to be true. eg: bash simpleifelse.sh 4
