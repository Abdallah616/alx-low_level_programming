#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc
 *
 * @b: int
 *
 * Return: pointer to the allocated memory and if it fails exit(98)
*/
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == NULL)
		exit(98);
	return (m);
}
