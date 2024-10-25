#include "main.h"

/**
 * print_alphabet_x10 - force betty
 */

void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	for (i = 0; i < 11; i++)
	{
		while (alphabet[j] != '\0')
		{
			_putchar(alphabet[i]);
			j++;
		}
		i++;
	}
}
