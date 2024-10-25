#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Prints a quote using the print_alphabet function
 * Return: Always 0 (Success)
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
