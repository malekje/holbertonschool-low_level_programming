#include "main.h"
#include <stdio.h>
/**
* main - main entry
* @argc: argument counter
* @argv: argument value
* Return: (0)
*/
int main(int argc, char **argv)
{
(void)argv;
if (argc > 0)
printf("%d", argc -1);
putchar('\n');
return (0);
}
