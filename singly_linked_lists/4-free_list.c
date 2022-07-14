#include "lists.h"

/**
 * free_list - function that frees a list.
 * @head: linked list
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *f;

	while (head != NULL)
	{
		f = head;
		head = head->next;
		free(f->str);
		free(f);
	}
		free(head);
}
