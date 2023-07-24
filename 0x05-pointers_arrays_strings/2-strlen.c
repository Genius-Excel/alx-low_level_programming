#include "main.h"

/**
* _strlen - calculates the length of a string
* @s: string o be checked
* Return: len
*/

int _strlen(char *s)
{
	int len;

	len = 0;

	do
	{
		len++;
		s++;
	}while (*s != '\0');

	return (len);
}
