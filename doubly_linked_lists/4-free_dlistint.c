#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *mem;

	while (head != NULL)
	{
		mem = head;
		head = head->next;
		free(mem);
	}
	
	free(head);
	
}
