#include "main.h"
/**
 * is_prime - checks if n can be divided by any number
 *			less than n
 *
 * @n: int to be checked
 * @div: divisor to n
 *
 * Return: int
*/
int is_prime(int n, int div)
{
	if (n <= 2)
		return ((n == 2) ? 1 : 0);
	else if (div == 1)
		return (1);
	else if (n % div == 0)
		return (0);
	return (is_prime(n, div - 1));
}
/**
 * is_prime_number - checks if n is a prime number
 *
 * @n: int to be checked
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
*/
int is_prime_number(int n)
{
	int div = n / 2;

	return (is_prime(n, div));
}
