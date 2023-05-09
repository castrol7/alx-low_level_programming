#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
* error - Prints an error message and exits with a given code.
* @msg: The error message to print.
* @code: The exit code to use.
*/
void error(char *msg, int code)
{
dprintf(STDERR_FILENO, "%s\n", msg);
exit(code);
}

/**
* main - Copies the contents of one file to another.
* @argc: The number of arguments passed to the program.
* @argv: An array of strings containing the arguments.
* Return: 0 on success, or a non-zero value on failure.
*/
int main(int argc, char **argv)
{
int from_fd, to_fd, read_bytes, write_bytes;
char buffer[1024];

if (argc != 3)
error("Usage: cp file_from file_to", 97);

from_fd = open(argv[1], O_RDONLY);
if (from_fd == -1)
error("Error: Can't read from file %s", 98);

to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (to_fd == -1)
error("Error: Can't write to file %s", 99);

while ((read_bytes = read(from_fd, buffer, sizeof(buffer))) > 0)
{
write_bytes = write(to_fd, buffer, read_bytes);
if (write_bytes < read_bytes)
error("Error: Write error", 99);
}
if (read_bytes == -1)
error("Error: Read error", 98);
close(from_fd), close(to_fd);
return (0);
}

