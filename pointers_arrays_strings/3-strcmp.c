#include "main.h"
/**
 * _strcmp - main entry
 * @s1: string
 * @s2: string
 * Return: number
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (1);
}
