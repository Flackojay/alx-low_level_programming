#include "main.h"

/**
 * print_alphabet - prints alphabet to output
 *
 * Return: Always zero
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
