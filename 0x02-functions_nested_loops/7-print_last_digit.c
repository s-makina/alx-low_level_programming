#include "main.h"

/**
 * print_last_digit - Prototype
 * @num: Integer parameter
 * Description: prints last digit of a number
 * Return: integer
 */

int print_last_digit(int num)
{
	int lastNum = num % 10;

	if (num < 0)
	{
		lastNum = lastNum * -1;
	}
	_putchar(lastNum + '0');
	return (lastNum);
}
