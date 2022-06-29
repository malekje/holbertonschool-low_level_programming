#include "main.h"

/**
* *_calloc - main entry
* @nmemb: size
* @size: size
* Return: array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;
	char *result;

	if (nmemb == 0 || size == 0)
	return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	return (NULL);
	result = ptr;
	for (i = 0; i < nmemb * size; i++)
	{
	result[i] = '\0';
	}
	return (ptr);
}
