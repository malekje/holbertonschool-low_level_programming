#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: the text
 * Return: 1 or 0
 */
int create_file(const char *filename, char *text_content)
{
	int length, writeF, openF;

	length = 0;
	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		length = strlen(text_content);

	openF = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writeF = write(openF, text_content, length);
	if (writeF == -1 || openF == -1)
		return (-1);
	close(openF);
	return (-1);
}
