#include "lists.h"

/**
 * main - function that frees a list.
 * @head: the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *n;

	if (head == NULL)
	return;

	while (head != NULL)
	{
		n = head;
		head = head->next;
		free(n);
	}
}
