#include<stdio.h>
#include<stdlib.h>


//The 'continue' keyword is a jump statement that can only be used inside loops.
//(for, while, or do-while). The example below uses a do-while loop to show how it works.
int main()
{
	//Declare an integer variable called 'num' to hold the user'si nput later.
	int num;

	//Counter variable 'i' starts at 1 and will be incremented through the loop.
	//It is compared against 'num' (the user's chosen value) on each iteration.
	int i = 1;

	//Prompt the user to type a number between 1 and 10.
	printf("Please enter a value from 1-10:\n");

	//Read the integer the user types and store it in 'num'
	scanf_s("%d", &num);

	printf("\n%d was selected.\n\n", num);

	do {

		//Check whether the current counter 'i' equals 6, 8, or the chosen number.
		//If any of those conditions are true, the block below runs. If none are true,
		//the if-block is skipped entirely and we fall though to the printf below,
		//which prints 'i' as an available number
		if (i == 6 || i == 8 || i == num) {

			//When 'i' matches 6, 8, or the user's selection, we want to skip printing it.
			//Incrementing 'i' first ensures we move past the matched value, and then
			//'continue'jumpst straight back to the while condition, by passing the printf.
			i++;

			continue;
		}

		//If we reach this line, 'i' was not 6,8, or the user's number, so it is considered
		//available and printed, The output shows evey eligible value one at a time as the
		//loop cycles (e.g. 2, 3, 4, 5, 7,9,10)
		printf("%d is available. \n", i);

		//Advance 'i' to the next value so the loop prograeses toward the exit condition.
		//For example, if the user picked 3 and 'i' is now 4, the while check (i<=10)
		//is still true, so the loop runs again with i = 4.
		i++;

	} while (i <= 10);

}