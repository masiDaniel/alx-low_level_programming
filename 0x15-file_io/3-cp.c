#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void close_file_content(int file_d);

/**
 * create_buffer - function to allocate memory to a buffer
 * @file: the file that the buffer is holding data from
 * Return: pointer to buffer
 */


char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: cant't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file_content - close the file desciptors
 * @fd: file decriptor
 */

void close_file_content(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - ues the above functions to succesfully copy a file into another
 * @argc: no of arguments
 * @argv: array of pointers to the arguments
 * Return: 0 (succesful)
 * desciption :
 * argument count is incorrect - exit code 97
 * file_from does not exist or can not be read from - exit code 98
 * file_to can not be written to or created - exit code 99
 * file_from or file_to can not be closed - exit code 100
 */

int main(int argc, char *argv[])
{
int from, word, re, to;
char *buffer;

if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
re = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
	if (from == -1 || re == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}

	word = write(to, buffer, re);
	if (to == -1 || word == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s \n", argv[2]);
		free(buffer);
		exit(99);
	}

	re = read(from, buffer, 1024);
	to = open(argv[2], O_WRONLY | O_APPEND);

} while (re > 0);


free(buffer);
close_file_content(from);
close_file_content(to);

return (0);
}
