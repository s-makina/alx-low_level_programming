#include "main.h"

/**
 * _isalpha - Prototype
 * @num: interger parameter
 * Description: checks if given number is an alphabetic character
 * Return: Integer
 */

int _isalpha(int num)
{
	if (num >= 'a' && num <= 'z')
	{
		return (1);
	}
	else if (num >= 'A' && num <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
