#include "main.h"

/**
 * more_numbers - bien
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void more_numbers(void)
{
	int i;
	int j;
	int tens;
	int ones;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			tens = j / 10;
			ones = j % 10;
			if (j > 9)
			{
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
