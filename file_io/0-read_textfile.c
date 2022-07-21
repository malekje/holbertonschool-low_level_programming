#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * @filename: file name 
 * @letters: letters number
 * Return: number of letters read and printed or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = open(filename, O_RDONLY);
	char *buff = malloc(sizeof(size_t) * letters);
	size_t C_read, C_write;
	

	if (filename == NULL)
	return (0);

	if (file == -1)
	return (0);

	if (buff == NULL)
	return (0);

	C_read = read(file, buff, letters);
	if (file == -1)
	{
		free(buff);
		close(file);
			return (0);
	}
	C_write = write(STDOUT_FILENO, buff, C_read);
	if (file == -1)
	{
		free(buff);
		close(file);
			return (0);
	}
		close(file);
		free(buff);
			return (C_write);
}
