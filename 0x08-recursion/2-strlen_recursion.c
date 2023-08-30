#include "main.h"
/**
 * _strlen_recursion - function that returns length of a string
 *
 * @s: input string to get length
 *
 * Return: Nothing
*/
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count += _strlen_recursion(s + 1) + 1;
	}
	return (count);
}
