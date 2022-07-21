#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a list
 * @h: head
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node = node + 1;
	}
	return (node);
}
