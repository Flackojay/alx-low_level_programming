#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: alphabet to check
 *
 * Return: zero if uppercase, one if lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (0);
	return (0);
}
