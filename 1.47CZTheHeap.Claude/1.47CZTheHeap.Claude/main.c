#include<stdio.h>
#include<stdlib.h>


//The heap is leftover memory that your computer isn't using when it runs the
//operating system and whatever else you are doing. We can borrow this memory to
//perform a function and then give it back when we are done with it.

int main() {

	//Creates an integer pointer that will point to our reserved block on the heap.
	int* points;

	//malloc() requests memory from the heap. It takes one parameter -- how much
	//memory you need. sizeof(int) automatically calculates the correct byte size
	//for an integer so you don't have to figure it out yourself. Here we are reserving
	//space for 5 integers.
	//(int*) is a typecast pointer -- it tells the program to treat this memory as
	//integers. When storing floats you would use a (float*) typecast pointer instead.
	points = (int*)malloc(5 * sizeof(int));

	printf("Memory successfully borrowed from the heap for 5 integers.\n");
	printf("Total bytes reserved: %d" , 5 * sizeof(int));
	

	//We only need to borrow from the heap for the duration of out program.
	//free() gives that memory back. Forgetting to do this causes a "memory leak"
	//where memory stays reserved even after we no longer need it.
	free(points);

	printf("\n\nMemory has been returned to the heap.\n");
}

