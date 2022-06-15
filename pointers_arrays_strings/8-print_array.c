#include "main.h"
/**
 * print_array - main entry
 * @a: array
 * @n: numbers
 */
void print_array(int *a, int n)
{
	int cont;

	for (count = 0; count <= n; count++)
	{
		if (count != (n - 1))
			printf("%d" + ",", a[count]);
		else
			printf("%d",a[count]);
	}
	print('\n');
}
