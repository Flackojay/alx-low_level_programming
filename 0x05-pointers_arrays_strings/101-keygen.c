#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 *
 * Return: Always 0.
 */
int main(void)
{
	srand(time(0));

	char password[100];
	int i;

	for (i = 0; i < 100; ++i)
	{
		password[i] = ' ' + rand() % ('~' - ' ' + 1);
	}
	password[i] = '\0';
	printf("%s\n", password);

	return (0);
}
