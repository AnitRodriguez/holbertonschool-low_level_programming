#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 *
 *@a: An array
 *
 *@n: Number of array sllots.
 */
void reverse_array(int *a, int n)
{
	int i = 0, b;

	while (i < n--)
	{
		b = a[i];
		a[i++] = a[n];
		a[n] = b;
	}
}
