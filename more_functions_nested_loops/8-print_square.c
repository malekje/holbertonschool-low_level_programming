#include "main.h"
#include <stdio.h>
/*
 * print_square - main entry
 * @size: checking
 * Return: 0
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 1; y <= x; x++)
		{
			for (y = 1; x <= size; y++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
