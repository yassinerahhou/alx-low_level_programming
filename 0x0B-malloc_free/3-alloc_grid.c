#include <stdlib.h>

/**
 * alloc_grid -  function that returns
 * @width: chat
 * @height: chat
 * Return: always 0
 */
int **alloc_grid(int width, int height)
{
int **grid;
int f, w;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);

for (f = 0; f < height; f++)
{
grid[f] = malloc(sizeof(int) * width);
if (grid[f] == NULL)
{
for (w = 0; w < f; w++)
{
free(grid[w]);
}
free(grid);
return (NULL);
}
for (w = 0; w < width; w++)
{
grid[f][w] = 0;
}
}

return (grid);
}
