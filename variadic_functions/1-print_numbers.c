#include "variadic_functions.h"

/**
* print_numbers - main entry
* @separator: string to be printed between numbers
* @n: number of integers passed to the function
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	unsigned int num;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
	num = va_arg(numbers, int);

	printf("%d", num);
	if (i != n && separator != NULL)
	printf("%s", separator);
	}
	putchar('\n');
	va_end(numbers);
}
