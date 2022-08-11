#include "main.h"
/**
* main - program that copies the content of a file to another file
* @argc: num argument
* @argv: string argument
* Return: 0
*/

int main(int argc, char *argv[])
{
int file1, file2;
int n = 1024, i = 0;
char buffer[1024];

if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file1 file2\n"), exit(97);
file1 = open(argv[1], O_RDONLY);
if (file1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file1 %s\n", argv[1]);
exit(98);
}
file2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (file2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(file1), exit(99);
}
while (n == 1024)
{
n = read(file1, buffer, 1024);
if (n == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file1 %s\n", argv[1]);
exit(98);
}
i = write(file2, buffer, n);
if (i < n)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}

if (close(file1) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1), exit(100);

if (close(file2) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2), exit(100);

return (0);
}
