#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a linked list
 * @head: the linked list
 * Return: sum of all data(n)
 */
int sum_listint(listint_t *head)
{
	listint_t list;
	int sum;

	(void) list;
	sum = 0;
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
