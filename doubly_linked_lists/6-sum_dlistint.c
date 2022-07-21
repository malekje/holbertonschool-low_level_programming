#include "lists.h"

/**
 * sum_dlistint - function that return the sums of all the data of a list
 * @head: head
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	
	}
		return (sum);
}
