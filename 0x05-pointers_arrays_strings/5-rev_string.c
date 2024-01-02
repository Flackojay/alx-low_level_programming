#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to string
 */
void rev_string(char *s)
{
	int length = 0, i, a = 0;
	char temp;

	while (s[length] != '\0')
		length++;

	for (i = length - 1; i >= a; i--)
	{
		temp = s[a];
		s[a] = s[i];
		s[i] = temp;
		a++;
	}
}
