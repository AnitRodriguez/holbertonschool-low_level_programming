#include "main.h"
/**
 *_strstr - Function finds the first occurrence of the substring needle in the
 *string haystack.
 *@haystack: A string.
 *@needle: Another string.
 *Return: Pointer to the beginning of the located substring, or NULL if the
 *substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *a = haystack;
		char *b = needle;

		while (*b && (*a == *b))
		{
			++a;
			++b;
		}
		if (*b == '\0')
			return (haystack);
		++haystack;
	}
	return ('\0');
}
