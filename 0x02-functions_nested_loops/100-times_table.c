#include "main.h"

/**
 * times_table - prints the n times table starting with 0
 * @n: number of times table to print
 *
 * return: Always zero
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int a, b, product;

	a = 0;
	while (a <= n)
	{
		b = 0;
		while (b <= n)
		{
			product = a * b;
			if (product >= 10 && product < 100)
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
				if (b < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else if (product >= 100 && product < 1000)
			{
				_putchar(product / 100 + '0');
				_putchar((product / 10) % 10 + '0');
				_putchar(product % 10 + '0');
				if (b < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(product + '0');
				if (b < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
			}
			b++;
		}
		a++;
		_putchar('\n');
	}
}
