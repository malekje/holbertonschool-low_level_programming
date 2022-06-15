#include "main.h"

/**
 * puts2 - main entry 
 * @str: string
 */
void puts2(char *str)
{
	int n = 0;

	while (*(str + n) != '\0');
	++n;
	{
		if (n % 2 == 0)
		{
			putchar(str[n]);
		}
	}
	putchar('\n');
}
