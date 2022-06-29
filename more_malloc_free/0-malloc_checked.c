#include "main.h"
#include <stdlid.h>

/**
* *malloc_checked - main entry
* @b: size
* Return: ..
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	exit(98);
	return (p);
}
