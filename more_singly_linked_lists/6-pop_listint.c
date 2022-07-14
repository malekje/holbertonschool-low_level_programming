#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list, 
 * and returns the head node’s data (n).
 * @head: the linked list
 * Return: node deleted
 */
int pop_listint(listint_t **head)
{
	unsigned int n;
	listint_t *node;

	if (*head == NULL)
	return (0);
	{
	node = *head;
	n = node->n;
	*head = node->next;
	free(node);
	}
	return (n);
}
