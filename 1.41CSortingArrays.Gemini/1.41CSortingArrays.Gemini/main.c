#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main() {

	//Initialize the random number generator using the current time. This ensures
	//we get a different sequence of numbers every time the program runs.
	//We pass NULL to time() because we need the time value directly, not stored.
	srand((time)NULL);

	//Declare variables: 'i' for iterating loops, 'temp' as a placeholder when swapping,
	//and 'swapped' as a boolean flag to track if sorting is finished.
	int i, temp, swapped;

	//Set the total number of elements we plan to sort in our array.
	int howMany = 3;

	//Create an integer array configured to hold exactly 3 values.
	int goals[3];

	//Populate the array with random numbers.
//The loop starts at index 0 and continues until it fills all required spots (indices 0, 1 & 2)
	for (i = 0; i < howMany; i++) {
		//To keep our random numbers manageable, we use the modulo operator (%) with 25.
		//This limits the random integer to a remainder between 0 and 24.
		//by adding 1, we shit that range to 1 through 25
		goals[i] = (rand() % 25) + 1;
	}

	printf("Original List\n");

	//Output each array element in its original, unsorted order.
	//The loop visits indices 0, 1, and 2, printing the random values we just generated.
	//After this, we will apply the bubble sort algorithm to organize them.

	for (i = 0; i < howMany; i++) {

		printf("%d \n", goals[i]);
	}

	//This outer loop continues indefinitely (while 1 is true) until we manually break out
	//of it. Each iteration represents one full sorting pass over the array.
	while (1) {
		//Start by assuming the array is sorted (swapped = 0).
		//If we finish a full pass without changing this to 1, our assumption was right,
		//and the sorting is done.
		swapped = 0;

		//We iterate through the array to compare side-by-side elements. We stop at 
		//'howMany - 1' to prevent an out-of-bounds error when we check the "next"
		//element (i + 1)
		for (i = 0; i < howMany - 1; i++) {
			//Check if the current element is larger than the element immediately
			//following it. For example, if array[0] is 26 and array[1] is 25, they
			//need to swap places.
			if (goals[i] > goals[i + 1]) {
				//Store the current element's value safely in 'temp' so it isnt erased 
					//during swap.
				temp = goals[i];

				//Overwrite the current element with the value of the smaller, next element.
				goals[i] = goals[i + 1];

				//Complete the swap by placing the the originally larger value 
				//(stored in temp) into the next spot. -> assigning to whatever's in temp
				goals[i + 1] = temp;

				//Since a change was made, flag 'swapped' as 1 (true). This signals the outer while loop that
				//we need to do at least one more pass to double-check the order
				swapped = 1;
			}
		}

		//If we finished the inner 'for' loop and 'swapped' is still 0, it means no elements
		//were out of order. The array is perfectly sorted, and we can safely break out
		//of the infinite while loop.
		if (swapped == 0) {
			break;
		}
	}

	//Output the newly sorted array below the original list for comparison.
	printf("\nSorted List\n");

	//Iterate through the array one final time, printing tht elements securely sorted
	//from lowest to highest.
	for (i = 0; i < howMany; i++) {
		printf("%d\n", goals[i]);

	}

}