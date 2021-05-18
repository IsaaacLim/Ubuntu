#!/usr/bin/env bash
# File: vars.sh

# $@ stores all arguments passed in my script
# $! stores the first argument ; $2 the second ...
# $# stores the total number of arguments 
echo "Script arguments: $@"
echo "First arg: $1. Second arg: $2."
echo "Number of arguemtns: $#"


# From Week 3: Variables
# Example use: bash vars.sh red blue green
