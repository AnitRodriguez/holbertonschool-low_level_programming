#include "main.h"
/**
 *_strpbrk - function that searches a string for any of a set of bytes.
 *@s: String.
 *@accept: Another string.
 *Return: Returns a pointer to the byte in s that matches one of the bytes in
 *accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *a = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = a;
		s++;
	}
	return ('\0');
}
