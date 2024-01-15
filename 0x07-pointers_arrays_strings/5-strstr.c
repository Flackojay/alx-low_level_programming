#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, k;

	while (needle[i] != '\0')
		i++;

	for (j = 0; haystack[j] != '\0'; j++)
	{
		for (k = 0; needle[k] != '\0' && needle[k] == haystack[j + k]; k++)
		{

		}
		if (needle[k] == '\0')
			return (haystack + j);
	}
	return ('\0');
}
