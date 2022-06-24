#include "main.h"

/**
* main - main entry
* @argc: argument counter
* @argv: argument value
* Return: (0)
*/
int main(int argc, char **argv)
{
	if (argc == 3)
{
	printf("%d", atoi(argv[1]) * atoi(argv[2]));
	putchar('\n');
	return (0);
}
	printf("Error");
	putchar('\n');
	return (1);
}
