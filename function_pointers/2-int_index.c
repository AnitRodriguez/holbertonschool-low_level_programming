#include<stdio.h>
#include"function_pointers.h"
/**
*int_index - A function that searches for an integer.
*@array: pointer to array
*@size: size of array
*@cmp: Pointer function cmp
*Return: returns the index of the first element for which the cmp function
*does not return 0
*If no element matches, return -1
*If size <= 0, return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (; a < size; a++)
		if (cmp(array[a]))
			return (a);
	if (a == size)
		return (-1);
	return (-1);
		}
