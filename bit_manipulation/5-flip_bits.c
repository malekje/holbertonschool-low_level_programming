#include "main.h"

/**
 * flip_bits - function that sets the value of a bit to 0 at a given index
 * @n: number
 * @m: number
 * Return: bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xornumb = m ^ n;
	unsigned int bits = 0;

	while (xornumb >= 1)
	{
		bits = bits + (xornumb & 1);
		xornumb = xornumb >> 1;
	}
	return (bits);
}
