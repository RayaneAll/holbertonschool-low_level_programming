#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a quote using the puts function
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i;

	i = 0;
	while (tab[i] != '\0')
	{
		putchar(tab[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
