#include <stdio.h>
#include "main.h"
/**
 * more_numbers - This function that prints the numbers, from 0 to 14 ten times
 *
 * Descritpion : This function that prints the numbers 0 to 14 ten times
 * Return: return 0
 */
void more_numbers(void)
{
int i, j, tens, ones;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
tens = j / 10;
ones = j % 10;
if (j > 9)
_putchar(tens + '0');
_putchar(ones + '0');
}
_putchar('\n');
}
}
