#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: First String
 * @s2: Second String
 * @n: Number arguments for the second string
 * Return: Pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, k, g, s1size, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1size = 0; s1[s1size] != '\0'; s1size++)
		;
	for (g = 0; s2[g] != '\0'; g++)
		;
	if (g >= n)
		size = g;
	else
		size = n;
	ptr = malloc(s1size + size + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (k = 0; k < n; k++, i++)
	{
		ptr[i] = s2[k];
	}
	ptr[i] = '\0';
	return (ptr);
}
