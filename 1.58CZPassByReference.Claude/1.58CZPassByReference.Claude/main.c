#include<stdio.h>
#include<stdlib.h>



//Declared outside of main() - this function receives a copy of the value, so it can print it,
//but any changes made inside won't affect the original variable.
void passByValue(int i);

//Declared outside of main() - this function receives a memory address meaning it can directly
//modify the original variable.
void passByAddress(int* i);


int main()
{
	int tuna = 20;

	//A copy of tuna's value (20) is sent to the function.
	//The original variable in main() remains unchanged after the call.
	passByValue(tuna);
	printf("Passing by value did not change variable in main, tuna is still %d\n", tuna);

	//The memory address of tuna is sent to the function. This allows the function to overwrite the
	//original value stored in main().
	passByAddress(&tuna);
	printf("Passing by address, tuna is now %d\n", tuna);

		return 0;
}

//Receives a copy of the argument - not the original variable itself.
void passByValue(int i) {
	//Any modifications to i only exist within this function's scope.
	//Once this function returns, main() still holds the original value - nothing is carried back.
	i = 37;

	printf("Inside passByValue, i is now %d\n", i);

	return;
}

//Receives a pointer - th memory address of the variable passed in from main().
void passByAddress(int* i) {
	//Dereferencing the pointer with * writes directly to the original variable's memory location,
	//so the change persists back in main() after this function returns
	*i = 64;

	return;
}