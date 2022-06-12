#include "main.h"
#include <stdio.h>
/**
 * print_triangle - main entry
 * @size: checking
 * Return: 0
 */
void print_triangle(int size)
{
	int h, w, d;

	if (size <= 0)
		putchar('\n');

	for (h = 1; h <= size; h++)
	{
		for (w = 1; w <= (size - h); w++)
			putchar(' ');
		for (d = 1; d <= h; d++)
			putchar('#');
		putchar('\n');
	}
}
