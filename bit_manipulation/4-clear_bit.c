#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: number
 * @index: index
 * Return: value of a bit at a given index
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int clr = 1;
	unsigned int tilde = 1;	

	if (index >= 32)/* 32 = size of unsigned long int multiplied by 8 */
		return (-1);
	tilde = clr << index;
	clr = ~(tilde);
	*n = (*n & clr);
		return (1);
}
