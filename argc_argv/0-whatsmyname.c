#include <stdio.h>
/**
* main - main entry
* @argc: argument counter
* @argv: argument value
* Return: always (0)
*/
int main(int argc, char *argv[])
{
if (argc > 0)
printf("%s", argv[0]);
putchar('\n');
return (0);
}
