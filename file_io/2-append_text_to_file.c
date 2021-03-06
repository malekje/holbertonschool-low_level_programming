#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: the text
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int length, op, wr;

	length = 0;
	if (filename == NULL)
			return (-1);
		if (text_content == NULL)
			return (-1);
		else
		length = strlen(text_content);
		op = open(filename, O_WRONLY | O_APPEND);
		wr = write(op, text_content, length);

		if (op == -1)
			return (-1);
		if (wr == -1)
			return (-1);
		close(op);
			return (1);
}
