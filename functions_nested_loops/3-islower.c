#include <stdio.h>
/**
 * _islower - Entry point
 * @c: checking
 * Return:  0 if uppercase and 1 if lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	}
