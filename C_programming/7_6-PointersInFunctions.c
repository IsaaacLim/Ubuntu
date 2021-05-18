#include <stdio.h>

//Pointers in Function
//Using pointers in function will directly change the value of the input variable
//However for Arrays, passing arrays to functions will DECAY the array and automatically change the values of the array

void doubleValue_Standard();
void doubleValue_Pointer();
void printArray();

int main()
{
/*Str & Int into a Function-------------------------------------*/
	int x = 5;

	doubleValue_Standard(x);
	printf("The original value of x is unchanged: %d\n\n", x);

	doubleValue_Pointer(&x);
	printf("The original value of x is also changed: %d\n\n", x);

/*Arrays into a Function---------------------------------------*/
	int array[] = {5,6,7,8,9};

	printf("The array from the function:\n");
	printArray(array, 5); //Don't include [] when passing Arrays to Functions

	printf("\n\nThe values of the ori array (is also changed):\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n\n");

	return 0;
}

void doubleValue_Standard(int x) //this int x != to the int x in the main() function
{
	x = x * 2;
	printf("The value of doubling x is: %d\n", x);
}

void doubleValue_Pointer(int *z) //It doesn't matter what we call the variable
{
	*z = *z *2;
	printf("The value of doubling x is: %d\n", *z);
}

void printArray(int array1[], int size) //Again, the name of the variable passed doesn't matter
{
	for (int i = 0; i < size; i++)
	{
		array1[i]++;
		printf("%d ", array1[i]);
	}
}
