#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a quote using the puts function
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (int n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
