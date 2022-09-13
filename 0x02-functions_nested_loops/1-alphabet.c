#include "main.h"

/**
 * print_alphabet - Prototype
 * Description: prints alphabet in lower cases
 * Return: nothing
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
