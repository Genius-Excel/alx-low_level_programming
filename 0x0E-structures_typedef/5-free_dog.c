#include "dog.h"
#include <stdlib.h>

/**
* free_dog - this function frees all the allocated memory
* for each instance of the dog attribute
* @d: pointer to the dog struct
* Return: void
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
