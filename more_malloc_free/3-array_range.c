#include "main.h"

/**
* *array_range - main entry
* @min: integer
* @max: integer
* Return: array of integers
*/
int *array_range(int min, int max)
{
	int r, i, *array;

	r = (max - min + 1);

	if (min > max)
	return (NULL);
	array = malloc(sizeof(int) * r);
	if (array == NULL)
	return (NULL);
	for (i = 0; i < r; i++)
	array[i] = min++;
	return (array);
}
