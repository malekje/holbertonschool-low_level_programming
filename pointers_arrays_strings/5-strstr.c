#include "main.h"
/**
 * *_strstr - function that locates a substring. 
 * @haystack: string
 * @needle: string
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		while (*haystack == *needle && *needle != '\0')
		{
			haystack = haystack + 1;
			needle = needle + 1;
		}
		if (*needle == '\0')
		return (haystack);
		haystack = haystack + 1;
	}
	return (0);
}
