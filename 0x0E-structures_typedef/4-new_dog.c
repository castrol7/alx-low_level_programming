#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
* new_dog - Creates a new dog.
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
*
* Return: A pointer to the newly allocated dog structure or NULL if failed
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

dog->name = malloc(sizeof(char) * (strlen(name) + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
strcpy(dog->name, name);

dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
strcpy(dog->owner, owner);

dog->age = age;

return (dog);
}

