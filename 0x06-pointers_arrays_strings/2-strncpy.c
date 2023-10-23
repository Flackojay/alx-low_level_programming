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
	int len = 0;

	while (dest[len] != '\0')
		len++;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (src[n] == '\0')
		dest[i] = '\0';
	else
		dest[len] = '\0';
	return (dest);
}
