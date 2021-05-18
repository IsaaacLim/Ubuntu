# File: ifloop.sh

for number in {1..9}
do
	if [[ $number -lt 3 ]] || [[ $number -gt 7 ]]
	then 
		echo "$number"
	fi
done
