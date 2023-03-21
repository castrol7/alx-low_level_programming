#ifndef INIT_DOG_H
#define INIT_DOG_H

#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* init_dog - initializes a dog structure with the given values
* @d: a pointer to a dog structure to initialize
* @name: a string representing the dog's name
* @age: a float representing the dog's age
* @owner: a string representing the dog's owner's name
*
* Description: This function initializes a dog structure with the given
* name, age, and owner's name by dynamically allocating memory for the
* name and owner strings and setting the dog's age.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
/* Allocate memory for the name and owner strings */
d->name = malloc(strlen(name) + 1);
d->owner = malloc(strlen(owner) + 1);

/* Copy the name and owner strings into the dog struct */
strcpy(d->name, name);
strcpy(d->owner, owner);

/* Set the dog's age */
d->age = age;
}
#endif /* INIT_DOG_H */

