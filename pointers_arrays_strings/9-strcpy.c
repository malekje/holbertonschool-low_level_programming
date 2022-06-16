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
 * *_strcpy - main entry
 * @dest: paste here
 * @src: copy
 * Return: copies
 */
char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; n <= _strlen(src); n++)
		dest[n] = src[n];

	return (dest);
}
