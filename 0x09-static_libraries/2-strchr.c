#include "main.h"
#include <stddef.h>
#include <string.h>

/**
* _strchr - checks the first occurence to a character
* then returns the pointer
* @s: pointer to be checked for the occurence of acharacter
* @c: character to be checked for its occurence
* Return: the values of the first occurent character
*/

char *_strchr(char *s, char c)
{
	if (s == NULL)
	{
		return (NULL);
	}

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
