#include "main.h"
/**
 *main - Program that prints all arguments it receives.
 *@argc: Arguments count.
 *@argv: Arguments value.
 *Return: 0.
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
