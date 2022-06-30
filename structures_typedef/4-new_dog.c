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
	int i = 1;
	int n = 0;
	dog_t *dog;


	if (name || owner == NULL || age < n)
	return (NULL);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	return (NULL);
	dog->name = malloc(strlen(name) + i);

	if (dog->name == NULL)
	free(dog);
	return (NULL);

	dog->owner = malloc(strlen(owner) + i);
	if (dog->owner == NULL)
	free(dog->owner);
	free(dog->name);
	free(dog);
	return (NULL);

	dog->name = strcpy(dog->name, name);
	dog->age = age;
	dog->owner = strcpy(dog->owner, owner); 
	return(dog);
}
