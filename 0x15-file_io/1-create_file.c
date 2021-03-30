#include "holberton.h"

/**
* create_file - function that creates a file.
* @filename: name of the file to create.
* @text_content: a NULL terminated string to write to the file.
* Return: 1 on success, -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
	int fd, write_file;
	ssize_t len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	while (text_content[len])
		len++;
	if (len == -1)
		return (-1);
	write_file = write(fd, text_content, len);
	close(fd);
	return (1);
}
