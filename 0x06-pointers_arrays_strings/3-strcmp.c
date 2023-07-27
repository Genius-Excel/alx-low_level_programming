#include "main.h"

/**
* _strcmp - this fuction compares two strings
* @s1: first string
* @s2: second string
* Return: difference in both strings if any
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
