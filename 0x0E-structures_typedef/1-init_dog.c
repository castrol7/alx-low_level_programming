#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dog {
char name[50];
float age;
char owner[50];
};

/**
* init_dog - initializes a variable of type struct dog
* @d: pointer to struct dog to be initialized
* @name: pointer to name of dog
* @age: age of dog
* @owner: pointer to name of dog's owner
*
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
// Check if the input pointer to struct is valid
if (d == NULL)
{
printf("Error: invalid pointer to struct.\n");
return;
}
// Check if the input name is valid
if (name == NULL)
{
printf("Error: invalid name.\n");
return;
}
// Check if the input owner is valid
if (owner == NULL)
{
printf("Error: invalid owner.\n");
return;
}
// Initialize the struct fields with the input values
strncpy(d->name, name, sizeof(d->name) - 1);
d->name[sizeof(d->name) - 1] = '\0'; // Ensure null-termination of the string
d->age = age;
strncpy(d->owner, owner, sizeof(d->owner) - 1);
d->owner[sizeof(d->owner) - 1] = '\0'; // Ensure null-termination of the string
}

int main(void)
{
struct dog my_dog;
init_dog(&my_dog, "Fido", 2.5, "John");
printf("My dog's name is %s, he is %.1f years old, and his owner is %s.\n",
my_dog.name, my_dog.age, my_dog.owner);
return (0);
}

