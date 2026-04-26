#include<stdio.h>
#include<stdlib.h>


int main()
{
	//Starting value for the counter.
	int day = 1;

	//Floats store decimals. Starting amount is $.10.
	float amount = 0.1;

	//Loop runs while day<31 (day 1-30).
	//When day reaches 31, the condition is false and the loop exits.

	while (day < 31) {

		//Each iteration executes these lines top-to-bottom, one at a time.
		//Prints the current day and amount for this iteration.
		//Example: Day 1 -> $0.10, Day 2 -> $0.20
		printf("Day: %d -- Amount %.2f \n", day, amount);

		//Doubles the amount. The new value is stored in 'amount'
		//and printed on the next iteration.
		amount *= 2;

		//Increments day by 1 each iteration (day++ is shorthand for day = day + 1).
		//Once day hits 31, while (31<31) is false and the loop stops.
		day++;

	}
}