#include "main.h"
/**
* _strncpy - Write a function that copies a string.
* @dest: string
* @src: other string
* @n: integer
* Return: result
*/
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
