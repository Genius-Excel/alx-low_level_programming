#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - this function prints numbers with a seperator
* passed as argument
* @seperator: seperator of the numbers
* @n: number of integers to be printed
* Return: void
*/

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;

	va_list numbers;

	va_start(numbers, n);


	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));

		if ((i < n - 1) && (seperator != NULL))
		{
			printf("%s", seperator);
		}
	}
	va_end(numbers);

	putchar('\n');
}
