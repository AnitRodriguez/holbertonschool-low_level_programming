#include <stdio.h>
#include "main.h"
/**
 *_memset - Function that fills memory with a constant byte.
 *@s: Pointer.
 *@n: Unsigned  int.
 *@b: Constant byte.
 *Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{

unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
