# File: function.sh

# Syntax:
# function [name of function] {
	#code here
# }
# call function

# from Week3: Functions

function hello {
	echo "Hello"
}

hello
hello
hello
# Call the function in the terminal by: bash function.sh


function ntmy {
	echo "Nice to meet you $1"
}
# Call the function in the terminal by:
# source function.sh
# ntmy Jeff
# ntmy (argument)


function addseq {
sum=0

for elements in $@
do
	let sum=sum+$elements
done

echo $sum
}
# Call the funtion in the terminal by:
# source function.sh
# addseq 10 20 50
# addseq 10000 400 500 6007 1
# this stores a value in a variable call sum. 
#It will overide the sum variable that is created outside from this function (created from the terminal)


function addseq2 {
local sum=0

for elements in $@
do 
	let sum=sum+$elements
done

echo $sum
}
# Now the local keyword ensures that variables outside our function are not overwritten.
# (In the terminal, assign a value to a variable call sum. Run this program and see if the value gets over written
# check using: echo $sum
# we may store the sum value in a variable by: my_sum=$(addseq2 50 30 40)
# then call it by: echo $my_sum
