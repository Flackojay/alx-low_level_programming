#include <stdlib.h>
#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;

	return (len);
}

/**
 * is_digit - Checks if a string is composed of digits.
 * @str: The input string.
 *
 * Return: 1 if composed of digits, 0 otherwise.
 */
int is_digit(char *str)
{
	if (!str || *str == '\0')
		return (0);

	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}

	return (1);
}

/**
 * multiply - Multiplies two positive numbers.
 * @num1: First number as a string.
 * @num2: Second number as a string.
 *
 * Return: The result of the multiplication as a string.
 */
char *multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int len = len1 + len2;
	int *result = calloc(len, sizeof(int));

	if (!result)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	for (int i = len1 - 1; i >= 0; i--)
	{
		int carry = 0;
		int n1 = num1[i] - '0';

		for (int j = len2 - 1; j >= 0; j--)
		{
			int n2 = num2[j] - '0';
			int product = n1 * n2 + result[i + j + 1] + carry;

			result[i + j + 1] = product % 10;
			carry = product / 10;
		}
	}

	char *res = malloc((len + 1) * sizeof(char));
	if (!res)
	{
		free(result);
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	int i = 0;
	while (i < len && result[i] == 0)
		i++;

	if (i == len)
		res[0] = '0';
	else
	{
		int j = 0;
		while (i < len)
		{
			res[j] = result[i] + '0';
			i++;
			j++;
		}
		res[j] = '\0';
	}

	free(result);
	return (res);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 98 on incorrect arguments or non-digits.
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	char *result = multiply(argv[1], argv[2]);
	int len = _strlen(result);

	for (int i = 0; i < len; i++)
		_putchar(result[i]);

	_putchar('\n');
	free(result);

	return (0);
}

