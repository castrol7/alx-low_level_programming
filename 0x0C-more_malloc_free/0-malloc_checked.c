#include <stdlib.h>
#include <stdio.h>

/**
* malloc_checked - Allocates memory using malloc.
* @b: Size of the memory block to allocate.
*
* Return: Pointer to the allocated memory block.
*         If malloc fails, the function terminates with a status value of 98.
*/
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
fprintf(stderr, "Error: malloc failed. Terminating.\n");
exit(98);
}
return (ptr);
}

