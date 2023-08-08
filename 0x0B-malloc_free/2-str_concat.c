#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* str_concat - this function concantenates two strings
* @s1: first string
* @s2: second string
* Return: the concantenated strings of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{
	int first_len, secd_len;

	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	first_len = strlen(s1);

	secd_len = strlen(s2);

	concat = (char *)malloc((first_len + secd_len + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}

	strcpy(concat, s1);
	strcat(concat, s2);

	return (concat);
}
