#include <stdio.h>

/**
* append_text_to_file - Appends text at the end of a file
* @filename: Name of the file
* @text_content: NULL terminated string to add at the end of the file
*
* Return: 1 on success, -1 on failure
* - If filename is NULL return -1
* - If text_content is NULL, do not add anything to the file.
*   Return 1 if the file exists and -1 if the file does not exist or if
*   you do not have the required permissions to write the file
*/
int append_text_to_file(const char *filename, char *text_content)
{
FILE *file;

if (filename == NULL)
return (-1);

file = fopen(filename, "a");
if (file == NULL)
return (-1);

if (text_content != NULL)
fprintf(file, "%s", text_content);

fclose(file);
return (1);
}

