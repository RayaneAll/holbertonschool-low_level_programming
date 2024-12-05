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
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}
	res = create_file(av[1], av[2]);
	printf("-> %i)\n", res);
	return (0);
}
