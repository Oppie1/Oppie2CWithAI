#include<stdio.h>
#include<stdlib.h>


int main()
{

	//Declare an integer variable to store the user's age.
	int age;

	//Declare a character variable to store the user's gender.
	//'char' holds a single character only - for full words of sentences, a string would be needed.
	char gender;

	//Prompt the user to enter their age.
	printf("How old are you? \n");

	//Read the age input. '%d' expects an integer, and '&age' passes the memory address where it will be stored.
	scanf_s("%d", &age);

	printf("What is your gender? m/f \n");

	//Read the gender input. '%c' reads a single character, and the leading space discards any leftover
	//whitespace *e.g. a newline) from the previous input.
	//The '1' argument limits the input to exactly one character - entering more will cause program to fail.
	scanf_s(" %c", &gender,1);

	//This outer if statement checks whether the user is 18 or older. The nested if statements inside will only
	//run if this condition is true, and they execute in the order they are declared - that's the key
	//behaviour of nesting.
	if (age >= 18) {

		//Inform the user they are allowed access, then evaluate their gender below.
		printf("You may enter this website.");

		//Check if the user entered 'm' for male. '==' is the equality operator - it compares two values
		//rather than assigning one.
		if (gender == 'm') {

			printf(" A male has entered the website.\n");

		}

		//Check if ther user entered 'f' for female.
		if (gender == 'f') {

			printf(" A female has entered the website.\n");

		}

	}

	//This second if statements (outer from the first with the nesteds) handles the case where the user
	//is under 18. Since it's outside the first if block, it runs independently. Note: an else statement
	//(covered in an upcoming lesson) would be a cleaner approach here.

	if (age < 18) {

		//Deny access and notify the user they are not old enough.
		printf("You may not enter this website.\n");
	}

}
