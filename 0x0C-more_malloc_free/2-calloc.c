#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _calloc - this function allocates memory for an array using
* the malloc function
* @nmemb: number of members in the array
* @size: size of the array
* Return: a pointer to the array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(nmemb * size);

	if (mem == NULL)
	{
		return (NULL);
	}

	memset(mem, 0, nmemb * size);

	return (mem);
}
