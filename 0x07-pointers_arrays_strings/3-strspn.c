#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
* _strspn - this function gets the length of a prefix
* substring and returns a number of byte
* @s: string to prefixed
* @accept: the string to accept the prefix
* Return: number of byte for the initial segment of s
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if (s == NULL && accept == NULL)
	{
		return (0);
	}

	while (*s != '\0' && *s != '\n' && *s != '\t' && *s != ' ')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				len++;
				break;
			}
			ptr++;
		}
		if (*ptr == '\0')
		{
			break;
		}

		s++;
	}

	return (len);
}
