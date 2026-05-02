#include <stdio.h>//printf
#include<math.h>//floor, ceil


//Behind the scenes, <math.h> functions like floor() are defined as double floor(double x) { }
//This means any float argument you pass in gets automatically promoted to a double.
//Double allows for more decimal places so naturally when we use a float it can convert to double
//but not the other way around. Here we decide decimal places in the functions themselves using %.2f
//and make it so they stay in the range of decimals of what a float could be.

int main() {


	//float is a data type designed to hold numbers with decimal places. Both float and double are required
	//whenever decimal precision is needed - using an integer type in this case would cause the
	//decimal portion to be lost.
	float bacon1 = 9.65234;
	float bacon2 = 3.3;

	//%.2f formats the output to 2 decimal places. floor() always rounds DOWN, regardless of what the decimal value
	//is. This differs from standard rounding rules where only values below .5 round down.
	printf("bacon1 is %.2f \n", floor(bacon1));

	//Again, floor() strictly rounds down - no exceptions. The key takeaway is that "floor" means the lowest
	//while number boundry.
	printf("bacon2 is %.2f\n", floor(bacon2));

	//ceil() is the opposite of floor() - it always rounds UP, no matter how small the decimal portion is.
	printf("bacon1 is %.2f\n", ceil(bacon1));

	//Whenever your program works with decimal values, reach for the built-in functions provided
	//by <math.h> like floor() and ceil().
	printf("bacon2 is %.2f\n", ceil(bacon2));
}

/*
ceil() and floor() are floating-point utility functions declared in <math.h> Their purpose is to 
convert a floating-point number to its nearest whole number boundary - floor() toward negative infinity,
//ceil() toward positive infinity.

Important distinction: these are NOT conditional statements. Unlike an if statement that evaluates a
condition before acting, these functions always apply the same fixed rule to whatever value is passed in.

Expected output:

When using floor():
bacon1 = 9.00
bacon2 = 3.00

When using ceil():
bacon1 = 10.00
bacon2 = 4.00
*/