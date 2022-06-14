#include "main.h"

/**
 * swap_int - main entry
 * @a: checking
 * @b: checking
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *b;
	*b = *a;
	*a = n;
}
