#include "main.h"
/**
 * **alloc_grid - function that returns a pointer to a
 *			 2 dimensional array of integers.
 *
 * @width: num of columns
 * @height: num of rows
 *
 * Return: 2D array
*/
int **alloc_grid(int width, int height)
{
	int **tap, i, j;

	tap = malloc(sizeof(*tap) * height);

	if (width <= 0 || height <= 0 || tap == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height`; i++)
		{
			tap[i] = malloc(sizeof(**tap) * width);
				if (tap[i] == NULL)
				{
					while (i--)
						free(tap[i]);
					free(tap);
					return (NULL);
				}
			for (j = 0; j < width; j++)
				tap[i][j] = 0;
		}
	}
	return (tap);
}
