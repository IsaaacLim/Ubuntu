# File: whileloop.sh

count=3

while [[ $count -gt 0 ]]
do
	echo "count is equal to $count"
	let count=$count-1
done

#use crtl+c to force stop the program if an infintate loops was created
#from Week3: loops
