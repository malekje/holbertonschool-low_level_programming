#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @s: string
 * Return: string
 */
char *leet(char *s)
{
	int count, i;

	int a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int n[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (count = 0; s[count] != '\0'; count++)
	{
	for (i = 0; a[i] != '\0'; i++)
	if (s[count] == a[i])
	s[count] = n[i];
	}

	return (s);
}
