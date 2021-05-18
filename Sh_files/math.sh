#!/usr/bin/env/bash
# File: math.sh

#basic math
expr 5 + 2
expr 5 - 2
expr 5 \* 2
expr 5 / 2

#complex math
#combine echo and the bench calculator (bc)
echo "22 / 7" | bc -l
echo "4.2*9.15" | bc -l
echo "(6.5 /0.5) + (6 * 2.2)" |bc -l
