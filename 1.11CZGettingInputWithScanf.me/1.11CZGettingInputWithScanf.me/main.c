#include <stdio.h>
#include<stdlib.h>



int main() {

	//This is a storage variable that holds 20 characters. %s--> a string char.
	//*If just one letter we would use %c
	char firstName[20];

	//If user types more than 20 char it will just cut off. Meant to prevent overflow of buffer/errors
	char crush[20];
	//This stores int data %d
	int numberOfPuppies;

	//Shows to screen to request from user.
	printf("What is your name?\n");

		//&firstName. & points %s computer to store the information the user inputs
	scanf_s("%s", firstName, 20);
	//Remember that &crush is the instruction to point into data to storage variable. %s is the
	//string that is associated the variable char crush.
	printf("Who is your dog going to marry?\n");
	scanf_s("%s", crush, 20);

	printf("How many puppies will your dog have?\n");
	//Another pointer (&) to variable (stores user input) which is an integer (int numberOfPuppies)
	scanf_s("%d", &numberOfPuppies);

	//This line of code takes all the stored data and makes a logical sentence using a printf
	//function/object. Basically, what you learned in above in one sentence. Order is important
	//in that %s and %d must match up with the order of the variables at end data arguments.
	printf("%s and %s are ready to have %d puppies.", firstName, crush, numberOfPuppies);
}

/*char crush[20 -> this tells the compiler to allocate 20 bytes of memory on the stack. Without it,
there's nowhere to store the input.
scanf_s("%s", crush,20) -> This tells scanf_s the maximum it's allowed to write to that memory.
Without it, the function could write past the end of your buffer and corrupt memory.*/

//*So the 20 appears twice, but for entirely different reasons - one is about memory allocation,
//the other is about runtime safety.