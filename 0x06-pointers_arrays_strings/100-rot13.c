#include "main.h"
/**
 * rot13 - replaces a letter with the 13th letter
 *		 after it in the latin alphabet.
 *
 * @s: input string
 *
 * Return: encoded string
*/
char *rot13(char *s)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *pt = s;

	while (*s)
	{
		for (i = 0; i < 52; i++)
		{
			if (*s == rot13[i])
			{	*s = ROT13[i];
				break;
			}
		}
		s++;
	}
	return (pt);
}
