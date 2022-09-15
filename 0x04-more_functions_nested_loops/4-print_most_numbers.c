#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9
 * Return: void
 */

void print_most_numbers(void)
{
	char a = 0;

	while (a <= 9)
	{
		if (a != 4 && a != 2)
		{
			_putchar(a + '0');
		}
		a++;
	}
	_putchar('\n');
}
