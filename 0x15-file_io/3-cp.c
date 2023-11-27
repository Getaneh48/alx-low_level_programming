#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"


/**
* main - main function
*
* @argc: number of arguments.
* @av: lists of arguments
*
* Return: 0 on success 1 on failure.
*/
int main(int argc, char **av)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	_copyf(av[1], av[2]);
	return (0);
}

/**
* _copyf - reads a text file and prints
*it to the POSIX standard output.
*
* @from: source filename.
* @to: destination filename.
*
*/

void _copyf(char *from, char *to)
{
	int rfd, wfd;
	char buffer[1024];
	ssize_t rf;

	rfd = open(from, O_RDONLY);
	if (rfd == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", from);
		exit(98);
	}

	wfd = open(to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (wfd == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to file %s\n", to);
		exit(99);
	}
	rf = read_file(&rfd, buffer, 1024, from);
	while (rf)
	{
		if (!write(wfd, buffer, rf))
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", to);
			exit(99);
		}

		rf = read_file(&rfd, buffer, 1024, from);
	}

	_close(rfd);
	_close(wfd);
}

/**
* read_file - read a file.
*
* @fd: file deiscriptor.
* @buffer: a buffer to store a data.
* @bufsize: buffer size.
* @filename: filename.
*
* Return: number of bytes read.
*
*/
ssize_t read_file(int *fd, char *buffer, int bufsize, char *filename)
{
	ssize_t rf;

	rf = read(*fd, buffer, bufsize);
	if (rf == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", filename);
		exit(98);
	}

	return (rf);
}

/**
* _close - close a an opened file.
*
* @fd: file descriptor.
*/
void _close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
