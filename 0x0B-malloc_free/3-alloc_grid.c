#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers
 *
 * @width: width
 * @height: height
 * Return: pointer to te array
 */

int **alloc_grid(int width, int height)
{
int i, j;
int **grid;
if (width <= 0 || height <= 0)
{
return ('\0');
}
grid = malloc(height * sizeof(int *));
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
}
if (grid == NULL)
{
free(grid);
return ('\0');
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
