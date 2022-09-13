#include "main.h"

/**
 * print_sign - Prototype
 * @num: Integer parameter
 * Description: prints the sign of the given integer value
 * Return: Integer
 */

int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
