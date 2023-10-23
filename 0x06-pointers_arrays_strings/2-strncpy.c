#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of characters to copy
 *
 * Return: pointer to string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0' )
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
