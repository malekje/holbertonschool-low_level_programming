#include "hash_tables.h"

/**
 * hash_table_print - function that deletes a hash table
 * @ht: hash table
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int count;
	hash_node_t *ptr;
	char check = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (count = 0; count < ht->size; count++)
	{
		ptr = ht->array[count];
		while (ptr != NULL)
		{
			if (check == 1)
			printf(", ");
			printf("'%s': '%s'", ptr->key, ptr->value);
			check = 1;
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
