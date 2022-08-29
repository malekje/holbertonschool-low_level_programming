#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of integers
 * @array: pointer to the first element
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t first_index = 0, center = 0, last_index = size - 1;

	if (array == NULL)
	return (-1);
	
	while (first_index <= last_index)
	{
		print_array(array, first_index, last_index);

		center = (first_index + last_index) / 2;

		if (array[center] == value)
			return (center);

		else if (array[center] > value)

			last_index = center - 1;

		else

			first_index = center + 1;
	}
	return (-1);
}

/**
 * print_array - function to print array
 * @a: array
 * @f_index: first index
 * @l_index: last index
 * Return: void
 */
void print_array(int *a, size_t f_index , size_t l_index)
{
	size_t i = 0;

	printf("Searching in array: ");
	
	for(i = f_index; i <= l_index; i++)
	{
		if (i != l_index)
		{
			printf("%d, ", a[i]);
		}
		else
			printf("%d\n", a[i]);
	}
}
