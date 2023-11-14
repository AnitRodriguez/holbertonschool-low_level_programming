#include"3-calc.h"
/**
 *get_op_func - function that selects the correct function to perform the
 *operation asked by the user.
 *@s: is the operator passed as argument to the program
 *Return: Pointer to function or NULL.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	puts("Error");
	exit(99);
}
