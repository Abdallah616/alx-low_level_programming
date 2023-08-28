#include "main.h"
/**
 * *_strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: the string to be scanned
 * @accept: the string containing the characters to match.
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 *			 or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	int itr, itr1;
	char *p;

	for (itr = 0; s[itr] != '\0'; itr++)
	{
		for (itr1 = 0; accept[itr1] != '\0'; itr1++)
		{
			if (accept[itr1] == s[itr])
			{
				p = &s[itr];
				return (p);
			}
		}
	}
	return (0);
}
