#include <stdio.h>

//POINTERS

int main()
{	
	//lvl 0 - Intro
	
	int number = 10;
	int *pNumber = &number; //'*' is to create a pointer; '&' is to point the pointer to the address of memory

	//Print
	printf("Value (normal): %d\n", number);
	printf("Value (pointer): %d\n\n", *pNumber); //'*' is called Indirection Operator (to get the value where the pointer is pointing at)

	//Change value
	*pNumber = 20;
	printf("Changed value through pointer\n");
	printf("Value (normal): %d\n", number);
	printf("Value (pointer): %d\n\n", *pNumber);

	//Arithmetic operator for pointers
	(*pNumber)++;
	printf("Arithmetic operator for pointers\n");
	printf("Value (normal): %d\n", number);
	printf("Value (pointer): %d\n\n", *pNumber);

	return 0;
}
