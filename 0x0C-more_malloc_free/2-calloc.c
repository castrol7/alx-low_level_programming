#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
* _calloc - allocate memory for an array
*
* @nmemb: the number of elements to allocate memory for
* @size: the size of each element in bytes
*
* Return: a pointer to the allocated memory, or NULL if an error occurred
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}

