#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * description: prints size of arguments
 * @argv: Arguments passed to the fuction
 * @argc: size of arguments passed
 * Return: 0 Success
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
