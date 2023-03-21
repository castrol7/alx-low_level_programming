#ifndef DOG_H
#define DOG_H

/*
 * dog.h - defines a structure to represent a dog
 *
 * This header file defines a structure called `dog_t` that represents
 * a dog. The structure has three fields: a pointer to a character array
 * that represents the dog's name, a float that represents the dog's age,
 * and a pointer to a character array that represents the name of the
 * dog's owner.
 */

/**
 * struct dog - Represents a dog
 *
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
 *
 * This structure represents a dog and contains three fields:
 * - name: a pointer to a character array that represents the dog's name
 * - age: a float that represents the dog's age
 * - owner: a pointer to a character array that represents the name of
 *          the dog's owner.
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

#endif /* DOG_H */

