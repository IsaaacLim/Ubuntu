#include <stdio.h>
#include <stdbool.h> //for booleans
#include <string.h> //for strlen() function
int main() 
{
/* Print------------------------------------------------------*/
	printf("Hello world\n"); //print sting
	printf("%i\n\n", 1995); //print integer
	
/* Integers(whole numbers), Double (numbers with floating point)------------
	Double is more standard than float. Unless really low on memory, just use double
	calling a float: float x; printf("%f", xF); */
 /*	int radius;
	printf("Input a radius (whole number): ");
	scanf("%i", &radius); //address-of operator (&)	
	double area = 3.142 * radius * radius;
	printf("Radius entered is: %i, the area is: %f\n\n", radius, area); //print integer & double variables
	
	//Scientic Notation with Floating Point Numbers
	int powerOfx = 2.4e4; //This equals to 24*10^4
	printf("%i\n\n", powerOfx);
	
	double bigNumber;
	printf("Enter a huge number, eg. 240000 or 24e4: ");
	scanf("%lf", &bigNumber); //for decimal/scientific number input
	printf("%f\n%e\n%g\n\n", bigNumber, bigNumber, bigNumber);
	
	/*Conversion Characters
	-----------------------
	%f - Decimal notation
	%e - Scientific notation
	%g - Computer decides which is best */

	//Type casting - changing the output data type
 /*	int eggs;
	printf("Input amount of eggs (whole number): ");
	scanf("%i", &eggs);
	
	double dozen = (double) eggs / 12;
	// or "double dozen = eggs / 12.0;"
	// not "double dozen = (double) (eggs / 12);" This will be the same as "double dozen = eggs /12"
	printf("You have %f dozen eggs.\n\n", dozen);
*/	
/*Character and Strings------------------------------------------*/
	char singleChar = 'A';
	printf("A single character of %c\n", singleChar);
	
	char mySingleChar;
	printf("Enter a character: ");
	getchar(); //Flushes the input stream to clear characters like "\n" that will otherwise be taken by the scanf()
	scanf("%c", &mySingleChar);
	printf("This is the output of a char: %c\n", mySingleChar);
	
	char name[31]; //+1 to the numbers of characters wanted ('\0' null character at the end)
	printf("Input name: ");
	scanf("%30s", name); //s for string. Only one that doesn't need '&' for inputs. %30s limits the number of characters taken
	printf("Hello there %s\n", name);

	//Getting charater count (manual)
	int charCount1 = 0;
	while (name[charCount1] != '\0')
	{
		charCount1++;
	}
	printf("Character count for name = %d\n", charCount1);
	
	//Getting character count (built in)
	int charCount2 = strlen(name); //needs <string.h> 
	printf("Character count for name = %d\n\n", charCount2);
 
	//Math with Char
	char char1;
	printf("Enter a character: ");
	scanf("%c", &char1);
	printf("The ASCII value of '%c' is %i\n", char1, char1); //changing char to int

	int charNum;
	printf("Enter a number (0-127): ");
	scanf("%i", &charNum);
	printf("The character of %i is '%c'\n", charNum, charNum); //changing int to char

	char charMath = 'A'+ '\t'; // 'tab character'
 	printf("A(65) + \\t(11) = %c(%i)\n\n", charMath, charMath); //math with char; '\' is an escape character
 

/* Boolean ----------------------------------------------------------*/
/*
	//Without Library
	_Bool yes_or_no = 1;
	printf("Yes or no? (0 is false, anyother number is true): %i\n", yes_or_no);

	//With Library
	bool yesOrNo = true;
	printf("Boolean can be taken as an integer, such as '%i + 10 = %i'\n\n", yesOrNo, yesOrNo + 10);
*/
/* Increment & Decrement Operators-----------------------------------*/
/*	int oriValue = 100;
	int valueB4Plus = oriValue++; //value displayed as 100 first then only increment
	int plusB4Value = ++oriValue; //increment first before displaying, hence 102 (++ twice)

	printf("value before increment: %i\n", valueB4Plus);
       	printf("value after increment: %i\n", plusB4Value);	
	printf("oriValue is also changed: %i\n\n", oriValue);
*/
	return 0;
}
