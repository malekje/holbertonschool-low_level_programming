#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
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
