#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - this function prints strings and a seperator
* passed ot it as an argument
* @seperator: seperator of the strings to be printed
* @n: number of strings to be printed
* Return: void
*/

void print_strings(const char *seperator, unsigned int n, ...)
{
	unsigned int i;

	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(strings, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if ((i < n - 1) && (seperator != NULL))
		{
			printf("%s", seperator);
		}
	}

	va_end(strings);

	putchar('\n');
}
