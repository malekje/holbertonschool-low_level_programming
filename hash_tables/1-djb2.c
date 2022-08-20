#include "hash_tables.h"

/**
 * hash_djb2 - function implementing the djb2 algorithm.
 * @str: value
 * Return: value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long ht = 5381;
	int n;

	while ((n = *str++))
	{
		ht = ((ht << 5) + ht) + n;
	}
	return (ht);
}
