#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* op_add - this operation function sums two numbers
* @a: first operand
* @b: second operand
* Return: The sum of a and b
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - this function subtracts two numbers
* @a: first operand
* @b: second operand
* Return: subtraction of a and b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - this function mulitplies to integers
* @a: first operand
* @b: second operand
* Return: the multiplication of a and b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - this function divides two integers
* @a: first operand
* @b: second operand
* Return: the dividion of a and b
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
* op_mod - this function calculates the modulo of two integers
* @a: first operand
* @b: second operand
* Return: modulo of a and b
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
