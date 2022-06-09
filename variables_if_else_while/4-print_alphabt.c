#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char s = 'a';

	while (s <= 'z')
	{
		if ((s != 'q') && (s != 'e'))
		{
			putchar(s);
		}
		s++;
	}
	putchar('\n');
	return (0);
}
