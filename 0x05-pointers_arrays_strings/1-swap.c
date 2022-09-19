#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: point value
 * @b: pointer value
 * Return: 0 Success
 */

void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
	return (0);
}
