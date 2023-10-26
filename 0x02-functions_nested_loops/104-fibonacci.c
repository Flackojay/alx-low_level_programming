#include <stdio.h>

/**
 * main - prints first n fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	unsigned int first = 1;
	unsigned int second = 2;
	unsigned int next;

	printf("%u, %u", first, second);

	for (i = 3; i <= 98; ++i)
	{
		next = first + second;
		printf(", %u", next);
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}
