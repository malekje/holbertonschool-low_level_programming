#include "dog.h"
#include <stdio.h>

/**
* print_dog - main entry
* @d: dog type
* Return: void
*/
void print_dog(struct dog *d)
{
	int i = 0;

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
	if (d->age < i)
	{
		printf("Age: (nil)");
		putchar('\n');
	}
	else
	{
		printf("Age: %f", d->age);
		putchar('\n');
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
		putchar('\n');
	}
	else
	{
		printf("Owner: %s", d->owner);
		putchar('\n');
	}
}
