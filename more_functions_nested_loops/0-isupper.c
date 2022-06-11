#include "main.h"
/**
 * _isupper - main entry
 * @c: cheking
 * Return: 1 if c uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}


