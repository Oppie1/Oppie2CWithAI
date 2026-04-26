#include <stdio.h>
#include<stdlib.h>


int main() {

	//Floats are used here to support decimal values, which is necessary when calculating percentages and averages.
	float grade = 0;
	float scoreEntered = 0;
	float numberOfTests = 0;
	float average = 0;


	//A do-while loop is used here becuase we need the loop body to run at least once before checking the exit
	//condition. This is one of the key diffferences between a do-while and a regular while loop.
	printf("Press 0 when complete \n\n");

	//do-while: executes the block first, then evaluates the condition.
	do {
		//Display the running totals at the start of each iteration.
		printf("Number of tests: %f -- Average: %.1f\n", numberOfTests, average);

		//Prompt the user to enter a test score.
		printf("\nEnter test score: ");

		//Read the user's input and store it in scoreEntered. The & operator passes the memory address of the variable.
		//so scanf_s knows where to write the value.
		scanf_s("%f", &scoreEntered);

		//Accumulate the total score.
		//Example progression:
		//Iteration 1: grade = 0+ 90 = 90
		//Iteration 2: grade = 90 + 100 = 190
		//Iteration 3: grade = 190 + 95 = 285.

		grade += scoreEntered;


		//Track how many scores have been entered.
		//Iteration 1: 0 + 1 = 1
		//Iteration 2: 1 + 1 = 2
		//Iteration3: 2 + 1 = 3
		numberOfTests++;

		//Calculate the running average after each new score is entered.
		//Iteration 1: 90 / 1 = 90
		//Iteration 2: 190 / 2 = 95
		//Iteration 3: 285 / 3 = 95
		average = grade / numberOfTests;
	}
	//The loop continues until the uwer enters 0.
	//Note: the totals are updated and displayed on each iteration,
	//not all at once when the loop ends.
	while (scoreEntered != 0);

}