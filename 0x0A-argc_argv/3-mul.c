#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: arguments size
 * @argv: arguments passed
 * Return: 0 Success
 */

int main(int argc, char **argv)
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = *argv[argc - 2] * *argv[argc - 3];
	printf("%d", result);
	return (0);
}
