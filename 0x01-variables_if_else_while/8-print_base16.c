#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always zero
 */
int main(void)
{
	char a;
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
