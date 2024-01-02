#include "main.h"

/**
 * puts_half - prints half of a string. Followed by a new line
 * @str: pointer to string
 */
void puts_half(char *str)
{
	int length = 0, n, i;

	while (str[length] != '\0')
		length++;
	n = (length - 1) / 2;

	if (length % 2 == 0)
	{
		for (i = (length / 2); i < length; i++)
			_putchar(str[i]);
	}
	else
		for (i = n + 1; i < length; i++)
			_putchar(str[i]);
	_putchar('\n');
}
