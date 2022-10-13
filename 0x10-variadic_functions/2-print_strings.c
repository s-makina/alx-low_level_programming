#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * Return: void/nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator && i < n - 1)
			printf("%s", separator);
		else if (separator == NULL)
			printf("(nil)");
	}
	printf("\n");
	va_end(args);
}
