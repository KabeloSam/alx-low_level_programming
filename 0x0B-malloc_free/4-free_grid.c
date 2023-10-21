#include "main.h"
/**
 *free_grid- frees grid of integers
 *@grid: 2dimensional array argument
 *@height: height of 2d array argument
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);

	}
	free(grid);

}
