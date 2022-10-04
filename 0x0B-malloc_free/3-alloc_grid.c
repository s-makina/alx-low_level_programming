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

	w = malloc(sizeof(int) * width);
	for (i = 0; i < width; i++)
	{
		h = malloc(sizeof(int) * height);
		for (n = 0; n < height; n++)
		{
			h[n] = 0;
		}
		w[i] = *h;
	}
	return (w);
}
