#include "main.h"
/**
 * *_strdup - main entry
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{

	char *a, *h;
	int size = strlen(str);

	if (str == NULL)
		return (NULL);
	a = malloc(sizeof(char) * (size + 1));
	if (a == NULL)
		return (NULL);

	h = a;

	while (*str)
		*h++ = *str++;

	return (a);
}
