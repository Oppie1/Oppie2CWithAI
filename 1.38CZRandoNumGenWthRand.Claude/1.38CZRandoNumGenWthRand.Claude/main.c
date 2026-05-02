#include<stdio.h>
#include<math.h>




int main()
{
	//Counter variable used to drive both for loops below.
	int i;
	//Stores the result of each simulated dice roll (a value from 1 to 6)
	int diceRoll;


	printf("Print a Random Number Example (5 random numbers in total): \n");

	//This loop runs 10 times (i = 0 through i = 9).
	//Each iteration, i is checked against the condition i < 10. If true, the body executes and then i is 
	//incremented by 1 (i++). Once i reaches 10, the condition is false and the loop stops. 
	for (i = 0; i < 10; i++) {

		//rand() returns a pseudo-random integer. We print one per iteration, so 10 large random numbers
		//are printed to the screen one at a time.
		printf("%d \n", rand());
	}


	printf("\n\nPrint a Random Dice Roll to the Screen (1-10 total rolls):\n");

	//This loop starts at i = 5 instead of 0, so the condition i < 10 is only true for i - 5,6,7,8 and 9 -
	//giving us exactly 5 iterations. Starting at a value other than 0 is a useful way to control how many times
	//a loop runs without changing the condition.
	for (i = 5; i < 10; i++) {

		//The modulus operator (%) gives us the remainder of rand() divided by 6, which produces a value in
		//the range 0-5. Adding 1 shifts that range to 1-6, matching the faces of a standard die. Without 
		//the +1, the result of 0 would be possible (e.g. rand() = 12 -> 12 % 6 = 0)
		diceRoll = (rand() % 6) + 1;

		//Prints each dice roll result - always a number between 1 and 6.
		printf("%d \n", diceRoll);


	}

}