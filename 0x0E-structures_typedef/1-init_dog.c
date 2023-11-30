#include "dog.h"

/**
 * init_dog - initializes a structure of dog
 * struct dog - dog struct
 * @d: pointer to structure dog
 * @name: pointer to dog name
 * @age: age of dog
 * @owner: pointer to dog owner
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
