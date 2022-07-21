#include "lists.h"

/**
 * add_dnodeint_end- function that adds a new node at the end of a list
 * @head: head
 * @n: number
 * Return: node
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t)), *lastnode;


	if (node == NULL)
	return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	if (*head == NULL)
	{

	*head = node;
	return (node);

	}

	else

	lastnode = *head;

	while (lastnode->next != NULL)
		lastnode = lastnode->next;
	lastnode->next = node;
	node->prev = lastnode;
	return (node);

}
