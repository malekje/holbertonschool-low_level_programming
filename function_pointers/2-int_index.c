#include "function_pointers.h"

/**
 * int_index - main entry
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	else if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) == 0)
			return (-1);
		else
			return (i);
	return(-1);

}

