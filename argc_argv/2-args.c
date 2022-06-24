#include "main.h"

/**
* main - main entry
* @argc: argument counter
* @argv: argument value
* Return: (0)
*/
int main(int argc, char **argv)
{
    int count;

    for (count = 0; count < argc; count++)
    {
        printf("%s", argv[count]);
        putchar('\n');
    }
    return (0);
}