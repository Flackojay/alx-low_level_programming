#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square
 * matrix of integers.
 * @a: square matrix
 * @size: size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int row, column;
	int sum_r = 0;
	int sum_l = 0;

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			if (row == column)
				sum_l += a[row * size + column];
			if ((abs(row - column) == size - 1) || (row + column == size - 1))
				sum_r += a[row * size + column];
		}
	}
	printf("%d, %d\n", sum_l, sum_r);
}
