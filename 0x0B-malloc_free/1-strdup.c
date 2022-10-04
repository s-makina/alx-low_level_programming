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
	unsigned int i, n = 0;
	int size;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	ptr = malloc(sizeof(str) * i);
	while (n < i)
	{
		ptr[n] = str[n];
		n++;
	}
	return (ptr);

}
