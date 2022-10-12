#include "function_pointers"

/**
 * int_index - searches for an integer
 * @array: Array of integers to be searched
 * @size: Size of the array
 * @cmp: pointer function
 * Return: index of found element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
