#include "main.h"
/**
 * *_strdup - function that returns a pointer to a newly allocated space
 *		in memory, which contains a copy of the string given as a parameter.
 *
 * @str: string
 *
 * Return: returns a pointer to the duplicated string on success
 *		and returns NULL if insufficient memory was available
*/
char *_strdup(char *str)
{
	char *s;
	int i, size = 0;

	if (str == 0)
		return (NULL);
	while (str[size] != '\0')
		size++;
	s = malloc(size * sizeof(*str) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			s[i] = str[i];
	}
	return (s);
}
