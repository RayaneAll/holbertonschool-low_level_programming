#include "main.h"

/**
 * print_alphabet - imprime alphabet en minucscule, suivi d'un saut de ligne
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
