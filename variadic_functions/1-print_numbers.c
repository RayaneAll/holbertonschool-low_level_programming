#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - multiply numbers
* @separator : variable for the first number
* @n : variable for the seconde number
*
* Descritpion : multiply variable a and variable b
* Return: return 0
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i > 0)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}
