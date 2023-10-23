#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to reverse
 * @n: number of elements of the array.
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int temp = 0;
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		temp = a[end];
		a[end] = a[start];
		a[start] = temp;
		start++;
		end--;
	}
}
