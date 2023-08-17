#include "3-calc.h"
#include <string.h>

/**
* get_op_func - this function gets the operation a user pass in
* as an argumnt
* @s: string input of the user
* Return: a pointer to the operation that matches the string input
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

	int i;

	i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
