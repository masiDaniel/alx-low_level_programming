#include "main.h"

/**
 * create_file - create a file
 * @filename: pointer to the name of the file to be created
 * @text_content: pointer to string to be written in the created file
 * Return: -1 (function fail) , --1 (succesS)
 */

int create_file(const char *filename, char *text_content)
{
	int file, word;
	int length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	word = write(file, text_content, length);

	if (word == -1 || file == -1)
		return (-1);

	close(file);

	return (1);
}
