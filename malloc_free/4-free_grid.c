#include "main.h"
/**
 * free_grid - function that frees the  2d array
 * @grid: array
 * @height: array
 */
void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
	{
	free(grid[count]);
	}
	free(grid);
}
