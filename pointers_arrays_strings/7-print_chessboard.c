#include "main.h"
/**
 *print_chessboard - Function that prints the chessboard.
 *@a: Array.
 *Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int b = 0, c;

	for (; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
			_putchar(a[b][c]);
		_putchar('\n');
	}
}
