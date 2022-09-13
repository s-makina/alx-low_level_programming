#include "main.h"

/**
 * _islower - Prototype
 * Description: checks characters for lowercase
 * @ch: character parameter
 * Return: Integer.
 */
int _islower(int ch)
{
int i = 'a';

for (i = 'a'; i <= 'z'; i++)
{
if (ch == i)
{
return (1);
}
}
return (0);
}
