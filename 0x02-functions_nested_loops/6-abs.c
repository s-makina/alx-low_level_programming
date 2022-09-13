#include "main.h"

/**
 * _abs - Prototype
 * @num: Interger parameter
 * Description: Computes an absolute value of an interger
 * Return: int
 */

int _abs(int num)
{
	if (num > 0)
	{
		return (num);
	}
	else if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
