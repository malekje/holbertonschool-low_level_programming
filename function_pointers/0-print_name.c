#include "function_pointers.h"

/**
 * print_name - main entry
 * @name: char
 * @f: function to execute
 * Return: nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		f(name);
	}
}
