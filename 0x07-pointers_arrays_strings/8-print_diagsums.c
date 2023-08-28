#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the
 *			 two diagonals of a square matrix of integers.
 *
 * @a: 2-dimensional array int type
 * @size: size of array
*/
void print_diagsums(int *a, int size)
{
	int sum = 0, sum1 = 0, i;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		sum1 += a[size - 1 - i];
		a += size;
	}
	printf("%d, ", sum);
	printf("%d\n", sum1);
}
