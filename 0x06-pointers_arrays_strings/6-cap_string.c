#include "main.h"
#include <stdio.h>
/**
 * isLower - determine if character is lowercase
 *
 * @c: character
 *
 * Return: (num of char in ascii) if true and 0 if false
*/
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}
/**
 * isdelimiter - determine if charcter is a delimiter
 *
 * @c: character
 *
 * Return: 1 if true 0 if false
*/
int isdelimiter(char c)
{
	int i;
	char deli[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (c == deli[i])
			return (1);
	}
	return (0);
}
/**
 * cap_string - capitalizes all words of a string.
 *
 * @s: input string
 *
 * Return: @s
*/
char *cap_string(char *s)
{
	int foundDelimiter = 1;
	char *ptr = s;

	while (*s)
	{
		if (isdelimiter(*s))
			foundDelimiter = 1;
		else if (isLower(*s) && foundDelimiter)
		{
			*s -= 32;
			foundDelimiter = 0;
		} else
			foundDelimiter = 0;
		s++;
	}
	return (ptr);
}
