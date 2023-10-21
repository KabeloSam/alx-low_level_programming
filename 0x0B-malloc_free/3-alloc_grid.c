#include "main.h"
/**
 *alloc_grid- returns pointer of 2d arrays
 *@width: arg for grid
 *@height: arg for grid
 *Return: NULL on failure
 **/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid = NULL;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int) * width);
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0 ; j < i; j++)
			{
			free(grid[j]);
			free(grid);
			}
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
		grid[i][j] = 0;
		}

	}
	return (grid);

}
