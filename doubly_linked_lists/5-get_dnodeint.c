#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of linked list.
 * @head: head
 * @index: index
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (index > i)
	{
		if (head == NULL)
		return (NULL);
		head = head->next;
		i++;
	}

return (head);
}
