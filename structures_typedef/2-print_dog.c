#include "dog.h"
#include <stdio.h>

/**
* print_dog - main entry
* @d: dog type
* Return: void
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	return;
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age < 1)
	{
		printf("age: (nil)\n");
	}
	else
	{
		printf("age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("owner= (nil)\n");
	}
	else
	{
		printf("owner: %s\n", d->owner);
	}
}
