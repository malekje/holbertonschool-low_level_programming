#include "lists.h"

/**
 * *add_nodeint - function that adds a new node at the beginning of a list
 * @head: the header of the linked list
 * @n: node
 * Return: Always 0.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->next = *head;
	node->n = n;
	*head = node;


	return (node);
}
