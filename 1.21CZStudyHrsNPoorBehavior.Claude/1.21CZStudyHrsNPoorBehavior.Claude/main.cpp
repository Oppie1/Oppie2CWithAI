#include <stdio.h>
#include<stdlib.h>


int main()
{
	//Integer Variable: Stores the number of hours a student has studied
	//'int' (integer) hods whole numbers (not decimals), which is appropriate
	//here since we are counting full hours.
	int hoursStudied;

	//Integer variable: Stores a behavior rating on a scale of 0 - 5.
	//0 represents good behavior, while 1 - 5 represents varying degrees of poor behavior.
	int poorBehavior;

	printf("---Scoring of students in a class for their study time and behavior---\n\n");

	//Output: printf() sends formatted text to the console.The \n character is an escape
	//sequence that moves the cursor to a new line when printed.
	printf("How many hours did they study:\n");

	//Input: scanf_s() reads user input from the keyboard and stores it in a variable. 
	//"%d" is a format specifier telling the function to expect a whole number (integer).
	//"&hoursStudied" uses the address-of operator (&) to pass the memory address of the
	//bariable, allowing scanf_s() to write the value directly into it.
	scanf_s("%d", &hoursStudied);

	
	printf("\nHow would you rate their behavior on a scale of 1-5 (0=good, 1-5 bad)\n");

	//Input: Same pattern as above. The & operator gives scanf_s() the memory address of
	//poorBehavior so it knows exactly where to store the entered value.
	scanf_s("%d", &poorBehavior);

	//Conditional Logic (if/else): An if statement evalueates a condition and only executes
	//its code block { } if that condition is true.

	//Logical AND operator (&&): Both conditions on either side of the && must be ture
	//for the overall if condition to pass. If even one is false, the entire condition
	//is false and the else block runs instead.

	//Condition 1: hoursStudied > 7 - checks if the student studied more than 7 hours.
	//Condition 2: poorBehavior == 0 - the == operator checks for equality (note: a
	//single = assigns a value, while == compares two values.
	if ((hoursStudied > 7) && (poorBehavior == 0)) {

		printf("\nYou've been a great student!\n");
	}

	//Else Block: Executes only when the if condition above evaluates to false.
	//This acts as a catch-all, handling every case where the student studied
	//7 or fewer hours, had poor behavior, or both.
	else {

		printf("\nYou either need to study more or improve behavior please.\n");
	}
}