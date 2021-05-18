#include <stdio.h>

int factorial();
void factorialOutput();

int main()
{
	int input;
	printf("Enter a whole number: ");
	scanf("%d", &input);

	printf("Factorial of %d = %d\n", input, factorial(input)); //This is not needed if we use the Void function below

	factorialOutput(input);	

	return 0;
}


//Function for Factorial
int factorial(int b_from_a) //Give a RETURN
{
	int sum = 1;
	for (int i = b_from_a; i >= 1; i--)
	{
		sum *= i;
	}
	printf("Line from the function itself: Factorial = %d\n", sum); //BAD practice
	printf("Having a printf in the function itself is bad practice.\n\n"); //Should have a very specific function
	
	return sum;
}

void factorialOutput(int a_from_input) //Void functions are more to DO Something (console logging or console outputs); No need to give a RETURN
{
	printf("Line from the Void function: Factorial of %d = %d\n", a_from_input, factorial(a_from_input)); //Here used to print the Factorial function above
}
