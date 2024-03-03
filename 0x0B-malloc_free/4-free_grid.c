# include <stdio.h>
# include <stdlib.h>
# include "main.h"

/**
 * free_grid - A function that frees a 2D array of previously
 * created by te malloc function
 * @grid: An input 2D array of integers to free
 * @height: height of grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}

