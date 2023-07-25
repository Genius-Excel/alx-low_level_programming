#include "main.h"

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
