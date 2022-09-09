#include <stdio.h>
#include <unistd.h>
/**
 * main - Application Entry point
 * Description: Print numbers
 * Return: 0
 */
int main(void)
{
	char x;
	char y = '0';

	while (y <= '9')
	{
		putchar(y);
		d++;
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
