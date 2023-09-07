#include "main.h"
/**
 * *string_nconcat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: num of bytes to take from s2
 *
 * Return: pointer points to newly allocated space in memory
 *		contains concatenated string and return NULL if fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	unsigned int s1_len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	con = malloc(sizeof(char) * (s1_len + n + 1));
	if (con == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		con[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		con[i] = s2[j];
	con[i] = '\0';
	return (con);
}
