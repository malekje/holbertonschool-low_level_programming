#include "main.h"

/**
 * rev_string - main entry
 * @s: string
 * Return: string
 */
void rev_string(char *s)
{
	int a;
	int b;
	int c;
	int d;

	for (b = 0; *(s + b) != '\0' ; ++b)

	for (a = 0; a < b / 2; a++)
	{
		c = s[a];
		d = b - a;
		s[a] = s[d - 1];
		s[d - 1] = c;
	}

}
