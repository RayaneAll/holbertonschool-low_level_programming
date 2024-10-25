#include "main.h"

/**
 * print_alphabet - imprime alphabet en minucscule, suivi d'un saut de ligne
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
