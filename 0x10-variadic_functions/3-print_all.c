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
	bool format_printed = false;
	va_list format_specifier_args;

	va_start(format_specifier_args, format);

	while (format && format[i])
	{
		if (format[i] == 'i')
		{
			printf("%s%d", seperator, va_arg(format_specifier_args, int));
			format_printed = true;
		}
		else if (format[i] == 'c')
		{
			printf("%s%c", seperator, va_arg(format_specifier_args, int));
			format_printed = true;
		}
		else if (format[i] == 'f')
		{
			printf("%s%f", seperator, va_arg(format_specifier_args, double));
			format_printed = true;
		}
		else if (format[i] == 's')
		{
			char *str = va_arg(format_specifier_args, char *);

			if (str == NULL)
				str = "(nil)";
			printf("%s%s", seperator, str);
			format_printed = true;
		}
		if (format_printed)
		{
			seperator = ", ";
			format_printed = false;
		}
		i++;
	}
	va_end(format_specifier_args);
	printf("\n");
}
