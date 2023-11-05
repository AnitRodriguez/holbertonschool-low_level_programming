#include"main.h"
#include<stdlib.h>
/**
*array_range: Function creates array
*@min: Number min
*@max: Number max
*Return: Pointer
*/
int *array_range(int min, int max)
{
	int *bar;
	int b, c;

	if (min > max)
		return (NULL);

	b = max - min;

	bar = malloc((b + 1) * sizeof(int));
	if (bar == NULL)
		return (NULL);

	for (c = 0; c <= b; c++)
		bar[c] = min++;
	return (bar);
}
