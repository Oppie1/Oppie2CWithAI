#include<stdio.h>


//%p is the format specifier for printing a memory address -- printf("%p, &tuan)
//The & operator retrieves the memory address of a variable.


int main() {

	int tuna = 19;

	printf("Address \t\t Name \t\t Value\n");
	//This line prints the memory address, the variable name "tuna", and its value (19)
	//It's important to understand that the computer only sees raw memory address. The name
	//"tuna" is purely for our benefit as developers - the machine has no concept of it.
	//Since we often need to pass addresses around in the program, we use a special type
	//of variable designed to hold them. These are called "Pointers".
	printf("%p \t %s \t\t %d", &tuna, "tuna", tuna);

	printf("\n\nUsing pointers to demonstrate setting a pointer to a memory address\n");

	//Pointer variables are conventionally prefixed with "p" for readability (e.g. pTuna).
	//The * in the declaration marks this as a pointer type - it tells the compiler this 
	//variable will store a memory address, not a regular value. You can name pointers 
	//anything, but the "p" prefix is a widely used convention.
	//Here, pTuna does NOT hold the integer 19 - It holds the memory address where 19 lives.
	int* pTuna = &tuna;

	printf("Address \t\t Name \t\t Value\n");

	//This produces the same output as the printf on line 13, just using pTuna
	//instead of %tuna - both refer to the same memory address.
	printf("%p \t\ %s \t\t %d \n\n", pTuna, "tuna", tuna);

	//This line prints the details of the pointer variable itself.
	//&pTuna is the address of the pointer variable in memory.
	//pTuna's "value" is the address of tuna - so we use %p to print it.
	//Every row in this table represents a variable sitting at its own spot in memory.
	printf("%p \t %s \t\t %p\n", &pTuna, "pTuna", pTuna);

}
