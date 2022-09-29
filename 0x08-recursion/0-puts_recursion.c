/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: Char array to print
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	int size = sizeof(s);

	for (int i = 0; i < size; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
