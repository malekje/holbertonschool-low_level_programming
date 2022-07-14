#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: the linked list
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		nodes = nodes + 1;
		h = h->next;
	}
	return (nodes);
}
