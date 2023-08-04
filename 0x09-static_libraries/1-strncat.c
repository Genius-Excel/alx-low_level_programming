#include "main.h"
#include <string.h>

/**
* _strncat - this function concatenate two strings
* without  taking the null byte into consideration
* @dest: destination string
* @src: source string
* @n: lenght of source string
* Return: pointer to the sestination string
*/

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
