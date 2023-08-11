#include "main.h"
#include <stdlib.h>

/**
* _realloc - this function realocates a memory using the malloc
* fucntion
* @ptr: initail pointer to the malloc address
* @old_size: size of the intial pointer
* @new_size: new size to be assigned to the pointer address
* Return: pointer to the address of the new_size allocated
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_mem, *old_mem;

	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	new_mem = malloc(new_size);
	if (!new_mem)
	{
		return (NULL);
	}
	old_mem = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			new_mem[i] = old_mem[i];
		}
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			new_mem[i] = old_mem[i];
		}
	}
	free(ptr);
	return (new_mem);
}
