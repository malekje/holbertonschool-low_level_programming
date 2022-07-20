#include "main.h"

/**
 * *_memset - main entry
 * @s: number
 * @b: value
 * @n: number
 */

char *_memset(char *s, char b, unsigned int n)
{
    int size = n; 

	if (size >= 1)
	{
	
    int count;

	for (count = 0; count < size; count++)
	s[count] = b;
    
	}

	return (s);
}