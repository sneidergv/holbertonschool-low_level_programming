#include "holberton.h"

/**
* append_text_to_file - function that appends text at the end of a file.
* @filename: name of the file.
* @text_content: the NULL terminated string to add at the end of the file.
* Return: 1 on success and -1 on failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_file, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (!fd)
	return (-1);

	if(!text_content)
		return (-1);
	while (text_content[len])
		len++;
	write_file = write(fd, text_content, len);

	close(fd);
	return (1);
}
