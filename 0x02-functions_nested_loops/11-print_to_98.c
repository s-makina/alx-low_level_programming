#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prototype
 * @num: interger parameter
 * Description: prints all natural numbers from n to 98, followed by a new line
 * Return: void
 */
void print_to_98(int num)
{
	if (num < 98)
	{
		while (num < 98)
		{
			printf("%d, ", num);
			n++;
		}
	}
	else if (num > 98)
	{
		while (num > 98)
		{
			printf("%d, ", num);
			num--;
		}
	}
	printf("98\n");
}
