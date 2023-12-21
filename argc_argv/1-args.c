#include "main.h"
/**
 *main - Program that prints the number of arguments passed into it.
 *@argc: Argumets count.
 *@argv: Argument value.
 *Return: 0.
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
