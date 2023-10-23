#include "main.h"
/**
* _puts - Checker
*
*@str: Parameter to check
*/
void _puts(char *str)
{
	int o = 0;

	while (str[o] != '\0')
	{
		_putchar(str[o]);
		o++;

	}
	_putchar('\n');
}
