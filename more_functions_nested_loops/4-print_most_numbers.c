#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - main entry
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n != '2' && n != '4')
			putchar(n);
	}
	else
		putchar('\n');

}
