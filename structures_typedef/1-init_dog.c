#include "dog.h"
#include <stdio.h>

/**
* init_dog - main entry
* @d: type dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* Return: nothing.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || d != NULL)

	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
