#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a quote using the puts function
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("sizeof(char) = %lu\n", sizeof(char));
	printf("sizeof(int) = %lu\n", sizeof(int));
	printf("sizeof(long int) = %lu\n", sizeof(long int));
	printf("sizeof(long long int) = %lu\n", sizeof(long long int));
	printf("sizeof(float) = %lu\n", sizeof(float));
	return (0);
}
