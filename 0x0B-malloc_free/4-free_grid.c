#include "main.h"
/**
 * free_grid - function that frees a 2 dimensional grid previously
 *		created by your alloc_grid function.
 *
 * @grid: grid of nums
 * @height: num of rows
 *
 * Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < heigth; i++)
		free(grid[i]);
	free(grid);
}
