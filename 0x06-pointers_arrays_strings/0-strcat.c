#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: destination of string
* @src: source of string
* Return: pointer to the destination string dest
*/

char *_strcat(char *dest, char *src)
{
	char *output = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;

		dest++;
		src++;
	}

	*dest = '\0';

	return (output);
}
