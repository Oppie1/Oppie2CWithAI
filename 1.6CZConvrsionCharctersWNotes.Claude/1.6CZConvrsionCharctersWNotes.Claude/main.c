#include <stdio.h>



int main() {


	//The print() function displays text to screen. To insert a value into your output, use a format specifier like % d
	//for integers. After the string, use a comma followed by the value you want to insert. Use \n to create a new line
	//in our output.

	printf("Adam ate %d corn dogs last night\n", 3);

	//For string values (text), use %s as your format specifier instead of %d. Always wrap strings in double quotes ("like this"). 
	//You can use multiple format specifiers in a single printf() call and provide matching values in the same order.
	printf("%s will be a good c++ %s\n", "Adam", "eventually");


	//To control decimal places in floating-point numbers, use the format specifier %.#f, where # is the number decimal places you 
	//want to display. For example, %.2f shows 2 decimal places, and %.4f shows 4 decimal places. Without specifying a number, %f
	//defaults to 6 decimal places.

	printf("Pi is %f \n", 3.1415826535);

	printf("Now pi is %.4f \n", 3.1415826535);

	printf("Finally, pi is now %.2f\n", 3.1415826535);

	return 0;

}