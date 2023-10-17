#include "main.h"
/**
 * print_alphabet_x10 - printd the alphabet
 */

void print_alphabet_x10(void)
{
	char o;
	int count;

	for (count = 0; count <= 9; count++)
	{

		for (o = 'a'; o <= 'z'; o++)
			_putchar(o);
		_putchar('\n');
	}
}
