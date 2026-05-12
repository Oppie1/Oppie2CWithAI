#include<stdio.h>



int main() {

	//Loop counter used to iterate through the array.
	int i;

	//An integer array named meatBalls holding 5 elements at indices 0 through 4.
	int meatBalls[5] = { 7,3,18,12,10 };

	printf("Element \t Address \t\t Value \n");

	//Each iteration prints the index [%d], the memory address of that element (%p),
	//and the actual value stored at that element (%d);
	//&meatBalls[i] gives us the address; meatBalls[i] gives us the value.
	for (int i = 0; i < 5; i++) {

		printf("meatBalls[%d] \t %p \t %d \n", i, &meatBalls[i], meatBalls[i]);

	}

	//An array name by itself acts as a pointer to its first element. Here, 
	//meatBalls holds the memory address of meatBalls[0], which contains 7.
	printf("\nmeatBalls \t %p \n", meatBalls);

	//Placing * in front of the array name dereferences it, gives us the value 
	//stored at that first element rather than its memory address.
	printf("\n*meatBalls \t\t\t\t %d \n", *meatBalls);

	//Adding 2 to the array name moves the pointer forward by 2 positions, landing
	//on the third element (index 2). This prints its memory address.
	printf("\n*meatBalls+2\t %p", (meatBalls + 2));

	//Wrapping (meatBalls + 2) in * dereferences that address, printing
	//the actual value stored at the third element.
	printf("\n*(meatBalls+2) \t\t\t\t %d", *(meatBalls + 2));

}

//Key takeaway: An array's name alone - without brackets or an index - is simply
//a pointer to its first element. You never need to write &meatBalls[0] explicitly.

//Dereferencing an array name retrieves the value at its first element. To reach other 
//elements, add an offset to the array name (e.g., meatBalls+2) and then dereference the
//result with *. This pointer arithmetic is an alternative to bracket notation and works
//because array elements are stored contiguously in memory.