#include <stdlib.h>
#include <string.h>

/**
* print_name - prints a name using a function pointer
* @name: the name to print
* @f: a function pointer that takes a string argument and returns void
*
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	char *buffer;
	char *p;

	buffer = malloc(strlen(name) + 1);
	if (!buffer)
		exit(EXIT_FAILURE);

	p = buffer;
	while (*name)
		*p++ = *name++;

	*p = '\0';
	(*f)(buffer);
	free(buffer);
}

