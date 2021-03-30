#include "holberton.h"

void main(int argc, char *argv)
{
	int fd1, fd2, nbytes_1, nbytes_2, cl1, cl2;
	char buffer[1024];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to");
		exit (97);
	}
	fd1 = open(argv[1], O_RDONLY);
	nbytes_1 = read(fd1, buffer, 1024);

	if (fd1 < 0 || nbytes_1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close from file %s", argv[1]);
		exit (98);
	}
	if (argv[2] == NULL)
	{
		fd2 = open(argv[2], O_CREAT | O_WRONLY, 0664);
	}
	else
	{
		fd2 = open(argv[2], O_WRONLY | O_TRUNC);
	}
	nbytes_2 = write(fd2, buffer, nbytes_1);

	if (fd2 < 0 || nbytes_2 < 0)
	{
		dprintf(STDERR_FILENO, "Error Can't write to %s", argv[2]);
		exit (99);
	}
	else
	{
		cl1 = close(fd1);
		if (cl1 < 0)
		{
			dprintf(STDERR_FILENO, "Error Can't close fd %d", fd1);
			exit (100);
		}
		cl2 = close(fd2);
		if (cl2 < 0)
		{
			dprintf(STDERR_FILENO, "Error Can't close fd %d", fd2);
			exit (100);
		}
	}
}
