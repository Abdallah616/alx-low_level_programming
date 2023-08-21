#include "main.h"
/**
 * rev_string - reverse a string
 *
 * @s: input pointer to the string to print
 *
 * Return: Nothing
 *
*/
void rev_string(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
}
