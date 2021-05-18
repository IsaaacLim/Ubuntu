#File: manyloops.sh

echo "Explicit list:"

for picture in img001,jpg img002.jpb img003.jpg
do 
	echo "picture is equal to $picture"
done

echo ""
echo "Array:"

stooges=(curly larry moe)

for stooges in ${stooges[*]}
do
	echo "Current stooge: $stooges"
done

echo ""
echo "Command substitution:"

for code in $(ls)
do
	echo "$code is a bash script"
done

#from Week3: for
