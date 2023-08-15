#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* new_dog - this function creates a new instance of a dog
* from the dog_t struct
* @name: attribute name of the dog
* @age: age of the dog
* @owner: attibute name for owner of the dog
* Return: a pointer to the new dog instance created
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	(*new_dog).name = strdup(name);
	if ((*new_dog).name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	(*new_dog).age = age;
	(*new_dog).owner = strdup(owner);
	if ((*new_dog).owner == NULL)
	{
		free((*new_dog).name);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
