#include<stdio.h>
#include<stdlib.h>

int main() {

	//Declare a char array called 'name' with 14 elements and assign it the string "Claudia Villa".
	//The array size must be large enough to hold all characters PLUS one extra space for the
	//null terminator '\0', which signals the end of the string to the compiler.
	char name[14] = "Claudia Villa";

	//Print a greeting message to the screen using the string stored in 'name'. The format
	//specifier %s tells printf() to insert the string value of 'name' in place of %s
	//within the output.
	printf("My name is %s \n", name);

	//Declare a char array called 'food' with 10 elements and assign it "soybean". Always
	//size your array to fit the longest string you expect to store, including the 
	//null terminator. Exceeding the array size causes a buffer overflow, which leads to 
	//unpredictable behavior or crashes.
	char food[10] = "soybean";
	printf("The best food in the world is a %s\n", food);
	
	//strcpy() (string copy) from <string.h> overwrites the current contents of a char array
	//with a new string value. Here, "soybean" is replaced with "peanuts". Be sure the destination
	//array is large enough to hold the new string.
	strcpy(food, "peanut");

	//Print the updated value of 'food' to confirm strcpy() successfully replaced
	//"soybean" with "peanuts" in the array.
	printf("The best food in the world is a %s\n", food);

}