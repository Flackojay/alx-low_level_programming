#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two positive numbers.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	char *num1_str = argv[1];
	char *num2_str = argv[2];

	for (int i = 0; num1_str[i] != '\0'; i++)
	{
		if (num1_str[i] < '0' || num1_str[i] > '9')
		{
			printf("Error\n");
			return (98);
		}
	}

	for (int i = 0; num2_str[i] != '\0'; i++)
	{
		if (num2_str[i] < '0' || num2_str[i] > '9')
		{
			printf("Error\n");
			return (98);
		}
	}

	unsigned long long num1 = strtoull(num1_str, NULL, 10);
	unsigned long long num2 = strtoull(num2_str, NULL, 10);
	unsigned long long result = num1 * num2;

	printf("%llu\n", result);
	return (0);
}
