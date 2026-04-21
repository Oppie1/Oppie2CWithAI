#include<stdio.h>
#include<stdlib.h>	



int main()

{
	//Declare an integer variable called "age" to hold the user's input.
	//It is left uninitialized because its value will be provided by the user at runtime
	int age;

	//Display a prompt asking the user for their age. The "\n" moves the cursor to
	//a new line after the message is printed.
	printf("How old are you?\n");

	//Read the integer the user types and store it in the variable "age"/ The "&"
	//operator passes the memory address of "age" to scanf_s, telling it exactly
	//where in memory to wirte the value. Without "&", the value could not be
	//stored correctly.
	scanf_s("%d", &age);

	//An if statement evaluate the condition in parentheses. If the condition is true, the
	//code inside the curly braces {  } runs. If the condition is false, the block is skipped
	//entirely and execution continues below. Here, if "age" is 18 or greater, the user is 
	//granted acess.
	if (age >= 18) {

		printf("\nYou may enter this website.\n");
	}

	//This second if statement handles the opposite case. If the first condition was false
	//(age was below 18), this condition will be true, and the message below will be printed
	//to inform the user they are not old enough.

	if (age < 18) {

		printf("\nYou are not old enough to enter this website.\n");

	}

}