#include <stdio.h>

int main()
{
	int x	= 25;
	int *p	= &x;		// Storing the memory address of x (referencing)
	int y 	= *p;		// Storing the value at p (de-referencing)

	printf("%p\n", p);	// Print the memory address of p
	printf("%d\n", y);	// Prints the value of y = x = 25
}
