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
	int sum;
	char c;

	/* Set the seed for the random number generator.*/
	srand(time(NULL));
	sum = 0;
	while (sum <= 1538)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	purchar(1675 - sum);

	return (0);
}

