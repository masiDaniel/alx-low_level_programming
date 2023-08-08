#include "main.h"

/**
 * append_text_to_file - appending text to the end of a file
 * @filename: pointer to the name of teh file to be appended to
 * @text_content: string to be appended into the file
 * Return: -1 (file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int length = 0;
	int write;
	int open;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[length];)
			length++;
	}

	open = open(filename, O_WRONLY | O_APPEND);
	write = write(open, text_content, length);

	if (write == -1 || open == -1)
		return (-1);

	close(open);

	return (-1);
}
