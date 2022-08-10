#include <stdio.h>

/**
 * main - prints hexadecimal base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	int i = '0';
	int a2f = 'a';

	while (i <= '9')
	{
		putchar(i);
		i = i + 1;
	}
	while (a2f <= 'f')
	{
		putchar(a2f);
		a2f = a2f + 1;
	}
		putchar('\n');
	return (0);
}
