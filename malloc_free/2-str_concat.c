#include "main.h"
/**
 * *str_concat - main entry
 * @s1: charr
 * @s2: char
 * Return: concated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *concats;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	if (s1 == NULL && s2 == NULL)
	concats = "";

	concats = malloc(4 * (strlen(s1) + strlen(s2) + 1));


	if (concats == NULL)
	return (NULL);

	i = 0;
	while (i < strlen(s1))
	{
		concats[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < strlen(s2))
	{
		concats[i] = s2[j];
		i++;
		j++;
	}
	return (concats);


}
