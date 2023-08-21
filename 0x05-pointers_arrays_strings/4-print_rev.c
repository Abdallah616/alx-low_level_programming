#include "main.h"
/**
 * print_rev - prints a string in reversed order
 *
 * @s: string input to be printed
 *
 * Return: Nothing
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
