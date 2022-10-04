#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: String value]
 * Return: NULL if str = NULL otherwise a point
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i = 0;
	size_t n;

	if (str == NULL)
	{
		return (NULL);
	}
	n = sizeof(str) / str[0];
	ptr = malloc(sizeof(*str) * n);
	while (i < n)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);

}
