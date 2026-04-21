#include<stdio.h>
#include<stdlib.h>


/*Order of Operations: C follows standard math precedence rules (like PEDMAS). Use parentheses
to explicitly control the order in which an expression is evaluated.*/

int main()
{
	//Multiplication happens first: 2*6 = 12, then 12+4 = 16
	int a = 4 + 2 * 6;

	//Print the value of 'a' to the console. Since 'a' was already declared above, no type is needed here.
	printf("Result: %d \n", a);

	//'a' can be reassigned at any point without repeating the 'int' keyword - that's only needed on the first declaration.
	//Wrapping '4+2' in parentheses forces that addition to evaluate first: (4+2) = 6, then 6*6 = 36
	a = (4 + 2) * 6;

	printf("Result is now: %d\n", a);


}