#include "main.h"
/**
 * *_strncat - main entry
 * @dest: paste
 * @src: copy
 * @n: integer
 * Return: strings concated
 */
char *_strncat(char *dest, char *src, int n)
{
	int h;

	while (*dest)
		dest++;
	for (h = 0; h < n; h++)
	{
		while (*src)
		{
			*dest = *src;
			src++;
			dest++;
		}
		*dest = '\0';
	}
}
