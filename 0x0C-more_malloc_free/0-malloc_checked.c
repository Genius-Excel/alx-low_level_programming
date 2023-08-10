#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - this function allocate a memory
* @b: size of memory
* Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void  *mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}

	return (mem);
}
