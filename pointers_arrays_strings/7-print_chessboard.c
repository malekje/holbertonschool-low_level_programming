#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: array
 * Return; nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, n;

	for (i = 0; i <= 7; i++)
	{
		for (n = 0; n <= 7; n++)
		_putchar(a[i][n]);
		printf("\n");
	}
}
