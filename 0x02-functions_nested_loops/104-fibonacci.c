#include <stdio.h>

/**
 * main - prints first n fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	unsigned long int first = 1;
	unsigned long int second = 2;
	unsigned long int next;

	printf("%lu, %lu", first, second);

	for (i = 3; i <= 98; i++)
	{
		next = first + second;
		printf(", %lu", next);
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}
