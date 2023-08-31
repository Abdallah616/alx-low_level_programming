#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytesfr @src
 *
 * Return: @dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int c, c1;

	c = 0;
	while (dest[c])
		c++;

	for (c1 = 0; c1 < n && src[c1] != '\0'; c1++)
		dest[c++] = src[c1];

	dest[c] =  '\0';

	return (dest);
}
