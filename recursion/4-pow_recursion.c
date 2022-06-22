#include "main.h"
/**
 * _pow_recursion - main entry
 * @x: integer
 * @y: integer
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
    if (x == 0)
    return (0);
    if (x < 0)
    return (-1);
    return (_pow_recursion(x, y - 1) * x);
}
