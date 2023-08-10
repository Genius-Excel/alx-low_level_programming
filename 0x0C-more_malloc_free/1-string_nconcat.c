#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - this function conctenates two strings
* @s1 : first string
* @s2: second string
* @n: number of bytes needed for a memory alloc
* Return: a pointer to the concat string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = strlen(s1);

	unsigned int len_s2 = strlen(s2);

	char *concat = (char *)malloc(len_s1 + 1 + n);

	if (s1 == NULL)
	{
		return (NULL);
	}

	if (s2 == NULL)
	{
		return (NULL);
	}

	if (n >= len_s2)
	{
		n = len_s2;
	}

	if (concat == NULL)
	{
		return (NULL);
	}

	strncpy(concat, s1, len_s1);
	strncpy(concat + len_s1, s2, n);
	concat[len_s1 + n] = '\0';

	return (concat);
}
