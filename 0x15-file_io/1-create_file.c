#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to be created
 * @text_content: NULL terminated string to write to the file
 *
 *
 * Return: 1, on success and -1, on failure
 * or -1 if the filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int length_text;
	int written_bytes;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}

	length_text = 0;
	while (text_content[length_text] != '\0')
	{
		length_text++;
	}

	written_bytes = write(fd, text_content, length_text);
	if (written_bytes == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
