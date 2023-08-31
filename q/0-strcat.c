#include "main.h"
/**
 * _strcat - concatenate two strings
 *
 * @dest: input string
 * @src: input string
 *
 * Return: pointer to resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int c, c1;

	c = 0;
	while (dest[c])
		c++;

	for (c1 = 0; src[c1]; c1++)
		dest[c++] = src[c1];

	return (dest);
}
