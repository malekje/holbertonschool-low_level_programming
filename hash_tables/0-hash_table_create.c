#include "hash_tables.h"
/**
 * *hash_table_create - function that creates a hash table
 * @size: size
 * Return: pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int count;
	hash_table_t *hashtable;

	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);

	hashtable->size = size;
	hashtable->array = malloc(sizeof(hash_table_t *) * size);

	if (hashtable == NULL)
		return (NULL);


	for (count = 0; count < size; count++)
		hashtable->array[count] = NULL;

	return (hashtable);
}
