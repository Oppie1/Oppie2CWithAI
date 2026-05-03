#include<stdio.h>
#include<math.h>



int main() {

	//A loop counter used to reference the current index during each iteration.
	int i;

	//An array holding 5 integer These elements start uninitialized, meaning, they contain unpredictable values.
	int meatBalls[5];

	//Accumulates the total number of meatballs. Initializing to 0 ensures no random data affects our calculation.
	int totalMeatBalls = 0;


	//Iterates 5 times (i=0 to 4), once for each day. The loop condition (i<5) ensures the loop terminates
	//when i reaches 5. 
	for (i = 0; i < 5; i++) {

		//Prompt for the daily meatball count. WE display (i+1) because humans typically count starting from 1,
		//Whereas array indexing begins at 0.

		printf("How many meatballs did you eat on day %d: \n", i + 1);

		//Store the input value directly into the array at the current index.
		//For instance, after entering 7 and 3, the contents are conceptually: {7,3,0,0,0}
		scanf_s("%d", &meatBalls[i]);

		//When i increments to 5, the condition (i < 5) becomes false. The loop terminates, 
		//and execution continues below.
	}

	printf("\n\n Lets say the user enters 7 on first day, 3 on 2nd, 1 on 3rd, 1 on 4th and 9 on 5th. So...");

	//Iterate over the populated array to calculate the running total.
	for (i = 0; i < 5; i++) {
		//The"+=" operator adds the current array element to the running total.
		//Iteration 1: 0 + 7 = 7
		//Iteration 2: 7 + 3 = 10
		//Iteration 3: 10+1 = 11
		//Iteration 4: 11+1= 12
		//Iteration 5: 12 + 9 = 21
		// Here, meatBalls[i] access the value at the current index
		totalMeatBalls += meatBalls[i];
	}
		//Dividing the total sum by 5 yields the daily average. Since both operands are integers, this performs
		//integer division, which truncates any decimal remainder.
		int avg = totalMeatBalls / 5;
	
	//Output the final statistics. The format specifiers (%d) are replaced sequentially by the subsequent variables:
		//totalMeatBalls, the avg.

	printf("\n You ate %d meatballs total, that's an average of %d meatballs per day!", totalMeatBalls, avg);


}