#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a loop to make a grid
 * @width: of the grid
 * @height: of the grid
 * Return: a pointer to a 2d array
 */

int **alloc_grid(int width, int height)
{
int **grid;
int a, b;
a = b = 0;

if (height <= 0 || width <= 0)
return (NULL);

grid = malloc(sizeof(int *) * height);

if (grid == NULL)
return (NULL);

for (; a < height; a++)
{
grid[a] = malloc(sizeof(int) * width);
if (grid[a] == NULL)
{
for (; a >= 0; a--)
free(grid[a]);

free(grid);
return (NULL);
}
}

for (; a < height; a++)
{
for (; b < width; b++)
grid[a][b] = 0;
}

return (grid);
}
