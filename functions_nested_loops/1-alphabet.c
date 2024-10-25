#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Prints a quote using the puts function
 * Return: Always 0 (Success)
 */

void alphabet(void)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	i = 0;
	while (alph[i] != '\0')
	{
		_putchar(alph[i]);
		i++;
	}
	_putchar('\n');
}
