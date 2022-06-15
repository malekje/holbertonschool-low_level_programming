#include "main.h"
/**
 * _strlen - main entry
 * @s: checking
 * Return: length
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}
/**
 * puts_half - main entry
 * @str: string
 */
void puts_half(char *str);
{
	int length;
	int n;
	int y;
	int h;

	length = _strlen(str);
	if (length == 0)
	{
		puchar('\n');
	}
	if (length % 2 != 2 && length != 0 )
	{
		n = (length - 1) / 2;
		for (y = n + 1; y != length; y++)
		{
			putchar(str[y]);
		}
		putchar('\n');

		else if (length != 0)
		{
			for (h = length / 2; h != length -1; h++)
			{
				putchar(str[h]);
			}
			putchar('\n')
		}
}
