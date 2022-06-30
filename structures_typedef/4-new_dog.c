#include "dog.h"

/**
* free_dog - main entry
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* Return : empty
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	
	dog_t *dog;


	if ((name == NULL) || (age < 0) || (owner == NULL))
	return (NULL);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
	return (NULL);
	}
	dog->name = malloc(strlen(name) + 1);

	if (dog->name == NULL)
	{
	free(dog);
	return (NULL);
	}
	dog->owner = malloc(strlen(owner) + 1);
	if (dog->owner == NULL)
	{
	free(dog->owner);
	free(dog->name);
	free(dog);
	return (NULL);
	}
	dog->name = strcpy(dog->name, name);
	dog->age = age;
	dog->owner = strcpy(dog->owner, owner); 
	return(dog);
}
