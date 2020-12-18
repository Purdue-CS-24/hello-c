#include <stdio.h>
#include <stdlib.h>
#include <string.h>							// String functions

int main()
{
	int *p = malloc(sizeof(int));			// Create a new int
	*p = 25;
	printf("%d\n", *p);

	char *str = malloc(6 * sizeof(char));	// Create a new string
	strcpy(str, "Hello");					// Cannot simply set a string, must use
	printf("%s\n", str);					// a function to copy char by char

	free(p);								// Clean up
	free(str);								// after ourselves
}
