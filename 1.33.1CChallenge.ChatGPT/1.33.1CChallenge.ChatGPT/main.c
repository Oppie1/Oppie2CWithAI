#include<stdio.h>
#include<ctype.h>
#include<string.h>



int main() {
	//Create a buffer for the password input
	//Size 10 means up to 9 visible characters plus 1 null terminator ('\0')
	//The { 0 } initializer fills the array with zeros to start clean.

	char password[10] = { 0 };

	//These integers are used as true/false flags for password checks.
	//Each starts at 0 (not found yet) and becomes 1 once that rule is satisfied.

	int lowerCase = 0, upperCase = 0, digit = 0;

	printf("Please enter a strong password! ");
	printf("Must contain at least one lowercase letter, one uppercase letter and at least\n");
	printf("one digit. No more than 10 characters are allowed. No symbols!");

	scanf_s("%9s", password, sizeof(password));

	//Scan the password one character at a time.
	//strlen(password) gives the number of entered characters, which sets the loop limit.

	for (int i = 0; i < strlen(password); i++) {
		
		//Check whether this character is lowercase ('a' to 'z').
		if (islower(password[i])) {
			//Rule satisfied: mark lowercase is found.
			lowerCase = 1;
		}
			//Check whether this character is uppercase ('A' to 'Z').
			//Separate if statements allow the same character position to be tested against each rule.
			if (isupper(password[i])) {
				//Rule satisfied mark uppercase as found.
				upperCase = 1;

			}
				if (isdigit(password[i])) {
					//If this character is a digit, mark digit as found.
					digit = 1;
				}
			}
			//All three flags must be true because of logical AND (&&).
			//If any requirement is missing, the condition is false and the else block runs.

			if (lowerCase && upperCase && digit) {
				
				printf("You have entered a  strong password. ");
			}
			else {
				printf("You have entered a weak password");
			}

		}