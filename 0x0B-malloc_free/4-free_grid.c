#include "main.h"
#include <stdio.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * by your alloc_grid function
 * @grid: 2 dimention greed
 * @height: height of the greed
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (height > 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
	}
	return (0);
}
