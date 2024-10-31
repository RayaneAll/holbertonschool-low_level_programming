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
	int resultat;
	int i;
	int positif;

	resultat = 0;
	i = 0;
	positif = 1;
	while (s[i] && (s[i] < '0' || s[i] > '9') && s[i] != '+' && s[i] != '-')
	{
		i++;
	}
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
		{
			positif = positif * -1;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		resultat = (resultat * 10) + (s[i] - '0');
		i++;
	}
	resultat = resultat * positif;
	return (resultat);
}
