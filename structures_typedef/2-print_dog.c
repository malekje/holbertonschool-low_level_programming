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
		printf("Name: (nil)");
		putchar('\n');
	}
	else
	{
		printf("Name: %s", d->name);
		putchar('\n');
	}
	{
		printf("age: %f", d->age);
		putchar('\n');
	}
	if (d->owner == NULL)
	{
		printf("owner= (nil)");
		putchar('\n');
	}
	else
	{
		printf("owner: %s", d->owner);
		putchar('\n');
	}
}
