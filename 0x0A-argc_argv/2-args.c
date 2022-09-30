#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: Argument size
 * @argv: Arguments parsed to the main function
 * Return: 0 Success
 */

int main(int argc, char **argv)
{
	int size = argc - 1;

	if(size <= 0)
	{
		return (0);
	}
	
	while (size--)
	{
		printf("%d\n", *argv[size]);
	}
	return (0);
}
