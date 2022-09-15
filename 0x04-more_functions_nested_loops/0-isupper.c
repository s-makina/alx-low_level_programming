#include "main.h"

/**
 * _isupper - prototype, checks if given character is upper case
 * @num: integer character
 * Description - Checks if given number is an upper case character
 * Return: 1 if true or 2 if false
 */
int _isupper(int num)
{
	if (num >= 65 && num <= 90)
	{
		return (1);
	}
	return (0);
}
