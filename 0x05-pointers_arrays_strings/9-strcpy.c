#include "main.h"

/**
 * _strcpy - copies the string pointed to including terminating null byte
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 *
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	char *originalDest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (originalDest);
}
