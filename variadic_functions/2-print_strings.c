#include "variadic_functions.h"

/**
* print_strings - main entry
* @separator: string to be printed between the strings
* @n: number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strlist;
	char *string;
	unsigned int i;

	va_start(strlist, n);

	for (i = 0; i < n; i++)
	{
	string = va_arg(strlist, char *);

	if (string != NULL)
	{
		printf("%s", string);
	}
	else
		printf("(nil)");

	if (i != n && separator != NULL)
		printf("%s", separator);
	}
		printf("\n");

	va_end(strlist);
}
