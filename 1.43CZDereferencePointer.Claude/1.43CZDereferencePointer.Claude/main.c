#include<stdio.h>

//Core concept: Dereferencing a pointer means following its stored memory address
//to retrieve the actual value living at that location.


int main()
{
	int tuna = 19;

	int* pTuna = &tuna;

	printf("Address \t\t Name \t Value \n");
	printf("%p \t %s \t %d \t", pTuna, "tuna", tuna);

	//Important distinction: pTuna is itself a variable, so it has its own unique
	//memory address, accessible via &pTuna. The *value* stored inside pTuna, however,
	//is the address of tuna - both pTuna and &tuna point to the same location in memory.
	printf("\n%p \t %s \t %p \n", & pTuna, "pTuna", pTuna);

	//Placing * in front of a pointer variable is called dereferencing. Instead of
	//working with the address, it follows that address and gives you the value stored
	//there - so *pTuna evaluates to 19.
	//Dereferencing also allows writing: assigning through *pTuna directly changes the
	//value of tuna at its memory location. This demonstrates the two ways to reach
	//Tuna's value: by name (tuna) or through its pointer (*pTuna).
	*pTuna = 71;

	printf("\nThe new value of *pTuna is now:");
	printf("\n*pTuna %d \n", *pTuna);
}