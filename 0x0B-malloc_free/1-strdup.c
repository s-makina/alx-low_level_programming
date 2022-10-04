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

	if (str == null)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(*str));
	while (i < sizeof(str) / sizeof(char))
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);

}