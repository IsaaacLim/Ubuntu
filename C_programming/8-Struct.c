#include <stdio.h>

//Struct - Like creating own obj

struct rectangle //Standard way of creating Struct
{
	int length;
	int width;
};

typedef struct	//Another way. Main func don't need to include "struct"
{
	int length;
	int width;
}square;

typedef struct
{
	int x;
	int y;
}position;

typedef struct
{
	char name[30];
	position coordinates; //create a Coordintates variable using Position; didn't include "struct" cuz of "typedef"
	square square; //or I can name it the same
}buildingPlan;

int main()
{
	//lvl 0 - Standard struct usage
	struct rectangle myRectangle = {5, 10}; //need to include "struct"
	printf("Length: %d\nWidth: %d\n\n", myRectangle.length, myRectangle.width);

	square mySquare = {6, 7}; //no need to include "struct"
	printf("Length: %d\nWidth: %d\n\n", mySquare.length, mySquare.width);

	//lvl 1 - Using a Struct with another Struct
	buildingPlan myHouse = {{"Isaac"},{0, 1},{50, 60}};
	printf("House of size: %d, %d. At: %d, %d. Is owned by %s\n\n",
			myHouse.square.length,
			myHouse.square.width,
			myHouse.coordinates.x,
			myHouse.coordinates.y,
			myHouse.name
	);

	//lvl 2 - Using Struct Arrays
	position positionArray[] = {{1, 2},{3, 4},{5, 6}};
	
	for (int i = 0; i < 3; i++)
	{
		printf("%d %d\n", positionArray[i].x, positionArray[i].y);
	}

	//lvl 3 - Struct Pointers 
	buildingPlan *myHousePointer = &myHouse;
	printf("myHouse is located at: %d, %d\n\n", myHousePointer->coordinates.x, myHousePointer->coordinates.y);

	return 0;
}
