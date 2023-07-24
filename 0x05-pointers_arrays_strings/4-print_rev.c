#include "main.h"

/**
 * print_rev - outputs the reverse of a string
 * @s: string to be reversed
 * Return: void
 */

int _strlen(char *s);

void print_rev(char *s)
{

	int length, idx;

	length = _strlen(s);

	for (idx = length - 1; idx >= 0; idx--)
	{
		_putchar(s[idx]);
	}
	_putchar('\n');
}

/**
 * _strlen - outputs the length of string
 * @s: string to be checked
 * Return: len
 */

int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
