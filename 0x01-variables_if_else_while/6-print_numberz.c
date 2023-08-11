#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C Program that prints  0-9 with putchar
 *	while not using any char variable
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
