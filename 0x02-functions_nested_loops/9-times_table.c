#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 */
void times_table(void)
{
	int a, b, product;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			product = a * b;
			if (product >= 10)
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(product + '0');
				if (b < 9)
				{
					_putchar(',');
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
