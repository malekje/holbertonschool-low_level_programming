#include "lists.h"

/**
 * *add_node_end - function that adds a new node at the end of a list
 * @head: linked list
 * @str: node
 * Return: address of the element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *_node;

	if (str == NULL)
	{
	return (NULL);
	}
	_node = malloc(sizeof(list_t));

	if (_node == NULL)
	{
	return (NULL);
	}
	_node->next = NULL;
	_node->len = strlen(str);
	_node->str = strdup(str);

	if (*head != NULL)
	{
	n = *head;
	while (n->next)
	n = n->next;
	n->next = _node;
	return (n);
	}
	else
	{
		*head = _node;
		return (*head);
	}
	return (NULL);
}
