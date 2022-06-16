#include "main.h"
/**
 * *_strncpy - main entry
 * @dest: paste here
 * @src: copy
 * @n: integer
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int h;
	for (h = 0; h < n && src[h] != '\0'; h++)
		dest[h] = src[h];
	while (h < n)
	{
		dest[h] = '\0';
		h++;
	}
	return (dest);
}
