#include"main.h"
/**
 *_strcmp - Write a function that compares two strings
 *@s1: string
 *@s2: other string
 *Return: result
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
