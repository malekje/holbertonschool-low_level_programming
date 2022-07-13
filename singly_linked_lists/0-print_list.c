#include "lists.h"

/**
 * print_list - prints all the elements
 * @h: the linked list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
	if (h->str == NULL)
	printf("[0] (nil)");
	printf("\n");
	else
	printf("[%d] %s", h->len, h->str);
	printf("\n");
	h = h->next;
	n++;
	}
	return (n);
}
