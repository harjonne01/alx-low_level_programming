#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read a text file and prints it to the stdout
 * @filename: filename of the text file to be read
 * @letters: number of characters or bytes to be read from the text file
 * Return: Actual number of letters it could read and print
 * 0, if the file cannot be opened or read or filename is NULL
 * 0, if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t num_bytes;
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = (char *)malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	num_bytes = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, num_bytes);

	close(fd);
	free(buffer);
	return (num_bytes);
}
