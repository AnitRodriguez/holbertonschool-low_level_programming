#include "main.h"
/**
 * print_line - Checker
 *
 * @n: Parameter to check
 *
 * Return: Always 0
 */
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		for (; a < n; a++)
			_putchar('_');
	}
	_putchar('\n');
}
