#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 *
 * @grid: grid to be freed
 * @height: height of the grid
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
