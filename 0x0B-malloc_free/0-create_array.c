#include "main.h"
#include <stdlib.h>

/**
* create_array - this function creates an array
* @size: size of the array
* @c: specific char to assign to the array
* Return: a pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ptr;

	ptr = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	else if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}
	else
	{
		return (NULL);
	}
	return (ptr);
	free(ptr);
}
