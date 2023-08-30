#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int a, b, c, d;

	a = 0;
	while (a < 3)
	{
		b = 0;
		while (b < 10)
		{
			c = 0;
			while (c < 6)
			{
				d = 0;
				while (d < 10)
				{
					if (a >= 2 && b >= 4)
					{
						break;
					}
					else
					{
						_putchar('0' + a);
						_putchar('0' + b);
						_putchar(':');
						_putchar('0' + c);
						_putchar('0' + d);
						_putchar('\n');
						d++;
					}
				}
				c++;
			}
			b++;
		}
		a++;
}
