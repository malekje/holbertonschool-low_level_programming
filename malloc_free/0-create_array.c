#include "main.h"
/**
 * *create_array - main entry
 * @size: integer
 * @c: character
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int n;

	if (size <= 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
		arr[n] = c;
			return (arr);
}
