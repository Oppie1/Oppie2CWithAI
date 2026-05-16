#include<stdio.h>
#include<stdlib.h>
//Include the header file so the struct definition is available in this file.
#include"EmployeeInfo.h"

int main()
{
	//Declare two variables of type struct user, each one is an independent instance of the blueprint.
	struct user copilot;
	struct user claude;

	//The dot(.) operator is used to access a specific member of a struct instance.
	//Here we assign a unique I to each user.
	copilot.userID = 1;
	claude.userID = 2;

	//copilot and claude are struct variables (also called instances) - think of struct user
	//as a template and these as individual object created from that template.

	puts("Enter the first name of user 1");
	gets(copilot.firstName);
	puts("Enter the first name of user 2");
	gets(claude.firstName);

	printf("User 1 id is %d\n", copilot.userID);
	printf("User 1 first name is %s\n", copilot.firstName);

	printf("User 2 id is %d\n", claude.userID);
	printf("User 2 id is %s\n", claude.firstName);
}

//A struct lets you group variables of different data types under one name.
//For example, a user can have an int ID, char name, and float weight all in one place.
//It is best practice to define structs in a separate header file rather in main.c -
//this keeps your code organized and makes the struct reusable across multiple files.