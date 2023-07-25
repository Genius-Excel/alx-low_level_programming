#include "main.h"

/**
 * puts2 - ouputs the characters and skip one
 * @str: string to be checked
 * Return: void
 */

void puts2(char *str)
{
	int idx = 0;

	while (str[idx] != '\0')
	{
		_putchar(str[idx]);

		idx += 2;
	}
	_putchar('\n');
}
