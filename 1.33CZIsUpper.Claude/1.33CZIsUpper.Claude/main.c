#include<stdio.h>
#include<ctype.h>



int main()

{
	int exampleDataType = 'g';

	//The outtermost gate - only characters that are letters are allowed through. If exampleDataType is not a letter,
	//everything insde this block is skipped entirely.
	if (isalpha(exampleDataType)) {

		//Now we know it's a letter, we check whether it's uppercase. If it is not uppercase, this
		//block is skipped and we fall to the else.
		if (isupper(exampleDataType)) {

			printf("%c is an uppercase letter", exampleDataType);
		}

		//The else acts as a catch-all for any letter that failed the uppercase test. Meaning it must be lowercase.
		else {

			printf("%c is a lowercase letter", exampleDataType);
		}

	}//End of the outer if  - this closing brace marks where the letter-check block ends. Only if exampleDataType
	//passed isalpha() did the nested if/else above run.

	//We continue with else if rather than a second standalone if, becuase we only want ONE branch to execute.
	//A plain if here would always be evaluated independently, which could produce two printed messages
	//for the same character - for example, 'g' would incorrectly trigger both the lowercase message and the 
	//"not letter or number" message at the same time.
	else if (isdigit(exampleDataType)) {

		printf("%c is a number", exampleDataType);

	}

	else {
		printf("%c is not a letter or a number", exampleDataType);
	}
}