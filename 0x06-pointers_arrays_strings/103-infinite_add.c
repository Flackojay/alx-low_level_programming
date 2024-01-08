#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number to be added
 * @n2: second number to be added
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 *
 * Return: returns a pointer to the result, or 0 if result cannot be
 * stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int sum, i, j, k, start, end;
	int len1 = 0;
	int len2 = 0;
	char temp;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 > size_r || len2 > size_r)
		return (0);
	i = len1 - 1;
	j = len2 - 1;
	for (k = 0; i >= 0 || j >= 0 || carry > 0; i--, j--, k++)
	{
		sum = (i >= 0 ? n1[i] - '0' : 0) + (j >= 0 ? n2[j] - '0' : 0) + carry;
		carry = sum / 10;
		if (k >= size_r - 1)
			return (0);
		r[k] = (sum % 10) + '0';
	}
	r[k] = '\0';

	for (start = 0, end = k - 1; start < end; start++, end--)
	{
		temp = r[start];
		r[start] = r[end];
		r[end] = temp;
	}
	return (r);
}
