#include<stdio.h>
#include<stdlib.h>


//Use else if when you only want a single block of code to run from a set of mutually exclusive conditions.
//Use separate if statements when you want every matching condition to trigger its own block independently.
//In an else if chain, conditions are evaluated from top to bottom. The moment one condition evaluates 
//to true, all the remaining conditions are ignored.
int main()
{
	// float is the data type for numbers that may contain a decimal point.
	float grade1;
	float grade2;
	float grade3;

	printf("Enter your 3 test grades: \n");
	//The %f format specifier tells scanf_s to expect a floating-point number from the user.
	scanf_s(" %f", &grade1);

	//Just like %c is used for char and %d for int, %f is the correct specifier for float values.
	scanf_s(" %f", &grade2);

	scanf_s(" %f", &grade3);


	//Declare a new float variable avg and immediately assign it the result of the average calculation.
	float avg = (grade1 + grade2 + grade3) / 3;

	//By default, floats print with 6 decimal places. The %.2f specifier restricts output to 2.
	//You can adjust this: %.3f gives 3 decimal places, %.4f gives 4, and so on.
	printf("Average:\n%.2f\n", avg);


	//else if is used here because only one grade letter should ever be assigned. If these were all 
	//separate statements, a grade of 95 would satisfy >= 90, >= 80, >=70, and >= 60 - printing 
	//A, B, C and D all at once, which is not the intended behavior.
	if (avg >= 90) {
		printf("Grade: A");
	}

	else if (avg >= 80) {
		printf("Grade: B");
	}

	else if (avg >= 70) {
		printf("Grade: C");
	}

	else if (avg >= 60) {
		printf("Grade: D");
	}

	else {
		printf("Grade: F");
	}
}

//The else if chain works by testing each condition in order and stopping as soon as one is true.
//Example: avg is 75. Is 75>=80? No. Is 75>=70? Yes - print "Grade: C" and stop. 
//The remaining conditions are never even checked once a match is found.