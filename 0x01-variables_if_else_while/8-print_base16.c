#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C Program that prints all numbers of base 16
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int hex = 48;

	while (hex <= 102)
	{
		putchar(hex);
		if (hex == 57)
			hex = 96;
		hex++;
	}
	putchar('\n');

	return (0);
}
