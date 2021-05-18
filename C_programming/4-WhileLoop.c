#include <stdio.h>

//WHILE LOOP
int main()
{
	//lvl 0 - Basic
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", i);
		i++;
	}
	printf("\n");

	//lvl 2 - Nested While Loops
	int j = 0, k;
	while (j <= 10)
	{
		k = j;
		while (k >= 0)
		{
			printf("%d ", k);
			k--;
		}
		printf("\n");
		j++;
	}
	printf("\n");

	//lvl 3 - Do While Loop
	//Do 'something' while 'someting is true'
	int input;

	do
	{
		printf("Enter number between 0-9: ");
		scanf("%d", &input);
	} while (input < 0 || input > 9); //Keep asking for input as long as it's not within range
	printf("Good\n");

	return 0;
}
