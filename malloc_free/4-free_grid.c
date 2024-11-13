#include "main.h"
#include <stdlib.h>

/**
 * free_grid - multiply numbers
 * @grid : variable for the first number
 * @height : variable for the seconde number
 *
 * Descritpion : multiply variable a and variable b
 * Return: return 0
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
