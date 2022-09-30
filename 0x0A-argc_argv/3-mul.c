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
	result = *argv[1] * *argv[2];
	printf("%d\n", result);
	return (0);
}
