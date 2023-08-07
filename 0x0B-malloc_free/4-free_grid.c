#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - to frees 2d array
 * @grid: the 2d grid
 * @height: the height dimension of grid
 * Description: to frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
