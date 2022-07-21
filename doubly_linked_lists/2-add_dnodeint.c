#include "lists.h"
/**
 * *add_dnodeint - function that adds a new node at the beginning of a list
 * @head: head
 * @n: number
 * Return: node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
	return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = *head;
	if (*head != NULL)
	(*head)->prev = nnode;
	*head = node;
	return (node);
}
