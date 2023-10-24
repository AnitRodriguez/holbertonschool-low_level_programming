#include "main.h"
/**
* _strncat - checker
* @dest: string
* @src: other string
* @n: integer
* Return: pointer to the result string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int o = 0, b = 0;
	char *a = dest, *x = src;

		while (*src)
		{
			o++;
			src++;
		}

	while (*dest)
	{
		dest++;
	}

	if (n > o)
		n = o;

	src = x;

	for (; b < n; b++)
		*dest++ = *src++;

	*dest = '\0';
	return (a);
}
