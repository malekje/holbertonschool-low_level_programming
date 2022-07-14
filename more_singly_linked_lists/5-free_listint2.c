#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *n;

	if (head == NULL)
	return;

	while (*head != NULL)
	{
		n = *head;
		*head = n->next;
		free(n);
	}
}
