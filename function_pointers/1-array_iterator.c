#include<stdio.h>
#include"function_pointers.h"
/**
 *array_iterator - A function that executes a function given as a parameter on
 *each element of an array.
 *@array: Pointer to array.
 *@size: where size is the size of the array.
 *@action: Pointer to function.
 *Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (action == NULL || array == NULL)
	return;
	for (; a < size; a++)
		action(array[a]);
}
