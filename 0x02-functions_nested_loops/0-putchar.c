#include "main.h"
/**
 * main - Prints a message followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int str[] = {69, 50, 110, 70, 99, 104, 97, 11};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
