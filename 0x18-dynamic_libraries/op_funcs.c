#include <stdio.h>

/**
* add - this functone adds two integers.
* @a: first number
* @b: second number
* Return: the sum of a and b.
*/
int add(int a, int b)
{
	return (a + b);
}

/**
* sub - this function subtracts two integers.
* @a: firs number.
* @b: second number.
* Return: the subtraction of a and b.
*/
int sub(int a, int b)
{
	return (a - b);
}

/**
* mul - this function multiplies two integers.
* @a: first number.
* @b: second number.
* Return: the multiplication ofthe two integers.
*/
int mul(int a, int b)
{
	return (a * b);
}

/**
* div - this function divides two integers.
* @a: first number.
* @b: second number.
* Return: the division of the two integers.
*/
int div(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Zero division not allowed.\n");
		return (0);
	}
	else
	{
		return (a / b);
	}
}

/**
* mod - this function calculates the modulo of two integers.
* @a: first number.
* @b: second number.
* Return: the modulo of two integers.
*/

int mod(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Zero division not alloewed.\n");
		return (0);
	}
	else
	{
		return (a % b);
	}
}
