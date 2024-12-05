#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiply numbers
 * @ac : variable for the first number
 * @av : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */
int main(int ac, char **av)
{
	ssize_t n;

	if (ac != 2)
	{
		dprintf(2, "Usage: %s filename\n", av[0]);
		exit(1);
	}
	n = read_textfile(av[1], 114);
	printf("\n(printed chars: %li)\n", n);
	n = read_textfile(av[1], 1024);
	printf("\n(printed chars: %li)\n", n);
	return (0);
}
