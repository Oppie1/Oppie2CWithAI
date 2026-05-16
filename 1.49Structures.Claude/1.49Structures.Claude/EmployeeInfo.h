//A struct groups related variables (called members) under a single name.
//You can define multiple structs with different names to represent different entities.
struct user {

	//These are the members of the struct - each one holds a specific piece of date.
	int userID;
	//A char array of 25 elements to store the user's first name (up to 24 characters + null terminator).
	char firstName[25];
	//A char array of 25 elements to store the user's last name (up to 24 characters + null terminator)
	char lastName[25];
	int age;
	float weight;
};

//Stuct are especially usefule representing real-world entities like people or employees.
//since you can bundle all realated attributes together - similar to a row in a table.