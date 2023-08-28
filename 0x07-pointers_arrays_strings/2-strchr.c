#include "main.h"
/**
 * *_strchr - fuction that locates a character on a string
 *
 * @s: pointer to put the consttant
 * @c: constant
 *
 * Return: pointer to s
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
