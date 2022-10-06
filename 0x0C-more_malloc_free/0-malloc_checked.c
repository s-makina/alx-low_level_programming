#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: Assigned memory
 * Return: Pointer to the allocated space
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(b));
	if (ptr == NULL)
	{
		return exit(98);
	}
	return (ptr);
}
