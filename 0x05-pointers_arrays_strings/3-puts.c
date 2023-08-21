#include "main.h"
/**
 * _puts - prints a string followed by new line
 *
 * @str: input parameter to print
 *
 * Return: Nothing
*/
void _puts(char *str)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
