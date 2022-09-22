#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: First string to be concatenated.
 * @src: Second string to be concatenated.
 * @n: Number of bytes to be appended.
 * Return: A pointer to the resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
