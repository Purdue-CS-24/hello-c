#include <stdio.h>

int add(int a, int b);

int main()
{
	int sum = add(2, 2);
	printf("2+2= %d\n", sum);
}

int add(int a, int b)
{
	return a + b;
}
