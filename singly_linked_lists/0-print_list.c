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
	p = NULL;
	while (h != p)
	{
	if (h->str == p)
	printf("[0] (nil)");
	else
	printf("%d %s", h->len, h-str);
	h = h->next;
	n++
	}
	return (n);
}
