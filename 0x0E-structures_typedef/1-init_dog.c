#include "dog.h"
#include <stdio.h>
#include <string.h>
/**
* init_dog - Initializes a struct dog with the given values
* @d: A pointer to the struct dog to initialize
* @name: The name of the dog
* @age: The age of the dog
* @owner: The owner of the dog
*
* Return: None
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	/* Initialize the struct fields */
	d->name = name;
	d->age = age;
	d->owner = owner;
}

