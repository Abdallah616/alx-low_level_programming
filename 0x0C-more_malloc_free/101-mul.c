#include "main.h"
/**
 * _puts - prints a string
 *
 * @str: string to be printed
 *
 * Return: Nothing
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}
/**
 * _atoi - convert a string to an integer.
 *
 * @s: input string
 *
 * Return: converted int from string
*/
int _atoi(const char *s)
{
	unsigned long int num = 0;
	int sign = 1;

	while (*s != '\0' && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	if (*s != '\0')
	{
		do {
			num = num * 10 + (*s - '0');
			s++;
		} while (*s >= '0' && *s <= '9');
	}
	return (num * sign);
}
/**
 * print_int - prints an integer
 *
 * @n: int
 *
 * Return: Nothing
*/
void print_int(unsigned long int n)
{
	unsigned long int div = 1, i, res;

	for (i = 0; n / div > 9; i++, div *= 10)
		;
	for (; div >= 1; n %= div, div /= 10)
	{
		res = n / div;
		_putchar('0' + res);
	}
}
/**
 * main - program that multiplies two positive numbers and
 *		print the result.
 *
 * @argc: num of arguments passed
 * @argv: list of arguments
 *
 * Return: 0
*/
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(atoi(argv[1]) * atoi(argv[2]));
	_putchar('\n');
	return (0);
}
