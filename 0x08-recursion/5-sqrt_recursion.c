#include "main.h"
/**
 * sqr - fine sqrt of an int
 *
 * @n: int to find sqrt
 * @value: sqrt
 *
 * Return: sqrt
*/
int sqr(int n, int value)
{
	if (value * value == n)
		return (value);
	else if (value * value < n)
		return (sqr(n, value + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 *
 * @n: int to finf sqrt of it
 *
 * Return: sqrt of n
*/
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}
