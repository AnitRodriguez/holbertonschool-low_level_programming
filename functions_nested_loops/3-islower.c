#include "main.h"
/**
 *_islower - checks if a character is on lowercase
 *
 *@c: parameter to check
 *
 *Return: if lowercase is 1 success
 */
int _islower(int c)
{
char o;
int lowercase = 0;

for (o = 'a'; o <= 'z'; o++)
	if (o == c)
		lowercase = 1;
return (lowercase);
}
