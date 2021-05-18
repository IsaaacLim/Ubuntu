#include <stdio.h>
#include <stdbool.h>

//FOR LOOPS
int main()
{
	//lvl 0 - Basic
	for (int i = 0; i <=10; i++)
	{
		printf("%d\n", i);
	}
	printf("\n");

	//lvl 1 - To obtain the final value
	int j; //Need to declare variable here to extract the final value
	for (j = 20; j >=11; j--)
	{
		printf("%d\n", j);
	}
	printf("The min value of j is %d\n\n", j + 1); //j+1 because j-- is still executed one more time

	//lvl 2 - To use user input
	int max;
	printf("Enter a max value: ");
	scanf("%d", &max);
	for (; max >=0; max -= 2) //This is how FOR Loops with input is typed
	{
		printf("%d\n", max);
	}
	printf("\n");

	//lvl 3 - Nested FOR Loop
	for (int k = 0; k <=10; k++)
	{
		printf("%d ", k);
		for (int l = k - 1; l >=0; l--)
		{
			printf("%d ", l);
		}
		printf("\n");
	}
	printf("\n");

	//Exercise - Check if Number is Prime
	int maxRange;
	printf("Enter a max value to check for Prime Numbers: ");
	scanf("%i", &maxRange);

	bool isPrime = true;
	int primeCount = 0;
	for (int numbers = 2; numbers <= maxRange; numbers++)
	{
		for (int dividents = numbers-1; dividents >= 2; dividents--)
		{
			if (numbers%dividents == 0)
			{
				isPrime = false;
			}
		}
		
		if (isPrime)
		{
			printf("%i, ", numbers);
			primeCount += 1;
		}
		
		isPrime = true; //to reset the isPrime bool
	}
	printf("\nTotal prime numbers: %i\n\n", primeCount);

	return 0;
}
