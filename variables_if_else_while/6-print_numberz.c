#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a quote using the puts function
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int i;

	n = "0123456789";
	i = 0;
	while (n[i] != '\0')
	{
		putchar(n[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
