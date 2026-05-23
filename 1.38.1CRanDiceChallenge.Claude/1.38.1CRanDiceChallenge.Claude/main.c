#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {

	//Variables are named in memory locations used to store data during program execution.
	//These four int variables will each old the result of one dice roll. 
	//Each will be assigned a random number in the range 1-6 using rand() % 6 + 1
	int diceRoll1, diceRoll2, diceRoll3, diceRoll4;

	//These two int variables will store the sum of the first three rolls and the
	//approximate average of that sum.
	int total, average;

	//This char variable will store the single character the user types as their guess.
	char userOption;

	//srand() seeds the random number generator. Passing time(NULL) ensures a different sequence of
	//random numbers every time the program runs.
	srand(time(NULL));
	
	//Display the game title and instructions before anything else happens.
	//puts() is used here instead of printf() because it automatically appends a newline
	//at the end of each string, keeping the code cleaner.
	puts("Betting game.");
	puts("In this game, three dice are rolled and their total is computed.");
	puts("The average of these three dice (total divided by 3) tells you a number between 1 and 6");
	puts("Then you will guess if the next dice roll (4th dice) is higher (h), lower(l) or the same(s) as that average");

	//Roll the first three dice. rand() generates a large random integer.
	//The modulo operator (% 6) constrains that number to the range 0-5, and 
	//adding 1 shits it to the expected dice range of 1-6.
	diceRoll1 = (rand()) % 6 + 1;
	diceRoll2 = (rand()) % 6 + 1;
	diceRoll3 = (rand()) % 6 + 1;

	//Add the three dice values together and store the result in total.
	total = diceRoll1 + diceRoll2 + diceRoll3;
	//Divide the total by 3 using integer division to get an approximate average.
	average = total / 3;

	//Show the player the individual results of each of the three dice rolls.
	printf("Dice 1 : %d, Dice 2: %d, Dice 3: %d\n", diceRoll1, diceRoll2, diceRoll3);
	//Display the combined total of all three dice.
	printf("Total of the 3 dice: %d\n", total);
	//Display the approximate average that the player will be betting against.
	printf("Average(approx) of three dice: %d\n\n", average);

	//Ask the player to enter their guess before the 4th dice is revealed.
	puts("Guess if the next dice roll is higher(h), lower(l) or the same (s) as the average: ");
	//scanf_s reads a single character from the keyboard (%c) and stores it at the memory address of userOption.
	//The leading space before (%c) -> % c discards any leftover whitespace (like a newline) from the input buffer.
	scanf_s(" %c", &userOption);

	//Roll the 4th and final dice using the same 1-6 formula as before.
	diceRoll4 = (rand() % 6) + 1;
	//Reveal the result of the 4th dice roll to the player.
	printf("\nThe fourth dice roll is: %d", diceRoll4);

	//Evaluate whether the player guessed correctly using an if statement. The condition checks three
	//possible winning scenarios connected with || (OR): the roll is higher AND the guess was 'h'
	if ((diceRoll4 > average && userOption == 'h') ||
		//the roll is lower AND the guess was 'l'
		(diceRoll4 < average && userOption == 'l') ||
		//or the roll equals the average AND the guess was 's'.
		(diceRoll4 == average && userOption == 's'))
		//If any one of those three conditions is true, the player wins.

	{
		puts("\nGood job, you guessed right!\n");
	}

	//If note of the winning conditions matched, the player guessed incorrectly.
	else {
		puts("\nSorry you guessed wrong :(\n");
	}

}