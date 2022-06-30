#include "dog.h"

/**
* free_dog - main entry
* @d: type dog
* Return: nothing.
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
	return;

	{
	free(d->owner);
	free(d->name);
	free(d);
	}
}
