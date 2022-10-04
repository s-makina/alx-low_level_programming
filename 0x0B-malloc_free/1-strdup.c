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

	if (str == NULL)
	{
		return (NULL);
	}
	for (i=0; str[i] != '\0'; i++)
		;
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
	{
		return NULL;
	}
	while (n <= i)
	{
		ptr[n] = str[n];
		n++;
	}
	return (ptr);

}
