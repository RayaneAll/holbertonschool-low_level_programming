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
	char alphabetM[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	i = 0;
	while (alphabet[i] != '\0')
	{
		putchar(alphabet[i]);
		i++;
		while (alphabetM[i] != '\0')
		{
			putchar(alphabetM[i]);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
