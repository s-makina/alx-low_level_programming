#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: Integer
 * Return: 0 always
 */

void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
