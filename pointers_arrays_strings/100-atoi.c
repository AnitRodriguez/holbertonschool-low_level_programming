#include "main.h"
/**
*_atoi - Checker
*@s: Check
*Return: If there are no numbers in the string, the function must return 0
*/
int _atoi(char *s)
{
	int a = 1;
	unsigned int b = 0;

	do {
	if (*s == '-')
		a *= -1;

		else if (*s >= '0' && *s <= '9')
			b = (b * 10) + (*s - '0');

			else if (b > 0)
			break;
	} while (*s++);

	return (a * b);
}

