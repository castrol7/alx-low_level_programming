#include <stdlib.h>
#include <string.h>

/**
* _realloc - reallocates a memory block using malloc and free
*
* @ptr: pointer to the memory previously allocated with malloc
* @old_size: size of the allocated space for ptr
* @new_size: new size of the memory block
*
* Return: On success, a pointer to the newly allocated memory block.
*         On failure, NULL.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;

if (new_size == 0)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
return (malloc(new_size));

if (new_size <= old_size)
return (ptr);

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

memcpy(new_ptr, ptr, old_size);
free(ptr);

return (new_ptr);
}

