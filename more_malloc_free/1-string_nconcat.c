#include "main.h"

/**
* *string_nconcat - main entry
* @s1: string
* @s2: string
* @n: size
* Return: concated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, str, str1, str2;
	char *conc;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	str1 = strlen(s1);
	str2 = strlen(s2);
	(void) str2;
	str = str1 + n;
	conc = malloc(sizeof(char) * (str + 1));
	if (conc == NULL)
	return (NULL);

	for (i = 0; i < str; i++)
	{
		if (i < str1)
		conc[i] = s1[i];
		else
		conc[i] = s2[i - str1];
	}
conc[str] = '\0';
return (conc);
}
