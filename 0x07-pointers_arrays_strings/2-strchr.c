#include <stddef.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to check character
 * @c: character to locate
 *
 * Return: a pointer to the first occurrence of the character in the
 * string or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
