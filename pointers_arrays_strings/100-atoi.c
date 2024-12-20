#include "main.h"

/**
 * _atoi - multiply numbers
 * @s : variable for the first number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

int _atoi(char *s)
{
	int sign;
	unsigned int num;
	int started;

	sign = 1;
	num = 0;
	started = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign = sign * -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s - '0');
			started = 1;
		}
		else if (started)
		{
			break;
		}
		s++;
	}

	if (sign < 0)
	{
		return (-num);
	}
	return (num);
}
