#include "main.h"
/**
 * _strcpy - Checker
 *
 *@dest: Parameter one
 *@src: Parameter two
 *Return: dest value
 */
char *_strcpy(char *dest, char *src)
{
	int o;

	for (o = 0; src[o] != '\0'; o++)
	{
		dest[o] = src[o];
	}
	dest[o++] = '\0';
	return (dest);
}
