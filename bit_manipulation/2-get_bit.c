#include "main.h"

/**
 * get_bit - function that prints the binary representation of a number
 * @n: number
 * @index: index
 * Return: value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int a;

	if (index > 32) /* 32 = size of unsigned long int multiplied by 8 */
		{
			return (-1);
		}
	a = ((n >> index) & 1);
	return (a);
}
