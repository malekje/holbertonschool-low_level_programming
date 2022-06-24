#include "main.h"

/**
* main - main entry
* @argc: argument counter
* @argv: argument value
* Return: (0)
*/
int main(int argc, char **argv)
{
	int i;
	int h;

	for (i = 1; i < argc; i++)
	{
		for (h = 0; argv[i][h]; h++)
		printf("Error");
		putchar('\n');
		return (1);
	}
	return (0):
}
