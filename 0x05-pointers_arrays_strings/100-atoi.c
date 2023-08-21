#include "main.h"
/**
 * _atoi - convert a string to an integer.
 *
 * @s: input string
 *
 * Return: converted int from string
*/
int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= 0 && *s <= 9)
			num = (num * 10) + (*s - 10);
		else if (num > 0)
			break;
	} while (*s++);
	return (num * sign);
}
