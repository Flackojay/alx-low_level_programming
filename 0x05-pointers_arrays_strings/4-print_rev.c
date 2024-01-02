#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;
	int a;

	while (s[i] != '\0')
	{
		i++;
	}
	for (a = i - 1; a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
