#include "main.h"

/**
 * _strlen - main entry
 * @s: checking
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
