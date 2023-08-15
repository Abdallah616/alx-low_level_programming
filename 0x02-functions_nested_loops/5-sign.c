#include "main.h"
/**
 * print_sign - prints + if number is greater than 0
 *		0 if it's equal to 0
 *		- if less than 0
 * @n: takes integer from other functions
 *
 * Return: 1 if + 0 if 0 -1 if -
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		-putchar(45);
		return (-1);
	}
}
