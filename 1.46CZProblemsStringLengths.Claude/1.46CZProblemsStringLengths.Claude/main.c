#include<stdio.h>



int main() {

	//Declares a character array capable of holding up to 20 characters
	char movie[20];

	//A pointer to an array doesn't need the & operator because an array's name
	//already represents its memory address - unlike a regular variable.
	char* pMovie = movie;

	puts("Enter a movie title");

	//fgets safely reads keyboard input into the buffer pointed to by pMovie
	//The three arguments mean:
	//pMovie - destination buffer to store the input.
	//20 - maximum number of characters to read (prevents overflow)
	//stdin - read from standard input (the keyboard)
	//Any input beyond 20 characters is simply discarded.
	fgets(pMovie, 20, stdin);

	//Prints whatever was stored in the buffer, which may be truncated if the
	//user typed more than 20 characters.
	puts(pMovie);
}

//So if your entered the movie title "The Return of the Aten", when printed to the screen
//you would only get "Return of the A" and the rest would be truncated.

//Key takeaway: fgets protects against buffer overflows by enforcing a character limit.
//stdin represents standard input, which is typically the keyboard but could also
//be redirected from a file, network stream, or other input source.


