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
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (product < 10 && b != 0)
				_putchar(' ');
			else if (product >= 10)
				_putchar('0' + product / 10);

			_putchar('0' + product % 10);
			b++;
		}
		_putchar('\n');
		a++;
	}
}
