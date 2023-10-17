#include "main.h"
/**
 *print_last_digit - Checker
 *
 *@x: variable
 *Return: The value of the last digit
 */
int print_last_digit(int o)
{
	int n = o % 10;

	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
