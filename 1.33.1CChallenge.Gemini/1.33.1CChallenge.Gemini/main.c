#include<stdio.h>
#include<ctype.h>
#include<string.h>//Included for strlen()



int main() {

	//Set up a character buffer to hold the user's password.
	//We use 10 spaces: 9 for the actual password characters and 1 for the null terminator
	//Initializing with {)} clears out any leftover memory garbage.
	char password[10] = { 0 };

	//These variables act as boolean flags to ensure the user meets our password rules. They all
	//begin at 0 (false) and will flip to (true) once the specific requirement is met.
	int lowerCase = 0, upperCase = 0, digit = 0;

	printf("Please enter a strong password!\n");
	printf("Must contain uppercase, lowercase letters and at least on digit as well. No more than\n");
	printf("10 characters in length. No symbols are allowed!");
	printf("Make your password:\n");

	//Capture the user's input securely. "%9s" prevents buffer overflow by only taking a maximum
	//of 9 characters, leaving the 10th spot for the hidden '\0' string terminator.
	scanf_s("%9s", password, sizeof(password));

	//Walk through the string character by character. strlen() tells us exactly how many characters
	//were typed, acting as our loop boundary.
	for (int i = 0; i < strlen(password); i++) {

		//islower() evaluates the current character to see if it is from 'a' to 'z'
		if (islower(password[i])) {
			//Rule met: We found at least one lowercase letter.
			lowerCase = 1;
		}

		//is upper() evaluates the current character to see if it is from 'A' - 'Z'.
		//We use a separate 'if' so all characters can be tested against every rule.
		if (isupper(password[i])) {
			//Rule met: We found at least one uppercase letter.
			upperCase = 1;
		}

		//isdigit() evaluates the current character to see if it is a number '0' to '9'
		if (isdigit(password[i])) {
			//Rule met: WE found at least one numeric digit.
			digit = 1;
		}
	}

	//The logical AND (&&) requires all conditions to be non-zero(true). If the user missed any 
	//requirement, the condition fails.
	if (lowerCase && upperCase && digit) {
		printf("\nYou have entered a strong password.\n");
	}

	else {
		printf("\nYou have entered a weak password. Make sure all criteria is met.\n");
	}

}