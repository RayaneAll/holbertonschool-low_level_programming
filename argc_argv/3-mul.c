#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * mult - multiply numbers
 * @a : variable for the first number
 * @b : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;

	num1 = 0;
	num2 = 0;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}
