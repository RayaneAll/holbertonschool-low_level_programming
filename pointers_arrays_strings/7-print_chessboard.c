#include "main.h"

/**
 * mult - multiply numbers
 * @a : variable for the first number
 * @b : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
