#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: print reversed alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
