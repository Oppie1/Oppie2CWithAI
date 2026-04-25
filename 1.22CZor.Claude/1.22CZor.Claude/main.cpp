#include <stdio.h>
#include<stdlib.h>


//Program that checks whether a person likes bagels based on their input.
//Uses an if statement to handle both a 'yes' and 'no' response. 
//** "||" is the logical OR operator -> condition A OR condition B must be true. **


int main() {

	printf("---This program demonstrates the '|| -> or' operator.---\n");

	//Declare a char variable called 'answer' to store a single character from the user.
	//At this point 'answer' is uninitialized, meaning no value has been assigned to it yet.
	//Uninitialized variables may contain leftover data from previous memory usage, commonly 
	//referred to as a "garbage value". It will be written when the user inputs data.
	char answer;

	//Prompt the user to enter their response.
	printf("Do you like bagels y/n ? \n");

	//Read a single character from the user and store it in 'answer'. The '&' before 
	//answer provides the memory address of the variable, which tells scanf_s exactly
	//where in memory to write the input. 
	//IMPORTANT: The space before '%c' is intentional - it tells scanf_s to skip any
	//whitespace or leftover characters in the input buffer before reading, preventing
	//accidental garbage values from being captured.
	scanf_s(" %c", &answer);


	//Check if the user entered either a 'y' or 'n' using the OR (||) operator
	//The if block runs as long as at least one of the two conditions is true.
	if ((answer == 'y') || (answer == 'n')) {

		printf("Good job, you input correctly either y or n. ");

		//Now that we know the input is valid, determine which option was chosen.
		if (answer == 'y') {

			printf("\nYou like bagels");

		}
		else
		{
			printf("\nYou do not like bagels.");
		}
	}

	else {
		//If neither 'y' nor 'n' was entered, the else block catches any other key press.
		printf("You pressed the wrong key (y or n). Please exit program and try again.");

	}

	printf("\n\n---Second part of program using integers, less than and greater than.---");
	printf("Write a backend program with no user input measuring two sets of if conditions.\n\n");

	//Both conditions below are false: 5 is not greater than 90, and 10 does not equal 9.
	//Since neither condition is true, the OR operator evaluates to false and the else block runs.
	if ((5 > 90) || (10 == 9)) {

		printf("\nWell 5 may not be greater than 90 but 10 DOES equal 10 so or condition is true!\n");

	}

	else {
		//This message confirms that both conditions evaluated to false.
		printf("\nWell both conditions must of been false hence this message.\n");
	}
}