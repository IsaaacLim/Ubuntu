#include <stdio.h>

//ARRAYS - uses 'int' data type w/ []

void printArray(); //for lvl-3

int main()
{
	//lvl 0 - Creating arrays
	printf("Creating Arrays\n");
	
	int myGrades[10]; //Blank array with 10 slots

	myGrades[0] = 50; //Assigning variables
	myGrades[1] = 60;
	printf("%d, %d\n\n", myGrades[0], myGrades[1]);

	int myGrades2[] = {50,60,70,80,90,100,55,66,77,88}; //Collecting a sum of variables into an array
	printf("%d, %d\n\n", myGrades2[0], myGrades2[1]);

	//lvl 1 - Printing Array with Loop
	printf("Printing Arrays with Loop\n");
	
	/*Sadly C doesn't have a built-in way to get the size
	for (int i = 0; i <= len(myGrades2); i++)
	{
		printf("myGrades[%d] = %d\n", i, myGrades[i]);
	} */

 	int size = 5;
	int array1[size];
	array1 [0] = 32;
	array1 [1] = 44;
	array1 [2] = 67;
	array1 [3] = 74;
	array1 [4] = 89;

	for (int x = 0; x <= 5; x++)
	{
		printf("array1[%d] = %d\n", x, array1[x]);
	}
	printf("\n");

	//lvl 2 - 2D Array
	int grades[][3] = { //At least column size is needed
		{12, 50, 89},
		{50, 78, 100}
	};
	
	printf("2D Array\n");
	printf("Single data: %d\n", grades[0][2]);
	grades[0][2] = 99;
	printf("Changed single data: %d\n\n", grades[0][2]);

	printf("Print 2D array:\n");
	int Row = 3;
	int Column = 3;
	int square[][3] = { //Not sure why I can use the variables instead
		{0, 1, 2},
		{3, 4, 5},
		{6, 7, 8}
	};

	for (int r = 0; r < Row; r++)
	{
		printf("[ ");
		for (int c = 0; c < Column; c++) 
		{
			printf("%d ", square[r][c]);
		}
		printf("]\n");
	}

	//lvl 3 - Refactoring my Printing for the 2D Array
	//Refactoring is upgrading my codes
	printf("\n-Refactored-\n");
	for (int r = 0; r < Row; r++)
	{
		printArray(square[r], Column);
		printf("\n");
	}	

	return 0;
}

void printArray(int arrayRowInput[], int arrayColSize)
{
	printf("[ ");
	for (int column = 0; column < arrayColSize; column++)
	{
		printf("%d ", arrayRowInput[column]);
	}
	printf("]");
}
