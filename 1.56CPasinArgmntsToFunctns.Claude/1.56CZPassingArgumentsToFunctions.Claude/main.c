#include<stdio.h>
#include<stdlib.h>



//When a function needs external data to do its job, we pass that data as an argument. The function 
//signature declares a parameter to receive the argument when the function is called.

//The parameter list defines what type of data the function expects and gives it a local name.
//Here, "float euro" means this function accepts one floating-point number, referred to as "euro" inside the function.
void convertToDollars(float euro);


int main() {

	//Declaring and initializing two float variables with euro amounts.
	//These will be used as arguments when calling convertToDollars(),
	//so their values get forwarded to the function for processing.
	float euroPrice1 = 1.00;
	float euroPrice2 = 5.50;

		//Calling convertToDollars() with euroPrice1 as the argument.
		//Execution jumps to teh function definition below main(), runs its code block,
		//then returns control back here. Since the return type is void, no value comes back.

		//Notice how the call mirrors the prototype - "euroPrice1" maps directly onto the "float  euro" 
		//parameter, carrying its stored value of 1.00 into the function.

	convertToDollars(euroPrice1);

	//Same call with euroPrice2, which holds 5.50 - that value slots into the "euro" parameter.
	convertToDollars(euroPrice2);

	//A literal value can be passed directly as an argument too.
	//The compiler confirms 21.30 is compatible with the expected "float" parameter type.
	convertToDollars(21.40);

	return 0;
}

void convertToDollars(float euro) 
{
	//This function does not send any value back to the caller.
	//It simply receives the euro amount through the "euro" parameter and uses it locally.

	//Multiply the received euro value by the conversion rate to get the USD equivalent. 
	//The result is stored in a local float variable to match the float type coming in.
	//Example: convertToDollars(5.50) -> usd = 5.50 * 1.37 = 7.535, printed as 7.54
	float usd = euro * 1.37;

	//Print both the original euro amount and the converted USD value, rounded to 2 decimal places.
	printf("%.2f Euros - %.2f USD\n", euro, usd);

	//Explicit return with no value - execution hands back to wherever the function was called from.
	return;

}
/*
Parameters vs Arguments - they are related but distinct concept.

Parameter: The named variable declared inside the function's parentheses in its definition or prototype.
It acts as a local placeholder that receives a value when the function is called. 
Example:In void convertToDollars(float euro), "euro" is the parameter.

Argument: The actual value or variable supplied to the function at the call site.
Example: In convertToDollars(euroPrice1,) "euroPrice1" is the argument.

In short - parameters belong to the function definition, arguments belong to the function call. 
When the function runs, each argument is copied into its corresponding parameter.
*/