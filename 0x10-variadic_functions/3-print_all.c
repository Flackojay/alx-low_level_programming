#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything based on a format string
 * @format: A string containing the format of the arguments.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *str;
	const char t_args[] = "cifs";

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (t_args[j])
		{
			if (format[i] == t_args[j])
			{
				switch (format[i])
				{
					case 'c':
						printf("%c", va_arg(args, int));
						break;
					case 'i':
						printf("%d", va_arg(args, int));
						break;
					case 'f':
						printf("%f", va_arg(args, double));
						break;
					case 's':
						str = va_arg(args, char *);
						if (str == NULL)
							str = "(nil)";
						printf("%s", str);
						break;
				}
				if (format[i + 1])
					printf(", ");
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
