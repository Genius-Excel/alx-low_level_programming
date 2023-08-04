#include "main.h"
#include <stddef.h>

/**
* _strpbrk - this function searches for any set of bytes
* @s: string to be searched
* @accept: string variable to store the set of bytes
* Return: the set of bytes found in the serach string
*/

char *_strpbrk(char *s, char *accept)
{
	if (s == NULL && accept == NULL)
	{
		return (NULL);
	}

	while (*s != '\0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				return (s);
			}
			ptr++;
		}
		s++;
	}
	return (NULL);
}
