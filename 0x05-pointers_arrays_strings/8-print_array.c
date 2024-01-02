#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: pointer to array
 * @n: number of elements of the array to print
 */
void print_array(int *a, int n)
{
	int i = 0;
	if (n <= 0)
	{
		printf("\n");
		return;
	}

	while (i < n - 1)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d\n", a[i]);
}
