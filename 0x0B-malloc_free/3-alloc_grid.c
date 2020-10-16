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
int w, h;
int **grid;
if (width <= 0 || height <= 0)
{
return ('\0');
}
grid = malloc(height * sizeof(int *));
if (grid == '\0')
{
return ('\0');
}
for (h = 0; h < height; h++)
{
grid[h] = malloc(width * sizeof(int));
if (grid[h] == 0)
{
for (w = 0; w <= h; w++)
{
free(grid[w]);
}
free(grid);
}
}
if (grid == NULL)
{
return ('\0');
}
for (h = 0; h < height; h++)
{
for (w = 0; w < width; w++)
{
grid[h][w] = 0;
}
}
return (grid);
}
