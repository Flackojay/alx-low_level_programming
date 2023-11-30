#include "dog.h"

/**
 * init_dog - initializes a structure of dog
 * @d: pointer to structure
 * @name: pointer to dog name
 * @age: age of dog
 * @owner: pointer to dog owner
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
