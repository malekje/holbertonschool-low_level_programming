#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: variable
 * Return: bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int h;
	unsigned int j = 0;


	while (s[i] != '\0')
	{
		for (h = 0; accept[h] != '\0'; h++)
		{	
			if(s[i] == accept[j])
			{	
				j++;
				break;
			}
			else if (accept[h + 1] == '\0' && s[i] != accept[h])
				return (j);
		}
		i++;
	}
	return (j);
}
