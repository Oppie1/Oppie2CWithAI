#include<stdio.h>



//The "break" keyword exits a loop immediately when a condition is met, skipping any
//remaining iterations and continuing after the loop's closing brace.


int main()
{
	//Declare three integer variables to hold loop data.
	int a;

	int howMany;

	//maxAmount defines the upper boundary of the for loop. Note: the loop
	//starts at 1 here, but computers typically count from 0, so keep that in 
	//mind when designing loop boundaries.
	int maxAmount = 10; 

	printf("How many times do you want this loop to loop? (up to 10)\n");

	//scanf_s reads a digit from the user and stores it at the memory address (&) of howMany.
	scanf_s(" %d", &howMany);

	printf("\n");

	//The for loop  initializes a to 1, then as long as a <= maxAmount(10), incrementing
	//a by 1 each time.

	//Example - suppose the user enters 3 for howMany:
	//Iteration 1: a = 1 -> 1<=10? Yes -> print 1 -> 1==3? No, continue.
	//Iteration 2: a = 2 -> 2<=10? Yes -> print 2 -> 2 ==3? No, continue.
	//Iteration 3: a = 3 -> 3<=20? Yes -> print 3 -> 3 == 3? Yes, break.

	//The break exits the loop at a == howMany instead of running all the way to 10, so only
	//1, 2, and 3 are printed to the screen.
	for (a = 1; a <= maxAmount; a++) {

		//Print the current value of a on its own line each iteration.
		printf("%d\n", a);

		//Check whether a has reached the user-specified limit. When true,
		//break exits the loop immediately.
		if (a == howMany) {

			break;

		}

	}
}