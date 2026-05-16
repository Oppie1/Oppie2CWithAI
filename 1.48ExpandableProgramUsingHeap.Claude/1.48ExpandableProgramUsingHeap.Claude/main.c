#include<stdio.h>
#include<stdlib.h>

int main() {

	//Loop counter and storage for the user-specified count of numbers to average.
	int i, howMany;

	//Always initialize local variables. Accumulator variables like "total" must start at 0, otherwise
	//they may contain garbage values left over in memory.
	int total = 0;

	//Holds the computed average. Declared as float to preserve the decimal portion of the division result.
	float average = 0.0;

	//A pointer that will point to a dynamically allocated block of memory, which we will treat as an array once
	//memory is assigned to it.
	int* pointsArray;

	printf("How many numbers do you want to average? \n");

	//The & operator passes the memory address of "howMany" to scanf_s so it can write the scanned value 
	//directly into the variable.

	scanf_s("%d", &howMany);	

	//malloc() requests a block of memory from the heap at runtime. We multiply the user's count by
	//sizeof(int) to get the exact number of bytes needed. For example, if howMany = 5 and each int is 4 bytes
	//malloc reserves 20 bytes. The cast (int*) tells the compiler to treat that raw memory as an array of
	//integers, so we can index it like pointsArray[0], pointsArray[1]. etc.
	pointsArray = (int*)malloc(howMany * sizeof(int));

	printf("Go ahead and enter those 3 numbers ;)\n");

		//Iterate howMany times, scanning one integer per iteration into the array. Each value is immediately 
		//added to "total" as it is entered. Example with howMany = 3 and inputs 5, 10, 7;
		// i=0: total = 0 + 5 = 5
		// i=1: total = 5 + 10 = 15
		// i=2: total = 15 + 7 = 22
		//When i reaches 3, the condition i < howMany is false and the loop exits.

	for (i = 0; i < howMany; i++) {

		scanf_s("%d", &pointsArray[i]);

		total += pointsArray[i];

	}

	//Both "total" and 'howMany" are ints, so dividing them without a cast would perform integer division and
	//truncate the decimal. Casting both to float ensures the result matches the float type of "average"/
	average = (float)total / (float)howMany;

	printf("Average is %.2f", average);
}