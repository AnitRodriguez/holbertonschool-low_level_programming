#include "main.h"
/**
* puts_half - Checker
*@str: Parameter to check
*/
void puts_half(char *str)
{
	int len = 0, a = 0, b = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		a = len / 2;
	else
		a = ((len + 1) / 2);

	for (b = a; b < len; b++)
		_putchar(str[b]);
}
