#include "main.h"

/**
 * print_number - prints an integer, using putchar function
 * @n: integer to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
