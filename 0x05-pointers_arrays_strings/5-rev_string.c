#include "main.h"

/**
 * rev_string - outputs the string in reverse
 * @s: string to be reversed
 * Return: void
 */

int _strlen(char *s);

void rev_string(char *s)
{
	int len, idx;

	len = _strlen(s);

	for (idx = len - 1; idx >= 0; idx--)
	{
		_putchar(s[idx]);
	}
	_putchar('\n');

}

/**
 * _strlen - this output the length of the string
 * @s: string to be checked
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
