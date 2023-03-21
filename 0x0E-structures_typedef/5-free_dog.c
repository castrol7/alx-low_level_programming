#include <stdlib.h>

/**
* free_dog - Frees a dog_t struct
* @d: Pointer to the dog_t struct to be freed
*
* Description: This function frees the memory allocated to a dog_t struct,
*              including the memory allocated for the name field.
* Return: Nothing
*/

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d);
}
}

