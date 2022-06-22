#include "main.h"
/**
 * factorial - main entry
 * @n: integer
 * Return: the factorial of the given number
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0 || n == 1)
return (n);
else
return (factorial(n - 1) * n);
}
