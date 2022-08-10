#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals 
 * @a: integer
 * @size: size
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
	int rows, count;
	int sum1 = 0, sum2 = 0;

	for (rows = 0; rows < size; rows++)
	{
		count = (rows * size) + rows;
		sum1 = sum1 + a[count];
	}
	for (rows = 1; rows <= size; rows++)
	{
		count = (rows * size) - rows;
		sum2 = sum2 + a[count];
	}
		printf("%d, %d\n", sum1, sum2);
}
