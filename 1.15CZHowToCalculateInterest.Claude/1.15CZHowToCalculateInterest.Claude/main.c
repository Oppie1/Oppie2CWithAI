#include<stdio.h>
#include<stdlib.h>


int main() {

	//Declare an integer variable called "pageViews" and set its starting value to 0.
	//You can initialize it to any value you like.
	int pageViews = 0;

	//Use the assignment operator "=" to update pageViews by adding 1 to its currnet value.
	//The result (1) is stored back into the same variable, replacing the olde value.
	//From this point forward, pageViews holds the value 1 - unless it is changed again.
	pageViews = pageViews + 1;

	//Prints the current value of pageViews to the screen, then continue to the next statement.
	printf("pageViews:%d\n", pageViews);

	//Add 1 to the current value of pageViews (which is 1), making it 2.
	pageViews = pageViews + 1;

	//The updated value of 2 is now printed to the screen.
	printf("pageViews:%d\n", pageViews);

	//Add 1 again to pageViews, brining the total count to 3.
	pageViews = pageViews + 1;
	
	//Declare a float variable "balance" to represent a starting dollar amount.
	//Floats can store decimal values, making them suitable for money calculations.
	float balance = 100.00;

	//Calculate 10% interest on the balance for day 1.
	//Multiplying by 1.1 is the same as writing balance = balance * 1.1
	//S0: 100.10 * 1.1 = 110.00
	balance *= 1.1;
	printf("\nbalance:%.2f\n", balance);

	//Apply another 10% interest for day 2, this time calculated on the new balance.
	//Interest compounds - it builds on what was already earned.
	//So: 110 *  1.1 = 121.00
	balance *= 1.1;
	printf("balance:%.2f\n", balance);

	//Apply 10% interest for day 3. The result includes a decimal, which is why the "%.2f" format specifier is used.
	// - it ensures exactly 2 decmal places are shown.
	balance *= 1.1;
	printf("balance:%.2f\n", balance);

	return 0;

}

/*
Output
-----------
pageViews:1
pageViews:2

balance:110.00
balance:121.00
balance:133.10
*/