#include "main.h"
/**
 * alloc_grid - function that returns a pointer to a 2d array
 * @width: integer
 * @height: integer
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int i, f = 0;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr != NULL)
	{
		for (i = 0; i < height; i++)
		{
		ptr[i] = (int *)malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			f = 1;
		}
		}
		if (f)
		{
			for (i = 0; i < height; i++)
			{
			free(ptr[i]);
			}
			free(ptr);
		return (NULL);
		}
	}
	else
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
