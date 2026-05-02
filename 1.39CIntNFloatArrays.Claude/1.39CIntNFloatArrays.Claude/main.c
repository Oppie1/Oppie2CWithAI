#include<stdio.h>
#include<math.h>



int main() {

	//A counter variable used to track the current position durning each loop iteration.
	int i;

	//An iteger array capable of holding 5 values. The elements start uninitialized (contain garbage values)
	int meatBalls[5];

	//This will accumulate the sum of all meatball counts. Starting at 0 ensures we don't add garbage to our total.
	int totalMeatBalls = 0;


	//This loop runs 5 times (i = 0 through 5). Each pass corresponds to one day of user input. Note: the condition
	//is i<5, NOT i>5 - the loop continues while i is less than 5.
	for (i = 0; i < 5; i++) {

		//Ask the user for their meatball count for each day. We display (i+1) so the user sees "Day 1,Day 2..."
		//- humans count from 1, but arrays start at index 0.
		printf("How many meatballs did you eat on day %d:\n", i + 1);

		//Store the user's input directly into the array at position[i].
		//On the 1st pass i=0, 2nd pass i=1, and so on. For example, after entering 7 and 3:
		//Meatballs[] = {7,3,0,0,0}
		scanf_s("%d", &meatBalls[i]);

		//Once i reaches 5, the condition (i<5) evalueates to FALSE and the loop exits, moving execution to the
		//next block of code below.
	}

	printf("\n\nLets say the user enters 7 on first day, 3 on 2nd , 1 on 3rd, 1 on 4th and 9 on 5th. So...\n");

	//Now that the array is populated, we loop through it again to compute the running total.
	for (i = 0; i < 5; i++) {

		//"+=" adds the current element to whatever totalMeatBalls already holds, building the sum step by step.
		//Iteration 1: 0 + 7 = 7
		//Iteration 2: 7 + 3 = 10
		//Iteration 3: 10 + 1= 11
		//Iteration 4: 11 + 1 = 12 (no change - zero was entered)
		//Iteration 5: 11 + 9 = 21
		//meatBalls[i] simply reads whichever index we're currently on: {0, 1, 2, 3, 4} - 5 elements total.
		totalMeatBalls += meatBalls[i];

	}

	//Integer division of the total 5 gives us the daily average. Using our example: 20 / 4. Note that int division
	//drops any remainder (no decimals).
	int avg = totalMeatBalls / 5;

	//Output the results. The two %d format specifiers map in order to the two variabls that follow:
	//1st %d - > totalMeatBalls (the accumulated sum)
	//2nd %d ->avg (computed average)
	printf("\nYou ate %d meatballs total, that's an average of %d meat balls per day!\n", totalMeatBalls, avg);

}