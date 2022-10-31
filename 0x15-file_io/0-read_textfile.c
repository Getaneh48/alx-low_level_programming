#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
*
* @filename: filename.
* @letters: number of characters to read.
*
* Return: no of characters written to the screen.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t file_read, written;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	file_read = read(fd, buffer, letters);
	if (file_read > -1)
	{
		written = write(STDOUT_FILENO, buffer, file_read);
		if (written == -1)
		{
			free(buffer);
			close(fd);
			return (0);
		}

	}
	else
	{
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (written);
}
