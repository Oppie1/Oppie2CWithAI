#include<stdio.h>
#include<stdlib.h>



int main()
{
	//Multiple variables of the same type can be declared and initialized.
	//in a single statement using comma-separated entries.
	int a = 5, b = 10, answer = 0;

	//Pre-increment (a++): 'a' is increased by 1 BEFORE the expression is evalueated.
	//a becomes 6 first, then 6 * 10 = 60
	answer = ++a * b;

	//%d is the format specifier for an integer. 'answer' holds the result.
	printf("Answer: %d\n\n", answer);


	a = 5, b = 10, answer = 0;

	//Post-increment (a++): the expression is evaluated FIRST, then 'a' is increased. 
	// 5 * 10 = 50 is calculated first, and 'a'  is incremented to 6 afterword.
	answer = a++ * b;

	//Confirms the result is 50, since the increment happened after the multiplication.
	printf("Answer: %d\n", answer);

	//'a' is now 6, becuase the post-increment was applied after the expression completed.
	printf("Now a equals: %d\n", a);


	int tuna = 20;

	//Display the initial value of tuna (20)
	printf("\n%d\n", tuna);

	//Pre-increment: tuna goes from 20 to 21
	++tuna;

	//tuna is now 21.
	printf("%d\n", tuna);

	//Pre-increment again: tuna goes from 21 to 22.
	++tuna;
	printf("%d\n", tuna);

	//Pre-increment raises tuna to 23 before the multipliation, so: 23 * 2  =46.
	tuna = ++tuna * 2;

	printf("%d\n", tuna);

	//Post-increment: 46 * 2 = 92 is evaluated first, then tuna is incremented to 93.
	tuna = tuna++ * 2;

	printf("%d\n", tuna);

}