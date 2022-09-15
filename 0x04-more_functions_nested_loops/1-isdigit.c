#include "main.h"

/**
 * _isdigit - checks for a digit between 0 through 9
 * @c: integer value
 * description - checks a digit between 0 to 9
 * Return: if true 1 and 0 if false
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
