#include "main.h"
/**
 * print_last_digit - prints the last digit of num and return it's value
 *
 * @n: takes numer input
 *
 * Return: lastdigit
*/
int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		lastdigit = -1 * (n % 10);
	else
		lastdigit = n % 10;

	_putchar(lastdigit + '0');
	return (lastdigit);
}
