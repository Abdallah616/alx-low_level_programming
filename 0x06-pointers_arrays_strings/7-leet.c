#include "main.h"
/**
 * leet - encodes a string into 1337.
 *
 * @s: input string
 *
 * Return: pointer to encoded string
*/
char *leet(char *s)
{
	int j;
	int key_num[] = {4, 3, 0, 7, 1};
	char key_char[] = {'A', 'E', 'O', 'T', 'L'};
	char *ch = s;

	while (*s)
	{
		for (j = 0; j < 5; j++)
		{
			if (*s == key_char[j] || *s  == key_char[j] + 32)
				*s = key_num[j] + 48;
		}
		s++;
	}
	return (ch);
}
