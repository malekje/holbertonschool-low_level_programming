#include "variadic_functions.h"

void c(va_list character)
{
	printf("%c", va_arg(character, int));
}

void i(va_list integer)
{
	printf("%d", va_arg(integer, int));
}

void f(va_list _float)
{
	printf("%f", va_arg(_float, double));
}

void s(va_list, stdin)
{
	char *str;
	if (str == NULL)
	{
	printf("(nil)");
	return;
	}
	printf("%s", va_arg(stdin, char *))
}




/**
* print_all - main entry
* @format: array 
*/
void print_all(const char * const format, ...)
{
(void) format;
}
