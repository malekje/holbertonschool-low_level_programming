#include "main.h"

/**
* *malloc_checked - main entry
* @b: size
* Return: ..
*/
void *malloc_checked(unsigned int b)
{
	void *p1;

	p1 = malloc(b);
	if (p1 == NULL)
	exit(98);
	return (p1);
}
