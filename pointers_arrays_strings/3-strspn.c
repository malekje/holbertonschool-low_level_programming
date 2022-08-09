#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: variable
 * Return: bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;


	while (s[i] != '\0')
	{
		for (i = 0; accept[i]; i++)
		{	
			if(s[i] == accept[i])
			{	
				j = 0;
				j++;
				break;
			}
			
			if (accept[i + 1] == '\0')
			return (j);
		}
		s++;
	}
		return (j);
}
