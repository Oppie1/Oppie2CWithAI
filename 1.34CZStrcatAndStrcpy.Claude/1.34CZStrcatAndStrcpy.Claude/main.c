#include<stdio.h>
#include<string.h>
#include<ctype.h>



//This tutorial covers strcat_s, strcpy_s, and toupper.
//strcat_s appends one string onto the end of another, with a size parameter that acts
//as a guard against writing beyond the bounds of the destination buffer.

//Works through this file in three stages:
// 1. Run the code up to system("cls") to see the concatenated sentence printed.
// 2.Continue through the strcpy_s section to print "Adam is a person!" to the screen.
// 3. Review the toupper section at the bottom to see how character casing is handled.

int main()
{
	//Declares a char array with room for 100 characters (99 usable + 1 null terminator '\0').
	//Initializing it with "Hey " places that text at the start of the buffer.
	char soy[100] = "Hey ";

	// Appends "Adam " to whatever is already in soy.
	//The sizeof(soy) tells strcat_s the total capacity of the buffer so it knows its limit.
	strcat_s(soy, sizeof(soy), "Adam ");

	//Appends "you " - each call to strcat_s the total capacity of the buffer so it knows its limit.
	strcat_s(soy, sizeof(soy), "you ");

	//Appends the final word to complete the sentence. The result 
	//stored in soy at this point is: "Hey Adam you program."
	strcat_s(soy, sizeof(soy), "program.");

	//Prints the fully assembled sentence to the screen.
	printf("%s \n", soy);

	//Clears the console so that next output starts on a clean screen.
	system("cls");

	//Zeros out every byte in the soy buffer, ensuring no leftover characters remain before we write new content into it.
	memset(soy, 0, sizeof(soy));

	//strcpy_s copies a brand new string directly into soy, replacing its contents entirely. The memset above ensures
	//there are no stray characters hiding beyond the new string's end.
	strcpy_s(soy, sizeof(soy), "Adam is a person!");

	//Prints the freshly writen string to the now-cleared string.
	printf("%s \n", soy);

	printf("\ntoupper() example.\n");

	char a = 'b';
	char b = 'F';
	char c = '7';


	//toupper() converts a lowercase letter to its uppercase equivalent.
	//'b' becomes 'B'
	printf("%c \n", toupper(a));

	//'This just stays the same because it is already uppercase.
	printf("%c \n", toupper(b)); //'F' is already uppercase, so toupper() returns it unchanged.

	//'7' is a digit, not a letter, so toupper() leaves it as is.
	printf("%c ", toupper(c));

}