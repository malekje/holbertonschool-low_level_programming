#include "main.h"

/**
 * reverse_array - function that reverses the content of an array
 * @a: array
 * @n: integer
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, start;

	for (i = 0; i < n; i++)
	{
		n = n - 1;
		start = a[i];
		a[i] = a[n];
		a[n] = start;
	}
}
