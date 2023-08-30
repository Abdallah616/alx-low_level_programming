#include "main.h"
/**
 * last_index - returns the last index of a string
 *
 * @s: pointer to string
 *
 * Return: last index of s
*/
int last_index(char *s)
{
	int n = 0;

	if (*s != '\0')
		n += last_index(s + 1) + 1;
	return (n);
}
/**
 * check - checks if string is palindrome
 *
 * @s: pointer to string
 * @start: first index of s
 * @end: last index of s
 *
 * Return: 1 if a string is a palindrome and 0 if not.
*/
int check(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check(s, start + 1, end - 1));
}
/**
 * is_palindrome -  function that returns 1 if a string
 *			 is a palindrome and 0 if not.
 *
 * @s: pointer to string
 *
 * Return: 1 if a string is a palindrome and 0 if not.
*/
int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1));
}
