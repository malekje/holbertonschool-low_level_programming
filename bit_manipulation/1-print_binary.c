#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: binary number
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	int i = '0';
	int stp = 1;

	if (n > 1)
	print_binary(n >> stp);
	
	_putchar((n & stp) + i);
}
