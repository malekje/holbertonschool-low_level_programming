#include "lists.h"

/**
 * *get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: the linked list
 * @index: the index of the node
 * Return: NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	for (; count < index; count++)
	{
		head = head->next;
		if (head == NULL)
		return (NULL);
	}
	return (head);
}
