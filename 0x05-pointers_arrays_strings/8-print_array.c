#include "main.h"
/**
 * print_array - prints n elements of an
 *		 array of integers, followed by a new line.
 *
 * @a: input string
 * @n: number of elements
 *
 * Return: Nothing
*/
void print_array(int *a, int n)
{
	int i = 0, j;

	while (a[i])
		i++;

	for (j = 0; j < n; j++)
	{
		_putchar(a[j]);
		if (i != (n - 1))
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
