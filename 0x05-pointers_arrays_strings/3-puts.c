#include "main.h"

/**
 * _puts - prints to stdout
 * @str: string parameter
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
