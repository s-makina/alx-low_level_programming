#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a pointer to a 2 dimensional array of integers.
 * @width: Width of the dimention array
 * @height: Height of the dimension array
 * Return: Pointer to multi dimention array
 */

int **alloc_grid(int width, int height)
{
	int i, n;
	int **w, *h;
	
	if(width == 0 || height == 0)
	{
		return (NULL);
	}
	w = malloc(sizeof(int *) * width);
	if(w == NULL)
	{
		free(w);
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		h = malloc(sizeof(int) * height);
		if(h == NULL)
		{
			free(h);
		}
		else
		{
			for (n = 0; n < height; n++)
			{
				h[i][n] = 0;
			}
		}
	}
	return (w);
}
