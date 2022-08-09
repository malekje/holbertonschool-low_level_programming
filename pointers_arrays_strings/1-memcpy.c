#include "main.h"

/**
* _memcpy - Write a function that copies memory area.
* @dest: dest
* @src: source
* @n: number
* Return: pointer .
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int length = n;
	int i;

	if (length >= 1)
	{
		for (i = 0; i < length; i++)
		dest[i] = src[i];
	}
	return (dest);
}
