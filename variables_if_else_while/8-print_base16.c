#include <stdio.h>
/**
 *main - Write a program that prints all the numbers
 *of base 16 in lowercase, followed by a new line
 *
 *Return:0
 */
int main(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
