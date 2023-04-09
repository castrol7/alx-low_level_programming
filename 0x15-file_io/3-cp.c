#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
* main - copies the content of a file to another file.
* @argc: number of arguments passed to the program
* @argv: array of arguments passed to the program
* Return: On success, 0. On error, other code
*/
int main(int argc, char **argv)
{
char *file_from, *file_to, buffer[1024];
int fd_from, fd_to, rd = 1, wr;

if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

file_from = argv[1], file_to = argv[2];

fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file_from), exit(98);

fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);

while (rd > 0)
{
rd = read(fd_from, buffer, 1024);
if (rd == -1)
dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file_from), exit(98);
if (rd > 0)
{
wr = write(fd_to, buffer, rd);
if (wr == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
		}
}
if (close(fd_from) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
if (close(fd_to) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
return (0);
}
