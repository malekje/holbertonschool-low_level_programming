#include "main.h"
/**
 * sqrt - main entry
 * @x: integer
 * @y: integer
 * Return: Always 0.
 */
int _sqrt(int x, int y)
{
if (y * y == x)
{
return (y);
}
if (y * y > x)
{
return (-1);
}
return (_sqrt(x, y + 1));
}


/**
* _sqrt_recursion - main entry
* @n: integer
* Return: natural square root
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_sqrt(n, 0));
}
