#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always zero
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
