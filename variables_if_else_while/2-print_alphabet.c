#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a quote using the puts function
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	i = 0;
	while(alphabet[i] != '\0')
	{
		putchar(alphabet[i]);
		i++;
	}
}
