#include "main.h"

/**
* _strlen_recursion - this function recursively couts the
* length of a string
* @s: string array to be counted
* Return: the length of the string
*/

int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
	{
		return (0);
	}

	len = _strlen_recursion(s + 1);

	len += 1;

	return (len);
}
