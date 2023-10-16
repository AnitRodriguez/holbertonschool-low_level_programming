#include <stdio.h>
/**
*main - Write a program that prints the alphabet in lowercase,
*followed by a new line
*Return: (0)
*/
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
		putchar(x);
		}
	}

	putchar('\n');

	return (0);
}
