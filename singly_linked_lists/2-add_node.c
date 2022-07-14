#include "lists.h"

/**
 * *add_node - function that adds a new node at the beginning of a list
 * @head: linked list
 * @str: node
 * Return: address of the element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	if (head != NULL && str != NULL)
	{
		node = malloc(sizeof(list_t));
		if (node == NULL)
		{
		return (NULL);
		}
		
		node->next = *head;
		node->len = strlen(str);
		node->str = strdup(str);
		
		*head = node;
		return (node);
	}
		return (NULL);
}
