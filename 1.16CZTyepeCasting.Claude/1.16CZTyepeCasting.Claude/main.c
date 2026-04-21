#include <stdio.h>
#include<stdlib.h>


int main()

{
	//Variable act as named containers that hold data in memory. Each variable has a
	//type that defines what kind of data it can store - for example, int stores whole
	//numbers, float stores numbers with decimal points, and char stores a single character.

	//float is used here because the result of our calculation may contain decimals.
	float avgProfit;
	int priceOfPumpkin = 10;
	int sales = 17;
	int daysWorked = 20;

	//avgProfit is assigned the result of the expression below. Since priceOfPumpkin,
	//sales, and daysWorked are all declared as int, dividing them directly would
	//cause integer division - meaning any decimal portion of the result would be
	//silently dropped. 
	//To avoid this, we use type casting: (float) temporarily converts each int value
	//into a float before the math is performed, ensuring we get a precise decimal
	//result instead of a truncated whole number.

	avgProfit = ((float)priceOfPumpkin * (float)sales) / (float)daysWorked;

	//.%2f formats the output as a floating-point number rounded to 2 decimal places.

	printf("Average daily profit:\n%.2f", avgProfit);
	printf("\n");

}