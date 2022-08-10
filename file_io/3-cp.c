#include "main.h"

/**
 * main - copies the content to another file
 * @argc: argument 
 * @argv: argument 
 * Return: 0.
 */
int main(int argc, char **argv)
{
	char *buffer;
	int first, last, _read, _write;

	if (argc != 3)
	{

		dprintf(STDERR_FILENO, "Usage: cp file_first file_last\n");
		exit(97);

	}


	buffer = create_file(argv[2]);


	first = open(argv[1], O_RDONLY);
	_read = read(first, buffer, 1024);
	last = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);


	do {

		if (first == -1 || _read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read first file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

			_write = write(last, buffer, _read);

		if (last == -1 || _write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write last %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

			_read = read(first, buffer, 1024);
			last = open(argv[2], O_WRONLY | O_APPEND);

	} 
	
	while (_read > 0);

	first(buffer);
	close_file(first);
	close_file(last);

	return (0);

}

/**
 * *new_buffer - new buffer function
 * @file: the file
 * Return: buffer
 */

char *new_buffer(char *file)
{
	char *buff = malloc(sizeof(char) * 1024);


	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write last %s\n", file);
		exit(99);
	}
	return (buff);
}

/**
 * exit_file - exit file function
 * @fd: File descriptor
 * Return: nothing
 */

void exit_file(int fd)
{
	int h;

	h = close(fd);
	if (h == -1)
	{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
	}
}
