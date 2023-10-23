#include "main.h"
#include "stdio.h"
/**
*print_array - Write a function that prints n elements of an array of integers,
*followed by a new line.
*@a: check
*@n: check
*/
void print_array(int *a, int n)
{
	int o = 0;

	for (; o < n; o++)
	{
		printf("%d", a[o]);
		if (o < n - 1)
			printf(", ");
	}
	printf("n");
}
