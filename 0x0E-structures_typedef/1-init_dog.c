#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* init_dog - this structure takes an istance of the dog struct
* @d: pointer to the dog struct
* @name: member attribute that takes the name of the dog
* @age: member attribute that takes the age of the dog
* @owner: member attibute that takes the name of the owner
* Description: the inti_dog struct reurns the all the member attributes
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
