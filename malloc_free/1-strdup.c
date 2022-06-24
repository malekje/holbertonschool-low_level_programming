#include "main.h"
/**
 *  * *_strdup - main entry
 *   * @str: string
 *    * Return: 0
 *     */
char *_strdup(char *str)
{
	char *h; 
	char *b;
	int size = strlen(str);

	if (h == NULL)
	{
		return (NULL);
	}
	h = b;
	if (str == NULL)
	{
		return (NULL);
	}
	h = malloc(sizeof(char) * (size + 1));
	while (*str)
	{
		*b++ = *str++;

	return (h);
	}
}
