#include "main.h"

/**
 * print_numbers - Print numbers from 0 to 9
 * Return: 0 (Success)
 */

void print_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
