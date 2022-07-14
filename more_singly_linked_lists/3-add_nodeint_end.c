#include "lists.h"

/**
 * *add_nodeint_end - function that adds a new node at the end of a list
 * @head: the header of the linked list
 * @n: node
 * Return: adress of element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *t;

	if (node == NULL)
	return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
	*head = node;
	}
	else
	{
	t = *head;

	while (t->next != NULL)
	t = t->next;
	t->next = node;
	}
	return (node);
}
