#include<stdio.h>
#include<ctype.h> //The ctype.h library provides functions for testing characters, such as isalpha() and is digit.


//Character classification function work with an int variable, even when that variable holds a character literal (e.g. 'A')
//of a symbol (e.g '$'). Try changing the value assigned to exampleDataTpype below to see different results.


int main()

{

	//Assigning a symbol that is neither a letter nor a digit, so the final else branch will trigger.
	int exampleDataType = '$';


	//isalpha() checks whether the given value corresponds to an alphabetic letter. It accepts an int parameter, 
	//so it works seamlessly with our int variable.
	if (isalpha(exampleDataType)) {

		//This line prints the character using %c. It only runs when exampleDataType holds a single letter.
		printf("%c is a letter", exampleDataType);
	}
	else {//When the value is not a letter, we still need to check two more possiblilities, so a nested if is used.

		//isdigit() checks whether the given value corresponds to a numeric digit (0-9). 
		//exampleDataType is passed in as its argument
		if (isdigit(exampleDataType)) {

			//This line runs only when exampleDataType holds a digit character such as '5'
			printf("%c is a number", exampleDataType);
		}

		//If the value is nethier a letter nor a digit (e.g. '$', '!' or '@', this fallback else 
		//handles all remaining keystroke possiblilities. 
		else {
			printf("%c is not an letter or a digit", exampleDataType);
		}

	}
}