#include <stdio.h>
#include "main.h"
/**
 * print_numbers - main entry
 *
 * Return: 0
 */
void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		_putchar(n);

	_putchar('\n');
}
