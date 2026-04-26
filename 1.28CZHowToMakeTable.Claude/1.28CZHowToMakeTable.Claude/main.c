#include<stdio.h>


//Demonstrates how to print a simple 3X3 table using nested for loops.

int main()
{

	//'row' tracks the current row (1 to 3), 'column' tracks the current column (1 to 3).
	int row;
	int column;


	//Outer loop: iterates once per row. Runs 3 times (row = 1, 2, 3).
	//The inner loop must fully complete before the next row begins.

	for (row = 1; row <= 3; row++) {

		//Inner loop: iterates once per column within the current row.
		//Prints column values 1, 2, 3 across the screen, then stops when column reaches 4.
		// 4 <= 3 is false). This entire loop executes for every single row. 

		for (column = 1; column <= 3; column++) {

			//After all 3 columns are printed for this row, move to the next line so the
			//next row starts on a new line.
			printf("%d", column);
			
		}

		printf("\n");

	}

}