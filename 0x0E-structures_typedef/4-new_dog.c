#include "dog.h"
#include <stdlib.h>

/**
 * custom_strdup - duplicates string
 * @src: source string
 *
 * Return: dest string or NULL
 */
char *custom_strdup(const char *src)
{
	int length, i;
	char *dest;

	if (src == NULL)
		return (NULL);

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	dest = malloc(length * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: pointer to dog name
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog, or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}
	newDog->name = (name != NULL) ? custom_strdup(name) : NULL;
	newDog->owner = (owner != NULL) ? custom_strdup(owner) : NULL;

	if (newDog->name == NULL && name != NULL)
	{
		free(newDog);
		return (NULL);
	}
	if (newDog->owner == NULL && owner != NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	newDog->age = age;

	return (newDog);
}
