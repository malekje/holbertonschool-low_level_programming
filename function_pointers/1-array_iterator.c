#include "function_pointers.h"

/**
 * array_iterator - main entry
 * @array: array
 * @size: size
 * @action: pointer
 * Return: nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

