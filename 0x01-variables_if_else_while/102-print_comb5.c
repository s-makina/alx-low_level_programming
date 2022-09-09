#include <stdio.h>
#include <unistd.h>
/**
 * main - Application entry point
 * Description: prints all possible combinations
 * Return: 0
 */
int main(void)
{
	int x, y, z, g;

	for (x = 48; x <= 57; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			for (z = 48; z <= 57; z++)
			{
				for (g = 48; g <= 57; g++)
				{
				if (((z + g) > (x + y) &&  z >= x) || x < g)
				{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(z);
					putchar(g);

					if (x + y + z + g == 227 && x == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
