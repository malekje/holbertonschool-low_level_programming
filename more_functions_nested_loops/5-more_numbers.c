#include "main.h"
#include <stdio.h>
/**
 * more_numbers - main entry
 *
 * Return: 0
 */
void more_numbers(void)
{
	int n;
	int i;

	for (i = '0'; i <= '9'; i++)
	{

		for (n = '0'; n <= 14; n++)
			putchar(n);
	putchar('\n');
	}
}
