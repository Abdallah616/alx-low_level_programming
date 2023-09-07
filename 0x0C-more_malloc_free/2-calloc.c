#include "main.h"
/**
 * *_calloc - allocates memory for an array using malloc
 *
 * @nmemb: array length
 * @size: size of each element
 *
 * Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(size * nmemb);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		s[i] = 0;
	return (s);
}
