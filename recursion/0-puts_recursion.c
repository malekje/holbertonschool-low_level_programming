#include "main.h"
/**
 * _puts_recursion - main entry
 * @s: string
 * Return: string
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');

return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
