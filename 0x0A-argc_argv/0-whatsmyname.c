#include <stdio.h>
/**
 * main - Prints first argument
 * @argv: Comand line arguments
 * @argc: Size of arguments parsed
 * Return: 0, Success
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s", argv[0]);
	return (0);
}
