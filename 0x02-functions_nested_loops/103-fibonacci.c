#include <stdio.h>

/**
 * main - calculates the sum of even-valued terms in the
 * fibonacci sequence where values do not exceed 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int first = 1;
	unsigned int second = 2;
	unsigned int next;
	int sum = 0;

	while (second <= 4000000)
	{
		if (second % 2 == 0)
		{
			sum += second;
		}
		next = first + second;
		first = second;
		second = next;
	}
	printf("%u\n", sum);
	return (0);
}
