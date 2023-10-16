#include <stdio.h>
/**
 *main - Write a program that prints the alphabet in lowercase,
 *and then in uppercase, followed by a new line
 *
 *Return:0
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
