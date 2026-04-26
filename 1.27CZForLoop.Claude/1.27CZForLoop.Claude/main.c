#include <stdio.h>




int main() {

	//Declare two integer variables to hold the counter values for each loop.
	//The are left uninitialized here because the for loops will assign their starting values.
	int peanuts;
	int soybeans;


	//This loop counts from 0 up to 100, incrementing by 8 on each iteration. The loop variable 'peanuts' shadows the 
	//one declared above - it is a separate local variable scoped to this loop.
	for (int peanuts = 0; peanuts <= 100; peanuts += 8) {
		//How the loop progresses:
		//Iteration 1: peanuts = 0 -> 0 <=100? Yes -> execute body, then add 8.
		//Iteration 2: peanuts -> 8 -> 8 <=100? Yes -> execute body, then add 8.
		//Iteration 3: peanuts = 16 -> 16 <= 100? Yes -> execute body, then add 8.
		//...and so on until peanuts reaches 104.
		// When peanuts = 104 -> 104 <= 100? No -> loop exits.
		// This means the last value printed will be 96, since 96 + 8 = 104 which fails the condition.
		//

		printf("There are %d peanuts!\n", peanuts);

	}

	printf("\nAnd now for the second example\n");

	//This loop starts at 1 instead of 0, which is useful when counting items naturally (1, 2, 3...).
	//You can choose any starting value that makes sense for your program's context.
	for (int soybeans = 1; soybeans <= 10; soybeans++) {

		printf("There are now %d soybeans!\n", soybeans);
	}
}