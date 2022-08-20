#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to hash table.
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *element = NULL, *node = NULL;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
	return (0);

	idx = key_index((unsigned char *) key, ht->size);
	element = ht->array[idx];

	if (element && strcmp(key, element->key) == 0)
	{
	free(element->value);
	element->value = strdup(value);
	return (1);
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);

}
