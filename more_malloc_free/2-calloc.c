#include"main.h"
#include<stdlib.h>
/**
 *_calloc - Function
 *@nmemb: n bytes memory
 *@size: size nmemb
 *Return: Pointer allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a = 0;
	char *b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = malloc(nmemb * size);
	if (b == NULL)
		return (NULL);
	for (; a < nmemb * size; a++)
		*(b + a) = 0;
	return (b);
}
