#include <stdio.h>
#include<stdlib.h>


/*Write a program that provides 20 character buffer space for last name. Ask a persons last name. Based on input
determine whether person is on blue or read team. Alphabet less than 'M' starting at A[0] going to Z*/

int main() {

	//A char array acts as a string in C. Each slot holds one character. 20 slots gives us enough room for most
	//last names. If the name exceeds 20 characters, anything beyond that limit will be cut off.
	char lastName[20];

	printf("Enter your last name: \n");

	//%s reads an entire word (sequence of characters) until whitespace is encountered. Unlike %c, which only captures
	//a single character, %s fills the array slot by slot. Every string in C ends with '\0' (null terminator), which
	//marks where the string stops. scanf_s is a safer version of scanf - passing sizeof(lastName) tells it the maximum
	//number of characters it is allowed to write, which prevents a buffer overflow.
	scanf_s(" %s", lastName, sizeof(lastName));

	//This is a ternary operator - a compact way of writing an if/else on one line. The structure is:
	//(condition) ? run_if_true : run_if_false.
	//lastName[0] refers to the very first character of the entered last name. If that character comes before 'M'
	//in the alphabet(i.e. A through L), "Blue Team" is printed. If it is 'M' or any letter after it (M through Z), 
	//"Red Team" is printed instead. The '?' acts as "if" and the ':' acts as "else".
	(lastName[0] < 'M') ? printf("Blue Team") : printf("Red Team");

}