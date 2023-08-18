#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - this function returns the sum of all integers passed
* as an argument
* @n: number of arguments to be passed
*Return: sum of the integer passed as argument
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	int result;

	va_list numbers;

	va_start(numbers, n);

	if (n == 0)
	{
		return (0);
	}

	result = 0;

	for (i = 0; i < n; i++)
	{
		result += va_arg(numbers, int);
	}
	va_end(numbers);

	return (result);
}
