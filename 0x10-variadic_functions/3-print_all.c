#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>

/**
* print_all - this function prints all format specifiers
* @format: format specifier for the value to be printed
* Return: void
*/

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *seperator = "";
	va_list format_specifier_args;

	va_start(format_specifier_args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'i':
				printf("%s%d", seperator, va_arg(format_specifier_args, int));
				break;
			case 'c':
				printf("%s%c", seperator, va_arg(format_specifier_args, int));
				break;
			case 'f':
				printf("%s%f", seperator, va_arg(format_specifier_args, double));
				break;
			case 's':
				{
					char *str = va_arg(format_specifier_args, char *);

					if (str == NULL)
						str = "(nil)";
					printf("%s%s", seperator, str);
				}
				break;
			default:
				break;
		}
		seperator = ", ";

		i++;
	}
	va_end(format_specifier_args);
	printf("\n");
}
