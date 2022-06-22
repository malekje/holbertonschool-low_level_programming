#include "main.h"
/**
 * _pow_recursion - main entry
 * @x: integer
 * @y: integer
 * Return: x pow of y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (x == 0)
{
return (0);
}
return (x * _pow_recursion(x, y - 1));
}
