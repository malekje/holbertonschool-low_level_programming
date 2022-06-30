#include "dog.h"
#include <stdio.h>

/**
* print_dog - main entry
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* Return: the dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *rex;
	int namelength = 0;
	int ownerlength = 0;

if (name != NULL && owner != NULL)
	{
	namelength = strlen(name) + 1;
	ownerlength = strlen(owner) + 1;
	rex = malloc(sizeof(dog_t));

if (rex == NULL)
return (NULL);
	rex->name = malloc(sizeof(char) * namelength);
if (rex->name == NULL)
	{
	free(rex);
return (NULL);
	}
	rex->owner = malloc(sizeof(char) * ownerlength);
if (rex->owner == NULL)
	{
	free(rex->name);
	free(rex);
return (NULL);
	}
	rex->name = strcpy(rex->name, name);
	rex->age = age;
	rex->owner = strcpy(rex->owner, owner);
	}
return (rex);
}
