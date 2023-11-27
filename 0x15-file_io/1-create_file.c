#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* create_file - reads a text file and prints it to the POSIX standard output.
*
* @filename: filename.
* @text_content: text to write.
*
* Return: 1 on success -1 on failure..
*/
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t written;
	char *text = text_content;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (; *text != '\0'; text++)
		len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	written = write(fd, text_content, len);
	if (written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
