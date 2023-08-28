#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: input string
 * @accept: set of chracters to check from
 *
 * Return: length of a prefix
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0' && accept[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[i] == '\0')
				return (i);
		}
	}
	return (i);
}
