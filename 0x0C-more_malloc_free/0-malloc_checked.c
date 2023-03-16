#include <stdlib.h>

/**
* malloc_checked - Allocates memory using malloc.
* @b: The number of bytes to allocate.
*
* Return: A pointer to the allocated memory.
*         If malloc fails, terminates the process with a status value of 98.
*/
void *malloc_checked(unsigned int b)

{
	void *p = malloc(b);

	if (p == NULL)
	{
		char msg[] = "Error: malloc failed\n";

		for (unsigned int i = 0; i < sizeof(msg) - 1; i++)
			_putchar(msg[i]);
		exit(98);
	}
	return (p);
}

