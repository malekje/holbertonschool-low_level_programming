#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: the linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
