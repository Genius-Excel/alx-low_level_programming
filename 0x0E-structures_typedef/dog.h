#ifndef DOG_H
#define DOG_H
#include <stdlib.h>

/**
* struct dog - this structure has attributes og a dog
* @name: dog name
* @age: dog age
* @owner: dog owner
*
* Description - prints the name age and owner
*/

struct dog
	{
		 char *name;
		 float age;
		 char *owner;
	};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
