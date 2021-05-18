#include <stdio.h> 
#include <stdlib.h> //for srand & rand
#include <time.h> //for time func

int main()
{
/*IF ELSE-------------------------------------------------------*/
	int maxValue = 5;
	srand(time(NULL)); //generate random number
	int randomNumber = rand() % (maxValue + 1); //random number range (0-5)
	
	int guess;
	printf("Guess a number (0-%i): ", maxValue);
	scanf("%d", &guess);

	if(guess == randomNumber)
	{
		printf("You guest it right!\n");
	} else if (guess + 1 == randomNumber || guess - 1 == randomNumber)
	{
		printf("You were close\n");
		printf("The correct number is: %d\n", randomNumber);
	} else
	{
		printf("Wrong\n");
		printf("The correct number is: %d\n\n", randomNumber);
	}

/*SWITCH-------------------------------------------------------*/
	int pizzaCal = 250;
	int pizzaNum;
	printf("How many pizza slices?: ");
	scanf("%d", &pizzaNum);

	switch(pizzaNum)
	{
		case 1:
		case 2:
			printf("Not too bad la.\n");
			break;
		case 3:
			printf("A bit too much.\n");
			break;
		default :
			printf("Overkill.\n");
			break;
	}
	printf("Total calories is %d\n\n", pizzaNum * pizzaCal);
	
	//Switch with Char
	char char1;
	printf("Enter A,B or Whatever: ");
	getchar(); //to flush the prev input from '\n'
	scanf("%c", &char1);
	
	switch(char1)
	{
		case ('A'):
			printf("This is a character A\n");
			break;
		case (66):
			printf("This is the ASCII of B (66)\n");
			break;
		default:
			printf("You entered whatever\n");
			break;
	}
	return 0;
}

/*
#include <stdbool.h>
int main ()
{
	//Basic IF with bool
	bool yesOrNo = true;
	if(yesOrNo) printf("It is true"); //Single line IF statement; will print if yesOrNo is True


	//Basic IF with user input (WRONG!!! Can't input into BOOL)
	bool idk;
	printf("Enter number: ");
	scanf("%d", &idk);
	
	//Basic IF with user input (CORRECT!)
	bool idk;
	int input;
	printf("Enter number");
	scanf("%d", %input); //%d is the better choice here
	idk = input;

	if(idk); //any number >0 is true
	{
		printf("Hello there");
	}

	return 0;
}
*/
