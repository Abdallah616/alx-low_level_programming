#include "main.h"
/**
 * rev_string - reverse a string
 *
 * @s: input pointer to the string to print
 *
 * Return: Nothing
 *
*/
void rev_string(char *s)
{
	int i = 0, j;
	char temp;
	while (s[i])
		i++;

	for (j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = temp;
	}
}
