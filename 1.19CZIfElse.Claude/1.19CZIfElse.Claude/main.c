#include<stdio.h>
#include<stdlib.h>



int main()
{

	//Declares an integer variable to hold the user's age. scanf_s will write the input value into this 
	//memory location. %d is the format specifier for integers.
	int age;

	//Declares a character variable to hold the user's gender. scanf_s will write a single character into
	//this memory location. %c is the format specifier for characters.
	char gender;


	printf("How old are you? \n");

	//Reads an integer from the console and stores it in 'age'. &age passes the memory address so scanf_s 
	//knows where to write the value.
	scanf_s("%d", &age);

	printf("\nWhat's your gender m/f\n");

	//Reads a single character from the console and stores it in 'gender'. The leading space
	//before %c discards any leftover whitespace (e.g. newline) from previous input. The oprtional third
	//argument (e.g. 1) limits how many characters are read, preventing buffer overruns.
	scanf_s(" %c", &gender);


	//Outer if statement - checks the user meets the minimum age requirement. If true, the entire block inside
	//executes; other wise it is skipped entirely.
	if (age >= 18) {

		//Executes when the user is 18 or older.
		//Control then falls into the nested if/else below to check gender.
		printf("\nYou may enter the website.\n");

		//Nested if statement - runs only when the outer condition above is already true.
		//Checks whether the user identified as male.
		if (gender == 'm') {

			printf("A male has entered the website.\n");

		}

		//Paired else for the nested if statement above.
		//Runs when the user did not enter 'm'. Note that this is a limitation -
		//any character other than 'm' will trigger this branch, not just 'f'.
		else
		{
			printf("A female has entered the website.\n");
		}

	}

	//Outer else - the counterpart to the first if statement. Only runs when the user is under 18, bypassing all 
	//of the nested logic above. Structure in brief: if {...nested if/else...} else {print this}
	else {

		printf("\nYou are not old enough to enter the website.\n");
	}
}