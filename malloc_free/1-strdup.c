#include<stdlib.h>
/**
*_strdup - Write a function that returns a pointer to a newly allocated space
*in memory
*@str: string
*Return: A new string
*/
char *_strdup(char *str)
{
	int x = 0;
	char *y, *z;

	if (!str)
		return (NULL);

	y = str;
	while (*y++)
		x++;

	z = malloc(sizeof(char) * (x + 1));
	if (!z)
		return (NULL);
	y = z;
	while (*str)
		*y++ = *str++;

	*y = 0;
	return (z);
}
