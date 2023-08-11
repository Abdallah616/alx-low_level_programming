#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:A C Program that prints lowercase alphabets in revers
 *
 * Return: 0 (Success)
*/
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
