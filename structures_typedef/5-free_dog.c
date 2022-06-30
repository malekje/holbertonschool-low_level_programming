#include "dog.h"

/**
* free_dog - main entry
* @d: type dog
* Return : empty
*/
void free_dog(dog_t *d)
{
if (d == NULL)
		return;
	if(d->name)
	free(d->name);
	if(d->owner)
	free(d->owner);
	free(d);
}
