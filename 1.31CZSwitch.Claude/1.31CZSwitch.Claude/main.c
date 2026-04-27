#include<stdio.h>



int main() {

	//Since we're hardcoding the value instead of asking the user for input, this acts as
	//a backend/internal test of the switch logid. WE declare a char variable and set it
	//to a letter grade between A and F.
	char grade = 'B';


	//The switch statement evaluates the variable 'grade'
	//Because grade is set to 'B', this is effectively switch('B') -
	//the value 'B' will be compared against each case listed below.
	switch (grade) {

		//Each case uses a colon ":" to mark the code that runs when it matches.
		//The break; statement exits the switch immediately after a match is found. Preventing
		//the program from "falling through" and executing the remaining cases. In this 
		//example 'B' matches case 'B', prints the message, then stops - there is no need to 
		//evaluate cases 'C', 'D', 'F'.

	case 'A': printf("You got an A");
		break;

	case 'B': printf("You got a B");
		break;

	case 'C': printf("You got a C");
		break;

	case 'D': printf("You got a D");

	case 'F': printf("You got an F");

		//The default case acts as a catch-all. If the value of grade doesn't 
		//match any of the cases above, this message will be displayed instead.
	default:printf("You have pressed an incorrect key/letter/grade");
	}
}