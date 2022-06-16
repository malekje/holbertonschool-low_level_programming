#include "main.h"
/**
 * *string_toupper - main entry
 * @s: string
 * Return: string
 */
char *string_toupper(char *s)
{

	int n;

	for (n = 0; s[n] != '\0'; n++)
{

		if (s[n] <= 'z' && s[n] >= 'a')

			s[n] = s[n] - 'A' + 'a';
}
	return (s);
}
