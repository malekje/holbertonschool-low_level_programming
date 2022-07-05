#include "main.h"
/**
 * *_realloc - main entry
 * @ptr: pointer to the memory previously allocated with a call to malloc: malloc(old_size)
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: value of p
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (ptr == NULL)
	{
		    p = malloc(new_size);
		        return (p);
	}

	if (new_size == 0)
	{
		    free(ptr);
		        return (NULL);
	}
	if (new_size == old_size)
	{
		         return (ptr);
	}
	if (new_size > old_size)
	{
		    p = malloc(new_size);
		    free(ptr);
	}
	             return (p);
}