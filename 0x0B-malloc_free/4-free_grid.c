#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free the 2d array memory created
 * @grid: 2d array grid
 * @height: height
 * Return: void
 */

void free_grid(int **grid, int height)
{
int i = 0;

for (; i < height; i++)
{
	free(grid[i]);
}
free(grid);
}
