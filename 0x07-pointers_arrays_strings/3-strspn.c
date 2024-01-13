#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: first string
 * @accept: second string
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != ','; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				count += 1;
		}
	}
	return (count);
}
