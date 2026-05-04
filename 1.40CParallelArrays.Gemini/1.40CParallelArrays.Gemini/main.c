#include <stdio.h>
#include<math.h>


int main()
{
	//Variable to track our current index position in the arrays during loop.
	int i;

	//Array holding the distinctive jersey number for our four players.
	int player[4] = { 58, 66, 68, 71 };

	//Array storing the total goals scored.
	//This is a "parallel array", meaning the data here perfectly aligns with the player array.
	//For instance, player[0] (jersey 58) corresponds to goals[0] (26). Remember: C arrays are zero-index,
	//meaning counting starts at 0, not 1.
	int goals[4] = { 26, 39, 25, 29 };

	//Array storing the number of games played by each respective player.
	//This will act as our denominator to determine the points-per-game (PPG) average
	//using the formula: PPF = goals / gamesPlayed.
	int gamesPlayed[4] = { 30, 30, 28, 30 };

	//Array to hold the points-per-game (ppg) calculations.
	//This is a float array because division will likely result fractional values.
	float ppg[4];

	//Variable to remember the highest PPG encountered so far. 
	//We initialize it to 0.0 so that the first real PPG calculated will easily surpass it.
	float bestPPG = 0.0;

	//Variable to remember the jersey number of the player who currently has the highest PPG.
	int bestPlayer;

	//Iterate through all 4 array indices (0, 1, 2, and 3). During each pass, calculate that specific player's
	//stats and determine if they are the current leader.
	for (i = 0; i < 4; i++) {

		//Convert (cast) the integer variables to floating-point numbers before dividing. If we don't cast
		//first, the compiler will perform integer division, permanently throwing away the decimal values
		//before assigning the result to the ppg array.
		ppg[i] = (float)goals[i] / (float)gamesPlayed[i];

		//Walkthrough of the math:
		//On pass i = 0: ppg[0] = 26.0 / 30.0 = .87 (jersey #58)
		//On pass i = 1: ppg[1] = 39.0 / 30.0 = 1.3 (jersey #66)
		//Each loop pass computes the data for exactly one player.

		//Display the current player's statistics as a single row.
		//Because this is inside the loop, the program prints one line per iteration.
		//The '\t' character inserts a horizonal tab to neatly align the data columns.
		printf("\t %d \t %d \t %d \t %.2f\n", player[i], goals[i], gamesPlayed[i], ppg[i]);

		//Compare the current player's ppg against our recorded top score.
		//Since bestPPG starts at 0.0, the very first player processed will automatically set the 
		//baseline for the remaining players for the remaining players to beat.
		if (ppg[i] > bestPPG) {
			//Example trace: After loop 1, bestPPG becomes 0.87 (player #58).
			//During loop 2: Is 1.30 > .87? Yes. WE must update the leader.

			//Overwrite the previous high score with this new, higher value.
			bestPPG = ppg[i];

			//Overwrite the leading jersey number with the current player's number.
			bestPlayer = player[i];

			//The if-statement complete, the loop variable 'i' will increment (i++)
			//and evaluation begins for the next player in the arrays.
		}
	}

	printf("\nThe best player is %d\n", bestPlayer);
}

//Example Program Output:
// 58      26      30      0.866667
// 66      39      30      1.300000
// 68      25      28      0.892857
//71	   29	   30	   0.966667

//Example Walkthrough of Remaining Iterations:
// i = 2 (player #68): ppg = 25/28 = .89. Is .89 > 1.30? No. The if-statement is skipped.
//->bestPlayer is still #66. Loop advances to i = 3.
// i = 3 (player #71): ppg = 29/30 = .97. Is .97 > 1.30? No. The if-statement is skipped.
// ->bestPlayer is still #66. Loop advances to i = 4.
//Loop condition check: Is 4 < 4? No. The loop terminates and the final result is printed.
// 
//Note On Loop conditions:
//While writing "i<=3" might feel natural because of size 4 stops at index 3,
//the convention "i<4" is considered more professional. This is because "4" directly matches the total 
//size/capacity of the array, making the code much easier to adapt if that size is ever stored inside a
//a variaiable instead of being hardcoded.
//