#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string
 * @c: character
 * Return: character
 */

char *cap_string(char *c)
{
	int n;

	for (n = 0; c[n] != '\0'; n++)
	{
		if (c[n] > 96 && c[n] < 123)
		c[n] = c[n] - 32;
	}
	return (c);
}
