#include "main.h"
/**
 * free_grid - free alloc_grid
 * @grid: the array
 * @height: the height
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height <= 0)
		return;
	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
