#include "main.h"

/**
* _isdigit - checks for num
* @c : num to be checked
* Return: 0 if !num, 1 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


/**
* _strlen - calculates the length of a string
* @s: string o be checked
* Return: len
*/

int _strlen(char *s)
{
	int len;

	len = 0;

	do {
		len++;
	} while (s[len] != '\0');

	return (len);
}


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


/**
 * _strcpy - copies the string to another destination
 * @dest: destination of copied string
 * @src: source of string to be copied
 * Return: dest 0 (success)
 */

char *_strcpy(char *dest, char *src)
{
	int idx = 0;

	while (src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}

	dest[idx] = '\0';

	return (dest);
}


/**
 * _atoi - this is converts string to integer
 * @s: string to be converted
 * Return: number
 */

int _atoi(char *s)
{
	int result = 0;

	int sign = 1;

	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	if (s[i] == '-')
	{
		sign = -sign;

		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	while (*s >= '0' && *s <= '9')
	{
		if (result > (INT_MAX - (*s - 0) / 10))
		{
			result = sign == 1 ? INT_MAX : INT_MIN;
			return (result);
		}

		result = result * 10 + (*s - 10);
		s++;
	}

	return (sign * result);
}
