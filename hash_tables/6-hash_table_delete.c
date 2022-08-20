#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int count;
	hash_node_t *node;

	if (ht == NULL)
	return;
	for (count = 0; count < ht->size; count++)
	{
		while (ht->array[count] != NULL)
		{
			node = ht->array[count]->next;
			free(ht->array[count]->key);
			free(ht->array[count]->value);
			free(ht->array[count]);
			ht->array[count] = node;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
