#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: size of chatacter array
 * @c: initialised letter
 * Return: Pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	
	if (size == 0)
	{
		return (arr);
	}
	arr = malloc(size * sizeof(c));
	if (*arr == NULL)
	{
		return (arr);
	}
	arr[0] = c;
	return (arr);
}
