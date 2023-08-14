#include "dog.h"
#include <stdio.h>

/**
* print_dog - this function prints the dog attributes
* @d: dog instance
* Return: void
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name != NULL)
		{
			printf("Name: %s\n", (*d).name);
		}
		else
		{
			printf("(nil)");
		}
		printf("Age: %.6f\n", (*d).age);
		if ((*d).owner != NULL)
		{
			printf("Owner: %s\n", (*d).owner);
		}
		else
		{
			printf("(nil)");
		}
	}
}
