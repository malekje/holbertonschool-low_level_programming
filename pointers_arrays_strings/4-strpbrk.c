#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: char
 * Return: 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, i2;

	for (i = 0; s[i] != '\0'; i++)

	{
		for (i2 = 0; accept[i2] != '\0'; i2++)
		{
			if (s[i] == accept[i2])
			{
				s = &s[i];
				return (s);
			}
		}
			i++;
	}
	return (0);
}
