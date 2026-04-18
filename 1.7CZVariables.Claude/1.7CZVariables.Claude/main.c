#include<stdio.h>


/*Variables are named storage locations in memory that hold values. Think of them like labeled boxes
where you can store and retrieve data, similar to how you use variables in algebra*/


int main()
{

	int age;
	int currentYear;
	int birthYear;

	/*Initialize variables with specific values. These values are set directly in the code,
	not entered by user.*/
	currentYear = 2026;
	birthYear = 1983;

	/*Calculate age by subtracting birth year from current year. In C, we use the assignment operator (=)
	to store the result. The right side of the equation is evaluated first, then stored in the variable
	on the left. General syntax: variable = value1(operator) value2
	Operators include: + (addition), - subtraction, * (multiplication), / (division) */
	age = currentYear - birthYear;

	/*When this line executes, the calculation proceeds as follows: age = 2026 - 1983, which results in age = 43*/

	printf("Adam is %d years old. ", age);

	//If this is left blank the computer reads in "return 0" by default.
}