#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
* append_text_to_file - appends text to end of file
* @filename: name of file to append to
* @text_content: text to append to file
*
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, result;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
			len++;

		result = write(fd, text_content, len);
		if (result != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

