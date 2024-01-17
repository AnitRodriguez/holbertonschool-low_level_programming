#include "search_algos.h"

/**
 * linear_search - search linearly
 * @array: given array of ints
 * @size: size of array
 * @value: value to search for
 * Return: index at which value's found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t a;

	if (!array)
		return (-1);

	a = 0;
	while (a < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[a] == value)
			return (a);
		a++;
	}
	return (-1);
}