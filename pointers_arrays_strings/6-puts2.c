#include "main.h"
/**
*puts2 - Checker
*@str: Parameter to check
*/
void puts2(char *str)
{
	int o = 0, len = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;
	for (; o <= len; o += 2)
		_putchar(str[o]);
	_putchar('\n');
}
