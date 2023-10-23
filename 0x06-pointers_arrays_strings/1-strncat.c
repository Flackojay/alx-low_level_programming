#include "main.h"

/**
 * _strncat - concatenates two strings at most n bytes
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 *
 * Return: pointer to the string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != ' ')
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
