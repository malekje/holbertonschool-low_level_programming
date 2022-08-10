#include "main.h"

/**
 * main - print the largest prime factor of 612852475143
 *
 * Return: 0
 */

int main(void)
{
	unsigned long n, div = 2;
	n = 612852475143;


	while (div < n)
	{
		if (n % div == 0)
		{
			n = n / div;
			div = 2;
		}

		else
			div++;
	}
	    printf("%lu\n", n);
	return (0);
}
