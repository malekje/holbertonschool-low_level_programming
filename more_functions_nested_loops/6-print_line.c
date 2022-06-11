#include "main.h"
#include <stdio.h>
/**
 * print_line - main entry
 * @n: checking
 * Return: 0
 */
void print_line(int n)
{
	int i = n;

	for (i = n ; i > 0; i--)
		putchar('_');
	putchar('\n');
}
