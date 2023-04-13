#include <stdlib.h>

/**
 * free_grid - unction that frees
 * @grid: char 1
 * @height: char 2
 * Return: always 0
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
