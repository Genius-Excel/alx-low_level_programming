#include "main.h"

/**
 * puts_half - outputs half of the string
 * @str:string to be be outputted in halve
 * Return: void
 */

int _strlen(char *s);

void puts_half(char *str)
{
	int idx;

	int length = _strlen(str);

	if (length % 2 == 0)
	{
		idx = (length / 2);
	}
	else
	{
		idx = ((length - 1) / 2);
	}

	while (str[idx] != '\0')
	{
		_putchar(str[idx]);
		idx++;
	}
	_putchar('\n');
}

/**
 * _strlen - outputs the length of a string
 * @s: string to be checked
 * Return: len
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
