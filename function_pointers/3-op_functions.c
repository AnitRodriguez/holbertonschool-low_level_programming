#include"3-calc.h"
/**
 *op_add - Function to add two parameters.
 *@a: First parameter
 *@b: Second parameter
 *Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - Function to substraction two parameters.
 *@a: First parameter
 *@b: Second parameter
 *Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - Function to multiplication two parameters.
 *@a: First parameter
 *@b: Second parameter
 *Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - Function to divide two parameters
 *@a: First parameter
 *@b: Second parameter
 *Return: a / b
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	puts("Error");
	exit(100);

}

/**
 *op_mod - Function to rest of division two parameters
 *@a: First parameter
 *@b: Second parameter
 *Return: a % b
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	puts("Error");
	exit(100);
}
