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
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(1);
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
	wfd = open(to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (rfd == -1 || from == NULL)
	{
		dprintf(2, "Error: can't read from file %s\n", from);
		exit(98);
	}
	if (wfd == -1 || to == NULL)
	{
		dprintf(2, "Error: can't write to %s\n", to);
		_close(wfd);
		_close(rfd);
		exit(98);
	}
	rf = read(rfd, buffer, 1024);
	while (rf)
	{
		if (!rf)
		{
			dprintf(2, "Error: can't read from file %s\n", from);
			_close(rfd);
			_close(wfd);
			exit(98);
		}
		if (!write(wfd, buffer, rf))
		{
			dprintf(2, "Error: can't write to %s\n", to);
			_close(rfd);
			_close(wfd);
			exit(99);
		}
		rf = read(rfd, buffer, 1024);
	}
}

/**
* _close - close a an opened file.
*
* @fd: file descriptor.
*/
void _close(int fd)
{
	if (!close(fd))
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
