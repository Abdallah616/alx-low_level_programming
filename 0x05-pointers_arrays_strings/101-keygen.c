#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: generates random passworm for 101-crackme
 *
 * Return: 0
*/
int main(void)
{
	int i;
	char c;

	/* Set the seed for the random number generator.*/
	srand(time(NULL))

	for (i = 0; i < 16; i++)
	{
		c = rand();
		putchar(c);
	}

	return (0);
}

