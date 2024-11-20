#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - multiply numbers
* @separator : variable for the first number
* @n : variable for the seconde number
*
* Descritpion : multiply variable a and variable b
* Return: return 0
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}
