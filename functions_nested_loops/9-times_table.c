#include "main.h"
/**
 * times_table - Checker
 *
 */
void times_table(void)
{
	int a, b, c, uu, dd;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c > 9)
			{
				uu = c % 10;
				dd = (c - uu) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(dd + '0');
				_putchar(uu + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
			_putchar(c + '0');
			}
		}
	_putchar('\n');
	}
}
