#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees 2 grid.
 *
 * @grid: grid to be freed
 * @height: positive int
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
