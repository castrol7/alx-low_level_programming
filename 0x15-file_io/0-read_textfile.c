#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUF_SIZE 1024

/**
* read_textfile - Reads a text file and prints it to the standard output.
*
* @filename: The name of the file to read.
* @letters: The maximum number of letters to read.
*
* Return: The actual number of letters read, or 0 if an error occurred.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t n_read, total_read = 0;

	buf = malloc(BUF_SIZE);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	while ((n_read = read(fd, buf, BUF_SIZE)) > 0)
	{
		if (write(STDOUT_FILENO, buf, n_read) != n_read)
		{
			free(buf);
			close(fd);
			return (0);
		}
		total_read += n_read;
		if ((size_t)total_read >= letters)
			break;
	}

	free(buf);
	close(fd);
	return (total_read);
}

