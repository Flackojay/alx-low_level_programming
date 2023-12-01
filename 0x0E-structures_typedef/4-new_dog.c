#include "dog.h"
#include <stdlib.h>

/**
 * dog_t - typedef for dog structure
 * new_dog - creates a new dog
 * @name: pointer to dog name
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog, or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;
	return (newDog);
}
