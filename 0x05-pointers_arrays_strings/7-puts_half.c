#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: the input string
 *
 * Return: Nothing
*/
void puts_half(char *str)
{
	int i = 0, half, j;

	while (str[i])
		i++;
	half = i / 2;

	if (i % 2 == 1)
		half++;

	for (j = half; j < i; j++)
		_putchar(str[j]);

	_putchar('\n');
}
