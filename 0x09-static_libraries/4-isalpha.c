#include "main.h"
/**
 * _isalpha - checks if character is a letter
 *		both lowercase and uppercase
 *
 * @c: takes input from other functions
 *
 * Return: return 1 if c is a letter
 *		else return 0
*/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
