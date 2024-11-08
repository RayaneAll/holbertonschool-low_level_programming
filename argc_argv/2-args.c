#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply numbers
 * @argc : variable for the first number
 * @argv : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	exit(EXIT_SUCCESS);
}
