#include "main.h"
/**
 * array_range - creates an array of integers
 *
 * @min: starting int
 * @max: max int
 *
 * Return: array of integers
*/
int *array_range(int min, int max)
{
	int *p, len, i;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	p = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		p[i] = min++;
	return (p);
}
