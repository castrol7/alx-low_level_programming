#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
* free_dog - frees a dog struct and its contents
* @d: pointer to the dog struct to free
*
* Return: void
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
d->name = NULL;
free(d->owner);
d->owner = NULL;
memset(d, 0, sizeof(dog_t));
free(d);
}
}

