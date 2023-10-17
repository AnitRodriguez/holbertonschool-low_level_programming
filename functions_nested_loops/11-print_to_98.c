#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Checker
 *@n: Variable
 */
void print_to_98(int n)
{
	int o;

	if (n <= 98)
		for (o = n; o < 98; o++)
			printf("%d, ", o);
	else
		for (o = n; o > 98; o--)
			printf("%d, ", o);
	printf("98\n");
}
