#include<stdio.h>
#include<stdlib.h>


int main()
{
	//Declare three integer variables to hold whole number values.
	int a;
	int b;
	int c;


	//Assign the same value to multiple variables  in a single statement by chaining the assignment.
	//operator (=) from right to left. Since a, b, and c were already declared as int above, there is no need 
	//to repeat the data type - it stays with the variable for its entire lifetime.
	a = b = c = 100;

	//Print the values of a, b, and c to the console. Each %d acts as a placeholder that gets replaced
	//by its corresponding integer variable in the argument list.
	printf("%d, %d, %d", a, b, c);

	//Declare three float variables for ages and one to store the result. Unlike int, float supports decimal values.
	//Multiple variables of the same type can be declared together on one line, separated by commas - 
	//this works for int as well.
	float age1, age2, age3, average;
	age1 = age2 = 10.0;

	//Prompt the user to enter their age.
	printf("\nEnter your age.\n");

	//Read a floating-point value from the user. The %f specifier tells scanf_s to expect a decimal number, and &age3
	//provides the memory address where the input will be stored.
	scanf_s("%f", &age3);

	//Calculate the average by summing all three ages and dividing by 3. The assignment operator (=) then assigns
	//the result to average, storing it in that variable's memory location for later use.
	average = (age1 + age2 + age3) / 3;

	//Display the result. The %.f specifier formats the average as a float with no decimal places shown,  inserting the value
	//average into the output string.
	printf("The average age ot the group is %.f\n", average);
}