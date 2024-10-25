#include "main.h"

/**
 * print_alphabet_x10 - force betty
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 0; i < 11; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
	}
}
