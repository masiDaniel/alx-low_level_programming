#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints to standard output
 * @filename: the file beaning read from
 * @letters: no of letters to be read
 * Return: 0 (function fail) , w (no of bytes printed out
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	char *buffer;
	ssize_t file_d;
	ssize_t word;
	ssize_t text;

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	text = read(file_d, buffer, letters);
	word = write(STDOUT_FILENO, buffer, text);

	free(buffer);
	close(file_d);
	return (word);
}
