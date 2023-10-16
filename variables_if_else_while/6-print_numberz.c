#include <stdio.h>
/**
*main - Write a program that prints all single digit numbers
*of base 10 starting from 0, followed by a new line
*Return: (0)
*/
int main(void)
{
	putchar('0');

	for (int x = 1; x <= 9; x++)
	{
		putchar(x + '0');
	}

	putchar('\n');

	return (0);
}
