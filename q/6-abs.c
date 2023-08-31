#include "main.h"
/**
 * _abs - computes absolute value of a number
 *
 * @n: takes integer from other functions
 *
 * Return: Always 0 (Success)
*/
int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
