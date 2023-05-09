#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
* read_textfile - Reads text file and prints it to the POSIX
* @filename: The name of the file to read.
* @letters: The maximum number of letters to read and print.
* Return: The actual number of letters read and printed.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, bytes_written;
ssize_t bytes_read;
char *buf;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);

if (fd == -1)
return (0);
buf = malloc(letters * sizeof(char));

if (buf == NULL)
{
close(fd);
return (0);
}
bytes_read = read(fd, buf, letters);

if (bytes_read == -1)
{
close(fd);
free(buf);
return (0);
}
bytes_written = write(STDOUT_FILENO, buf, bytes_read);

if (bytes_written == -1 || bytes_written != bytes_read)
{
close(fd);
free(buf);
return (0);
}
close(fd);
free(buf);
return (bytes_read);
}

