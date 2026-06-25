#include<stdio.h>
#include<stdlib.h>
#include<math.h>


//Tutorial: Understanding the abs() function for absolute values.
//
//Concept: The abs() function converts any integer to its positive equivalent.
//This is useful when you need the magnitude of a difference without caring about direction.
//
//Problem scenario: When calculating age differences between 2 years, the result depends on which 
//year you subtract from the other:
// - 2026 - 1983 = 43 (positive)
//- 1983 - 2036 = -43 (negative)
//Both represent the same 43-year span, so we want a consistent positive result.

int main()
{
	//Step 1: Declare variables to store the two years and the calculated age difference.
	int year1;
	int year2;
	int age;

	//Step 2: Prompt the user to enter the first year.
	printf("Enter a year: \n");

	//Read the first year from the user input.
	scanf_s("%d", &year1);

	//Step 3:Prompt the user to enter the second year.
	printf("Enter another year: \n");

	//Read the second year from user input.
	scanf_s("%d", &year2);

	//Step 4: Calculate the difference between the two years.
	//Note: This may produce a negative result depending on input order.
	age = year1 - year2;
	
	//Display the raw difference (may be negative).
	printf("%d\n", age);

	//Step 5: Apply abs() to ensure we get a positive result.
	//The abs() function from <stdlib.h> returns the absolute value of an integer.
	//SYNTAX: abs(integer_value)
	//EFFECT: Negative numbers become positive; positive numbers stay unchanged.
	age = abs(age);

	//Display the absolute value result.
	printf("The absolute value of age is: %d\n", age);

	//Learning Exercise: Try these input combinations to observe the behavior:
	//Test 1: Enter 1983, then 2026 -> Raw: -43, Absolute: 43
	//Test 2: Enter 2026, then 1983 -0> Raw: 43, Absolute: 43
	//Notice how abs() ensures consistent positve output regardless of input order.


}