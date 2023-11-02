#include<stdlib.h>
/**
*create_array - function
*@size: size
*@c: content of array
*Return:Returns a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int n = 0;

	x = malloc(size * sizeof(char));

	if (x == NULL)
	{
		return (NULL);
	}

	if (x == 0)
	{
		return (NULL);
	}
	while (n < size)
	{
		x[n] = c;
		n++;
	}
	return (x);
}
