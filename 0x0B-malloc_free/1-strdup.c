#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _strdup - this function copies the string array
* to a new memory address
* @str: string to be copied
* Return: pointer to a new string duplicate
*/

char *_strdup(char *str)
{
	unsigned int len;

	char *ptr;

	len = strlen(str);

	ptr = (char *)malloc(len * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	else if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, str);
	return (ptr);
}
