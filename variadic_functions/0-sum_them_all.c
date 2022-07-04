#include "variadic_functions.h"

/**
* sum_them_all - main entry
* @n: integer
* Return: sum of integer
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int sum = 0;
	unsigned int i;

	if (n == 0)
	return (0);

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}
