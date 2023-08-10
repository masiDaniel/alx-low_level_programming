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
	int word;
	int op;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	word = write(op, text_content, length);

	if (op == -1 || word == -1)
		return (-1);

	close(op);

	return (-1);
}
