#include <stdio.h>
#include<stdlib.h>



int main() {

	//A character array that acts as a bucket to hold up to 20 characters of text.
	//Use %s in print/scanf to work with strings (multiple characters) of text.
	//Use %c instead if you only need to store a single character.
	char firstName[20];

	//Capping the size at 20 characters protects against a buffer overflow, which is when more data 
	//gets written into memory than the variable can hold.
	char crush[20];

	//An integer variable for storing whole numbers. Use %d to read or print it.
	int numberOfPuppies;

	//Prompt the user so they know what to type.
	printf("What is your name?\n");

	//scanf_s reads the user's input and stores it in firstName.
	//The 20 tells the function the maximum number of characters it is allowed to write,
	//acting as a safety guardrail at runtime.
	scanf_s("%s", firstName, 20);

	printf("Who is your dog going to marry?\n");
	
	//The & operator gives scanf_s the memory address of a variable so it knows exactly where to 
	//write the incoming data. For arrays, the array name already represents an address,
	//so & is omitted here.
	scanf_s("%s", crush, 20);

	printf("How many puppies will your dog have?\n");
	
	//numberOf puppies is a plain integer, not an array, so & is required to pass its address
	//to scanf_s.
	scanf_s("%d", &numberOfPuppies);

	//printf assembles all three stored values into one readable sentence. Each format specifier
	//(%s, %s, %d) maps in order to the variables listed at the end - sequence matters here.
	printf("%s and %s are ready to have %d puppies.", firstName, crush, numberOfPuppies);
}

/*Why does the number 20 appear in two different places?
char crush[20]	-> reserves 20 bytes of memory on the stack at compile time. Without this,
there is nowhere to store the input.
scanf_s("%s", crush, 20) ->tells scanf_s the upper limit of bytes it may write into that memory
at runtime, preventing it from writing past the end of the buffer and corrupting other data.
Same value, two entirely separate jobs: one is about allocation, the other is about safety*/

