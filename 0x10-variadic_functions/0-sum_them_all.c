#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all parameters.
 * @n: size of argments
 * Return: Sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, value, i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		sum = sum + (value);

	}

	va_end(args);
	return (sum);
}
