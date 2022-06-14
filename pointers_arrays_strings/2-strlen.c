#include "main.h"

/**
 * _srtlen - main entry
 * @s: checking 
 */
int _strlen(char *s)
{
	int n;

	while (*s != '\0')
	{
		n++;s++;
	}
		return (n);
}
