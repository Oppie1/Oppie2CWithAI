#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main() {

	//Seed the random number generator using the current time so we get different results
	//each time the program runs. NULL is passed to time() as we don't need to store the result anywhere.
	srand(time(NULL));


	//General-purpose loop counter, a temporary swap holder, and flag
	int i, temp, swapped;
	//Defines the total number of elements we are working with in the array.
	int howMany = 3;

	//An array to hold three randomly generated goal values(e.g. 23, 26, 25).
	int goals[3];

	//Loop through each index of the array assign a random number to it. The loop runs
	//while i is less than howMany (0, 1, 2), then stops at i = 3.

	for (i = 0; i < howMany; i++) {

		//Each iteration assigns a random number in the range 1-25 to the current index. For example:

	//i = 0 -> goals[0] = 23 - > array: [23, ?, ?]
	//i=1 goals[1] = 26 -> array: {23, 26, 25]
	//i = 2 -> goals[2] = 25 -> array [23, 26, 25]
	//Once i reaches 3, the condition i < 3 is false and the loop stops
		goals[i] = (rand() % 25) + 1;
	}
	printf("Original List\n");

	//Print each element of the array to the screen one per line.
	//The loop visits each index in order (0, 1, 2), printing the value stored there.
	//Using the example values this produces: 23, 26, 25.
	//After this block we will sort these values using the bubble sort method.

	for (i = 0; i < howMany; i++) {
		printf("%d\n", goals[i]);
	}

	//The outer while loop runs indefinitely (1 = true) until a break statement exits it.
	//Each pass through the loop attempts to sort the array by comparing neighboring elements.

	while (1) {
		
		//Reset the swap flag to 0 (false) at the start of every pass. If no swap happen during
		//the pass, this stays at 0 and we know the array is fully sorted.

		swapped = 0;

	//Compare each adjacent pair of elements. We stop at howMany - 1 because we always look
	//one position ahead (goals[i+1], so going all the way to the last index would go out of bounds.
		for (i = 0; i < howMany - 1; i++) {

			//If the current element is greater than the next one, they are out of order and 
			//need to be swapped. Example first pass:
			//i=0: is goals[0](23) > goals[1](26)? No -> No swap.
			//i=1: goals[1](26) > goals[2](25)? Yes -> swap.

			if (goals[i] > goals[i + 1]) {
			//Save the current element in temp so it is not lost when we overwrite it.

				temp = goals[i];
				//Copy the next element into the current position.
				goals[i] = goals[i + 1];
				//Place the saved value into the next position,
				//completing the swap. Array is now one step closer to sorted.
				goals[i + 1] = temp;


				//Mark that at least one swap occurred this pass. Setting swapped to 1 (true)
				//tells the while loop to run another full pass, since the array may not be
				//fully sorted yet.
				swapped = 1;
			}
	}

		//If swapped is still 0 after a complete pass, no elements were out of order, meaning the
		//array is fully sorted. Break out of the while loop and continue to the print step below.
		if (swapped == 0) {

			break;
		}

	}
	
	//Display the sorted array beneath the original unsorted list.
	printf("\nSorted List\n");

	//Loop through the now-sorted array and print each element line by line. Using the
	//example values this produces: 23, 25, 26.

	for (i = 0; i < howMany; i++) {
		printf("%d \n", goals[i]);
	}
}