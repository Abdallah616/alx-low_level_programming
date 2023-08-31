#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: pointer to input string
 * @s2: pointer to input string
 *
 * Return: 0 if true other num if false
*/
int _strcmp(char *s1, char *s2)
{
	int cmp = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			cmp = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (cmp);
}
