#include<stdio.h>
#include<stdlib.h>



int calculateBonus(int yearsWorked);

//Functions serve two general purposes: They can perform actions (like printing output),
//or they can compute a result and send that result back to whoever called them.

int main() {

	//The return value of calculateBonus() is stored here so we can use it later.
	int kanopisBonus = calculateBonus(14);

	//When calculateBonus() is called, it finishes executing and hands its result back to main(),
	//effectively replacing the function call with a plain number.
	int petrasBonus = calculateBonus(3);

	//That returned number is what gets passed to printf(), not the function call itself.

	printf("Kanopi gets $%d\n", kanopisBonus);

	printf("Petra gets $%d \n", petrasBonus);

	//You can also skip the intermediate variable and pass the function call directly to printf().
	//The return value is substituted in at the point of the call.
	printf("Kanopi gets $%d \n", calculateBonus(14));
	printf("Petra gets $%d \n", calculateBonus(3));

	return 0;
}

//Unlike a void function that just performs an action, this function computes a value  and returns
//it to the caller. The return type "int" tells the compiler to expect a whole number to come back
//in place of the call.
int calculateBonus(int yearsWorked) {

	//We declare a variable "bonus" and immediately assign it a value using an expression. In an assignment,
	//the variable being set always appears on the left, and the expression that produces the value appears 
	//on the right.
	int bonus = yearsWorked * 250;

	//Only employees who have worked more than 10 years qualify for the extra $1000.
	//In this example that means only Kanopi receives the additional amount.
	if (yearsWorked > 10) {

		bonus += 1000;
	}

	//A non-void function must return a specific value, not just a vare "return"
	//Here we send "bonus" back to the caller, where it replaces the original function call.
	return bonus;

	//**int calculateBonus(int yearsWorked) = bonus -> Just the number is returned in the calls place to main**
}

//Key takeaway: When a function returns a value, that value swaps in at the exact spot the function was called.
//The variable "bonus" is simply a named container holding that numberic result before it is handed back.