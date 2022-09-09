#include <stdio.h>
#include <unistd.h>
/**
 * main - Application entry point
 * Description: print numbers
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9' ; x++)
	{
		putchar(x);

		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
