#include<stdio.h>
#include<string.h>



int main() {


	//Declare a character array (buffer) to hold the cat's name.
	//50 elements means up to 49 characters plus the null terminator '\0'.
	char catsName[50];

	//Decare a smaller buffer for the cat's favorite food.
	//Holds up to 24 characters plus the null terminator.
	char catsFood[25];

	//Declare a buffer for the final assembled sentence.
	//75 characters is the hard limit - exceeding it won't silently trim the text it will cause the
	//program to crash or behave unexpectedly. 
	char sentence[75] = " ";

	//Prompt the user for the cat's name.
	//puts() works like printf() but automatically appends a new line at the end.
	puts("What's the cat's name?");

	//Read the full line of input into catsName using gets(). Unlike scanf(), gets() treats spaces as part of the
	//input rather than stopping at them. This means a name like "Bean the Keen" is captured in full.
	gets(catsName);


	//Prompt the user for the cat's favorite food.
	puts("What does he eat?");

	//Same reasoning as above - gets() captures the entire input including spaces.
	gets(catsFood);

	//Begin building the sentence by appending the cat's name. strcat_s() is the secure version of strcat().
	//It requires the destination buffer (sentnece), its maximum size (sizeof(sentnece)), and the source string
	//to appened (catsName). The size limit helps prevent buffer overflows.
	strcat_s(sentence, sizeof(sentence), catsName);

	//Append a literal string to continue the sentence. At this point sentence contains something like 
	//"Bean the keen loves to eat ". The sizeof(entnece) cap of 75 is enforced on every call.
	strcat_s(sentence, sizeof(sentence), " loves to eat ");

	//Finish the sentence by appending the cat's food. Each strcat_s()  call builds onto whatever is already 
	//stored in sentence so by the end all three parts are joined together in one string.
	strcat_s(sentence, sizeof(sentence), catsFood);

	//Print the fully assembled sentence to the console. If the total length exceeds the 75-character buffer, the program 
	//will crash rather than truncate - this is intentional behavior of strcat_s(), which prioritizes
	//saftey by refusing to silently overflow the buffer.
	puts(sentence);

	return 0;

}