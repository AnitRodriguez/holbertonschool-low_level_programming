#include "main.h"
/**
* _strcat - Checker
*@dest: string
*@src: other string
*Return: Return pointer to result string dest
*/
char *_strcat(char *dest, char *src)
{
	char *o = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (o);
}
