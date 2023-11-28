#include"main.h"
#include<stdio.h>
/**
 *_strchr - Function that locates a char in a string.
 *@s: a string.
 *@c: a char.
 *Return: A pointer to the first occurrence of the character c or NULL.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	return (NULL);
}
