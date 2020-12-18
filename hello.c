#include <stdio.h>

int main()
{
	printf("Your name: ");
	char name[20];
	fgets(name, 20, stdin);
	printf("Hello, %s\n", name);
}
