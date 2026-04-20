#include<stdio.h>//Gives us access to standard input/output functions like printf.


//HOW TO CREATE A HEADER FILE:
//In the "Solution Explorer" panel, right-click the "Header Files" folder,
// choose "Add" > New Item:, and name your file (e.g. PotatoInfo). Visual Studio will 
// create the file and open it in a new tab automatically.
#include "PotatoInfo.h"

//WHY USE QUOTES INSTEAD OF ANGLE BRACKETS?
//Angle brackets < > tell the compiler to look in system/library folders 
//Quotes " " tell the compiler to look in your own project folder first
//Both styles work, but quotes are the correct choice for your own header files.

//WHAT DOES A HEADER FILE DO?
//A header file lets you store reusable values and definitions in one place. When you include
//it here, the compiler pulls in everything defined in that file before your program runs -
//keeping your main.c clean and organized. Open "PotatoInfo.h" using the tab at the top of
//the editor to see what's inside.

int main() {

	int catAge = (DOGAGE / 2) + 7;

	//HOW THIS printf WORKS:
	//%s is a placeholder for a string (text) and %d is a placeholder for a whole number
	// DOGNAME and catAge are substituted in, in the order they appear.
	// catAge was calculated above using DOGAGE from the header file - showing how 
	//header constants can feed directly into your program's logic. 
	// Note: the ORDER of the arguments must match the order of the placeholders.
	printf("%s can hang out with cats %d years or older.\n", DOGNAME, catAge);

	//Using a second constant from the header file:
	//CATNAME is also defined in "PotatoInfo.h, just like DOGNAME and DOGAGE.
	//Adding new constants to the header file makes them instantly available hree.
	printf("\nThe cats name so happens to be %s.\n", CATNAME);
}