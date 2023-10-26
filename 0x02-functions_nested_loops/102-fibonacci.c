#include <stdio.h>

/**
 * main - prints first n fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	long int first = 1;
	long int second = 2;
	long int next;

	printf("%ld, %ld", first, second);

	for (i = 3; i <= 50; ++i)
	{
		next = first + second;
		printf(", %ld", next);
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}
