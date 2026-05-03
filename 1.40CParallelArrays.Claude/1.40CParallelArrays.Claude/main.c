#include<stdio.h>
#include<math.h>




int main()
{
	//Loop counter used to index into each array during iteration.
	int i;

	//Stores the jersey number for each of the 4 players.
	int player[4] = { 58, 66, 68, 71 };

	//Stores the total goals scored by each player.
	//Each element lines up with the same index in the player array above,
	//so player[0] (jersey #58) scored goals[0] (26 goals), and so on.
	//Note: arrays are zero-indexted, meaning the first element is at index 0.
	int goals[4] = { 26,39,25,29 };

	//Stores the number of games played by each player. Again, each index matches the 
	//corresponding player and goals entries. This will be used as the divisor in the
	//points-per-game (ppg) calculation:
	//ppg = goals / gamesPlayed.
	int gamesPlayed[4] = { 30, 30, 28, 30 };

	//Stores the calculated points-per-game (ppg) for each player.
	//Declared as float because dividing goals by games often produces a decimal result
	float ppg[4];

	//Tracks the highest ppg found so far across all players.
	//Initialized to 0.0 so any real ppg value will be greater on the first comparison.
	float bestPPG = 0.0;

	//Tracks the jersey number of the player with the best ppg so far.
	//This may be updated each iteration if higher ppg is found in if statement.
	int bestPlayer;


	//Loop through all 4 players (indices 0 to 3). For each player, calculate their ppg
	//and check if they are the best so far.
	for (i = 0; i < 4; i++) {

		//Cast both int values to float before dividing. Without the cast, integer
		//division would truncate the decimal portion, giving an inaccurate result 
		//when storing into the float ppg array.
		ppg[i] = (float)goals[i] / (float)gamesPlayed[i];
		
		//Iteration breakdown example:
		//i=0:ppg[0] = 26.0 / 30.0 - 0,87 (player #58)
		//i=1:ppg[1] = 39.0 = 1.30 (player #66)
		//Each iteration handles exactly one player and stores that player's ppg.

		//Print a formatted row of stats for the current player. 
		//Although the output appears all at once, each row is actually printed one
		//at a time, once per loop iteration.
		//\t inserts a tab character, which keeps columns neatly aligned/
		printf("\t %d \t %d \t %d \t %f \n", player[i], goals[i], gamesPlayed[i], ppg[i]);

		//Check whether the current player's ppg beats the best recorded so far. On
		//the first iteration, bestPPG is 0.0, so the first player always sets is 
		//compared against whoever currently holds the best ppg.
		if (ppg[i] > bestPPG) {
			//Example: after iteration 1, bestPPG = .87 (player #58).
			//Iteration 2: is 1.30 > .87? Yes, so we update bestPPG and best player.

			//Update the best ppg to the current player's value.
			bestPPG = ppg[i];

			//Record the current player's jersey number as the best player.
			bestPlayer = player[i];

			//After this block, i increments (i++) and the next player is evaluated.
		}

	}

	printf("\n The best player is %d\n", bestPlayer);
}

//58       26      30      0.87
//66      39      30      1.30
//68      25      28      0.89
//71      29      30      0.97 -> This line is printed and then the program stops.

//Iteration summary:
//i = 2 (player #68): ppg = 25/28 = 0.89. Is 0.89 > 1.3? No, skip the if block.
//	bestPlayer remains #66. i increments to 3. i = 3 (player #71): ppg = 29/30 = 
//.97>1.30? No, skip the if block.
// bestPlayer remains #66. i increments to 4.
//Loop condition: is 4<=3? No, so the loop ends and the program pints the result

//Using "<=" with the last vaild index (3) can feel intuitive early on, since it directly
//reflects the 4 elements stored in the array.
//However, "i<4" is generally preferred because it scales more naturally when the array
//sixe is stored in a variable rather than hardcoded.