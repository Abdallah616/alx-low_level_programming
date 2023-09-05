#include "main.h"
/**
 * countwords - count number of words in a string
 *
 * @str: string to count words in it
 *
 * Return: number of words
*/
int countwords(char *str)
{
	int wordCount = 0, isWord = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			isWord = 0;
		} else if (isWord == 0)
		{
			isWord = 1;
			wordCount++;
		}
	}
	return (wordCount);
}
/**
 * **strtow - function that splits a string into words.
 *
 * @str: string to split.
 *
 * Return: splitted string
*/
char **strtow(char *str)
{
	int i, j, k, l, n = 0, wc = 0;
	char **wo;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = countwords(str);
	if (n == 0)
		return (NULL);
	wo = (char **)malloc((n + 1) * sizeof(char *));
	if (wo == NULL)
		return (NULL);
	wo[n] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			wo[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (wo[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(wo[k]);
				free(wo[n]);
				free(wo);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				wo[wc][l] = str[i + l];
			wo[wc][l] = '\0';
			wc++;
			i += j;
		} else
			i++;
	}
	return (wo);
}
