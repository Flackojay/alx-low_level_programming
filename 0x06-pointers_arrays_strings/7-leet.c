#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string
 *
 * Return: pointer to the encoded string.
 */

char *leet(char *s)
{
	int i, j;
	char leetChars[] = "aAeEoOtTlL";
	char leetReplacements[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; leetChars[j] != '\0'; j++)
		{
			if (s[i] == leetChars[j])
				s[i] = leetReplacements[j];
		}
	}
	return (s);
}
