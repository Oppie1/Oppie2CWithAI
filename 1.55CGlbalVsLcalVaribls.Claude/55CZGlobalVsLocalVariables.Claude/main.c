#include<stdio.h>
#include<stdlib.h>


//Variable scope determines where a variable can be accessed in a program.
//There are two main types: global scope and local scope.
//Global variables: declared outside all functions and accessible anywhere in program.
//Local variable: declared inside a function and only accessible within that function.
//Function prototype declaration.
void printSomething();

//This variable is declared outside all functions, making it a GLOBAL variable.
//Any function in the program (including printSomething) can read and modify this variable.
int tortillasOutsideMain = 3;

int main() {

	//This variable is declared inside main(), so it has LOCAL scope.
	//Only the main() function can access this variable.
	//Other functions like printSomething() cannot access tortillasInsideMain.
	//Each function can have its own local variables with the same or different names.
	int tortillasInsideMain = 23;

	//Demonstrating local variable access within main().
	printf("I have %d tortillas\n", tortillasInsideMain);

	//Demonstrating global variable access within main();
	printf("I have %d tortillas\n", tortillasOutsideMain);

	//Calling the function defined outside of main().
	printSomething();

	//These lines are commented out to avoid compilation errors.
	//If uncommented, they would reference variableInFunction, which is local to printSomething().
	//printf("Cannot use variable in function outside main. It is that functions local variable:\n);
	//printf("variableInFunction = %d -> would get an error and program would not run.". variableInFunction.
}

//The printSomething() function demonstrates scope limitations. If printSomething() tried to use
//tortillasInsideMain, it would cause a compilation error because that variable is local
//to main() and not accessible here.
void printSomething() {
	
	int variableInFunction = 7;

	//Global variables can be accessed from any function in the program.
	printf("Check, can function use global variable? Yes, I have %d tortillas.\n", tortillasOutsideMain);

	//This variable is local to the printSomething() function.
	//It cannot be accessed from main() or any other function.
	printf("The local variable to printSomething() function shows the value of the variable: %d\n", variableInFunction);

	return;
}

//Reminder: If printSomething() attempted to access tortillasInsideMain, the program would not compile
//because that variable only exists within main(). Variable scope is enforced at compile-time by the compiler.