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
	int h = 0;
	int a = 0;

	while (dest[h] != '\0')
		h++;
	while (src[a] != src[n])
	{
		dest[h] = src [a];
			h++;
			a++;
			
			src++;
			dest++;
	}	
		dest[h] = '\0';
	}
}
