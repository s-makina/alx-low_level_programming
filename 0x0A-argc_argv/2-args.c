#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: Argument size
 * @argv: Arguments parsed to the main function
 * Return: 0 Success
 */

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 0)
	{
		return (0);
	}

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
