#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - multiply numbers
 * @format : variable for the first number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	int printed = 0;

	va_start(args, format);

	while (format && format[i] != '\0')
	{
		if (printed)
			printf(", ");

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
				printf("(nil)");
			else
				printf("%s", str);
			break;
		default:
			i++;
			continue;
		}
		printed = 1;
		i++;
	}

	printf("\n");
	va_end(args);
}
