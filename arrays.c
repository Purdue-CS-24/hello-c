#include <stdio.h>

int main()
{
	int size = 10;
	int nums[size];

	nums[0] = 99;

	// Value of nums[1], nums[2], etc. are unknown...
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", nums[i]);
	}
}
