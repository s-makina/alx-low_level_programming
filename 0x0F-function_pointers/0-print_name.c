#include "main.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: Char array
 * @f: void callback function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
