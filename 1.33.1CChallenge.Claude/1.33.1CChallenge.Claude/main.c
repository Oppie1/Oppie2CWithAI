#include<stdio.h>
#include<ctype.h>


int main()

{
	//Declares a char array named 'password' with 10 elements to store the user's input.
	//All elements are initialized to 0 (null characters) by default.
	char password[10] = { 0 };

	//These integer flags will track whether the password contains at least one lowercase letter, one uppercase letter,
	//and one digit. All start at 0 (false) and will be set to 1 (true) when found.
	int lowerCase = 0, upperCase = 0, digit = 0;


	printf("Please enter a strong password! \n");
	printf("Must contain Uppercase and lowercase letter as well as digits. No more than 10 characters in length. No symbols!\n");
	printf("Make your password:\n");

	//Reads the user's input as a string and stores it in 'password'. "%9s" limits input to 9 characters, leaving
	//room for the null terminator '\0' that C automatically appends to mark the end of the string.
	scanf_s("%9s", password, sizeof(password));

	//Loops through each character in 'password' one at a time. 'strlen(password)' returns the number of characters entered,
	//so the loop runs exactly that many times.'i' acts as the current index, starting at 0.
	for (int i = 0; i < strlen(password); i++)
	{
		//'islower()' checks whether the character at index 'i' is a lowercase letter (a-z)
		//For example, if password[0] is 'a', this condition is true.
		if (islower(password[i])) {
			//A lowercase letter was found, so the flag is set to 1 (true)
			//This will be used after the loop to validate the password.
			lowerCase = 1;
		}
		//'isupper()' checks whether the character at index 'i' is an uppercase letter (A-Z).
		//This check runs independently of the one above, so both can be true for different characters in the same password.
		if (isupper(password[i])) {
		//An upercase letter was found, so the flag is set to 1 (true)
			upperCase = 1;
		}

		//'isdigit()' checks whether the character at index 'i' is a numeric digit (0-9).
		//Like the checks above, this runs on every character in the loop.
		if (isdigit(password[i])) {

			//A digit was found, so the flag is set to 1 (true)
			digit = 1;
		}

	}

	//After the loop, all three flags are checked together using the locical AND (&&) operator. All three must
	//equal (true) for this condition to pass. If any flag is still 0, the password does not meet the requirements.
	if (lowerCase && upperCase && digit) {

		printf("\nYou have entered a strong password.\n");
	}
	else {

		printf("\nYou have entered a weak password. Make sure all criteria is met. ");
	}
}