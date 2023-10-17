#include "shell.h"
/**
 * sh_strdup - duplicates a string
 * @s: the string to duplicate
 *
 * Return: pointer to the duplicated string
 */
char *sh_strdup(const char *s)
{
	int len = 0;
	char *fin;

	if (s == NULL)
		return (NULL);
	while (*s++)
		len++;
	fin = malloc(sizeof(char) * (len + 1));
	if (!fin)
		return (NULL);
	for (len++; len--;)
		fin[len] = *--s;
	return (fin);
}

/**
 * sh_strcpy - copies a string
 * @dst: the destination
 * @sorc: the source
 *
 * Return: pointer to destination
 */
char *sh_strcpy(char *dst, char *sorc)
{
	int i = 0;

	if (dst == sorc || sorc == 0)
		return (dst);
	while (sorc[i] != '\0')
	{
		dst[i] = sorc[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

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

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
