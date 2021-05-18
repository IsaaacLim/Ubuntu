#include <stdio.h>
#include <unistd.h>

int main()
{
	//Input with getchar; Output with putchar
	printf("-getchat(), putchar()-\n");	

	int input;
	printf("Enter something: ");
	input = getchar(); //getchar only takes in a single character

	printf("\nYou entered: "); //Doesn't give a space by default
	putchar(input);

	printf("\n\n");
	
	//Input with fgets; Output with puts
/*	printf("-gets(), puts()");

	char str[100];
	printf("Enter somthing: ");
	fgets(str);

	printf("\nYou entered: "); //Doesn't give a space by default
	puts(str);

	printf("\n\n");
error	
*/
	return 0;
}
