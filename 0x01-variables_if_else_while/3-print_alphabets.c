#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C Program that prints the alphabet in lowercase and uppercase
 *
 * Return: 0 (Success)
*/
int main(void)
{
	char ch = 'a', CH = 'A';

	/*Prints in lowercase*/
	while (ch < 'z')
	{
		putchar(ch);
		ch++;
	}

	/*print in uppercase*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
