#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: binary number
 * Return: Converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, i;
	int n, length = strlen(b);


	sum = 0;
	i = 1;
	n = 0;
	(void) n;
	if (b == NULL)
	{
		return (sum);
	}
	for (length = length - 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
		return (0);

		if (b[length] == '1')
		sum = sum + (b[length] - '0') * i;
		i = i * 2;
	}
	return (sum);
}
