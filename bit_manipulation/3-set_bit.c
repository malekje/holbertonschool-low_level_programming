#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index
 * Return: value of a bit at a given index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int left = 1;

	if (index >= 32)/* 32 = size of unsigned long int multiplied by 8 */
		return (-1);
	left <<= index;
	*n = *n | left;
		return (1);
}
