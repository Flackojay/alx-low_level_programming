#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: string to vonvert
 *
 * Return: The integer representation of the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int length = 0;
	int i = 0;

	while (s[length] != '\0')
		length++;
	while (i < length)
	{
		if (s[i] == ' ')
			i++;
		else if (s[i] == '-' || s[i] == '+')
		{
			if (s[i] == '-')
				sign = -1 * sign;
			i++;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				break;
			i++;

		}
		else
			i++;
	}
	return (sign * result);
}
