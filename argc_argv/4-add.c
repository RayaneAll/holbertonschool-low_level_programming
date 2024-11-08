#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

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
	int sum;
	int i;
	int j;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
