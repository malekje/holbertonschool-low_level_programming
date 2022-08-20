#include "hashtable.h"

/**
 * hash_table_set - function that adds an element to hash table.
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = NULL;
	char *v;

	if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
	return (0);

	index = key_index((const unsigned char *)key, ht->size);


	node = (ht->array)[index];
	while (node && (strcmp(key, node->key) != 0))
	node = node->next;
	if (node != NULL)
	{

	v = strdup(value);
	if (!v)
	return (0);

	if (node->value)
	free(node->value);
	node->value = v;
	return (1);
	}
	return (create_and_add_node(ht, key, value, index));
}
