#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* main - this function takes command line arguments and performs
* the operation associated with it.
* @argc: command line argument count
* @argv: command line argument array vector count
* Return: the result depending on the operation
*/

int main(int argc, char *argv[])
{
	int num1, num2, result;

	int (*operator)(int, int);

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);

	num2 = atoi(argv[3]);

	operator = get_op_func(argv[2]);

	result = 0;

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = (*operator)(num1, num2);

	printf("%d\n", result);

	return (0);
}
