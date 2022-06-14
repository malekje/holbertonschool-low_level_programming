#include "main.h"

/**
 * _puts - main entry
 * @str: string
 * Return: string
 */
void _puts(char *str)
{
	while (*str != '\0')
		putchar(*str++);
	putchar('\n');
}
