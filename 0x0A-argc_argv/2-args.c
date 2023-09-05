#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
