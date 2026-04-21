#include<stdio.h>
#include<stdlib.h>


int main()

{
	//The 'int' data type stores whole numbers only - no decimals allowed. This means any division that produces a fractional
	//result will be truncated (the decimal portion is simply dropped, not rounded).
	int a = 86;
	int b = 21;
	int e = -81;
	int weight = 605;


	//86/21 = 4.095..., but since both values are ints, only 4 is kept.
	printf("%d\n", a / b);
	//INegative values behave the same way - decimal is dropped and the sign of the result is preserved. -81/27 = -3.856... becomes -3.
	printf("%d\n", e / b);

	//The 'float' data type supports decimal (floating-point) values, makeing it suitable for division that requires fractional precision.
	float c = 86.0;
	float d = 21.0;

	//Using %f without any precision specifier prints 6 decimal places by default.
	printf("%f \n", c / d); 

	//Adding a precision specifier like %.2f limits the output to 2 decimal places. You can use .2, .4, ect. to control exactly how 
	//many decials are shown.
	printf("%.2f \n", c / d);

	//The modulo operator (%) returns the remainder of a division, not the quorient. For example, 605 / 3 = 201 remainder 2, so this
	//expression evalueates to 2.
	printf("If I eat too many watermelons I will weigh %d more pounds! \n", weight % 3);
}