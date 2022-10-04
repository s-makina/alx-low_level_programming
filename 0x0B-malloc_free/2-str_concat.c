#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: First string
 * @s2: Second string
 * Return: Pointer or null
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, n, j;
	unsigned int size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (n = 0; s2[n] != '\0'; n++)
		;
	size = n + i + 1;
	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (j < size)
	{
		if (j < i)
		{
			ptr[j] = s1[j];
		}
		else
		{
			n++;
			ptr[j] = s2[j + n];
		}
		ptr[j] = s1[j];
		j++;
	}
	return (ptr);
}
