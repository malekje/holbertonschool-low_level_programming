#include <stdio.h>
/**
 * _isalpha - Entry point
 * @c: checking
 * Return: 1 if upper or lower and 0 if not alphabet
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		{
			return (0);
		}
}
