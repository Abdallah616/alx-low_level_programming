#include "main.h"
/**
 * _strlen - find length of string
 *
 * @s: string to find length
 *
 * Return: length of string
*/
int _strlen(char *s)
{
	int size = 0;

	while (s[size] != '\0')
		size++;
	return (size);
}
/**
 * *argstostr - function that concatenates all the arguments of your program.
 *
 * @ac: num of arguments passed
 * @av: arguments passed
 *
 * Return: concatented arguments
*/
char *argstostr(int ac, char **av)
{
	int i, j, nc = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, nc++)
		nc += _strlen(av[i]);
	s = malloc(sizeof(char) * nc + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			s[k] = av[i][j];
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
