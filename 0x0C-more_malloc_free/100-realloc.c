#include <stdlib.h>
#include <string.h>

/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: pointer to memory previously allocated with a call to malloc
* @old_size: size, in bytes, of the allocated space for ptr
* @new_size: new size, in bytes, of the new memory block
*
* Return: pointer to the reallocated memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	/* If new_size is zero, free ptr and return NULL */
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	/* If ptr is NULL, allocate new memory and return it */
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	/* If new_size == old_size, do nothing and return ptr */
	if (new_size == old_size)
	{
		return (ptr);
	}

	/* Allocate new memory with malloc */
	new_ptr = malloc(new_size);

	/* Copy contents from old memory to new memory */
	if (new_ptr && ptr)
	{
		memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);

		/* Free old memory */
		free(ptr);
	}

	return (new_ptr);
}

